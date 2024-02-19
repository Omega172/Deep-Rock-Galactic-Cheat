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
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_ToolTip.ITM_Wardrobe_ItemSelector_ToolTip_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_Wardrobe_ItemSelector_ToolTip_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_ToolTip.ITM_Wardrobe_ItemSelector_ToolTip_C.SetText");
		
		UITM_Wardrobe_ItemSelector_ToolTip_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSelector_ToolTip.ITM_Wardrobe_ItemSelector_ToolTip_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector_ToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSelector_ToolTip_C::ExecuteUbergraph_ITM_Wardrobe_ItemSelector_ToolTip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSelector_ToolTip.ITM_Wardrobe_ItemSelector_ToolTip_C.ExecuteUbergraph_ITM_Wardrobe_ItemSelector_ToolTip");
		
		UITM_Wardrobe_ItemSelector_ToolTip_C_ExecuteUbergraph_ITM_Wardrobe_ItemSelector_ToolTip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ItemSelector_ToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ItemSelector_ToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSelector_ToolTip.ITM_Wardrobe_ItemSelector_ToolTip_C");
		return ptr;
	}

}


