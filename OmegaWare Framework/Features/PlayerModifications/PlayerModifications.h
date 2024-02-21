#pragma once
#include "pch.h"

class PlayerModifications : public Feature
{
private:
	bool Initialized = false;
	bool bGodMode = false;

	float flRunningSpeed = 1.f;
	float flLastRunningSpeed = 0.f;
	float flDefaultRunningSpeed = 435.f;
	
	bool bFlyHack = false;
	float flFlyForce = 200.f;

	char szNameBuffer[64] = "";
	const size_t sizeNameBuffer = sizeof(szNameBuffer);

	std::wstring wsOriginalName = L"";

public:
	PlayerModifications();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void DrawMenuItems();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};