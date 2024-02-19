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
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::SetInfo(const class FText& InText, class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo");
		
		UHUD_SentryTrackingIcon_C_SetInfo_Params params {};
		params.InText = InText;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SentryTrackingIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct");
		
		UHUD_SentryTrackingIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::UpdateArrow(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow");
		
		UHUD_SentryTrackingIcon_C_UpdateArrow_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow
	 * 		Flags  -> ()
	 */
	void UHUD_SentryTrackingIcon_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow");
		
		UHUD_SentryTrackingIcon_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SentryTrackingIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct");
		
		UHUD_SentryTrackingIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnItemEquipped(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped");
		
		UHUD_SentryTrackingIcon_C_OnItemEquipped_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State
	 * 		Flags  -> ()
	 */
	void UHUD_SentryTrackingIcon_C::UpdateState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State");
		
		UHUD_SentryTrackingIcon_C_UpdateState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnSentryIndexChanged(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged");
		
		UHUD_SentryTrackingIcon_C_OnSentryIndexChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inView                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnInViewChanged(bool inView, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged");
		
		UHUD_SentryTrackingIcon_C_OnInViewChanged_Params params {};
		params.inView = inView;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Change                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnAmmoCountChanged(int32_t AmmoCount, int32_t Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged");
		
		UHUD_SentryTrackingIcon_C_OnAmmoCountChanged_Params params {};
		params.AmmoCount = AmmoCount;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnTargetSet(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet");
		
		UHUD_SentryTrackingIcon_C_OnTargetSet_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableSentryGun*                        SentryGun                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnSelectedItemChanged_Event(class ARecallableSentryGun* SentryGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event");
		
		UHUD_SentryTrackingIcon_C_OnSelectedItemChanged_Event_Params params {};
		params.SentryGun = SentryGun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnDeployProgress_Event(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event");
		
		UHUD_SentryTrackingIcon_C_OnDeployProgress_Event_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARedeployableSentryGun*                      Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERedeployableSentryGunState                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnSentryGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged");
		
		UHUD_SentryTrackingIcon_C_OnSentryGunStateChanged_Params params {};
		params.Sender = Sender;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnTargetDistanceChanged(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged");
		
		UHUD_SentryTrackingIcon_C_OnTargetDistanceChanged_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableActor*                            Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERecallableActorState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::OnRecallableStateChanged(class ARecallableActor* Sender, ERecallableActorState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged");
		
		UHUD_SentryTrackingIcon_C_OnRecallableStateChanged_Params params {};
		params.Sender = Sender;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryTrackingIcon_C::ExecuteUbergraph_HUD_SentryTrackingIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon");
		
		UHUD_SentryTrackingIcon_C_ExecuteUbergraph_HUD_SentryTrackingIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SentryTrackingIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SentryTrackingIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C");
		return ptr;
	}

}


