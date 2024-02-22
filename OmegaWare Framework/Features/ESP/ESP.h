#pragma once
#include "pch.h"

class ESP : public Feature
{
private:
	bool Initialized = false;

	bool bEnabled = false;
	bool bAccurateBox = true;
	int iESPMaxDistance = 0;
	bool bBoxName = true;
	bool bBoxDistance = true;
	bool bBoxHealthBar = true;
	bool bBoxArmorBar = true;

	bool bInvincibleFlag = true;

	CG::FName Root;
	
	bool GetBoxFromBBox(CG::FVector& vecLocation, CG::FVector& vecExtent, ImRect& rectOut);

public:
	std::mutex Mutex;

	ESP();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void DrawMenuItems();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};