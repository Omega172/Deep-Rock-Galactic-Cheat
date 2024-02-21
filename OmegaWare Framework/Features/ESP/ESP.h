#pragma once
#include "pch.h"

inline CG::UFont* pFont = nullptr;
inline DWORD dwOldProtect = NULL;

typedef void(__thiscall* PostRender) (CG::UObject* pViewportClient, CG::UCanvas* pCanvas);
inline PostRender oPostRender = nullptr;
inline void hkPostRender(CG::UObject* pViewportClient, CG::UCanvas* pCanvas);

inline bool bDrawPostRenderText = false;

class ESP : public Feature
{
private:
	bool Initialized = false;
	bool bEnabled = false;

	int iESPMaxDistance = 0;
	bool bBoxName = true;
	bool bBoxDistance = true;

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