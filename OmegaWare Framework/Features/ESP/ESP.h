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
		float clrBox[4] = { 1.f, 0.5f, 0.f, 1.f };
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
		float clrBox[4] = { 0.f, 1.f, 1.f, 1.f };
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
		float clrBox[4] = { 0.f, 1.f, 1.f, 1.f };
		bool bAccurateBox = true;
		bool bBox = false;
		bool bName = false;
		bool bDistance = false;
		bool bHealthBar = false;
		bool bArmorBar = false;
		bool bFlagInvincible = false;
	} stPlayers;

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

	struct {
		bool bEnabled = false;
		float clrBox[4] = { 1.f, 1.f, 0.f, 1.f };
		bool bAccurateBox = true;
		bool bBox = false;
		bool bName = false;
		bool bDistance = false;
	} stResourceChunks;

	int iESPMaxDistance = 0;

	int iDebug = 0;
	float clrDebug[4] = { 1.f, 1.f, 0.4f, 1.f };

	bool bShowPlayerList = false;
	std::vector<CG::AActor*> vecPlayers;
	CG::ABP_PlayerCharacter_C* pSelectedPlayer = nullptr;
	
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