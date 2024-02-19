#include "pch.h"

Fullbright::Fullbright() {};

bool Fullbright::Setup()
{
	if (!Cheat::localization->AddToLocale("ENG", "FULLBRIGHT", "Fullbright"))
		return false;

	if (!Cheat::localization->SetLocale("ENG"))
	{
		Utils::LogError(Utils::GetLocation(CurrentLoc), "Failed to update locale ENG");
		return false;
	}

	Initialized = true;
	return Initialized;
}

void Fullbright::Destroy() { 
	Initialized = false;

	auto pUnreal = Cheat::unreal.get();
	if (!IsValidObjectPtr(pUnreal))
		return;

	auto pViewportClient = pUnreal->GetViewportClient();
	if (!IsValidObjectPtr(pViewportClient))
		return;

	pViewportClient->ViewMode = 3;
}

void Fullbright::HandleKeys() {}

void Fullbright::DrawMenuItems()
{
	if (!Initialized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("Fullbright", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y / 2), ImGuiChildFlags_Border);
	{
		ImGui::Checkbox(Cheat::localization->Get("FULLBRIGHT").c_str(), &bFullbright);
	}
	ImGui::EndChild();
}

void Fullbright::Render() {}

void Fullbright::Run() {
	if (!Initialized)
		return;

	auto pUnreal = Cheat::unreal.get();
	if (!IsValidObjectPtr(pUnreal))
		return;

	auto pViewportClient = pUnreal->GetViewportClient();
	if (!IsValidObjectPtr(pViewportClient))
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