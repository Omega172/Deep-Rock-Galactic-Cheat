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
	 * 		Name   -> Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.OnSpinningChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSpinning                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Grenade_NeedleSprayer_C::OnSpinningChanged(bool isSpinning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.OnSpinningChanged");
		
		ABP_Grenade_NeedleSprayer_C_OnSpinningChanged_Params params {};
		params.isSpinning = isSpinning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_NeedleSprayer_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.ReceiveDestroyed");
		
		ABP_Grenade_NeedleSprayer_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_NeedleSprayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.ReceiveBeginPlay");
		
		ABP_Grenade_NeedleSprayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.ExecuteUbergraph_BP_Grenade_NeedleSprayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_NeedleSprayer_C::ExecuteUbergraph_BP_Grenade_NeedleSprayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C.ExecuteUbergraph_BP_Grenade_NeedleSprayer");
		
		ABP_Grenade_NeedleSprayer_C_ExecuteUbergraph_BP_Grenade_NeedleSprayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_NeedleSprayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_NeedleSprayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_NeedleSprayer.BP_Grenade_NeedleSprayer_C");
		return ptr;
	}

}


