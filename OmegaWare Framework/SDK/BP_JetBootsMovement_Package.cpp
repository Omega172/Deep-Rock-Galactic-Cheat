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
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.FuelUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              jetFuel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_JetBootsMovement_C::FuelUpdated_Event_1(float jetFuel, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.FuelUpdated_Event_1");
		
		UBP_JetBootsMovement_C_FuelUpdated_Event_1_Params params {};
		params.jetFuel = jetFuel;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnCharacterSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_JetBootsMovement_C::Receive_OnCharacterSet(class APlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnCharacterSet");
		
		UBP_JetBootsMovement_C_Receive_OnCharacterSet_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromTakeOff                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_JetBootsMovement_C::Receive_OnActiveChangedLocal(bool IsActive, bool fromTakeOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedLocal");
		
		UBP_JetBootsMovement_C_Receive_OnActiveChangedLocal_Params params {};
		params.IsActive = IsActive;
		params.fromTakeOff = fromTakeOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.BindToFuelUsed
	 * 		Flags  -> ()
	 */
	void UBP_JetBootsMovement_C::BindToFuelUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.BindToFuelUsed");
		
		UBP_JetBootsMovement_C_BindToFuelUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.OnFuelUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              jetFuel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_JetBootsMovement_C::OnFuelUsed(float jetFuel, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.OnFuelUsed");
		
		UBP_JetBootsMovement_C_OnFuelUsed_Params params {};
		params.jetFuel = jetFuel;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnDestroy
	 * 		Flags  -> ()
	 */
	void UBP_JetBootsMovement_C::Receive_OnDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnDestroy");
		
		UBP_JetBootsMovement_C_Receive_OnDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnOverheatedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_JetBootsMovement_C::Receive_OnOverheatedChanged(bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnOverheatedChanged");
		
		UBP_JetBootsMovement_C_Receive_OnOverheatedChanged_Params params {};
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedNonLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromTakeOff                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_JetBootsMovement_C::Receive_OnActiveChangedNonLocal(bool IsActive, bool fromTakeOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedNonLocal");
		
		UBP_JetBootsMovement_C_Receive_OnActiveChangedNonLocal_Params params {};
		params.IsActive = IsActive;
		params.fromTakeOff = fromTakeOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnTakeOffLocal
	 * 		Flags  -> ()
	 */
	void UBP_JetBootsMovement_C::Receive_OnTakeOffLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnTakeOffLocal");
		
		UBP_JetBootsMovement_C_Receive_OnTakeOffLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               fromTakeOff                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_JetBootsMovement_C::Receive_OnActiveChangedServer(bool IsActive, bool fromTakeOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.Receive_OnActiveChangedServer");
		
		UBP_JetBootsMovement_C_Receive_OnActiveChangedServer_Params params {};
		params.IsActive = IsActive;
		params.fromTakeOff = fromTakeOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JetBootsMovement.BP_JetBootsMovement_C.ExecuteUbergraph_BP_JetBootsMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_JetBootsMovement_C::ExecuteUbergraph_BP_JetBootsMovement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JetBootsMovement.BP_JetBootsMovement_C.ExecuteUbergraph_BP_JetBootsMovement");
		
		UBP_JetBootsMovement_C_ExecuteUbergraph_BP_JetBootsMovement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_JetBootsMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_JetBootsMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_JetBootsMovement.BP_JetBootsMovement_C");
		return ptr;
	}

}


