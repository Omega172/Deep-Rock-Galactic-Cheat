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
	 * 		Name   -> Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.SetCase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADisplayCase*                                Case                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Biotank_DisplayName_C::SetCase(class ADisplayCase* Case)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.SetCase");
		
		UWidget_Biotank_DisplayName_C_SetCase_Params params {};
		params.Case = Case;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.ContentUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDisplayContent                             Content                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_Biotank_DisplayName_C::ContentUpdated(const struct FDisplayContent& Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.ContentUpdated");
		
		UWidget_Biotank_DisplayName_C_ContentUpdated_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.ExecuteUbergraph_Widget_Biotank_DisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Biotank_DisplayName_C::ExecuteUbergraph_Widget_Biotank_DisplayName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C.ExecuteUbergraph_Widget_Biotank_DisplayName");
		
		UWidget_Biotank_DisplayName_C_ExecuteUbergraph_Widget_Biotank_DisplayName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Biotank_DisplayName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Biotank_DisplayName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C");
		return ptr;
	}

}


