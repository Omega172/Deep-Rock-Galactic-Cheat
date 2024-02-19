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
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyControlState_C::OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24");
		
		UBP_EnemyControlState_C_OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyControlState_C::OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24");
		
		UBP_EnemyControlState_C_OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyControlState_C::OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24");
		
		UBP_EnemyControlState_C_OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyControlState_C::OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24");
		
		UBP_EnemyControlState_C_OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyControlState_C::OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24");
		
		UBP_EnemyControlState_C_OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsControlling                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_EnemyControlState_C::OnControllingEnemy(bool IsControlling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemy");
		
		UBP_EnemyControlState_C_OnControllingEnemy_Params params {};
		params.IsControlling = IsControlling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemyAttached
	 * 		Flags  -> ()
	 */
	void UBP_EnemyControlState_C::OnControllingEnemyAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemyAttached");
		
		UBP_EnemyControlState_C_OnControllingEnemyAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyControlState.BP_EnemyControlState_C.ExecuteUbergraph_BP_EnemyControlState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_EnemyControlState_C::ExecuteUbergraph_BP_EnemyControlState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyControlState.BP_EnemyControlState_C.ExecuteUbergraph_BP_EnemyControlState");
		
		UBP_EnemyControlState_C_ExecuteUbergraph_BP_EnemyControlState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EnemyControlState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EnemyControlState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyControlState.BP_EnemyControlState_C");
		return ptr;
	}

}


