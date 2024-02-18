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
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.UpdateBackBar
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_TierRow_C::UpdateBackBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.UpdateBackBar");
		
		UITM_UpgGear_TierRow_C_UpdateBackBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.SetPurchasedShout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogDataAsset*                            InShout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::SetPurchasedShout(class UDialogDataAsset* InShout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.SetPurchasedShout");
		
		UITM_UpgGear_TierRow_C_SetPurchasedShout_Params params {};
		params.InShout = InShout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked
	 * 		Flags  -> ()
	 */
	bool UITM_UpgGear_TierRow_C::GetIsRowLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked");
		
		UITM_UpgGear_TierRow_C_GetIsRowLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_TierRow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct");
		
		UITM_UpgGear_TierRow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_TierRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct");
		
		UITM_UpgGear_TierRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::InitializeUpgradeWidget(class UITM_UpgGear_UpgIconSingle_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget");
		
		UITM_UpgGear_TierRow_C_InitializeUpgradeWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_TierRow_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh");
		
		UITM_UpgGear_TierRow_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                UpgradeWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::EquipUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade");
		
		UITM_UpgGear_TierRow_C_EquipUpgrade_Params params {};
		params.UpgradeWidget = UpgradeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                UpgradeWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::PurchaseUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade");
		
		UITM_UpgGear_TierRow_C_PurchaseUpgrade_Params params {};
		params.UpgradeWidget = UpgradeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_TierRow_C::OnPurchaseConfirmation(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation");
		
		UITM_UpgGear_TierRow_C_OnPurchaseConfirmation_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon
	 * 		Flags  -> ()
	 */
	void UITM_UpgGear_TierRow_C::RefreshTierIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon");
		
		UITM_UpgGear_TierRow_C_RefreshTierIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::UnequipUpgrade(class UITM_UpgGear_UpgIconSingle_C* Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade");
		
		UITM_UpgGear_TierRow_C_UnequipUpgrade_Params params {};
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::OnUpgradeHovered(class UITM_UpgGear_UpgIconSingle_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHovered");
		
		UITM_UpgGear_TierRow_C_OnUpgradeHovered_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::OnUpgradeUnhovered(class UITM_UpgGear_UpgIconSingle_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeUnhovered");
		
		UITM_UpgGear_TierRow_C_OnUpgradeUnhovered_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgrade Clicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_UpgGear_UpgIconSingle_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::OnUpgradeClicked(class UITM_UpgGear_UpgIconSingle_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgrade Clicked");
		
		UITM_UpgGear_TierRow_C_OnUpgradeClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_TierRow_C::ExecuteUbergraph_ITM_UpgGear_TierRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow");
		
		UITM_UpgGear_TierRow_C_ExecuteUbergraph_ITM_UpgGear_TierRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UpgGear_TierRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_TierRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C");
		return ptr;
	}

}


