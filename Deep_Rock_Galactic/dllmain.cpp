#include "pch.h"

#include "Kiero/kiero.h"
#include "Hooks/D3D11/D3D11Hooks.h"

#include <chrono>
#include <thread>
#include <locale>
#include <codecvt>
#include <fstream>
#include <shlobj.h>

bool Init()
{
	// Setup ImGUI
	if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
	{
		if (kiero::bind(8, (void**)&oPresent, hkPresent) != kiero::Status::Success)
			return false;
	}

	bool SDK = CG::InitSdk();
	if (!SDK)
		return false;

	if (!(*CG::UWorld::GWorld))
		std::cout << "Waiting for GWorld to initalize\n";

	while (!(*CG::UWorld::GWorld))
		continue;

	// Logging Initalizing Main Globals
	std::cout << "Initalizing Globals\n";

	auto pUnreal = unreal.get();

	std::cout << "Globals Initalized\n";

	fullbright.get()->Setup();
	godMode.get()->Setup();
	infiniteAmmo.get()->Setup();
	superPickaxe.get()->Setup();

	return true;
}

DWORD WINAPI MainThread(LPVOID lpParam)
{
	con = &Console::Instance(true);
	if (con != nullptr)
		std::cout << "Console Allocated\n";
	
	if (Init())
		std::cout << "DRG SDK: Initalized\n";
	else
	{
		std::cout << "DRG SDK: Failed to Initalize SDK\n";
		bShouldRun = false;
	}

	while (bShouldRun)
	{
		auto pUnreal = unreal.get();

		/*
		if (pUnreal->OakCharacterMovement)
		{
			void* movementArgs[1] = { pUnreal->OakCharacterMovement };
			speedHack.get()->Run(movementArgs, 1);

			flyHack.get()->Run(movementArgs, 1);
		}
		*/

		fullbright.get()->Run();
		godMode.get()->Run();
		infiniteAmmo.get()->Run();
		superPickaxe.get()->Run();

		/*
		if (pUnreal->BL3Player && pUnreal->RecoilControlComponent)
		{
			void* weaponStuffArgs[2] = { pUnreal->RecoilControlComponent, pUnreal->BL3Player->GetActiveWeapon(NULL) };
			weaponStuff.get()->Run(weaponStuffArgs, 2);

			pUnreal->BL3Player->bCanUseWeaponWhileSprinting = true;
		}
		*/

		if (GetAsyncKeyState(UnloadKey) & 0x1)
			bShouldRun = false;

		if (GetAsyncKeyState(MenuKey) & 0x1)
		{
			GUI::bMenuOpen = !GUI::bMenuOpen;

			ImGui::GetIO().MouseDrawCursor = GUI::bMenuOpen;

			if (ImGui::GetIO().MouseDrawCursor)
				SetCursor(NULL);
		}
	}

	if (con && con->IsAllocated())
		con->SetVisibility(true);

	std::cout << "DRG SDK: Unloading...\n";

	fullbright.get()->Destroy();
	godMode.get()->Destroy();
	infiniteAmmo.get()->Destroy();
	superPickaxe.get()->Destroy();

	std::this_thread::sleep_for(std::chrono::seconds(3));
	FreeLibraryAndExitThread((HMODULE)lpParam, EXIT_SUCCESS);
	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall == DLL_PROCESS_ATTACH)
	{
		CreateThread(nullptr, NULL, MainThread, hModule, NULL, nullptr);
	}

	if (ulReasonForCall == DLL_PROCESS_DETACH)
	{
		if (con && con->IsAllocated())
			con->Free();
	}

	return TRUE;
}
