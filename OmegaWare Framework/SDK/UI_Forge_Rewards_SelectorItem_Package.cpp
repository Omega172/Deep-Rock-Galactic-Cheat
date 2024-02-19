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
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          InCharacterID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutValidReward                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_Rewards_SelectorItem_C::SetData(class UPlayerCharacterID* InCharacterID, class USchematic* InSchematic, bool* OutValidReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.SetData");
		
		UUI_Forge_Rewards_SelectorItem_C_SetData_Params params {};
		params.InCharacterID = InCharacterID;
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValidReward != nullptr)
			*OutValidReward = params.OutValidReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_SelectorItem_C::BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Forge_Rewards_SelectorItem_C_BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_SelectorItem_C::BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Forge_Rewards_SelectorItem_C_BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_SelectorItem_C::BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Forge_Rewards_SelectorItem_C_BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_Rewards_SelectorItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.PreConstruct");
		
		UUI_Forge_Rewards_SelectorItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_SelectorItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.Construct");
		
		UUI_Forge_Rewards_SelectorItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.ExecuteUbergraph_UI_Forge_Rewards_SelectorItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_SelectorItem_C::ExecuteUbergraph_UI_Forge_Rewards_SelectorItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.ExecuteUbergraph_UI_Forge_Rewards_SelectorItem");
		
		UUI_Forge_Rewards_SelectorItem_C_ExecuteUbergraph_UI_Forge_Rewards_SelectorItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnHoverEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_SelectorItem_C::OnHoverEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnHoverEnd__DelegateSignature");
		
		UUI_Forge_Rewards_SelectorItem_C_OnHoverEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnHoverBegin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_SelectorItem_C::OnHoverBegin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnHoverBegin__DelegateSignature");
		
		UUI_Forge_Rewards_SelectorItem_C_OnHoverBegin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_SelectorItem_C::OnClicked__DelegateSignature(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C.OnClicked__DelegateSignature");
		
		UUI_Forge_Rewards_SelectorItem_C_OnClicked__DelegateSignature_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_Rewards_SelectorItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_Rewards_SelectorItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_Rewards_SelectorItem.UI_Forge_Rewards_SelectorItem_C");
		return ptr;
	}

}


