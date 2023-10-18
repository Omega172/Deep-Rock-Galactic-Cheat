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
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_GrenadeThrow_C::UpdateSpline(TArray<struct FVector>* Array, float* DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline");
		
		AITM_GrenadeThrow_C_UpdateSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (DeltaTime != nullptr)
			*DeltaTime = params.DeltaTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_GrenadeThrow_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick");
		
		AITM_GrenadeThrow_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AITM_GrenadeThrow_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped");
		
		AITM_GrenadeThrow_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AITM_GrenadeThrow_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped");
		
		AITM_GrenadeThrow_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AITM_GrenadeThrow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay");
		
		AITM_GrenadeThrow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AITM_GrenadeThrow_C::SetIsVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible");
		
		AITM_GrenadeThrow_C_SetIsVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown
	 * 		Flags  -> ()
	 */
	void AITM_GrenadeThrow_C::GrenadeThrown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown");
		
		AITM_GrenadeThrow_C_GrenadeThrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateCookTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_GrenadeThrow_C::UpdateCookTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateCookTime");
		
		AITM_GrenadeThrow_C_UpdateCookTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_GrenadeThrow_C::ExecuteUbergraph_ITM_GrenadeThrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow");
		
		AITM_GrenadeThrow_C_ExecuteUbergraph_ITM_GrenadeThrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_GrenadeThrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_GrenadeThrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_GrenadeThrow.ITM_GrenadeThrow_C");
		return ptr;
	}

}


