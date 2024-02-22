#pragma once
#include "pch.h"

class Fullbright : public Feature
{
private:
	bool Initialized = false;
	std::mutex Mutex;

	bool bFullbright = false;

public:
	Fullbright();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void DrawMenuItems();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};