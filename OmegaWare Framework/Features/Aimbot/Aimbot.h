#pragma once
#include "pch.h"

class Aimbot : public Feature
{
private:
	bool Initialized = false;

	bool bEnabled = false;
	bool bAutoFire = false;
	KeyBind keyAimbot = KeyBind(ImGuiKey_MouseX1);
	bool bSetKeyAimbot = false;
	float flAimFOV = 90.0f;

	bool bWasFiring = false;
	CG::FVector vecCameraLocation;
	CG::FRotator rotCameraRotation;

	CG::AEnemyDeepPathfinderCharacter* pTarget = nullptr;

	bool ActorChecks(CG::AEnemyDeepPathfinderCharacter* pActor);

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