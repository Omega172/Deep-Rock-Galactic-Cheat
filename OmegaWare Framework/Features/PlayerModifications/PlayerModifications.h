#pragma once
#include "pch.h"

class PlayerModifications : public Feature
{
private:
	bool Initialized = false;
	bool bGodMode = false;

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