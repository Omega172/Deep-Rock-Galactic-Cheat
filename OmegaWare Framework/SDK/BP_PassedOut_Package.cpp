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
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.AllPassedOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllPassedOut                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PassedOut_C::AllPassedOut(bool* AllPassedOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.AllPassedOut");
		
		UBP_PassedOut_C_AllPassedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllPassedOut != nullptr)
			*AllPassedOut = params.AllPassedOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_PassedOut_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay");
		
		UBP_PassedOut_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack
	 * 		Flags  -> ()
	 */
	void UBP_PassedOut_C::BeginFadeToBlack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack");
		
		UBP_PassedOut_C_BeginFadeToBlack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter
	 * 		Flags  -> ()
	 */
	void UBP_PassedOut_C::ReceiveStateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter");
		
		UBP_PassedOut_C_ReceiveStateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit
	 * 		Flags  -> ()
	 */
	void UBP_PassedOut_C::ReceiveStateExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit");
		
		UBP_PassedOut_C_ReceiveStateExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box
	 * 		Flags  -> ()
	 */
	void UBP_PassedOut_C::TurnOffJukeBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box");
		
		UBP_PassedOut_C_TurnOffJukeBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs
	 * 		Flags  -> ()
	 */
	void UBP_PassedOut_C::RemoveDrinkingMugs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs");
		
		UBP_PassedOut_C_RemoveDrinkingMugs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut
	 * 		Flags  -> ()
	 */
	void UBP_PassedOut_C::ReceiveTeamPassedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut");
		
		UBP_PassedOut_C_ReceiveTeamPassedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PassedOut_C::ExecuteUbergraph_BP_PassedOut(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut");
		
		UBP_PassedOut_C_ExecuteUbergraph_BP_PassedOut_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PassedOut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PassedOut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C");
		return ptr;
	}

}


