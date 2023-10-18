#include "pch.h"

#include "GUI.h"
#include "Custom.h"

#include "../Utils/Console/Console.hpp"
#include "../Unreal.h"
#include "../Features/GodMode.h"
#include "../Features/InfiniteAmmo.h"

#include "Watermark.h"

#include <eh.h>
#include <cmath>

#define DEG2RAD(deg) deg * M_PI / 180
#define RAD2DEG(rad) rad * 180.0 / M_PI;

bool bWatermark = true;
bool bWatermarkFPS = true;

bool bESP = true;
bool bOOFArrows = true;
bool bNameESP = true;

bool bTracers = false;
bool bDrawBones = false;
bool bResourceESP = true;

bool bAllDebug = false;
bool bDrawAll = false;

bool bAimbot = true;
bool bAimVisibleOnly = true;
int iAimbotFOV = 90;
bool bDrawFOV = false;

ImU32 Black = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 1.f });
ImU32 White = ImGui::ColorConvertFloat4ToU32({ 1.f, 1.f, 1.f, 1.f });

ImU32 Red = ImGui::ColorConvertFloat4ToU32({ 1.f, 0.f, 0.f, 1.f });
ImU32 Green = ImGui::ColorConvertFloat4ToU32({ 0.f, 1.f, 0.f, 1.f });
ImU32 Blue = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 1.f, 1.f });

ImU32 Cyan = ImGui::ColorConvertFloat4ToU32({ 0.f, 1.f, 1.f, 1.f });
ImU32 Gold = ImGui::ColorConvertFloat4ToU32({ 1.f, 0.84f, 0.f, 1.f });
ImU32 Orange = ImGui::ColorConvertFloat4ToU32({ 1.f, 0.65f, 0.f, 1.f });
ImU32 Purple = ImGui::ColorConvertFloat4ToU32({ 0.5f, 0.f, 0.5f, 1.f });
ImU32 Magenta = ImGui::ColorConvertFloat4ToU32({ 1.f, 0.f, 1.f, 1.f });

auto CVADist = FLT_MAX;
CG::AEnemyDeepPathfinderCharacter* CVA = nullptr;
CG::FRotator CVAAngle;

void EnemyESP(Unreal* pUnreal, CG::AEnemyDeepPathfinderCharacter* Target);
void TeamESP(Unreal* pUnreal, CG::ABP_PlayerCharacter_C* Target);
void OtherESP(Unreal* pUnreal, CG::AActor* Actor);

// Arrows
float ScreenAngleToObject(float fYaw, CG::FVector vecObjectOrigin, CG::FVector vecLocalOrigin)
{
	float fCosYaw = cos(DEG2RAD(fYaw));
	float fSinYaw = sin(DEG2RAD(fYaw));
	float fCrossX = (vecObjectOrigin.X - vecLocalOrigin.X) * fCosYaw + (vecObjectOrigin.Y - vecLocalOrigin.Y) * fSinYaw;
	float fCrossY = (vecObjectOrigin.Y - vecLocalOrigin.Y) * fCosYaw - (vecObjectOrigin.X - vecLocalOrigin.X) * fSinYaw;

	return (fCrossX == 0.f && fCrossY == 0.f) ? 0.f : atan2(fCrossX, fCrossY);
}

void RotateTriangle(std::array<CG::FVector, 3>& points, float rotation)
{
	const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
	for (auto& point : points)
	{
		point = point - points_center;

		const auto temp_x = point.X;
		const auto temp_y = point.Y;

		const auto theta = rotation;
		const auto c = cosf(theta);
		const auto s = sinf(theta);

		point.X = temp_x * c - temp_y * s;
		point.Y = temp_x * s + temp_y * c;

		point = point + points_center;
	}
}

void DrawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float thickness, ImU32 color) {
	ImGui::GetBackgroundDrawList()->AddLine({ x1, y1 }, { x2, y2 }, color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine({ x2, y2 }, { x3, y3 }, color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine({ x3, y3 }, { x1, y1 }, color, thickness);
}
// End Arrows

void GUI::Render()
{
	if (bWatermark)
		showWatermark(bWatermarkFPS, "OmegaWare.xyz (Deep Rock Galactic)", ImVec4(255, 255, 255, 255), ImVec4(255, 255, 255, 0));

	if (bMenuOpen)
	{
		ImGui::SetNextWindowSize(ImVec2(WIDTH, HEIGHT));
		ImGui::Begin("OmegaWare.xyz (Deep Rock Galactic)", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse);

		ImGui::BeginChild("Cheat", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y), true);
		{
			ImGui::Text("Cheat");

			if (ImGui::Button("Unload"))
				bShouldRun = false;
			ImGui::SameLine();
			if (ImGui::Button(con->GetVisibility() ? "Hide Console" : "Show Console"))
				con->ToggleVisibility();
			if (ImGui::Button("Crash"))
			{
				CG::UGameViewportClient* Temp = nullptr;
				Temp->ShowTitleSafeArea();
			}

			//ImGui::Checkbox("Extra Debug Info", &bExtraDebug);

			ImGui::Checkbox("Watermark", &bWatermark);
			if (bWatermark)
				ImGui::Checkbox("Watermark FPS", &bWatermarkFPS);

			ImGui::Checkbox("Draw Debug Boxes", &bAllDebug);
			ImGui::Checkbox("Draw All Origins", &bDrawAll);

			ImGui::Spacing();
			fullbright.get()->DrawMenuItems();
			ImGui::Spacing();
			godMode.get()->DrawMenuItems();
			ImGui::Spacing();
			infiniteAmmo.get()->DrawMenuItems();

			ImGui::Spacing();

			ImGui::Checkbox("Aimbot", &bAimbot);
			if (bAimbot)
			{
				ImGui::SameLine();
				ImGui::Checkbox("Visible Only", &bAimVisibleOnly);
				ImGui::SliderInt("Aimbot FOV", &iAimbotFOV, 1, 90);
				ImGui::Checkbox("Draw FOV", &bDrawFOV);
			}
		}
		ImGui::EndChild();

		ImGui::SameLine();

		ImGui::BeginChild("ESP", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true);
		{
			ImGui::Text("ESP");

			ImGui::Checkbox("ESP", &bESP);
			ImGui::Checkbox("Out of View Arrows", &bOOFArrows);
			ImGui::Checkbox("Names", &bNameESP);
			ImGui::Checkbox("Tracers", &bTracers);
			ImGui::Checkbox("Recources", &bResourceESP);

			ImGui::Spacing();

			ImGui::Checkbox("Draw Bone IDs", &bDrawBones);
		}
		ImGui::EndChild();

		ImGui::End();
	}

	float midX = sWIDTH / 2.f;
	float midY = sHEIGHT / 2.f;
	float multX = midX / 90.f;
	float size = (iAimbotFOV * multX);
	if (bDrawFOV)
		ImGui::GetBackgroundDrawList()->AddCircle({ sWIDTH / 2, sHEIGHT / 2 }, size, White);

	/*ImVec2 cursorPos = ImGui::GetCursorPos();
	std::stringstream ss;
	ss << "X: " << cursorPos.x << " Y: " << cursorPos.y;
	Log("CursorPos", ss.str());*/

	//
	//	Other Render Stuff
	//

	if (!(*CG::UWorld::GWorld))
		return;

	Unreal* pUnreal = unreal.get();

	CVADist = FLT_MAX;
	CVA = nullptr;
	CVAAngle = { 0.f, 0.f, 0.f };

	for (int i = 0; i < (**CG::UWorld::GWorld).Levels.Count(); i++)
	{
		CG::ULevel* Level = (**CG::UWorld::GWorld).Levels[i];

		if (!Level)
			continue;

		if (!Level->NearActors.Data() || !Level->NearActors.Count())
			continue;

		for (int j = 0; j < Level->NearActors.Count(); j++)
		{
			CG::AActor* Actor = Level->NearActors[j];
			if (!Actor)
				continue;

			if (Actor->IsA(CG::AEnemyDeepPathfinderCharacter::StaticClass()))
				EnemyESP(pUnreal, (CG::AEnemyDeepPathfinderCharacter*)Actor);

			if (Actor->IsA(CG::ABP_PlayerCharacter_C::StaticClass()))
				TeamESP(pUnreal, (CG::ABP_PlayerCharacter_C*)Actor);
			
			OtherESP(pUnreal, Actor);

			if (bDrawAll)
			{
				auto RootComponent = Actor->RootComponent;
				if (!RootComponent)
					continue;

				auto Origin = RootComponent->RelativeLocation;

				CG::FVector2D Screen;
				if (!pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(Origin, &Screen, false))
					continue;

				ImGui::GetBackgroundDrawList()->AddText({ Screen.X, Screen.Y }, White, Actor->GetName().c_str());
			}
		}
	}

	//
	// End Other Render Stuff
	//
}

void EnemyESP(Unreal* pUnreal, CG::AEnemyDeepPathfinderCharacter* Target)
{
	if (Target->IsActorBeingDestroyed())
		return;

	auto HealthComponent = Target->GetHealthComponent();
	if (!HealthComponent)
		return;

	if (HealthComponent->IsDead())
		return;

	if (Target->IsControlled())
		return;

	if (Target->GetAttitude() == CG::EPawnAttitude::Friendly)
		return;

	CG::FVector CameraLocation = { 0.f, 0.f, 0.f };
	CG::FRotator CameraRotation = { 0.f, 0.f, 0.f };

	if (pUnreal->GetPlayerCameraManager() && *pUnreal->GetPlayerCameraManager()->VfTable && pUnreal->GetPlayerController())
	{
		CameraLocation = pUnreal->GetPlayerCameraManager()->GetCameraLocation();
		CameraRotation = pUnreal->GetPlayerController()->GetControlRotation();;
	}

	CG::FVector Origin;
	CG::FVector BoxExtent;
	Target->GetActorBounds(true, &Origin, &BoxExtent, false);

	CG::FVector HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(13));	// 13 for most
	for (int k = 0; k < Target->Mesh->GetNumBones(); k++)
	{
		if (Target->Mesh->GetBoneName(k).GetName() == "Head")
			HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));
	}

	// https://www.unknowncheats.me/forum/unreal-engine-4-a/468714-linetracesingle.html
	// https://www.unknowncheats.me/forum/pubg-mobile/421343-actor-object-hitresult-linetracesingle.html
	// https://docs.unrealengine.com/5.3/en-US/API/Runtime/Engine/Kismet/UKismetSystemLibrary/LineTraceSingle/
	// https://docs.unrealengine.com/5.3/en-US/API/Runtime/Engine/Engine/FHitResult/
	bool bIsOccluded = false;
	CG::FHitResult Hit;
	bool Trace = pUnreal->GetSystemLibrary()->LineTraceSingle((*CG::UWorld::GWorld), CameraLocation, HeadBone, CG::ETraceTypeQuery::TraceTypeQuery1, true, CG::TArray<CG::AActor*>(), CG::EDrawDebugTrace::ForOneFrame, &Hit, true, {1.f, 1.f, 1.f, 1.f}, {1.f, 0.f, 0.f, 1.f}, 0.f);
	if (Trace)
	{
		auto Actor = Hit.Actor.Get();

		//CG::FVector2D ScreenPos;
		//if (pUnreal->PlayerController->ProjectWorldLocationToScreen(Hit.ImpactPoint, &ScreenPos, false))
			//ImGui::GetBackgroundDrawList()->AddText({ ScreenPos.X, ScreenPos.Y }, White, "Impact");

		if (Actor)
			bIsOccluded = true;
	}

	bool bIsVisible = !bIsOccluded;

	if ((bAimVisibleOnly && bIsVisible) || !bAimVisibleOnly)
	{
		float midX = GUI::sWIDTH / 2.f;
		float midY = GUI::sHEIGHT / 2.f;
		float multX = midX / 90.f;
		float size = (iAimbotFOV * multX);

		CG::FVector2D ScreenPos;
		if (pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(Target->RootComponent->RelativeLocation, &ScreenPos, false))
		{

			float hypotenuse = sqrt((midX - ScreenPos.X) * (midX - ScreenPos.X) + (midY - ScreenPos.Y) * (midY - ScreenPos.Y));
			if (hypotenuse < size && hypotenuse < CVADist)
			{
				CVADist = hypotenuse;

				CG::FRotator Res = pUnreal->GetMathLibrary()->FindLookAtRotation(CameraLocation, HeadBone);

				float DiffY = Res.Pitch - CameraRotation.Pitch;
				float DiffX = Res.Yaw - CameraRotation.Yaw;
				CVAAngle = Res;

				CVA = Target;
			}
		}
	}

	CG::FVector Head = { Origin.X, Origin.Y, Origin.Z + (BoxExtent.Z) };

	CG::FVector Feet = { Origin.X, Origin.Y, Origin.Z - (BoxExtent.Z) };

	// Arrows https://www.unknowncheats.me/forum/3260316-post1.html

	if (!bIsVisible && bOOFArrows)
	{
		int radar_range = 50;

		const auto angle_yaw_rad = -(ScreenAngleToObject(CameraRotation.Yaw, Origin, CameraLocation));
		const auto new_point_x = (GUI::sWIDTH / 2) + (radar_range) / 2 * 8 * cosf(angle_yaw_rad);
		const auto new_point_y = (GUI::sHEIGHT / 2) + (radar_range) / 2 * 8 * sinf(angle_yaw_rad);

		std::array<CG::FVector, 3> points
		{
			CG::FVector(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((radar_range) / 4 + 3.5f) / 2, 0.f),
			CG::FVector(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f),
			CG::FVector(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((radar_range) / 4 + 3.5f) / 2, 0.f)
		};

		RotateTriangle(points, angle_yaw_rad);

		if (abs(angle_yaw_rad + M_PI / 2) > M_PI / 3)
			DrawTriangle(points.at(0).X, points.at(0).Y, points.at(1).X, points.at(1).Y, points.at(2).X, points.at(2).Y, 1.f, Cyan);
	}
	// End Arrows

	if (bESP && (bIsVisible || Target->GetName().starts_with("ENE_Flea")))
	{
		CG::FVector2D HeadPos;
		if (pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(Head, &HeadPos, false))
		{
			CG::FVector2D FeetPos;
			if (pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(Feet, &FeetPos, false))
			{
				const float Height = abs(FeetPos.Y - HeadPos.Y);
				const float Width = Height * 0.6f;

				CG::FVector2D TopLeft = { HeadPos.X - Width * 0.5f, HeadPos.Y };
				CG::FVector2D DownRight = { HeadPos.X + Width * 0.5f, FeetPos.Y };

				auto h = DownRight.Y - TopLeft.Y;
				auto w = DownRight.X - TopLeft.X;

				auto DownLeft = CG::FVector2D(TopLeft.X, DownRight.Y);
				auto TopRight = CG::FVector2D(DownRight.X, TopLeft.Y);

				ImU32 Color = Red;

				if (Target->GetName().starts_with("ENE_Flea"))
					Color = Green;

				ImGui::GetBackgroundDrawList()->AddRect({ TopLeft.X, TopLeft.Y }, { DownRight.X, DownRight.Y }, Black , 0, 0, 4.f);
				ImGui::GetBackgroundDrawList()->AddRect({ TopLeft.X, TopLeft.Y }, { DownRight.X, DownRight.Y }, Color, 0, 0, 2.f);

				if (bNameESP)
					ImGui::GetBackgroundDrawList()->AddText({ TopLeft.X, TopLeft.Y - 17.f }, White, Target->GetName().c_str());

				if (bAllDebug)
				{
					ImGui::GetBackgroundDrawList()->AddLine({ TopRight.X, TopRight.Y }, { TopRight.X + 35, TopRight.Y - 35 }, White);

					ImColor Col = { 0.f, 0.f, 0.f, .5f };

					auto Pos = Target->K2_GetActorLocation();
					std::string PosString = "X: " + std::to_string(Pos.X) + " Y: " + std::to_string(Pos.Y) + " Z: " + std::to_string(Pos.Z);

					ImVec2 Size = ImGui::CalcTextSize(Target->GetName().c_str());

					if (ImGui::CalcTextSize(PosString.c_str()).x > Size.x)
						Size = ImGui::CalcTextSize(PosString.c_str());

					ImVec2 Begin = { TopRight.X + 35, TopRight.Y - 35 };
					ImVec2 End = { Begin.x + Size.x, Begin.y + Size.y * 5 };

					ImGui::GetBackgroundDrawList()->AddRect(Begin, { End.x + 2, End.y }, White);
					ImGui::GetBackgroundDrawList()->AddRectFilled(Begin, { End.x + 2, End.y }, Col);
					ImGui::GetBackgroundDrawList()->AddText({ Begin.x + 2, Begin.y }, White, Target->GetName().c_str());

					ImGui::GetBackgroundDrawList()->AddText({ Begin.x + 2, Begin.y + Size.y * 3 }, White, PosString.c_str());

					std::string NumBones = "# of Bones: " + std::to_string(Target->Mesh->GetNumBones());
					ImGui::GetBackgroundDrawList()->AddText({ Begin.x + 2, Begin.y + Size.y * 4 }, White, NumBones.c_str());
				}
			}

			// Draw Bones
			if (bDrawBones)
			{
				for (int k = 0; k < Target->Mesh->GetNumBones(); k++)
				{
					CG::FVector bone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));

					CG::FVector2D bonePos;
					if (pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(bone, &bonePos, false))
					{
						ImGui::GetBackgroundDrawList()->AddText({ bonePos.X, bonePos.Y }, ImGui::ColorConvertFloat4ToU32({ 1.f, 1.f, 1.f, 1.f }), std::to_string(k).c_str());
					}
				}
			}

			// Chams
			static CG::UMaterial* Mat = CG::UObject::FindObject<CG::UMaterial>("Material M_ZoneMap_Wireframe_Master.M_ZoneMap_Wireframe_Master");
			CG::TArray<CG::UMaterialInterface*> TargetMaterials = Target->Mesh->GetMaterials();
			for (int i = 0; i < TargetMaterials.Count(); i++)
			{
				if (!TargetMaterials.IsValidIndex(i))
					continue;

				if (Mat && TargetMaterials[i] == Mat)
					continue;

				Target->Mesh->SetMaterial(i, Mat);
			}

			Target->Mesh->SetRenderCustomDepth(true);
			Target->Mesh->SetCustomDepthStencilValue(255);
			Target->Mesh->SetCustomDepthStencilWriteMask(CG::ERendererStencilMask::ERSM_Default);
		}
	}

	if (GetAsyncKeyState(VK_XBUTTON1) && bAimbot)
	{
		if (CVADist != FLT_MAX && pUnreal->GetPlayerController() && pUnreal->GetPlayerController()->LineOfSightTo(Target, {0.f, 0.f, 0.f}, false))
		{
			auto Delta = CVAAngle - CameraRotation;
			auto SmoothedAngle = CameraRotation + Delta / 1.f;

			pUnreal->GetPlayerController()->SetControlRotation(SmoothedAngle);
			//pUnreal->LocalPlayer->PlayerController->ControlRotation = CameraRotation;

			if (CVA)
				pUnreal->TargetEnt = CVA;
		}
	}
}

