#pragma once
#include "pch.h"

class WeaponModifications : public Feature
{
private:
	bool Initialized = false;
	bool bInfiniteAmmo = false;
	bool bNoOverheating = false;
	bool bNoReload = false;
	bool bNoRecoil = false;

public:
	WeaponModifications();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void DrawMenuItems();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};