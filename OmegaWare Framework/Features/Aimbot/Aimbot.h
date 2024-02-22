#pragma once
#include "pch.h"

class Aimbot : public Feature
{
private:
	bool Initialized = false;
	std::mutex Mutex;

	bool bEnabled = false;
	bool bAutoFire = false;
	KeyBind keyAimbot = KeyBind(ImGuiKey_MouseX1);
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

	void DrawMenuItems();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};