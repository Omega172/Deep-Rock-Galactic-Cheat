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
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AITM_BaseFlare_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry");
		
		AITM_BaseFlare_C_GetGearStatEntry_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::UpdateShadowRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius");
		
		AITM_BaseFlare_C_UpdateShadowRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_BaseFlare_C::StartFadeOut(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut");
		
		AITM_BaseFlare_C_StartFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript");
		
		AITM_BaseFlare_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc");
		
		AITM_BaseFlare_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc");
		
		AITM_BaseFlare_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::OnFlareIgnite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite");
		
		AITM_BaseFlare_C_OnFlareIgnite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::OnFlareExtinguish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish");
		
		AITM_BaseFlare_C_OnFlareExtinguish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay");
		
		AITM_BaseFlare_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::OnUpdateShadowRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius");
		
		AITM_BaseFlare_C_OnUpdateShadowRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.ActivateFlare
	 * 		Flags  -> ()
	 */
	void AITM_BaseFlare_C::ActivateFlare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ActivateFlare");
		
		AITM_BaseFlare_C_ActivateFlare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_BaseFlare_C::ExecuteUbergraph_ITM_BaseFlare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare");
		
		AITM_BaseFlare_C_ExecuteUbergraph_ITM_BaseFlare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_BaseFlare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_BaseFlare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_BaseFlare.ITM_BaseFlare_C");
		return ptr;
	}

}


