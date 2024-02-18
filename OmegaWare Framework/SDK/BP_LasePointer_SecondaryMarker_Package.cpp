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
	 * 		Name   -> Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.UpdateMaterial
	 * 		Flags  -> ()
	 */
	void ABP_LasePointer_SecondaryMarker_C::UpdateMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.UpdateMaterial");
		
		ABP_LasePointer_SecondaryMarker_C_UpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.ExecuteUbergraph_BP_LasePointer_SecondaryMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LasePointer_SecondaryMarker_C::ExecuteUbergraph_BP_LasePointer_SecondaryMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.ExecuteUbergraph_BP_LasePointer_SecondaryMarker");
		
		ABP_LasePointer_SecondaryMarker_C_ExecuteUbergraph_BP_LasePointer_SecondaryMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LasePointer_SecondaryMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LasePointer_SecondaryMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C");
		return ptr;
	}

}


