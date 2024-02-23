﻿#include "pch.h"

ExampleFeature::ExampleFeature() {};

bool ExampleFeature::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("EXAMPLE_FEATURE"), "Example Feature" },
		{ HASH("EXAMPLE_FEATURE_HW"), "Hello, World!" }
	};
	if (!Cheat::localization->AddToLocale("ENG", EnglishLocale))
		return false;

	std::vector<LocaleData> GermanLocale = {
		{ HASH("EXAMPLE_FEATURE"), "Beispielfunktion" },
		{ HASH("EXAMPLE_FEATURE_HW"), "Hallo Welt!" }
	};
	if (!Cheat::localization->AddToLocale("GER", GermanLocale))
		return false;

	std::vector<LocaleData> PolishLocale = {
		{ HASH("EXAMPLE_FEATURE"), "Przykładowa Funkcja" },
		{ HASH("EXAMPLE_FEATURE_HW"), "Cześć Świecie!" }
	};
	if (!Cheat::localization->AddToLocale("POL", PolishLocale))
		return false;

	Cheat::localization->UpdateLocale();

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ExampleFeature Initialized");

	Initialized = true;
	return Initialized;
}

void ExampleFeature::Destroy() { Initialized = false; }

void ExampleFeature::HandleKeys() {}

void ExampleFeature::PopulateMenu()
{
	if (!Initialized)
		return;

	ImGui::SameLine();

	Child* ExampleFeature = new Child("ExampleFeature", []() { return ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y / 2); }, ImGuiChildFlags_Border);
	ExampleFeature->AddElement(new Text(Cheat::localization->Get("EXAMPLE_FEATURE")));
	ExampleFeature->AddElement(new Checkbox(Cheat::localization->Get("EXAMPLE_FEATURE"), &bExampleFeature));
	if (bExampleFeature)
		ExampleFeature->AddElement(new Text(Cheat::localization->Get("EXAMPLE_FEATURE_HW")));

	Cheat::menu->AddElement(ExampleFeature, true);
}

void ExampleFeature::Render() {}

void ExampleFeature::Run() {}

void ExampleFeature::SaveConfig() { Cheat::config->PushEntry("ExampleFeature", "bool", std::to_string(bExampleFeature)); }

void ExampleFeature::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("ExampleFeature");
	if (entry.Name == "ExampleFeature")
		bExampleFeature = std::stoi(entry.Value);
}