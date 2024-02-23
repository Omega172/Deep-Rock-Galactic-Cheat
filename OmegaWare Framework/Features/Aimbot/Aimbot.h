#pragma once
#include "pch.h"

class Aimbot : public Feature
{
private:
	bool Initialized = false;
	std::mutex Mutex;

	bool bEnabled = false;
	bool bAutoFire = false;
	KeyBindToggle keyAimbot = KeyBindToggle(ImGuiKey_MouseX1);
	bool bUseAsToggle = false;
	bool bSetKeyAimbot = false;
	float flAimFOV = 90.0f;
	bool bMagicBullet = true;
	bool bMultiTarget = false;

	std::vector<CG::AEnemyPawn*> apEnemyPawns;
	std::vector<CG::AEnemyDeepPathfinderCharacter*> apEnemyPathFinders;

public:
	Aimbot();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void PopulateMenu();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};