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
	 * 		Name   -> Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetDifficultyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDifficultySetting*                          Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MissionBar_Normal_C::SetDifficultyData(class UDifficultySetting* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetDifficultyData");
		
		UWND_MissionBar_Normal_C_SetDifficultyData_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CampaignMission                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AreRestrictionsMet                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_MissionBar_Normal_C::CampaignChecks(class UGeneratedMission* mission, bool* CampaignMission, bool* AreRestrictionsMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.CampaignChecks");
		
		UWND_MissionBar_Normal_C_CampaignChecks_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CampaignMission != nullptr)
			*CampaignMission = params.CampaignMission;
		if (AreRestrictionsMet != nullptr)
			*AreRestrictionsMet = params.AreRestrictionsMet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MissionBar_Normal_C::SetGeneratedMission(class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.SetGeneratedMission");
		
		UWND_MissionBar_Normal_C_SetGeneratedMission_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_MissionBar_Normal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.PreConstruct");
		
		UWND_MissionBar_Normal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct
	 * 		Flags  -> ()
	 */
	void UWND_MissionBar_Normal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.Construct");
		
		UWND_MissionBar_Normal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.OnDifficultyChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDifficultySetting*                          Setting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MissionBar_Normal_C::OnDifficultyChanged_Event_1(class UDifficultySetting* Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.OnDifficultyChanged_Event_1");
		
		UWND_MissionBar_Normal_C_OnDifficultyChanged_Event_1_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_MissionBar_Normal_C::ExecuteUbergraph_WND_MissionBar_Normal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_MissionBar_Normal.WND_MissionBar_Normal_C.ExecuteUbergraph_WND_MissionBar_Normal");
		
		UWND_MissionBar_Normal_C_ExecuteUbergraph_WND_MissionBar_Normal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_MissionBar_Normal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_MissionBar_Normal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_MissionBar_Normal.WND_MissionBar_Normal_C");
		return ptr;
	}

}


