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
	 * 		Name   -> Function Widget_Biotank_Data.Widget_Biotank_Data_C.Construct
	 * 		Flags  -> ()
	 */
	void UWidget_Biotank_Data_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Biotank_Data.Widget_Biotank_Data_C.Construct");
		
		UWidget_Biotank_Data_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_Biotank_Data.Widget_Biotank_Data_C.HackingStarted
	 * 		Flags  -> ()
	 */
	void UWidget_Biotank_Data_C::HackingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Biotank_Data.Widget_Biotank_Data_C.HackingStarted");
		
		UWidget_Biotank_Data_C_HackingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_Biotank_Data.Widget_Biotank_Data_C.ExecuteUbergraph_Widget_Biotank_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Biotank_Data_C::ExecuteUbergraph_Widget_Biotank_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Biotank_Data.Widget_Biotank_Data_C.ExecuteUbergraph_Widget_Biotank_Data");
		
		UWidget_Biotank_Data_C_ExecuteUbergraph_Widget_Biotank_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Biotank_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Biotank_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Biotank_Data.Widget_Biotank_Data_C");
		return ptr;
	}

}


