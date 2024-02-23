#include "pch.h"

PlayerModifications::PlayerModifications() {};

bool PlayerModifications::Setup()
{
	std::vector<LocaleData> EnglishData = {
		{ HASH("GODMODE"), "Godmode" },
		{ HASH("RUNNING_SPEED"), "Run Speed" },
		{ HASH("FLY_HACK"), "Jetpack" },
		{ HASH("FLY_FORCE"), "Force" },
		{ HASH("NAME_CHANGER"), "Name Changer" }
	};
	if (!Cheat::localization->AddToLocale("ENG", EnglishData))
		return false;

	std::vector<LocaleData> GermanData = {
		{ HASH("GODMODE"), "Gottmodus" },
		{ HASH("RUNNING_SPEED"), "Laufgeschwindigkeit" },
		{ HASH("FLY_HACK"), "Raketenrucksack" },
		{ HASH("FLY_FORCE"), "Gewalt" }
	};
	if (!Cheat::localization->AddToLocale("GER", GermanData))
		return false;

	std::vector<LocaleData> PolishData = {
		{ HASH("GODMODE"), "Tryb Boga" },
		{ HASH("RUNNING_SPEED"), "Predkość Biegania" },
		{ HASH("FLY_HACK"), "Latanie" },
		{ HASH("FLY_FORCE"), "Siła Latania" },
		{ HASH("NAME_CHANGER"), "Zmieniacz Nicku" }
	};
	if (!Cheat::localization->AddToLocale("POL", PolishData))
		return false;

	Cheat::localization->UpdateLocale();

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: PlayerModifications Initialized");

	Initialized = true;
	return Initialized;
}

void PlayerModifications::Destroy() {
	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
 
	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	CG::ABP_PlayerController_C* pPlayerController = static_cast<CG::ABP_PlayerController_C*>(pUnreal->GetPlayerController());
	if (!IsValidObjectPtr(pPlayerController))
		return;

	if (wsOriginalName.size())
		pPlayerController->SetName(CG::FString(wsOriginalName.c_str()));

	if (flDefaultRunningSpeed > 0.f) 
		pDRGPlayer->RunningSpeed = flDefaultRunningSpeed;

	Initialized = false;
}

void PlayerModifications::HandleKeys() {}

void PlayerModifications::PopulateMenu()
{
	if (!Initialized)
		return;

	Child* PlayerModifications = new Child("PlayerModifications", []() { return ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y / 2); }, ImGuiChildFlags_Border);
	PlayerModifications->AddElement(new Checkbox(Cheat::localization->Get("GODMODE"), &bGodMode));
	PlayerModifications->AddElement(new SliderFloat(Cheat::localization->Get("RUNNING_SPEED"), &flRunningSpeed, 1.f, 10.f));
	PlayerModifications->AddElement(new Checkbox(Cheat::localization->Get("FLY_HACK"), &bFlyHack));
	if (bFlyHack)
		PlayerModifications->AddElement(new SliderFloat(Cheat::localization->Get("FLY_FORCE").c_str(), &flFlyForce, 100.f, 500.f));
	PlayerModifications->AddElement(new InputText(Cheat::localization->Get("NAME_CHANGER").c_str(), szNameBuffer, sizeNameBuffer));

	Cheat::menu->AddElement(PlayerModifications, true);
}

void PlayerModifications::Render() {}

void PlayerModifications::Run() {
	if (!Initialized)
		return;

	Unreal* pUnreal = Cheat::unreal.get();
	if (!IsValidObjectPtr(pUnreal))
		return;

	CG::AGameStateBase* pGameState = pUnreal->GetGameStateBase();
	if (!IsValidObjectPtr(pGameState))
		return;

	CG::ABP_PlayerCharacter_C* pDRGPlayer = static_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	CG::ABP_PlayerController_C* pPlayerController = static_cast<CG::ABP_PlayerController_C*>(pUnreal->GetPlayerController());
	if (!IsValidObjectPtr(pPlayerController))
		return;

	CG::APlayerState* pPlayerState = pPlayerController->PlayerState;
	if (!IsValidObjectPtr(pPlayerState))
		return;

	if (!wsOriginalName.size())
		wsOriginalName = pPlayerState->GetPlayerName().ToStringW();

	if (!strlen(szNameBuffer)) {
		pPlayerController->SetName(CG::FString(wsOriginalName.c_str()));
	}
	else {
		std::wstring wszName(szNameBuffer, szNameBuffer + sizeNameBuffer);
		pPlayerController->SetName(CG::FString(wszName.c_str()));
	}

	if (pDRGPlayer->RunningSpeed != flLastRunningSpeed)
		flDefaultRunningSpeed = pDRGPlayer->RunningSpeed;

	pDRGPlayer->RunningSpeed = flLastRunningSpeed = flDefaultRunningSpeed * flRunningSpeed;

	if (pDRGPlayer->IsJumpPressed() && !pDRGPlayer->CanJump() && bFlyHack)
		pDRGPlayer->Client_AddImpulse(CG::FVector_NetQuantizeNormal(CG::FVector(0.f, 0.f, 1.f)), flFlyForce);

	CG::UPlayerHealthComponent* pHealthComponent = pDRGPlayer->HealthComponent;
	if (!IsValidObjectPtr(pHealthComponent))
		return;

	if (bGodMode) {
		pHealthComponent->Resupply(100.f);
		pHealthComponent->HealArmor(100.f);

		if (pDRGPlayer->IsDown())
			pDRGPlayer->InstantRevive(pDRGPlayer, CG::EInputKeys::Use);
	}
}

void PlayerModifications::SaveConfig() { 
	Cheat::config->PushEntry("GODMODE", "bool", std::to_string(bGodMode)); 
	Cheat::config->PushEntry("RUNNING_SPEED", "float", std::to_string(flRunningSpeed));
	Cheat::config->PushEntry("FLY_HACK", "bool", std::to_string(bFlyHack));
	Cheat::config->PushEntry("FLY_FORCE", "float", std::to_string(flFlyForce));
}

void PlayerModifications::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("GODMODE");
	if (entry.Name == "GODMODE")
		bGodMode = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("RUNNING_SPEED");
	if (entry.Name == "RUNNING_SPEED")
		flRunningSpeed = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("FLY_HACK");
	if (entry.Name == "FLY_HACK")
		bFlyHack = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("FLY_FORCE");
	if (entry.Name == "FLY_FORCE")
		flFlyForce = std::stoi(entry.Value);
}