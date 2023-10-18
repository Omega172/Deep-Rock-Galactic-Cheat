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
	 * 		Name   -> Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.Construct
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Incapacitated_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.Construct");
		
		UScreenOverlay_Incapacitated_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.StartAnim
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Incapacitated_C::StartAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.StartAnim");
		
		UScreenOverlay_Incapacitated_C_StartAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Incapacitated_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.StopAnim");
		
		UScreenOverlay_Incapacitated_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.ExecuteUbergraph_ScreenOverlay_Incapacitated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Incapacitated_C::ExecuteUbergraph_ScreenOverlay_Incapacitated(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.ExecuteUbergraph_ScreenOverlay_Incapacitated");
		
		UScreenOverlay_Incapacitated_C_ExecuteUbergraph_ScreenOverlay_Incapacitated_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreenOverlay_Incapacitated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenOverlay_Incapacitated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C");
		return ptr;
	}

}


