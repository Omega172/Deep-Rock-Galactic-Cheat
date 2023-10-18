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
	 * 		Name   -> Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Menu_LargeWindowNoHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.PreConstruct");
		
		UBasic_Menu_LargeWindowNoHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.Construct
	 * 		Flags  -> ()
	 */
	void UBasic_Menu_LargeWindowNoHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.Construct");
		
		UBasic_Menu_LargeWindowNoHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Menu_LargeWindowNoHeader_C::ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader");
		
		UBasic_Menu_LargeWindowNoHeader_C_ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_Menu_LargeWindowNoHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_Menu_LargeWindowNoHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C");
		return ptr;
	}

}


