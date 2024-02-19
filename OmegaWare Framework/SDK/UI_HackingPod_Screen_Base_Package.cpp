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
	 * 		Name   -> Function UI_HackingPod_Screen_Base.UI_HackingPod_Screen_Base_C.HackingStarted
	 * 		Flags  -> ()
	 */
	void UUI_HackingPod_Screen_Base_C::HackingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HackingPod_Screen_Base.UI_HackingPod_Screen_Base_C.HackingStarted");
		
		UUI_HackingPod_Screen_Base_C_HackingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HackingPod_Screen_Base.UI_HackingPod_Screen_Base_C.ExecuteUbergraph_UI_HackingPod_Screen_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HackingPod_Screen_Base_C::ExecuteUbergraph_UI_HackingPod_Screen_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HackingPod_Screen_Base.UI_HackingPod_Screen_Base_C.ExecuteUbergraph_UI_HackingPod_Screen_Base");
		
		UUI_HackingPod_Screen_Base_C_ExecuteUbergraph_UI_HackingPod_Screen_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HackingPod_Screen_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HackingPod_Screen_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HackingPod_Screen_Base.UI_HackingPod_Screen_Base_C");
		return ptr;
	}

}


