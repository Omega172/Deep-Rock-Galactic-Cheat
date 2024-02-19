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
	 * 		Name   -> Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.Set Header Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_Menu_LargeWindowWithHeader_C::SetHeaderText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.Set Header Text");
		
		UBasic_Menu_LargeWindowWithHeader_C_SetHeaderText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Menu_LargeWindowWithHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.PreConstruct");
		
		UBasic_Menu_LargeWindowWithHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.Construct
	 * 		Flags  -> ()
	 */
	void UBasic_Menu_LargeWindowWithHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.Construct");
		
		UBasic_Menu_LargeWindowWithHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Menu_LargeWindowWithHeader_C::ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader");
		
		UBasic_Menu_LargeWindowWithHeader_C_ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_Menu_LargeWindowWithHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_Menu_LargeWindowWithHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_Menu_LargeWindowWithHeader.Basic_Menu_LargeWindowWithHeader_C");
		return ptr;
	}

}


