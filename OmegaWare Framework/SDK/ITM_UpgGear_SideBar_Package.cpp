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
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetUpgradePurchasedShout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogDataAsset*                            ShoutUpgradePurchased                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_C::SetUpgradePurchasedShout(class UDialogDataAsset* ShoutUpgradePurchased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetUpgradePurchasedShout");
		
		UITM_UpgGear_SideBar_C_SetUpgradePurchasedShout_Params params {};
		params.ShoutUpgradePurchased = ShoutUpgradePurchased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InCharacterClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemCategory                                      InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_C::SetItem(class UClass** InCharacterClass, class UClass** InItemClass, EItemCategory* InCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetItem");
		
		UITM_UpgGear_SideBar_C_SetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCharacterClass != nullptr)
			*InCharacterClass = params.InCharacterClass;
		if (InItemClass != nullptr)
			*InItemClass = params.InItemClass;
		if (InCategory != nullptr)
			*InCategory = params.InCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_Popup_YesNoPrompt_C*                  Prompt                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_C::SetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C* Prompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.SetYesNoPrompt");
		
		UITM_UpgGear_SideBar_C_SetYesNoPrompt_Params params {};
		params.Prompt = Prompt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_FlatButton_C*                         Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_C::BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_UpgGear_SideBar_C_BndEvt__Basic_FlatButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_SideBar_C::BuyConfirmation(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.BuyConfirmation");
		
		UITM_UpgGear_SideBar_C_BuyConfirmation_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.UpgradePurchased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_TierRow_C*                      Row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_C::UpgradePurchased(class UITM_UpgGear_TierRow_C* Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.UpgradePurchased");
		
		UITM_UpgGear_SideBar_C_UpgradePurchased_Params params {};
		params.Row = Row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_SideBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.PreConstruct");
		
		UITM_UpgGear_SideBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_SideBar_C::ExecuteUbergraph_ITM_UpgGear_SideBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.ExecuteUbergraph_ITM_UpgGear_SideBar");
		
		UITM_UpgGear_SideBar_C_ExecuteUbergraph_ITM_UpgGear_SideBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_SideBar_C::OnItemPurchased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C.OnItemPurchased__DelegateSignature");
		
		UITM_UpgGear_SideBar_C_OnItemPurchased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UpgGear_SideBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_SideBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_SideBar.ITM_UpgGear_SideBar_C");
		return ptr;
	}

}


