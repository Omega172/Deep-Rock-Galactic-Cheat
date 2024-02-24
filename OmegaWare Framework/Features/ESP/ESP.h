#pragma once
#include "pch.h"

class ESP : public Feature
{
private:
	bool Initialized = false;
	std::mutex Mutex;

	bool bEnabled = false;

	struct {
		bool bEnabled = false;
		float clrBox[4] = { 1.f, 0.471f, 0.f, 1.f };
		bool bAccurateBox = true;
		bool bBox = false;
		bool bName = false;
		bool bDistance = false;
		bool bHealthBar = false;
		bool bArmorBar = false;
		bool bFlagInvincible = false;
	} stEnemies;

	struct {
		bool bEnabled = false;
		float clrBox[4] = { 0.f, 0.965f, 1.f, 1.f };
		bool bAccurateBox = true;
		bool bBox = false;
		bool bName = false;
		bool bDistance = false;
		bool bHealthBar = false;
		bool bArmorBar = false;
		bool bFlagInvincible = false;
	} stFriendlies;

	struct {
		bool bEnabled = false;
		float clrBox[4] = { 1.f, 1.f, 0.f, 1.f };
		bool bAccurateBox = true;
		bool bBox = false;
		bool bName = false;
		bool bDistance = false;
	} stObjectives;

	struct {
		bool bEnabled = false;
		float clrBox[4] = { 0.9f, 0.f, 1.f, 1.f };
		bool bAccurateBox = true;
		bool bBox = false;
		bool bName = false;
		bool bDistance = false;
	} stSpecialStructures;

	int iESPMaxDistance = 0;

	int iDebug = 0;
	float clrDebug[4] = { 1.f, 1.f, 0.4f, 1.f };

	CG::FName Root;
	
	bool GetBoxFromBBox(CG::FVector& vecLocation, CG::FVector& vecExtent, ImRect& rectOut, bool bAccurate);

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