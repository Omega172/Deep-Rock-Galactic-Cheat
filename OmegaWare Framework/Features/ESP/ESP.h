#pragma once
#include "pch.h"

class ESP : public Feature
{
private:
	bool Initialized = false;
	std::mutex Mutex;

	bool bEnabled = false;
	bool bDebugESP = false;
	bool bAccurateBox = true;
	int iESPMaxDistance = 0;
	int iDebugESPMaxDistance = 0;
	bool bBoxName = true;
	bool bBoxDistance = true;
	bool bBoxHealthBar = true;
	bool bBoxArmorBar = true;

	float clrEnemies[4] = {1.f, 0.f, 0.f, 1.f};
	bool bEnemies = true;
	float clrFriendlies[4] = {0.f, 1.f, 0.f, 1.f};
	bool bFriendlies = false;

	bool bInvincibleFlag = true;

	CG::FName Root;
	
	bool GetBoxFromBBox(CG::FVector& vecLocation, CG::FVector& vecExtent, ImRect& rectOut);

public:
	ESP();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void PopulateMenu();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};