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
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Reset
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Reset");
		
		UUI_Forge_Rewards_Selector_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.EndPickReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InReward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Selector_C::EndPickReward(class USchematic* InReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.EndPickReward");
		
		UUI_Forge_Rewards_Selector_C_EndPickReward_Params params {};
		params.InReward = InReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.PopRandomReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class UPlayerCharacterID*, class USchematic*> Rewards                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FRandomStream                               Random                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class UPlayerCharacterID*                          OutCharacter                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USchematic*                                  OutReward                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Selector_C::PopRandomReward(TMap<class UPlayerCharacterID*, class USchematic*> Rewards, const struct FRandomStream& Random, class UPlayerCharacterID** OutCharacter, class USchematic** OutReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.PopRandomReward");
		
		UUI_Forge_Rewards_Selector_C_PopRandomReward_Params params {};
		params.Rewards = Rewards;
		params.Random = Random;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCharacter != nullptr)
			*OutCharacter = params.OutCharacter;
		if (OutReward != nullptr)
			*OutReward = params.OutReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Begin Pick Reward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSeed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Selector_C::BeginPickReward(int32_t InLevel, int32_t InSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Begin Pick Reward");
		
		UUI_Forge_Rewards_Selector_C_BeginPickReward_Params params {};
		params.InLevel = InLevel;
		params.InSeed = InSeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.Construct");
		
		UUI_Forge_Rewards_Selector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Selector_C::OnClicked(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnClicked");
		
		UUI_Forge_Rewards_Selector_C_OnClicked_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnIntroStarted
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::OnIntroStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnIntroStarted");
		
		UUI_Forge_Rewards_Selector_C_OnIntroStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnIntroEnded
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::OnIntroEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnIntroEnded");
		
		UUI_Forge_Rewards_Selector_C_OnIntroEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.TryPing
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::TryPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.TryPing");
		
		UUI_Forge_Rewards_Selector_C_TryPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature");
		
		UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_0_OnHoverBegin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature");
		
		UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Left_K2Node_ComponentBoundEvent_1_OnHoverEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature");
		
		UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_2_OnHoverBegin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature");
		
		UUI_Forge_Rewards_Selector_C_BndEvt__UI_Forge_Rewards_Selector_Item_Right_K2Node_ComponentBoundEvent_3_OnHoverEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnPingEnded
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Selector_C::OnPingEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnPingEnded");
		
		UUI_Forge_Rewards_Selector_C_OnPingEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_Rewards_Selector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.PreConstruct");
		
		UUI_Forge_Rewards_Selector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.ExecuteUbergraph_UI_Forge_Rewards_Selector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Selector_C::ExecuteUbergraph_UI_Forge_Rewards_Selector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.ExecuteUbergraph_UI_Forge_Rewards_Selector");
		
		UUI_Forge_Rewards_Selector_C_ExecuteUbergraph_UI_Forge_Rewards_Selector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnRewardSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InReward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Selector_C::OnRewardSelected__DelegateSignature(class USchematic* InReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C.OnRewardSelected__DelegateSignature");
		
		UUI_Forge_Rewards_Selector_C_OnRewardSelected__DelegateSignature_Params params {};
		params.InReward = InReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_Rewards_Selector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_Rewards_Selector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_Rewards_Selector.UI_Forge_Rewards_Selector_C");
		return ptr;
	}

}


