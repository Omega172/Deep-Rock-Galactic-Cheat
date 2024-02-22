#include "pch.h"

#define DO_THREAD_SLEEP 1
#define THREAD_SLEEP_TIME 100

namespace Cheat
{
	bool Init()
	{
		if (MH_Initialize() != MH_STATUS::MH_OK)
			return false;

		if (!wndproc.get()->Setup())
			return false;

		if (!renderer.get()->Setup())
			return false;

	#if FRAMEWORK_UNREAL // If the framework is Unreal initalize the SDK assuming the SDK was generated with CheatGeat by Cormm
		if (!CG::InitSdk())
			return false;

		if (!(*CG::UWorld::GWorld))
			Utils::LogError(Utils::GetLocation(CurrentLoc), "Waiting for GWorld to initalize");

		while (!(*CG::UWorld::GWorld))
			continue;
	#endif

		Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Initalizing Globals, this can take a bit"); // Log that the globals are being initalized

	#if FRAMEWORK_UNREAL // If using the Unreal framework print the pointer to the Unreal class to make sure it was initalized
		Utils::LogDebug(Utils::GetLocation(CurrentLoc), (std::stringstream() << "Unreal: 0x" << unreal.get()).str());
	#endif

		// Add other globals that need to be initalized here

		Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Globals Initalized"); // Log that the globals have been initalized

		localization = std::make_unique<Localization>();
		if (!localization->IsInitialized())
			return false;

		// https://stackoverflow.com/questions/16711697/is-there-any-use-for-unique-ptr-with-array
		// Features
		//Features.push_back(std::make_unique<ExampleFeature>());
		Features.push_back(std::make_unique<Fullbright>());
		Features.push_back(std::make_unique<PlayerModifications>());
		Features.push_back(std::make_unique<WeaponModifications>());
		Features.push_back(std::make_unique<Aimbot>());
		Features.push_back(std::make_unique<ESP>());

		try {
			for (size_t i = 0; i < Features.size(); i++) // A loop to grap the feature pointers and call their respective setup functions
			{
				bool bResult = Features[i]->Setup();
				if (!bResult)
				{
					Utils::LogError(Utils::GetLocation(CurrentLoc), "Failed to setup feature: " + std::to_string(i));
					return false;
				}
			}
		} catch (char* e) {
			Utils::LogDebug(Utils::GetLocation(CurrentLoc), std::string(e));
		}

		config = std::make_unique<Config>(); // Initalize the config class

		//Unreal::HookPostRender();

		return true; // Return true if the initalization was successful
	}

	void HandleKeys() // A function to handle the keys of both the menu and the features
	{
		if (GetAsyncKeyState(dwMenuKey) & 0x1)
		{
			GUI::bMenuOpen = !GUI::bMenuOpen;

			ImGui::GetIO().MouseDrawCursor = GUI::bMenuOpen;

			if (ImGui::GetIO().MouseDrawCursor)
				SetCursor(NULL);
		}

		if (GetAsyncKeyState(dwConsoleKey) & 0x1)
			console->ToggleVisibility();

		if (GetAsyncKeyState(dwUnloadKey1) || GetAsyncKeyState(dwUnloadKey2))
			bShouldRun = false;

		for (size_t i = 0; i < Features.size(); i++)
		{
			Features[i]->HandleKeys(); // Call the handle keys function for each feature
			// This is mostly outdated but is still useful for some things, using the ImGui::Hotkey function is better which is located in GUI/Custom.h
		}
	}

	DWORD __stdcall CheatThread(LPVOID lpParam)
	{
		hModule = reinterpret_cast<HMODULE>(lpParam); // Store the module handle which is used for unloading the module

#ifdef _DEBUG
		console->SetVisibility(true); // Set the console to be visible if the framework is in debug mode
#endif

		if (!Init())
		{
			// If the initalization failed log an error and set the boolean to false to stop the cheat from running
			Utils::LogError(Utils::GetLocation(CurrentLoc), Cheat::Title + ": Failed to initalize");
			bShouldRun = false;
		}
		else // If the initalization was successful log that the cheat was initalized
			Utils::LogDebug(Utils::GetLocation(CurrentLoc), Cheat::Title + ": Initalized");

		while (bShouldRun) // the main process loop used to asynchonously run the features and handle the keys independently from the game
		{
			HandleKeys();

#if FRAMEWORK_UNREAL
			Cheat::unreal.get()->RefreshActorList();
#endif

			for (size_t i = 0; i < Features.size(); i++)
			{
				Features[i]->Run();
			}

// If the thread sleep is enabled sleep for the specified amount of time
// This is used to reduce the CPU usage of the module, I would recommend keeping this enabled but added the option to disable it if needed for testing and when messing with less CPU intensive games
#if DO_THREAD_SLEEP
			std::this_thread::sleep_for(std::chrono::milliseconds(THREAD_SLEEP_TIME));
#endif
		}

		console->SetVisibility(true); // Set the console to be visible when the cheat is unloading
		Utils::LogDebug(Utils::GetLocation(CurrentLoc), Cheat::Title + ": Unloading..."); // Log that the cheat is unloading


		renderer.get()->Destroy();
		wndproc.get()->Destroy();

		MH_Uninitialize();


		// Destroy features
		for (size_t i = 0; i < Features.size(); i++) // A loop to grab the feature pointers and call their respective destroy functions to clean up any resources that were used and restore any settings that were changed
		{
			Features[i]->Destroy();
		}

		//Unreal::RestorePostRender();

		std::this_thread::sleep_for(std::chrono::seconds(3)); // Sleep for 3 seconds to make sure the console is destroyed and that the hooks are released before unloading the module

		console->Destroy(); // Destroy/Free the console because if we don't the console window will stay open after the cheat is unloaded and can also cause a crash in rare cases

		FreeLibraryAndExitThread(hModule, EXIT_SUCCESS); // Unload the module and exit the thread
		return TRUE; // Return true not sure if this is needed at all TBH but it's here
	}
}

// Simple and barebones DllMain to initalize the main thread
// Really the only thing that should be in DllMain is the thread creation
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule); // Disable unwanted and unneeded thread calls

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	HANDLE hThread = CreateThread(nullptr, NULL, Cheat::CheatThread, hModule, NULL, &Cheat::dwThreadID);
	if (hThread)
		CloseHandle(hThread);

	return TRUE;
}
