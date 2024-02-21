#include "pch.h"

inline void hkPostRender(CG::UObject* pViewportClient, CG::UCanvas* pCanvas)
{
	CG::ULocalPlayer* pLocalPlayer = Cheat::unreal->GetLocalPlayer();
	if (!IsValidObjectPtr(pLocalPlayer))
		return oPostRender(pViewportClient, pCanvas);

	if (!bDrawPostRenderText)
		return oPostRender(pViewportClient, pCanvas);

	CG::FLinearColor Cyan = { 0.f, 1.f, 1.f, 1.f };
	CG::FLinearColor Black = { 0.f, 0.f, 0.f, 1.f };

	// The canvas reports its size as the current resolution but in my testing it is always 2048, 1280
	CG::FVector2D TextSize = pCanvas->K2_TextSize(pFont, L"OmegaWare.xyz", { 1.f, 1.f });
	pCanvas->K2_DrawText(pFont, L"OmegaWare.xyz", { 1024.f - ( TextSize.X / 2 ), 0.f }, { 1.f, 1.f }, Cyan, 1.f, Black, { 0.f, 0.f }, false, false, true, Black);

	//pCanvas->K2_DrawLine({ 0.f, 0.f }, { 1024.f, 640.f }, 1.f, Cyan);

	oPostRender(pViewportClient, pCanvas);
}

ESP::ESP() {};

bool ESP::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Enable ESP" },
		{ HASH("ESP_MAX_DISTANCE"), "Max Distance" },
		{ HASH("ESP_FLAGS"), "Flags" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Name" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Distance" },
	};
	Cheat::localization->AddToLocale("ENG", EnglishLocale);

	std::vector<LocaleData> GermanLocale = {
		{ HASH("ESP"), "ESP" },
		{ HASH("ESP_ENABLE"), "Enable ESP" },
		{ HASH("ESP_MAX_DISTANCE"), "Max Distance" },
		{ HASH("ESP_FLAGS"), "Flags" },
		{ HASH("ESP_BOX_SHOW_NAME"), "Name" },
		{ HASH("ESP_BOX_SHOW_DISTANCE"), "Distance" },
	};
	Cheat::localization->AddToLocale("GER", GermanLocale);

	Cheat::localization->UpdateLocale();

	Root = CG::FName("Root");

	pFont = CG::UObject::FindObject<CG::UFont>("Font Roboto.Roboto");
	if (!IsValidObjectPtr(pFont))
		return false;

	CG::UGameViewportClient* pViewportClient = Cheat::unreal->GetViewportClient();
	if (!IsValidObjectPtr(pViewportClient))
		return false;

	void** VFTable = pViewportClient->VfTable;
	VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	oPostRender = reinterpret_cast<PostRender>(VFTable[POST_RENDER_INDEX]);
	VFTable[POST_RENDER_INDEX] = &hkPostRender;
	VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, dwOldProtect, &dwOldProtect);

	Initialized = true;
	return Initialized;
}

void ESP::Destroy()
{
	if (!Initialized)
		return;

	CG::UGameViewportClient* pViewportClient = Cheat::unreal->GetViewportClient();
	if (!IsValidObjectPtr(pViewportClient))
		return;

	void** VFTable = pViewportClient->VfTable;
	VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	VFTable[POST_RENDER_INDEX] = oPostRender;
	VirtualProtect(&VFTable[POST_RENDER_INDEX], 8, dwOldProtect, &dwOldProtect);

	Initialized = false;
}

void ESP::HandleKeys() {}

void ESP::DrawMenuItems()
{
	if (!Initialized)
		return;

	ImGui::SameLine();

	ImGui::BeginChild("ESP", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), ImGuiChildFlags_Border);
	{
		ImGui::Text(Cheat::localization->Get("ESP").c_str());

		ImGui::Checkbox(Cheat::localization->Get("ESP_ENABLE").c_str(), &bEnabled);
		if (bEnabled)
		{
			ImGui::SameLine();
			if (ImGui::BeginCombo(Cheat::localization->Get("ESP_FLAGS").c_str(), "", ImGuiComboFlags_NoPreview))
			{
				ImGui::Selectable(Cheat::localization->Get("ESP_BOX_SHOW_NAME").c_str(), &bBoxName);
				ImGui::Selectable(Cheat::localization->Get("ESP_BOX_SHOW_DISTANCE").c_str(), &bBoxDistance);

				ImGui::EndCombo();
			}

			ImGui::SliderInt(Cheat::localization->Get("ESP_MAX_DISTANCE").c_str(), &iESPMaxDistance, 0, 1000);
		}

		ImGui::Spacing();
		ImGui::Checkbox("Draw PostRender Text", &bDrawPostRenderText);
	}
	ImGui::EndChild();
}

