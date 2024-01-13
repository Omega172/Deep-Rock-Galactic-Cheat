#pragma once
#include "Feature.h"

class SuperPickaxe : Feature
{
private:
	bool Initalized = false;

public:
	bool bSuperPickaxe = false;
	float fDigSize = 1337.f;
	int iHitsNeeded = 1;

private:
	bool bOnce = false;

public:
	SuperPickaxe() {};

	// Handle setup, like hook creation and variable initalization
	bool Setup() override
	{
		Initalized = true;

		return Initalized;
	};

	// Handle clean up, like restoring hooked functions 
	void Destroy() override
	{
		bSuperPickaxe = false;

		Run();

		Initalized = false;
	}

	// Handle checking for any key/hotkey presses or holds needed for features
	void HandleKeys() override {}

	// This should be run in the ImGUI draw loop, used to draw anything to the menu
	void DrawMenuItems() override
	{
		ImGui::Checkbox("Super Pickaxe", &bSuperPickaxe);
		if (bSuperPickaxe)
		{
			ImGui::SliderFloat("Dig Size", &fDigSize, 1.f, 10000.f);
			ImGui::SliderInt("Hits Needed", &iHitsNeeded, 1, 5);
		}
	}

	// This should be run at the top of the ImGUI draw loop, used to render things like ESP, Tracers, and Debug Info
	void Render(void** args, size_t numArgs) override {}

	// This should be run in the feature loop, used to run any acutal feature code like setting a value for godmode
	void Run() override;
};