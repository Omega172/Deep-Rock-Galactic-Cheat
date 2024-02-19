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
	 * 		Name   -> Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DonkeyDestinationMarker_C::ActivateAtPosition(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition");
		
		ABP_DonkeyDestinationMarker_C_ActivateAtPosition_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker
	 * 		Flags  -> ()
	 */
	void ABP_DonkeyDestinationMarker_C::HideMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker");
		
		ABP_DonkeyDestinationMarker_C_HideMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DonkeyDestinationMarker_C::ExecuteUbergraph_BP_DonkeyDestinationMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker");
		
		ABP_DonkeyDestinationMarker_C_ExecuteUbergraph_BP_DonkeyDestinationMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DonkeyDestinationMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DonkeyDestinationMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C");
		return ptr;
	}

}


