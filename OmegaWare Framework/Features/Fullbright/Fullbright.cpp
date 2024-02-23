#include "pch.h"

Fullbright::Fullbright() {};

bool Fullbright::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "FULLBRIGHT", "Fullbright"))
		return false;

	if (!Cheat::localization->AddToLocale("GER", "FULLBRIGHT", "Vollhelligkeit"))
		return false;

	if (!Cheat::localization->AddToLocale("POL", "FULLBRIGHT", "Pełna Jasność"))
		return false;

	Cheat::localization->UpdateLocale();

	Initialized = true;
	return Initialized;
}

void Fullbright::Destroy() { 
	Initialized = false;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::UGameViewportClient* pViewportClient = pUnreal->GetViewportClient();
	if (!pViewportClient)
		return;

	pViewportClient->ViewMode = 3;
}

void Fullbright::HandleKeys() {}

void Fullbright::PopulateMenu()
{
	if (!Initialized)
		return;

	Child* Fullbright = new Child("Fullbright", []() { return ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y / 2); }, ImGuiChildFlags_Border);
	Fullbright->AddElement(new Checkbox(Cheat::localization->Get("FULLBRIGHT"), &bFullbright));

	Cheat::menu->AddElement(Fullbright, true);
}

void Fullbright::Render() {}

void Fullbright::Run() {
	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::UGameViewportClient* pViewportClient = pUnreal->GetViewportClient();
	if (!pViewportClient)
		return;

	pViewportClient->ViewMode = bFullbright ? 2 : 3;
}

void Fullbright::SaveConfig() { Cheat::config->PushEntry("FULLBRIGHT", "bool", std::to_string(bFullbright)); }

void Fullbright::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("FULLBRIGHT");
	if (entry.Name == "FULLBRIGHT")
		bFullbright = std::stoi(entry.Value);
}