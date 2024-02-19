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
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateWeaponLicenseStat
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::UpdateWeaponLicenseStat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateWeaponLicenseStat");
		
		ABP_PlayerCharacter_C_UpdateWeaponLicenseStat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBeastMasterUsableComponent
	 * 		Flags  -> ()
	 */
	class UUsableComponent* ABP_PlayerCharacter_C::GetBeastMasterUsableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBeastMasterUsableComponent");
		
		ABP_PlayerCharacter_C_GetBeastMasterUsableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceExitSelfieMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::GotoNextSelfiePoint(bool ForceExitSelfieMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint");
		
		ABP_PlayerCharacter_C_GotoNextSelfiePoint_Params params {};
		params.ForceExitSelfieMode = ForceExitSelfieMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SelfiePoint_C*                           InSelfiePoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::SetActiveSelfiePoint(class UBP_SelfiePoint_C* InSelfiePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint");
		
		ABP_PlayerCharacter_C_SetActiveSelfiePoint_Params params {};
		params.InSelfiePoint = InSelfiePoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDamageClass*                                DamageClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_PlayerCharacter_C::DamageCausesReaction(class UDamageClass* DamageClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction");
		
		ABP_PlayerCharacter_C_DamageCausesReaction_Params params {};
		params.DamageClass = DamageClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint
	 * 		Flags  -> ()
	 */
	class USceneComponent* ABP_PlayerCharacter_C::GetDownCameraAttachPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint");
		
		ABP_PlayerCharacter_C_GetDownCameraAttachPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint
	 * 		Flags  -> ()
	 */
	class USceneComponent* ABP_PlayerCharacter_C::GetDownCameraRotationPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint");
		
		ABP_PlayerCharacter_C_GetDownCameraRotationPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Effect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ChromaEffect(unsigned char Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect");
		
		ABP_PlayerCharacter_C_ChromaEffect_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogDataAsset*                            Shout                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::CharacterAudioThrottled(class UDialogDataAsset* Shout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled");
		
		ABP_PlayerCharacter_C_CharacterAudioThrottled_Params params {};
		params.Shout = Shout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::UpdateHeadLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight");
		
		ABP_PlayerCharacter_C_UpdateHeadLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ShieldRegenTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc");
		
		ABP_PlayerCharacter_C_ShieldRegenTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ShieldRegenTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc");
		
		ABP_PlayerCharacter_C_ShieldRegenTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::EmergencyTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc");
		
		ABP_PlayerCharacter_C_EmergencyTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::EmergencyTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc");
		
		ABP_PlayerCharacter_C_EmergencyTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_P_K2Node_InputKeyEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17");
		
		ABP_PlayerCharacter_C_InpActEvt_P_K2Node_InputKeyEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16");
		
		ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15");
		
		ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14");
		
		ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13");
		
		ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_PageDown_K2Node_InputKeyEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12");
		
		ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_PageDown_K2Node_InputKeyEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11");
		
		ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_PageUp_K2Node_InputKeyEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10");
		
		ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_PageUp_K2Node_InputKeyEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9");
		
		ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_Home_K2Node_InputKeyEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8");
		
		ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_Home_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7");
		
		ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_End_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6");
		
		ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_End_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5");
		
		ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_Insert_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4");
		
		ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_Insert_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3");
		
		ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_Delete_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2");
		
		ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_Delete_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1");
		
		ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::BP_OnControllerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady");
		
		ABP_PlayerCharacter_C_BP_OnControllerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");
		
		ABP_PlayerCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature");
		
		ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::StopRegenAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio");
		
		ABP_PlayerCharacter_C_StopRegenAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::BP_OnUpdateMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes");
		
		ABP_PlayerCharacter_C_BP_OnUpdateMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::CharacterStateChanged(ECharacterState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed");
		
		ABP_PlayerCharacter_C_CharacterStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature");
		
		ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature");
		
		ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::InitSelfieCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam");
		
		ABP_PlayerCharacter_C_InitSelfieCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::SetDustVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible");
		
		ABP_PlayerCharacter_C_SetDustVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ReceiveOnHeadlightOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn");
		
		ABP_PlayerCharacter_C_ReceiveOnHeadlightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ResetSaveGameIDInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor");
		
		ABP_PlayerCharacter_C_ResetSaveGameIDInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTemporaryBuff*                              buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            AffectedPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed");
		
		ABP_PlayerCharacter_C_OnTemporaryBuffChanged_Params params {};
		params.buff = buff;
		params.AffectedPlayer = AffectedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::MixerClientSpawnConfettii(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii");
		
		ABP_PlayerCharacter_C_MixerClientSpawnConfettii_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::MixerServerSpawnConfettii(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii");
		
		ABP_PlayerCharacter_C_MixerServerSpawnConfettii_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::MixerSpawnConfetti(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti");
		
		ABP_PlayerCharacter_C_MixerSpawnConfetti_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::PrepareForEndScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen");
		
		ABP_PlayerCharacter_C_PrepareForEndScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageData                                 DamageData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               anyHealthLost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const struct FDamageData& DamageData, bool anyHealthLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature");
		
		ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature_Params params {};
		params.Damage = Damage;
		params.DamageData = DamageData;
		params.anyHealthLost = anyHealthLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageData                                 DamageData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               anyHealthLost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, const struct FDamageData& DamageData, bool anyHealthLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature");
		
		ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature_Params params {};
		params.Damage = Damage;
		params.DamageData = DamageData;
		params.anyHealthLost = anyHealthLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::Receive_ShowFieldMedicInstantReviveEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects");
		
		ABP_PlayerCharacter_C_Receive_ShowFieldMedicInstantReviveEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");
		
		ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2");
		
		ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDelta                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::SelfieZoom(float InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom");
		
		ABP_PlayerCharacter_C_SelfieZoom_Params params {};
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::TickSelfieZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom");
		
		ABP_PlayerCharacter_C_TickSelfieZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::SelfieMoveUp(float InDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp");
		
		ABP_PlayerCharacter_C_SelfieMoveUp_Params params {};
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::TickSelfieMoveUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp");
		
		ABP_PlayerCharacter_C_TickSelfieMoveUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::SelfieMoveRight(float InDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight");
		
		ABP_PlayerCharacter_C_SelfieMoveRight_Params params {};
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::TickSelfieMoveRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight");
		
		ABP_PlayerCharacter_C_TickSelfieMoveRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed");
		
		ABP_PlayerCharacter_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cheat_Medical
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::Cheat_Medical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cheat_Medical");
		
		ABP_PlayerCharacter_C_Cheat_Medical_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update MissionStats
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::UpdateMissionStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update MissionStats");
		
		ABP_PlayerCharacter_C_UpdateMissionStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");
		
		ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}

}


