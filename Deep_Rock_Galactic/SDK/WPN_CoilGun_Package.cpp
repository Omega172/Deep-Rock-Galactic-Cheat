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
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.FadeOutIfValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             AC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::FadeOutIfValid(class UAudioComponent** AC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.FadeOutIfValid");
		
		AWPN_CoilGun_C_FadeOutIfValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AC != nullptr)
			*AC = params.AC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.HandleHeatAudio
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::HandleHeatAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.HandleHeatAudio");
		
		AWPN_CoilGun_C_HandleHeatAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.HandleChargeAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::HandleChargeAudio(float charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.HandleChargeAudio");
		
		AWPN_CoilGun_C_HandleChargeAudio_Params params {};
		params.charge = charge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_CoilGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.GetGearStatEntry");
		
		AWPN_CoilGun_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.UserConstructionScript");
		
		AWPN_CoilGun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.FadeTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::FadeTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.FadeTimeline__FinishedFunc");
		
		AWPN_CoilGun_C_FadeTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.FadeTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::FadeTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.FadeTimeline__UpdateFunc");
		
		AWPN_CoilGun_C_FadeTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.RecieveUnequipped");
		
		AWPN_CoilGun_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.ReceiveOverheatedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isOverheated                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_CoilGun_C::ReceiveOverheatedChanged(bool isOverheated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.ReceiveOverheatedChanged");
		
		AWPN_CoilGun_C_ReceiveOverheatedChanged_Params params {};
		params.isOverheated = isOverheated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.OnSkinChanged");
		
		AWPN_CoilGun_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.AddedToInventory");
		
		AWPN_CoilGun_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.OnFireKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::OnFireKill(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.OnFireKill");
		
		AWPN_CoilGun_C_OnFireKill_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.RecieveStartedCharging
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::RecieveStartedCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.RecieveStartedCharging");
		
		AWPN_CoilGun_C_RecieveStartedCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.RecieveStoppedCharging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChargeProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::RecieveStoppedCharging(float ChargeProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.RecieveStoppedCharging");
		
		AWPN_CoilGun_C_RecieveStoppedCharging_Params params {};
		params.ChargeProgress = ChargeProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.ReceiveBeginPlay");
		
		AWPN_CoilGun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.OnChargeChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::OnChargeChanged_Event_1(float charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.OnChargeChanged_Event_1");
		
		AWPN_CoilGun_C_OnChargeChanged_Event_1_Params params {};
		params.charge = charge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.OnShieldBrokeBoostStopped
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::OnShieldBrokeBoostStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.OnShieldBrokeBoostStopped");
		
		AWPN_CoilGun_C_OnShieldBrokeBoostStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.OnShieldBrokenBoost
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::OnShieldBrokenBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.OnShieldBrokenBoost");
		
		AWPN_CoilGun_C_OnShieldBrokenBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.Receive_Overheated
	 * 		Flags  -> ()
	 */
	void AWPN_CoilGun_C::Receive_Overheated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.Receive_Overheated");
		
		AWPN_CoilGun_C_Receive_Overheated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_CoilGun.WPN_CoilGun_C.ExecuteUbergraph_WPN_CoilGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_CoilGun_C::ExecuteUbergraph_WPN_CoilGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_CoilGun.WPN_CoilGun_C.ExecuteUbergraph_WPN_CoilGun");
		
		AWPN_CoilGun_C_ExecuteUbergraph_WPN_CoilGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_CoilGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_CoilGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_CoilGun.WPN_CoilGun_C");
		return ptr;
	}

}


