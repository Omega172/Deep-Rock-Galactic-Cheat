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
	 * 		Name   -> Function SER_GetEnemyTarget_Chance.SER_GetEnemyTarget_Chance_C.GetEnemyTargetChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FromAcor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USER_GetEnemyTarget_Chance_C::GetEnemyTargetChance(class AActor* FromAcor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SER_GetEnemyTarget_Chance.SER_GetEnemyTarget_Chance_C.GetEnemyTargetChance");
		
		USER_GetEnemyTarget_Chance_C_GetEnemyTargetChance_Params params {};
		params.FromAcor = FromAcor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SER_GetEnemyTarget_Chance.SER_GetEnemyTarget_Chance_C.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USER_GetEnemyTarget_Chance_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SER_GetEnemyTarget_Chance.SER_GetEnemyTarget_Chance_C.ReceiveTickAI");
		
		USER_GetEnemyTarget_Chance_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SER_GetEnemyTarget_Chance.SER_GetEnemyTarget_Chance_C.ExecuteUbergraph_SER_GetEnemyTarget_Chance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USER_GetEnemyTarget_Chance_C::ExecuteUbergraph_SER_GetEnemyTarget_Chance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SER_GetEnemyTarget_Chance.SER_GetEnemyTarget_Chance_C.ExecuteUbergraph_SER_GetEnemyTarget_Chance");
		
		USER_GetEnemyTarget_Chance_C_ExecuteUbergraph_SER_GetEnemyTarget_Chance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USER_GetEnemyTarget_Chance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USER_GetEnemyTarget_Chance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SER_GetEnemyTarget_Chance.SER_GetEnemyTarget_Chance_C");
		return ptr;
	}

}


