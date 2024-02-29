#pragma once
#include "pch.h"

class Misc : public Feature
{
private:
	bool Initialized = false;
	std::mutex Mutex;

	bool bFullbright = false;

public:
	Misc();

	bool Setup();

	void Destroy();

	void HandleKeys();

	void PopulateMenu();

	void Render();

	void Run();

	void SaveConfig();

	void LoadConfig();
};