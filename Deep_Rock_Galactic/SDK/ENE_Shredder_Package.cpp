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
	 * 		Name   -> Function ENE_Shredder.ENE_Shredder_C.OnFrozen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AENE_Shredder_C::OnFrozen(class AActor* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Shredder.ENE_Shredder_C.OnFrozen");
		
		AENE_Shredder_C_OnFrozen_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ENE_Shredder.ENE_Shredder_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AENE_Shredder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Shredder.ENE_Shredder_C.ReceiveBeginPlay");
		
		AENE_Shredder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ENE_Shredder.ENE_Shredder_C.ExecuteUbergraph_ENE_Shredder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AENE_Shredder_C::ExecuteUbergraph_ENE_Shredder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Shredder.ENE_Shredder_C.ExecuteUbergraph_ENE_Shredder");
		
		AENE_Shredder_C_ExecuteUbergraph_ENE_Shredder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AENE_Shredder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AENE_Shredder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ENE_Shredder.ENE_Shredder_C");
		return ptr;
	}

}


