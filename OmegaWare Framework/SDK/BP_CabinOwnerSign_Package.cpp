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
	 * 		Name   -> Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_CabinOwnerSign_C::SetPlayerName(class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName");
		
		ABP_CabinOwnerSign_C_SetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_CabinOwnerSign_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript");
		
		ABP_CabinOwnerSign_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CabinOwnerSign_C::SetCabinOwner(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner");
		
		ABP_CabinOwnerSign_C_SetCabinOwner_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_CabinOwnerSign_C::ChangeName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName");
		
		ABP_CabinOwnerSign_C_ChangeName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CabinOwnerSign_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay");
		
		ABP_CabinOwnerSign_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CabinOwnerSign_C::ExecuteUbergraph_BP_CabinOwnerSign(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign");
		
		ABP_CabinOwnerSign_C_ExecuteUbergraph_BP_CabinOwnerSign_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CabinOwnerSign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CabinOwnerSign_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CabinOwnerSign.BP_CabinOwnerSign_C");
		return ptr;
	}

}


