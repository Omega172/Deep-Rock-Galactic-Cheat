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
	 * 		Name   -> Function AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAIC_Jelly_Passive_Mother_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ReceiveBeginPlay");
		
		AAIC_Jelly_Passive_Mother_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ExecuteUbergraph_AIC_Jelly_Passive_Mother
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Jelly_Passive_Mother_C::ExecuteUbergraph_AIC_Jelly_Passive_Mother(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ExecuteUbergraph_AIC_Jelly_Passive_Mother");
		
		AAIC_Jelly_Passive_Mother_C_ExecuteUbergraph_AIC_Jelly_Passive_Mother_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_Jelly_Passive_Mother_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_Jelly_Passive_Mother_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C");
		return ptr;
	}

}


