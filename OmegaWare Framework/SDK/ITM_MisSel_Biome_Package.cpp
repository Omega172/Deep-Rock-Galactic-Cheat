/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetSoundCoordinate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SoundWorldPos                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_Biome_C::GetSoundCoordinate(struct FVector* SoundWorldPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetSoundCoordinate");
		
		UITM_MisSel_Biome_C_GetSoundCoordinate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoundWorldPos != nullptr)
			*SoundWorldPos = params.SoundWorldPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_Biome_C::SetCampaignVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity");
		
		UITM_MisSel_Biome_C_SetCampaignVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked
	 * 		Flags  -> ()
	 */
	bool UITM_MisSel_Biome_C::IsUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked");
		
		UITM_MisSel_Biome_C_IsUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UGeneratedMission*>                   Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_MisSel_Biome_C::CreateMissionIcons(TArray<class UGeneratedMission*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons");
		
		UITM_MisSel_Biome_C_CreateMissionIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions
	 * 		Flags  -> ()
	 */
	bool UITM_MisSel_Biome_C::HasMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions");
		
		UITM_MisSel_Biome_C_HasMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerController_SpaceRig_C*             AsBPPlayerControllerSpaceRig                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_Biome_C::GetController(class ABP_PlayerController_SpaceRig_C** AsBPPlayerControllerSpaceRig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController");
		
		UITM_MisSel_Biome_C_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPPlayerControllerSpaceRig != nullptr)
			*AsBPPlayerControllerSpaceRig = params.AsBPPlayerControllerSpaceRig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UGeneratedMission*>                   missions                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<class UMissionTemplate*, int32_t>             MissionCount1                                              (Parm, OutParm)
	 */
	void UITM_MisSel_Biome_C::SortMissions(TArray<class UGeneratedMission*>* missions, TMap<class UMissionTemplate*, int32_t>* MissionCount1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions");
		
		UITM_MisSel_Biome_C_SortMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (missions != nullptr)
			*missions = params.missions;
		if (MissionCount1 != nullptr)
			*MissionCount1 = params.MissionCount1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UGeneratedMission*>                   Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UGeneratedMission*>                   missions                                                   (Parm, OutParm)
	 */
	void UITM_MisSel_Biome_C::GetMissionsForBiome(TArray<class UGeneratedMission*>* Array, TArray<class UGeneratedMission*>* missions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome");
		
		UITM_MisSel_Biome_C_GetMissionsForBiome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (missions != nullptr)
			*missions = params.missions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_Biome_C::Unselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect");
		
		UITM_MisSel_Biome_C_Unselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_Biome_C::Select()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select");
		
		UITM_MisSel_Biome_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_Biome_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct");
		
		UITM_MisSel_Biome_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_Biome_C::BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_Biome_C::BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");
		
		UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UGeneratedMission*>                   missions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsNewBiome                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            BiomeIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_Biome_C::SetData(TArray<class UGeneratedMission*> missions, bool IsNewBiome, int32_t BiomeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData");
		
		UITM_MisSel_Biome_C_SetData_Params params {};
		params.missions = missions;
		params.IsNewBiome = IsNewBiome;
		params.BiomeIndex = BiomeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_Biome_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UITM_MisSel_Biome_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_Biome_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Tick");
		
		UITM_MisSel_Biome_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowUnlockZone
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_Biome_C::ShowUnlockZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowUnlockZone");
		
		UITM_MisSel_Biome_C_ShowUnlockZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowChallengeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_Biome_C::ShowChallengeIcon(bool InShow, class UTexture2D* Icon, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowChallengeIcon");
		
		UITM_MisSel_Biome_C_ShowChallengeIcon_Params params {};
		params.InShow = InShow;
		params.Icon = Icon;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_Biome_C::ExecuteUbergraph_ITM_MisSel_Biome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome");
		
		UITM_MisSel_Biome_C_ExecuteUbergraph_ITM_MisSel_Biome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_MisSel_Biome_C*                         Biome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_Biome_C::BiomeSelected__DelegateSignature(class UITM_MisSel_Biome_C* Biome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature");
		
		UITM_MisSel_Biome_C_BiomeSelected__DelegateSignature_Params params {};
		params.Biome = Biome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_Biome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_Biome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_Biome.ITM_MisSel_Biome_C");
		return ptr;
	}

}