void TeamESP(Unreal* pUnreal, CG::ABP_PlayerCharacter_C* Target)
{
	if (!Target)
		return;

	if (Target->IsLocallyControlled()) // Ignore LocalPlayer
		return;

	if (!Target->HealthComponent)
		return;

	CG::FVector Origin;
	CG::FVector BoxExtent;
	Target->GetActorBounds(true, &Origin, &BoxExtent, false);

	CG::FVector HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(40));;	// 14 for most
	for (int k = 0; k < Target->Mesh->GetNumBones(); k++)
	{
		if (Target->Mesh->GetBoneName(k).GetName() == "Head")
			HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));
	}

	CG::FVector Head = { Origin.X, Origin.Y, Origin.Z + (BoxExtent.Z) };

	CG::FVector Feet = { Origin.X, Origin.Y, Origin.Z - (BoxExtent.Z) };

	if (bESP)
	{
		CG::FVector2D HeadPos;
		if (pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(Head, &HeadPos, false))
		{
			CG::FVector2D FeetPos;
			if (pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(Feet, &FeetPos, false))
			{
				const float Height = abs(FeetPos.Y - HeadPos.Y);
				const float Width = Height * 0.6f;

				CG::FVector2D TopLeft = { HeadPos.X - Width * 0.5f, HeadPos.Y };
				CG::FVector2D DownRight = { HeadPos.X + Width * 0.5f, FeetPos.Y };

				auto h = DownRight.Y - TopLeft.Y;
				auto w = DownRight.X - TopLeft.X;

				auto DownLeft = CG::FVector2D(TopLeft.X, DownRight.Y);
				auto TopRight = CG::FVector2D(DownRight.X, TopLeft.Y);

				ImU32 Color = Green;

				ImGui::GetBackgroundDrawList()->AddRect({ TopLeft.X, TopLeft.Y }, { DownRight.X, DownRight.Y }, Black, 0, 0, 4.f);
				ImGui::GetBackgroundDrawList()->AddRect({ TopLeft.X, TopLeft.Y }, { DownRight.X, DownRight.Y }, Color, 0, 0, 2.f);

				if (bNameESP)
				{
					auto PlayerState = Target->GetPlayerState();
					if (!PlayerState)
						return;

					ImGui::GetBackgroundDrawList()->AddText({ TopLeft.X, TopLeft.Y - 17.f }, White, PlayerState->GetPlayerName().ToString().c_str());
				}

				if (bTracers)
				{
					ImGui::GetBackgroundDrawList()->AddLine({ GUI::sWIDTH / 2, GUI::sHEIGHT }, { FeetPos.X, FeetPos.Y }, Black, 4.f);
					ImGui::GetBackgroundDrawList()->AddLine({ GUI::sWIDTH / 2, GUI::sHEIGHT }, { FeetPos.X, FeetPos.Y }, Cyan, 2.f);
				}

				if (bAllDebug)
				{
					ImGui::GetBackgroundDrawList()->AddLine({ TopRight.X, TopRight.Y }, { TopRight.X + 35, TopRight.Y - 35 }, White);

					ImColor Col = { 0.f, 0.f, 0.f, .5f };

					auto Pos = Target->K2_GetActorLocation();
					std::string PosString = "X: " + std::to_string(Pos.X) + " Y: " + std::to_string(Pos.Y) + " Z: " + std::to_string(Pos.Z);

					ImVec2 Size = ImGui::CalcTextSize(Target->GetName().c_str());

					if (ImGui::CalcTextSize(PosString.c_str()).x > Size.x)
						Size = ImGui::CalcTextSize(PosString.c_str());

					ImVec2 Begin = { TopRight.X + 35, TopRight.Y - 35 };
					ImVec2 End = { Begin.x + Size.x, Begin.y + Size.y * 5 };

					ImGui::GetBackgroundDrawList()->AddRect(Begin, { End.x + 2, End.y }, White);
					ImGui::GetBackgroundDrawList()->AddRectFilled(Begin, { End.x + 2, End.y }, Col);
					ImGui::GetBackgroundDrawList()->AddText({ Begin.x + 2, Begin.y }, White, Target->GetName().c_str());

					ImGui::GetBackgroundDrawList()->AddText({ Begin.x + 2, Begin.y + Size.y * 3 }, White, PosString.c_str());

					std::string NumBones = "# of Bones: " + std::to_string(Target->Mesh->GetNumBones());
					ImGui::GetBackgroundDrawList()->AddText({ Begin.x + 2, Begin.y + Size.y * 4 }, White, NumBones.c_str());
				}
			}
		}
	}

	// Draw Bones
	if (bDrawBones) // bDrawBones
	{
		for (int k = 0; k < Target->Mesh->GetNumBones(); k++)
		{
			CG::FVector bone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));

			CG::FVector2D bonePos;
			if (pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(bone, &bonePos, false))
			{
				ImGui::GetBackgroundDrawList()->AddText({ bonePos.X, bonePos.Y }, ImGui::ColorConvertFloat4ToU32({ 1.f, 1.f, 1.f, 1.f }), std::to_string(k).c_str());
			}
		}
	}

	// Chams
	static CG::UMaterial* Mat = CG::UObject::FindObject<CG::UMaterial>("Material M_ZoneMap_Wireframe_Master.M_ZoneMap_Wireframe_Master");
	CG::TArray<CG::UMaterialInterface*> TargetMaterials = Target->Mesh->GetMaterials();
	for (int i = 0; i < TargetMaterials.Count(); i++)
	{
		if (!TargetMaterials.IsValidIndex(i))
			continue;

		if (Mat && TargetMaterials[i] == Mat)
			continue;

		Target->Mesh->SetMaterial(i, Mat);
	}
}

