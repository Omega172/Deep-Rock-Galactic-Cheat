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
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Older Active Wormhole Effects
	 * 		Flags  -> ()
	 */
	void UDE_WormholeSpecial_C::DisableOlderActiveWormholeEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Older Active Wormhole Effects");
		
		UDE_WormholeSpecial_C_DisableOlderActiveWormholeEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.IsLastActiveWormholeEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               waslasteffect                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDE_WormholeSpecial_C::IsLastActiveWormholeEffect(bool* waslasteffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.IsLastActiveWormholeEffect");
		
		UDE_WormholeSpecial_C_IsLastActiveWormholeEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (waslasteffect != nullptr)
			*waslasteffect = params.waslasteffect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.Set Original position
	 * 		Flags  -> ()
	 */
	void UDE_WormholeSpecial_C::SetOriginalposition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Set Original position");
		
		UDE_WormholeSpecial_C_SetOriginalposition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_WormholeSpecial_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.ReceiveTick");
		
		UDE_WormholeSpecial_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_WormholeSpecial_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStartEffect");
		
		UDE_WormholeSpecial_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_WormholeSpecial_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStopEffect");
		
		UDE_WormholeSpecial_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.Spawn Teleport Effects
	 * 		Flags  -> ()
	 */
	void UDE_WormholeSpecial_C::SpawnTeleportEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Spawn Teleport Effects");
		
		UDE_WormholeSpecial_C_SpawnTeleportEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Active Location Effects
	 * 		Flags  -> ()
	 */
	void UDE_WormholeSpecial_C::DisableActiveLocationEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Active Location Effects");
		
		UDE_WormholeSpecial_C_DisableActiveLocationEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_WormholeSpecial.DE_WormholeSpecial_C.ExecuteUbergraph_DE_WormholeSpecial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_WormholeSpecial_C::ExecuteUbergraph_DE_WormholeSpecial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.ExecuteUbergraph_DE_WormholeSpecial");
		
		UDE_WormholeSpecial_C_ExecuteUbergraph_DE_WormholeSpecial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_WormholeSpecial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_WormholeSpecial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_WormholeSpecial.DE_WormholeSpecial_C");
		return ptr;
	}

}


