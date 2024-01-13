#pragma once
#include "Feature.h"
#include <chrono>

class InfiniteAmmo : Feature
{
private:
	bool Initalized = false;

public:
	bool bInfiniteAmmo = false;
	bool bNoRecoil = false;

private:
	bool bOnce = false;
	int msDelayTime = 1000;
	long long msLastTime = std::chrono::milliseconds(500).count();

public:
	InfiniteAmmo() {};

	// Handle setup, like hook creation and variable initalization
	bool Setup() override
	{
		Initalized = true;

		return Initalized;
	};

	// Handle clean up, like restoring hooked functions 
	void Destroy() override
	{
		bInfiniteAmmo = false;

		Run();

		Initalized = false;
	}

	// Handle checking for any key/hotkey presses or holds needed for features
	void HandleKeys() override {}

	// This should be run in the ImGUI draw loop, used to draw anything to the menu
	void DrawMenuItems() override
	{
		//if (ImGui::Button("Restore Ammo"))
			//bInfiniteAmmo = true;

		//ImGui::SliderInt("Delay Time", &msDelayTime, 500, 10000);
		ImGui::Checkbox("Infinite Ammo", &bInfiniteAmmo);
		ImGui::Checkbox("No Recoil", &bNoRecoil);
	}

	// This should be run at the top of the ImGUI draw loop, used to render things like ESP, Tracers, and Debug Info
	void Render(void** args, size_t numArgs) override {}

	// This should be run in the feature loop, used to run any acutal feature code like setting a value for godmode
	void Run() override;
};