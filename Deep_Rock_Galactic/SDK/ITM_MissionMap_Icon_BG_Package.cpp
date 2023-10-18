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
	 * 		Name   -> Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MissionMap_Icon_BG_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PreConstruct");
		
		UITM_MissionMap_Icon_BG_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PlayDoubleWarning
	 * 		Flags  -> ()
	 */
	void UITM_MissionMap_Icon_BG_C::PlayDoubleWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PlayDoubleWarning");
		
		UITM_MissionMap_Icon_BG_C_PlayDoubleWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.ExecuteUbergraph_ITM_MissionMap_Icon_BG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MissionMap_Icon_BG_C::ExecuteUbergraph_ITM_MissionMap_Icon_BG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.ExecuteUbergraph_ITM_MissionMap_Icon_BG");
		
		UITM_MissionMap_Icon_BG_C_ExecuteUbergraph_ITM_MissionMap_Icon_BG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MissionMap_Icon_BG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MissionMap_Icon_BG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C");
		return ptr;
	}

}


