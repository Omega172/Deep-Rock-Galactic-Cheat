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
	 * 		Name   -> Function TOOLTIP_MatrixCore.TOOLTIP_MatrixCore_C.FromSchematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_MatrixCore_C::FromSchematic(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_MatrixCore.TOOLTIP_MatrixCore_C.FromSchematic");
		
		UTOOLTIP_MatrixCore_C_FromSchematic_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_MatrixCore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_MatrixCore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_MatrixCore.TOOLTIP_MatrixCore_C");
		return ptr;
	}

}


