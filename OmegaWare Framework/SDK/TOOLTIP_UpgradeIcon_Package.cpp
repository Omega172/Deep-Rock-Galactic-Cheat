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
	 * 		Name   -> Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.SetAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_UpgradeIcon_C::SetAlignment(const struct FVector2D& InAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.SetAlignment");
		
		UTOOLTIP_UpgradeIcon_C_SetAlignment_Params params {};
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility
	 * 		Flags  -> ()
	 */
	void UTOOLTIP_UpgradeIcon_C::UpdateDetailVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility");
		
		UTOOLTIP_UpgradeIcon_C_UpdateDetailVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgradeCategory*                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InUpgradeName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InUpgradeDescription                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EItemUpgradeStatus                                 InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FCraftingCost>                       InCost                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InCanUnequip                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowUpgradeStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_UpgradeIcon_C::Update(class UItemUpgradeCategory* Category, const class FText& InUpgradeName, const class FText& InUpgradeDescription, EItemUpgradeStatus InStatus, TArray<struct FCraftingCost>* InCost, bool InCanUnequip, bool ShowUpgradeStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update");
		
		UTOOLTIP_UpgradeIcon_C_Update_Params params {};
		params.Category = Category;
		params.InUpgradeName = InUpgradeName;
		params.InUpgradeDescription = InUpgradeDescription;
		params.InStatus = InStatus;
		params.InCanUnequip = InCanUnequip;
		params.ShowUpgradeStatus = ShowUpgradeStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCost != nullptr)
			*InCost = params.InCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_UpgradeIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct");
		
		UTOOLTIP_UpgradeIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UTOOLTIP_UpgradeIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct");
		
		UTOOLTIP_UpgradeIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_UpgradeIcon_C::OnShowUpgradeExtraDetailsChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged");
		
		UTOOLTIP_UpgradeIcon_C_OnShowUpgradeExtraDetailsChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_UpgradeIcon_C::ExecuteUbergraph_TOOLTIP_UpgradeIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon");
		
		UTOOLTIP_UpgradeIcon_C_ExecuteUbergraph_TOOLTIP_UpgradeIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_UpgradeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_UpgradeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C");
		return ptr;
	}

}


