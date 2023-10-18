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
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.SetVisibilityIfVisibleMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::SetVisibilityIfVisibleMode(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.SetVisibilityIfVisibleMode");
		
		UHUD_TeamDisplay_Bosco_C_SetVisibilityIfVisibleMode_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentCharges                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxCharges                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::UpdateReviveCharges(int32_t CurrentCharges, int32_t MaxCharges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges");
		
		UHUD_TeamDisplay_Bosco_C_UpdateReviveCharges_Params params {};
		params.CurrentCharges = CurrentCharges;
		params.MaxCharges = MaxCharges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_TeamDisplay_Bosco_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct");
		
		UHUD_TeamDisplay_Bosco_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_TeamDisplay_Bosco_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct");
		
		UHUD_TeamDisplay_Bosco_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABosco*                                      Bosco                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::OnBoscoChanged(class ABosco* Bosco)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged");
		
		UHUD_TeamDisplay_Bosco_C_OnBoscoChanged_Params params {};
		params.Bosco = Bosco;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDroneAIState                                      aCurrentState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::OnStateChanged(EDroneAIState aCurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged");
		
		UHUD_TeamDisplay_Bosco_C_OnStateChanged_Params params {};
		params.aCurrentState = aCurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::UpdateStateIcon(class UTexture2D* Texture, const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon");
		
		UHUD_TeamDisplay_Bosco_C_UpdateStateIcon_Params params {};
		params.Texture = Texture;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReviveCount                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::OnReviveused(int32_t ReviveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused");
		
		UHUD_TeamDisplay_Bosco_C_OnReviveused_Params params {};
		params.ReviveCount = ReviveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateHUDVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_TeamDisplay_Bosco_C::UpdateHUDVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateHUDVisibility");
		
		UHUD_TeamDisplay_Bosco_C_UpdateHUDVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerPressed
	 * 		Flags  -> ()
	 */
	void UHUD_TeamDisplay_Bosco_C::OnLaserPointerPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerPressed");
		
		UHUD_TeamDisplay_Bosco_C_OnLaserPointerPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerReleased
	 * 		Flags  -> ()
	 */
	void UHUD_TeamDisplay_Bosco_C::OnLaserPointerReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerReleased");
		
		UHUD_TeamDisplay_Bosco_C_OnLaserPointerReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDVisibilityGroup*                         Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHUDVisibilityMode                                 Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature");
		
		UHUD_TeamDisplay_Bosco_C_BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature_Params params {};
		params.Group = Group;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.FollowTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FollowTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::FollowTargetChanged(class AActor* FollowTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.FollowTargetChanged");
		
		UHUD_TeamDisplay_Bosco_C_FollowTargetChanged_Params params {};
		params.FollowTarget = FollowTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TeamDisplay_Bosco_C::ExecuteUbergraph_HUD_TeamDisplay_Bosco(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco");
		
		UHUD_TeamDisplay_Bosco_C_ExecuteUbergraph_HUD_TeamDisplay_Bosco_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_TeamDisplay_Bosco_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_TeamDisplay_Bosco_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C");
		return ptr;
	}

}


