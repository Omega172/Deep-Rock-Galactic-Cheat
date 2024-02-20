#pragma once
#include "pch.h"

class Aimbot : public Feature
{
private:
	bool Initialized = false;
	bool bEnabled = false;
	bool bAutoFire = false;
	KeyBind AimbotKey = KeyBind(ImGuiKey_MouseX1);
	bool bSetAimbotKey = false;

	float fAimbotFOV = 90.0f;

	CG::AEnemyDeepPathfinderCharacter* Target = nullptr;

	bool ActorChecks(CG::AEnemyDeepPathfinderCharacter* Actor);

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