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
	
	bool bBoxName = true;
	bool bBoxDistance = true;
	bool bBoxHealthBar = true;
	bool bBoxArmorBar = true;

	float clrEnemies[4] = {1.f, 0.f, 0.f, 1.f};
	bool bEnemies = true;
	float clrFriendlies[4] = {0.f, 1.f, 0.f, 1.f};
	bool bFriendlies = false;
	float clrObjectiveItems[4] = {0.f, 1.f, 1.f, 1.f};
	bool bObjectiveItems = true;
	float clrSpecialStructures[4] = {1.f, 0.f, 1.f, 1.f};
	bool bSpecialStructures = true;

	int iDebug = 0;
	float clrDebug[4] = { 1.f, 1.f, 0.4f, 1.f };

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