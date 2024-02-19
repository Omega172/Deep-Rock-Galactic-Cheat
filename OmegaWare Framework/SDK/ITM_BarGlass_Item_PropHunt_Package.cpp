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
	 * 		Name   -> Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.Refresh
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_PropHunt_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.Refresh");
		
		AITM_BarGlass_Item_PropHunt_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_PropHunt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ReceiveBeginPlay");
		
		AITM_BarGlass_Item_PropHunt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ReceiveConsumed
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_PropHunt_C::ReceiveConsumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ReceiveConsumed");
		
		AITM_BarGlass_Item_PropHunt_C_ReceiveConsumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ExecuteUbergraph_ITM_BarGlass_Item_PropHunt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_BarGlass_Item_PropHunt_C::ExecuteUbergraph_ITM_BarGlass_Item_PropHunt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C.ExecuteUbergraph_ITM_BarGlass_Item_PropHunt");
		
		AITM_BarGlass_Item_PropHunt_C_ExecuteUbergraph_ITM_BarGlass_Item_PropHunt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_BarGlass_Item_PropHunt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_BarGlass_Item_PropHunt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_BarGlass_Item_PropHunt.ITM_BarGlass_Item_PropHunt_C");
		return ptr;
	}

}


