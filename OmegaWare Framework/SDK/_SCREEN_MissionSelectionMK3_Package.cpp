/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableMissions
	 * 		Flags  -> ()
	 */
	TArray<class UGeneratedMission*> U_SCREEN_MissionSelectionMK3_C::GetAvailableMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableMissions");
		
		U_SCREEN_MissionSelectionMK3_C_GetAvailableMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HighlightChallenges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             AssetReferences                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldHighlight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USeasonChallenge*                            Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::HighlightChallenges(TArray<class UObject*> AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HighlightChallenges");
		
		U_SCREEN_MissionSelectionMK3_C_HighlightChallenges_Params params {};
		params.AssetReferences = AssetReferences;
		params.ShouldHighlight = ShouldHighlight;
		params.Challenge = Challenge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::ClearServerListMissionRestrictions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions");
		
		U_SCREEN_MissionSelectionMK3_C_ClearServerListMissionRestrictions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply U_SCREEN_MissionSelectionMK3_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp");
		
		U_SCREEN_MissionSelectionMK3_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SnapToMouse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_SCREEN_MissionSelectionMK3_C::UpdateMapPan(bool SnapToMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan");
		
		U_SCREEN_MissionSelectionMK3_C_UpdateMapPan_Params params {};
		params.SnapToMouse = SnapToMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::CheckForNewZones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones");
		
		U_SCREEN_MissionSelectionMK3_C_CheckForNewZones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UITM_MisSel_Biome_C*>                 AvailableBiomes1                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void U_SCREEN_MissionSelectionMK3_C::GetAvailableBiomes(TArray<class UITM_MisSel_Biome_C*>* AvailableBiomes1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes");
		
		U_SCREEN_MissionSelectionMK3_C_GetAvailableBiomes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableBiomes1 != nullptr)
			*AvailableBiomes1 = params.AvailableBiomes1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionSelection_Mode                             Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::GetMode(EMissionSelection_Mode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode");
		
		U_SCREEN_MissionSelectionMK3_C_GetMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_SCREEN_MissionSelectionMK3_C::ShouldEnableQuickJoin(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin");
		
		U_SCREEN_MissionSelectionMK3_C_ShouldEnableQuickJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::HandleButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility");
		
		U_SCREEN_MissionSelectionMK3_C_HandleButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::GetMission_CheckBiome(class UGeneratedMission** mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome");
		
		U_SCREEN_MissionSelectionMK3_C_GetMission_CheckBiome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mission != nullptr)
			*mission = params.mission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply U_SCREEN_MissionSelectionMK3_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp");
		
		U_SCREEN_MissionSelectionMK3_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::GetMission(class UGeneratedMission** mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission");
		
		U_SCREEN_MissionSelectionMK3_C_GetMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mission != nullptr)
			*mission = params.mission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool U_SCREEN_MissionSelectionMK3_C::IsMissionLocked(class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked");
		
		U_SCREEN_MissionSelectionMK3_C_IsMissionLocked_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionSelection_Mode                             NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::GetActiveSelectionMode(EMissionSelection_Mode* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode");
		
		U_SCREEN_MissionSelectionMK3_C_GetActiveSelectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerController_SpaceRig_C*             AsBPPlayerControllerSpaceRig                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::GetController(class ABP_PlayerController_SpaceRig_C** AsBPPlayerControllerSpaceRig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController");
		
		U_SCREEN_MissionSelectionMK3_C_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPPlayerControllerSpaceRig != nullptr)
			*AsBPPlayerControllerSpaceRig = params.AsBPPlayerControllerSpaceRig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBiome*                                      Biome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UITM_MisSel_Biome_C*                         ArrayElement                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::GetMissionBiome(class UBiome* Biome, class UITM_MisSel_Biome_C** ArrayElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome");
		
		U_SCREEN_MissionSelectionMK3_C_GetMissionBiome_Params params {};
		params.Biome = Biome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayElement != nullptr)
			*ArrayElement = params.ArrayElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::OnFailure_ED6FBDF64F71976389535788275C482E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E");
		
		U_SCREEN_MissionSelectionMK3_C_OnFailure_ED6FBDF64F71976389535788275C482E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::OnSuccess_ED6FBDF64F71976389535788275C482E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E");
		
		U_SCREEN_MissionSelectionMK3_C_OnSuccess_ED6FBDF64F71976389535788275C482E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_SCREEN_MissionSelectionMK3_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct");
		
		U_SCREEN_MissionSelectionMK3_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct");
		
		U_SCREEN_MissionSelectionMK3_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_MisSel_Biome_C*                         Biome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::BiomeHovered(class UITM_MisSel_Biome_C* Biome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered");
		
		U_SCREEN_MissionSelectionMK3_C_BiomeHovered_Params params {};
		params.Biome = Biome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_MisSel_Biome_C*                         Biome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::BiomeSelected(class UITM_MisSel_Biome_C* Biome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected");
		
		U_SCREEN_MissionSelectionMK3_C_BiomeSelected_Params params {};
		params.Biome = Biome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::ShowMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission");
		
		U_SCREEN_MissionSelectionMK3_C_ShowMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::ShowPlanet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet");
		
		U_SCREEN_MissionSelectionMK3_C_ShowPlanet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHovering                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_SCREEN_MissionSelectionMK3_C::MissionHover(class UGeneratedMission* mission, bool IsHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover");
		
		U_SCREEN_MissionSelectionMK3_C_MissionHover_Params params {};
		params.mission = mission;
		params.IsHovering = IsHovering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::StartMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission");
		
		U_SCREEN_MissionSelectionMK3_C_StartMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::OnStartMission_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1");
		
		U_SCREEN_MissionSelectionMK3_C_OnStartMission_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionSelection_Mode                             Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::ShowMode(EMissionSelection_Mode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode");
		
		U_SCREEN_MissionSelectionMK3_C_ShowMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back");
		
		U_SCREEN_MissionSelectionMK3_C_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::ShowServerBrowser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser");
		
		U_SCREEN_MissionSelectionMK3_C_ShowServerBrowser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFSDInputSource                                    InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::InputSourceChanged(EFSDInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged");
		
		U_SCREEN_MissionSelectionMK3_C_InputSourceChanged_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown");
		
		U_SCREEN_MissionSelectionMK3_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick");
		
		U_SCREEN_MissionSelectionMK3_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_MisSel_MissionMapIcon_C*                mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::MissionSelected(class UITM_MisSel_MissionMapIcon_C* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected");
		
		U_SCREEN_MissionSelectionMK3_C_MissionSelected_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::StartSoloMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission");
		
		U_SCREEN_MissionSelectionMK3_C_StartSoloMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed");
		
		U_SCREEN_MissionSelectionMK3_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DifficultyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDifficultySetting*                          NewDifficulty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::DifficultyChanged(class UDifficultySetting* NewDifficulty, class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DifficultyChanged");
		
		U_SCREEN_MissionSelectionMK3_C_DifficultyChanged_Params params {};
		params.NewDifficulty = NewDifficulty;
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::StartupCameraPan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan");
		
		U_SCREEN_MissionSelectionMK3_C_StartupCameraPan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartSoloMission
	 * 		Flags  -> ()
	 */
	void U_SCREEN_MissionSelectionMK3_C::OnStartSoloMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartSoloMission");
		
		U_SCREEN_MissionSelectionMK3_C_OnStartSoloMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             AssetReferences                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USeasonChallenge*                            Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature(TArray<class UObject*>* AssetReferences, bool InHovered, class USeasonChallenge* Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature");
		
		U_SCREEN_MissionSelectionMK3_C_BndEvt__ITM_Challenge_InfoBox_K2Node_ComponentBoundEvent_1_OnChallengeHovered__DelegateSignature_Params params {};
		params.InHovered = InHovered;
		params.Challenge = Challenge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetReferences != nullptr)
			*AssetReferences = params.AssetReferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_SCREEN_MissionSelectionMK3_C::ExecuteUbergraph__SCREEN_MissionSelectionMK3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3");
		
		U_SCREEN_MissionSelectionMK3_C_ExecuteUbergraph__SCREEN_MissionSelectionMK3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction U_SCREEN_MissionSelectionMK3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U_SCREEN_MissionSelectionMK3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C");
		return ptr;
	}

}


