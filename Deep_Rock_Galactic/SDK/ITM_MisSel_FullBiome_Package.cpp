/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.HighlightMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             AssetReferences                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldHighlight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USeasonChallenge*                            Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_FullBiome_C::HighlightMissions(TArray<class UObject*>* AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.HighlightMissions");
		
		UITM_MisSel_FullBiome_C_HighlightMissions_Params params {};
		params.ShouldHighlight = ShouldHighlight;
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
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.UpdateMapPan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_FullBiome_C::UpdateMapPan(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.UpdateMapPan");
		
		UITM_MisSel_FullBiome_C_UpdateMapPan_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_MisSel_MissionMapIcon_C*                Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_FullBiome_C::GetRandomFreeMissionSlot(class UITM_MisSel_MissionMapIcon_C** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot");
		
		UITM_MisSel_FullBiome_C_GetRandomFreeMissionSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_FullBiome_C::ClearMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions");
		
		UITM_MisSel_FullBiome_C_ClearMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UITM_MisSel_MissionMapIcon_C*>        Items1                                                     (Parm, OutParm, ContainsInstancedReference)
	 */
	void UITM_MisSel_FullBiome_C::GetAllAllMissionSlots(TArray<class UITM_MisSel_MissionMapIcon_C*>* Items1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots");
		
		UITM_MisSel_FullBiome_C_GetAllAllMissionSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items1 != nullptr)
			*Items1 = params.Items1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_FullBiome_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct");
		
		UITM_MisSel_FullBiome_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UGeneratedMission*>                   missions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UBiome*                                      Biome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_FullBiome_C::SetData(TArray<class UGeneratedMission*> missions, class UBiome* Biome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData");
		
		UITM_MisSel_FullBiome_C_SetData_Params params {};
		params.missions = missions;
		params.Biome = Biome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_FullBiome_C::ExecuteUbergraph_ITM_MisSel_FullBiome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome");
		
		UITM_MisSel_FullBiome_C_ExecuteUbergraph_ITM_MisSel_FullBiome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_FullBiome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_FullBiome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C");
		return ptr;
	}

}


