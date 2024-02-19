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
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.GetDanagerLocation
	 * 		Flags  -> ()
	 */
	struct FVector UTSK_FleeFrom_C::GetDanagerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.GetDanagerLocation");
		
		UTSK_FleeFrom_C_GetDanagerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FleeFrom_C::SetFleeFalse(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse");
		
		UTSK_FleeFrom_C_SetFleeFalse_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTSK_FleeFrom_C::OutsideDanger(class AActor* Pawn, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger");
		
		UTSK_FleeFrom_C_OutsideDanger_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FleeFrom_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI");
		
		UTSK_FleeFrom_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTSK_FleeFrom_C::PathDone(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone");
		
		UTSK_FleeFrom_C_PathDone_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest
	 * 		Flags  -> ()
	 */
	void UTSK_FleeFrom_C::RefreshDest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest");
		
		UTSK_FleeFrom_C_RefreshDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FleeFrom_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI");
		
		UTSK_FleeFrom_C_ReceiveAbortAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FleeFrom_C::ExecuteUbergraph_TSK_FleeFrom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom");
		
		UTSK_FleeFrom_C_ExecuteUbergraph_TSK_FleeFrom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTSK_FleeFrom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTSK_FleeFrom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TSK_FleeFrom.TSK_FleeFrom_C");
		return ptr;
	}

}


