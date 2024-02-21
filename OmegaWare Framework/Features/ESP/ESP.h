#pragma once
#include "pch.h"

class ESP : public Feature
{
private:
	bool Initialized = false;
	bool bEnabled = false;

	int iESPMaxDistance = 0;
	bool bBoxName = true;
	bool bBoxDistance = true;

	bool bInvincibleFlag = true;

	CG::FName Root;

public:
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