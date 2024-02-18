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
	 * 		Name   -> Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Phys_Newsstand_FreeBeer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.ReceiveBeginPlay");
		
		ABP_Phys_Newsstand_FreeBeer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.SetEventMaterial
	 * 		Flags  -> ()
	 */
	void ABP_Phys_Newsstand_FreeBeer_C::SetEventMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.SetEventMaterial");
		
		ABP_Phys_Newsstand_FreeBeer_C_SetEventMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.TrySetupEventText
	 * 		Flags  -> ()
	 */
	void ABP_Phys_Newsstand_FreeBeer_C::TrySetupEventText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.TrySetupEventText");
		
		ABP_Phys_Newsstand_FreeBeer_C_TrySetupEventText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.ExecuteUbergraph_BP_Phys_Newsstand_FreeBeer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Phys_Newsstand_FreeBeer_C::ExecuteUbergraph_BP_Phys_Newsstand_FreeBeer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C.ExecuteUbergraph_BP_Phys_Newsstand_FreeBeer");
		
		ABP_Phys_Newsstand_FreeBeer_C_ExecuteUbergraph_BP_Phys_Newsstand_FreeBeer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Phys_Newsstand_FreeBeer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Phys_Newsstand_FreeBeer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Phys_Newsstand_FreeBeer.BP_Phys_Newsstand_FreeBeer_C");
		return ptr;
	}

}


