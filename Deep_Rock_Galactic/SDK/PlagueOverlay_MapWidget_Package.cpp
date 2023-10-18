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
	 * 		Name   -> Function PlagueOverlay_MapWidget.PlagueOverlay_MapWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlagueOverlay_MapWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlagueOverlay_MapWidget.PlagueOverlay_MapWidget_C.PreConstruct");
		
		UPlagueOverlay_MapWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlagueOverlay_MapWidget.PlagueOverlay_MapWidget_C.ExecuteUbergraph_PlagueOverlay_MapWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlagueOverlay_MapWidget_C::ExecuteUbergraph_PlagueOverlay_MapWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlagueOverlay_MapWidget.PlagueOverlay_MapWidget_C.ExecuteUbergraph_PlagueOverlay_MapWidget");
		
		UPlagueOverlay_MapWidget_C_ExecuteUbergraph_PlagueOverlay_MapWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlagueOverlay_MapWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlagueOverlay_MapWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlagueOverlay_MapWidget.PlagueOverlay_MapWidget_C");
		return ptr;
	}

}


