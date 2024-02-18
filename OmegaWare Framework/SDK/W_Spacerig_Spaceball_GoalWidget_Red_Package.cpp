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
	 * 		Name   -> Function W_Spacerig_Spaceball_GoalWidget_Red.W_Spacerig_Spaceball_GoalWidget_Red_C.SetMaterial
	 * 		Flags  -> ()
	 */
	void UW_Spacerig_Spaceball_GoalWidget_Red_C::SetMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Spacerig_Spaceball_GoalWidget_Red.W_Spacerig_Spaceball_GoalWidget_Red_C.SetMaterial");
		
		UW_Spacerig_Spaceball_GoalWidget_Red_C_SetMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Spacerig_Spaceball_GoalWidget_Red.W_Spacerig_Spaceball_GoalWidget_Red_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_Spacerig_Spaceball_GoalWidget_Red_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Spacerig_Spaceball_GoalWidget_Red.W_Spacerig_Spaceball_GoalWidget_Red_C.SetText");
		
		UW_Spacerig_Spaceball_GoalWidget_Red_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Spacerig_Spaceball_GoalWidget_Red_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Spacerig_Spaceball_GoalWidget_Red_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Spacerig_Spaceball_GoalWidget_Red.W_Spacerig_Spaceball_GoalWidget_Red_C");
		return ptr;
	}

}


