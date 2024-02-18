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
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnEmpty
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::OnEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnEmpty");
		
		AITM_BarGlass_Item_C_OnEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::OnRep_ThrownGlass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass");
		
		AITM_BarGlass_Item_C_OnRep_ThrownGlass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::OnRep_Visible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible");
		
		AITM_BarGlass_Item_C_OnRep_Visible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::OnRep_IsFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull");
		
		AITM_BarGlass_Item_C_OnRep_IsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute
	 * 		Flags  -> ()
	 */
	bool AITM_BarGlass_Item_C::CheckCanSalute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute");
		
		AITM_BarGlass_Item_C_CheckCanSalute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDrinking                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AITM_BarGlass_Item_C::IsDrinking(bool* IsDrinking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking");
		
		AITM_BarGlass_Item_C_IsDrinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDrinking != nullptr)
			*IsDrinking = params.IsDrinking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow
	 * 		Flags  -> ()
	 */
	float AITM_BarGlass_Item_C::PlayThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow");
		
		AITM_BarGlass_Item_C_PlayThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrinkFoam
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::PlayDrinkFoam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrinkFoam");
		
		AITM_BarGlass_Item_C_PlayDrinkFoam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrinkPlayer
	 * 		Flags  -> ()
	 */
	float AITM_BarGlass_Item_C::PlayDrinkPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrinkPlayer");
		
		AITM_BarGlass_Item_C_PlayDrinkPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript");
		
		AITM_BarGlass_Item_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::RecieveStartUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing");
		
		AITM_BarGlass_Item_C_RecieveStartUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::Server_Use()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use");
		
		AITM_BarGlass_Item_C_Server_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::All_Drink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink");
		
		AITM_BarGlass_Item_C_All_Drink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::All_Throw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw");
		
		AITM_BarGlass_Item_C_All_Throw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty");
		
		AITM_BarGlass_Item_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AITM_BarGlass_Item_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");
		
		AITM_BarGlass_Item_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params params {};
		params.Component = Component;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay");
		
		AITM_BarGlass_Item_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass
	 * 		Flags  -> ()
	 */
	void AITM_BarGlass_Item_C::SkinThrownGlass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass");
		
		AITM_BarGlass_Item_C_SkinThrownGlass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_BarGlass_Item_C::ExecuteUbergraph_ITM_BarGlass_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item");
		
		AITM_BarGlass_Item_C_ExecuteUbergraph_ITM_BarGlass_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_BarGlass_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_BarGlass_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C");
		return ptr;
	}

}


