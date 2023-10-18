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
	 * 		Name   -> Function TSK_ChangeDestIfFarAwayFromPlayer.TSK_ChangeDestIfFarAwayFromPlayer_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_ChangeDestIfFarAwayFromPlayer_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_ChangeDestIfFarAwayFromPlayer.TSK_ChangeDestIfFarAwayFromPlayer_C.ReceiveExecuteAI");
		
		UTSK_ChangeDestIfFarAwayFromPlayer_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_ChangeDestIfFarAwayFromPlayer.TSK_ChangeDestIfFarAwayFromPlayer_C.ExecuteUbergraph_TSK_ChangeDestIfFarAwayFromPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_ChangeDestIfFarAwayFromPlayer_C::ExecuteUbergraph_TSK_ChangeDestIfFarAwayFromPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_ChangeDestIfFarAwayFromPlayer.TSK_ChangeDestIfFarAwayFromPlayer_C.ExecuteUbergraph_TSK_ChangeDestIfFarAwayFromPlayer");
		
		UTSK_ChangeDestIfFarAwayFromPlayer_C_ExecuteUbergraph_TSK_ChangeDestIfFarAwayFromPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTSK_ChangeDestIfFarAwayFromPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTSK_ChangeDestIfFarAwayFromPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TSK_ChangeDestIfFarAwayFromPlayer.TSK_ChangeDestIfFarAwayFromPlayer_C");
		return ptr;
	}

}


