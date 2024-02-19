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
	 * 		Name   -> Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_RecallableSentryGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.GetGearStatEntry");
		
		AWPN_RecallableSentryGun_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.SetArcIndicatorActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_RecallableSentryGun_C::SetArcIndicatorActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.SetArcIndicatorActive");
		
		AWPN_RecallableSentryGun_C_SetArcIndicatorActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemMarker*                                 Marker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_RecallableSentryGun_C::BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature(class AItemMarker* Marker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature");
		
		AWPN_RecallableSentryGun_C_BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature_Params params {};
		params.Marker = Marker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.ExecuteUbergraph_WPN_RecallableSentryGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_RecallableSentryGun_C::ExecuteUbergraph_WPN_RecallableSentryGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.ExecuteUbergraph_WPN_RecallableSentryGun");
		
		AWPN_RecallableSentryGun_C_ExecuteUbergraph_WPN_RecallableSentryGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_RecallableSentryGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_RecallableSentryGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_RecallableSentryGun.WPN_RecallableSentryGun_C");
		return ptr;
	}

}