void OtherESP(Unreal* pUnreal, CG::AActor* Actor)
{
	if (!bResourceESP)
		return;

	std::string Name = "";
	ImU32 Color = White;

	auto AName = Actor->GetName();

	if (Actor->IsA(CG::ABP_Gem_C::StaticClass()))
	{
		auto Gem = (CG::ABP_Gem_C*)Actor;
		auto ResourceType = Gem->ResourceType;

		auto Title = ResourceType->Title.ToString();

		Name = Title;
		Color = Green;
	}
	else if (Actor->IsA(CG::AResourceChunk::StaticClass()))
	{
		auto Chunk = (CG::AResourceChunk*)Actor;
		auto InfoComponent = Chunk->InfoComponent;

		if (!InfoComponent)
			return;

		Name = InfoComponent->InGameName.ToString();
		Color = Gold;
	}
	else if (AName.starts_with("BP_MiniMule_Salvage_C"))
	{
		Name = "Mini Mule";
		Color = Green;
	}
	else if (AName.starts_with("BP_TreasureBox_C"))
	{
		Name = "Treasure Box";
		Color = Magenta;
	}
	else if (AName.starts_with("BP_RepairTreasurebotItem_C"))
	{
		Name = "Treasure Box Part";
		Color = Magenta;
	}
	else if (AName.starts_with("BP_LostPackStart_C"))
	{
		Name = "Backpack Start";
		Color = Purple;
	}
	else if (AName.starts_with("BP_LostPack_C"))
	{
		Name = "Backpack";
		Color = Purple;
	}
	else if (AName.starts_with("BP_Fossil_C"))
	{
		Name = "Fossil";
		Color = Green;
	}
	else if (AName.starts_with("ENE_LootBug"))
	{
		Name = "Lootbug";
		Color = Orange;
	}
	else if (AName.starts_with("ENE_StabberVine"))
	{
		Name = "Hazard";
		Color = Red;
	}
	else if (AName.starts_with("BP_Ebonut"))
	{
		Name = "Ebonut";
		Color = Cyan;
	}
	else if (AName.starts_with("BP_Barley"))
	{
		Name = "Starch Nut / Yeast Cone / Malt Star / Barley Bulb";
		Color = Cyan;
	}
	else if (AName.starts_with("BP_Apoca"))
	{
		Name = "Apoca Bloom";
		Color = Cyan;
	}
	else if (AName.starts_with("BP_Boolo"))
	{
		Name = "Boolo Cap";
		Color = Cyan;
	}
	else
		return;

	auto RootComponent = Actor->RootComponent;
	if (!RootComponent)
		return;

	auto Origin = RootComponent->RelativeLocation;

	CG::FVector2D Screen;
	if (!pUnreal->GetPlayerController()->ProjectWorldLocationToScreen(Origin, &Screen, false))
		return;

	ImGui::GetBackgroundDrawList()->AddText({ Screen.X, Screen.Y }, Color, Name.c_str());
}