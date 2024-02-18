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
	 * 		Name   -> Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ASign_MemorialUnlock_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.UserConstructionScript");
		
		ASign_MemorialUnlock_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASign_MemorialUnlock_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ReceiveBeginPlay");
		
		ASign_MemorialUnlock_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ExecuteUbergraph_Sign_MemorialUnlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASign_MemorialUnlock_C::ExecuteUbergraph_Sign_MemorialUnlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sign_MemorialUnlock.Sign_MemorialUnlock_C.ExecuteUbergraph_Sign_MemorialUnlock");
		
		ASign_MemorialUnlock_C_ExecuteUbergraph_Sign_MemorialUnlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASign_MemorialUnlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASign_MemorialUnlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sign_MemorialUnlock.Sign_MemorialUnlock_C");
		return ptr;
	}

}


