#include "pch.h"
#include "Fullbright.h"

// With help from NightFyre on Discord who showed me the offset
// https://docs.unrealengine.com/5.1/en-US/API/Runtime/Engine/Engine/UGameViewportClient/
// Enum Engine.EViewModeIndex
void Fullbright::Run()
{
	if (!Initalized)
		return;

	auto pUnreal = unreal.get();

	auto ViewportClient = pUnreal->GetViewportClient();
	if (!ViewportClient)
		return;

	if (!Utils::IsReadableMemory(ViewportClient, sizeof(ViewportClient)))
		return;

	if (bFullbright && ViewportClient->ViewMode != 2)
		ViewportClient->ViewMode = 2;

	if (!bFullbright && ViewportClient->ViewMode != 3)
		ViewportClient->ViewMode = 3;
}