void ESP::Render()
{
	if (!bEnabled)
		return;

	Unreal* pUnreal = Cheat::unreal.get();

	CG::ABP_PlayerCharacter_C* pDRGPlayer = reinterpret_cast<CG::ABP_PlayerCharacter_C*>(pUnreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(pDRGPlayer))
		return;

	std::vector<CG::AEnemyDeepPathfinderCharacter*> apUnsortedActors = Cheat::unreal->GetActors<CG::AEnemyDeepPathfinderCharacter>();
	std::vector<CG::AEnemyDeepPathfinderCharacter*> apActors = Cheat::unreal->SortActorsByDistance<CG::AEnemyDeepPathfinderCharacter*>(apUnsortedActors);

	for (CG::AEnemyDeepPathfinderCharacter* pActor : apActors)
	{
		if (!IsValidObjectPtr(pActor))
			continue;

		CG::USkeletalMeshComponent* pMesh = pActor->Mesh;
		if (!IsValidObjectPtr(pMesh))
			continue;

		CG::UHealthComponentBase* pHealthComponent = pActor->HealthComponent;
		if (!IsValidObjectPtr(pHealthComponent) || pHealthComponent->InternalIndex <= 0 || pHealthComponent->Name.ComparisonIndex == 0 || pHealthComponent->IsDead())
			continue;

		CG::FVector WorldPos = pMesh->GetSocketLocation(Root);

		int iDistance= static_cast<int>(pDRGPlayer->K2_GetActorLocation().DistanceMeter(WorldPos));
		if (iESPMaxDistance && iDistance > iESPMaxDistance)
			continue;

		CG::FVector Origin, BoxExtent;
		pActor->GetActorBounds(true, &Origin, &BoxExtent, false);

		CG::FVector2D HeadPos = pUnreal->W2S({ Origin.X, Origin.Y, Origin.Z + BoxExtent.Z });
		CG::FVector2D FeetPos = pUnreal->W2S({ Origin.X, Origin.Y, Origin.Z - BoxExtent.Z });

		if (HeadPos.IsValid() || FeetPos.IsValid())
			continue;

		const float Height = abs(FeetPos.Y - HeadPos.Y);
		const float Width = Height * 0.6f;

		CG::FVector2D TopLeft = { HeadPos.X - Width * 0.5f, HeadPos.Y };
		CG::FVector2D DownRight = { HeadPos.X + Width * 0.5f, FeetPos.Y };

		float h = DownRight.Y - TopLeft.Y;
		float w = DownRight.X - TopLeft.X;

		CG::FVector2D TopRight = CG::FVector2D(DownRight.X, TopLeft.Y);
		CG::FVector2D DownLeft = CG::FVector2D(TopLeft.X, DownRight.Y);

		ImGui::GetBackgroundDrawList()->AddRect(TopRight, DownLeft, Black, 0.f, ImDrawFlags_None, 3.f);
		ImGui::GetBackgroundDrawList()->AddRect(TopRight, DownLeft, Cyan);

		std::string sName = pActor->Name.GetName();
		ImVec2 TextSize = ImGui::CalcTextSize(sName.c_str());

		if (bBoxName)
		{
			float val = TopLeft.X - TopRight.X;
			ImVec2 Pos = CG::FVector2D(TopRight.X + (val / 2), TopLeft.Y);
			Pos.x = Pos.x - (TextSize.x / 2);
			Pos.y = Pos.y - 17.f; // TextSize.y = 14.f

			ImGui::OutlinedText(Pos, White, sName);
		}

		if (bBoxDistance)
		{
			std::stringstream ssDistance;
			ssDistance << "[ " << std::to_string(iDistance) << " ]";

			std::string sDistance = ssDistance.str();
			ImVec2 TextSize = ImGui::CalcTextSize(sDistance.c_str());

			float val = DownLeft.X - DownRight.X;
			ImVec2 Pos = CG::FVector2D(DownRight.X + (val / 2), DownLeft.Y);
			Pos.x = Pos.x - (TextSize.x / 2);
			Pos.y = Pos.y + 2.f; // TextSize.y = 14.f

			ImGui::OutlinedText(Pos, White, sDistance.c_str());
		}
	}
}

void ESP::Run() {}

void ESP::SaveConfig()
{
	Cheat::config->PushEntry("ESP_ENABLED", "bool", std::to_string(bEnabled));
	Cheat::config->PushEntry("ESP_MAX_DISTANCE", "int", std::to_string(iESPMaxDistance));
	Cheat::config->PushEntry("ESP_BOX_SHOW_NAME", "bool", std::to_string(bBoxName));
	Cheat::config->PushEntry("ESP_BOX_SHOW_DISTANCE", "bool", std::to_string(bBoxDistance));
}

void ESP::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("ESP_ENABLED");
	if (entry.Name == "ESP_ENABLED")
		bEnabled = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_MAX_DISTANCE");
	if (entry.Name == "ESP_MAX_DISTANCE")
		iESPMaxDistance = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_BOX_SHOW_NAME");
	if (entry.Name == "ESP_BOX_SHOW_NAME")
		bBoxName = std::stoi(entry.Value);

	entry = Cheat::config->GetEntryByName("ESP_BOX_SHOW_DISTANCE");
	if (entry.Name == "ESP_BOX_SHOW_DISTANCE")
		bBoxDistance = std::stoi(entry.Value);
}