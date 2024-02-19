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
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetClaimButtonEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_MasteryBar_C::SetClaimButtonEnabled(bool InEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetClaimButtonEnabled");
		
		UUI_Forge_MasteryBar_C_SetClaimButtonEnabled_Params params {};
		params.InEnabled = InEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetRewardFromLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_MasteryBar_C::SetRewardFromLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetRewardFromLevel");
		
		UUI_Forge_MasteryBar_C_SetRewardFromLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartCounting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStartLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InStartXP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_MasteryBar_C::StartCounting(int32_t InStartLevel, float InStartXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartCounting");
		
		UUI_Forge_MasteryBar_C_StartCounting_Params params {};
		params.InStartLevel = InStartLevel;
		params.InStartXP = InStartXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetLerpProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_MasteryBar_C::SetLerpProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetLerpProgress");
		
		UUI_Forge_MasteryBar_C_SetLerpProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetFromSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_MasteryBar_C::SetFromSaveGame(bool animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetFromSaveGame");
		
		UUI_Forge_MasteryBar_C_SetFromSaveGame_Params params {};
		params.animate = animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_MasteryBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PreConstruct");
		
		UUI_Forge_MasteryBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Forge_MasteryBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Construct");
		
		UUI_Forge_MasteryBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PlayRewardAnim
	 * 		Flags  -> ()
	 */
	void UUI_Forge_MasteryBar_C::PlayRewardAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PlayRewardAnim");
		
		UUI_Forge_MasteryBar_C_PlayRewardAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.RewardPopUpStarted
	 * 		Flags  -> ()
	 */
	void UUI_Forge_MasteryBar_C::RewardPopUpStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.RewardPopUpStarted");
		
		UUI_Forge_MasteryBar_C_RewardPopUpStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.FinishedCounting
	 * 		Flags  -> ()
	 */
	void UUI_Forge_MasteryBar_C::FinishedCounting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.FinishedCounting");
		
		UUI_Forge_MasteryBar_C_FinishedCounting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ResetReward
	 * 		Flags  -> ()
	 */
	void UUI_Forge_MasteryBar_C::ResetReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ResetReward");
		
		UUI_Forge_MasteryBar_C_ResetReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartedCounting
	 * 		Flags  -> ()
	 */
	void UUI_Forge_MasteryBar_C::StartedCounting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartedCounting");
		
		UUI_Forge_MasteryBar_C_StartedCounting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.BndEvt__UI_Forge_MasteryBar_ClaimButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_MasteryBar_C::BndEvt__UI_Forge_MasteryBar_ClaimButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.BndEvt__UI_Forge_MasteryBar_ClaimButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UUI_Forge_MasteryBar_C_BndEvt__UI_Forge_MasteryBar_ClaimButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Forge_MasteryBar_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnMouseEnter");
		
		UUI_Forge_MasteryBar_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Forge_MasteryBar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnMouseLeave");
		
		UUI_Forge_MasteryBar_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ExecuteUbergraph_UI_Forge_MasteryBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_MasteryBar_C::ExecuteUbergraph_UI_Forge_MasteryBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ExecuteUbergraph_UI_Forge_MasteryBar");
		
		UUI_Forge_MasteryBar_C_ExecuteUbergraph_UI_Forge_MasteryBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnClaimClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSeed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_MasteryBar_C::OnClaimClicked__DelegateSignature(int32_t InLevel, int32_t InSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnClaimClicked__DelegateSignature");
		
		UUI_Forge_MasteryBar_C_OnClaimClicked__DelegateSignature_Params params {};
		params.InLevel = InLevel;
		params.InSeed = InSeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnCountingFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_MasteryBar_C::OnCountingFinished__DelegateSignature(unsigned char Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnCountingFinished__DelegateSignature");
		
		UUI_Forge_MasteryBar_C_OnCountingFinished__DelegateSignature_Params params {};
		params.Reward = Reward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_MasteryBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_MasteryBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_MasteryBar.UI_Forge_MasteryBar_C");
		return ptr;
	}

}


