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
	 * 		Name   -> Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.IsAnyMissionCampaign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UGeneratedMission*>                   missions                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOnMission                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Campaign_Icon_C::IsAnyMissionCampaign(TArray<class UGeneratedMission*>* missions, class AFSDPlayerState* Player, bool* IsOnMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.IsAnyMissionCampaign");
		
		UITM_Campaign_Icon_C_IsAnyMissionCampaign_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (missions != nullptr)
			*missions = params.missions;
		if (IsOnMission != nullptr)
			*IsOnMission = params.IsOnMission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Campaign_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.PreConstruct");
		
		UITM_Campaign_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.SetCampaignIconData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UGeneratedMission*>                   missions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_Campaign_Icon_C::SetCampaignIconData(TArray<class UGeneratedMission*> missions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.SetCampaignIconData");
		
		UITM_Campaign_Icon_C_SetCampaignIconData_Params params {};
		params.missions = missions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.ExecuteUbergraph_ITM_Campaign_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Campaign_Icon_C::ExecuteUbergraph_ITM_Campaign_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.ExecuteUbergraph_ITM_Campaign_Icon");
		
		UITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Campaign_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Campaign_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Campaign_Icon.ITM_Campaign_Icon_C");
		return ptr;
	}

}


