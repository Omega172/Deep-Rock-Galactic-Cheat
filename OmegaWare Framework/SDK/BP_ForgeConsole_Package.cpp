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
	 * 		Name   -> Function BP_ForgeConsole.BP_ForgeConsole_C.OnWindowCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               WindowWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ForgeConsole_C::OnWindowCreated(class UWindowWidget* WindowWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForgeConsole.BP_ForgeConsole_C.OnWindowCreated");
		
		ABP_ForgeConsole_C_OnWindowCreated_Params params {};
		params.WindowWidget = WindowWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ForgeConsole.BP_ForgeConsole_C.UpdateNotificationBanner
	 * 		Flags  -> ()
	 */
	void ABP_ForgeConsole_C::UpdateNotificationBanner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForgeConsole.BP_ForgeConsole_C.UpdateNotificationBanner");
		
		ABP_ForgeConsole_C_UpdateNotificationBanner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ForgeConsole.BP_ForgeConsole_C.ExecuteUbergraph_BP_ForgeConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ForgeConsole_C::ExecuteUbergraph_BP_ForgeConsole(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ForgeConsole.BP_ForgeConsole_C.ExecuteUbergraph_BP_ForgeConsole");
		
		ABP_ForgeConsole_C_ExecuteUbergraph_BP_ForgeConsole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ForgeConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ForgeConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ForgeConsole.BP_ForgeConsole_C");
		return ptr;
	}

}


