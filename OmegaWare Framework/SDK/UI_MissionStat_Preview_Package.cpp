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
	 * 		Name   -> Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MissionStat_Preview_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct");
		
		UUI_MissionStat_Preview_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStat_Preview_C::SetMissionStat(class UMissionStat* MissionStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat");
		
		UUI_MissionStat_Preview_C_SetMissionStat_Params params {};
		params.MissionStat = MissionStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStat_Preview_C::ExecuteUbergraph_UI_MissionStat_Preview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview");
		
		UUI_MissionStat_Preview_C_ExecuteUbergraph_UI_MissionStat_Preview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MissionStat_Preview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MissionStat_Preview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MissionStat_Preview.UI_MissionStat_Preview_C");
		return ptr;
	}

}


