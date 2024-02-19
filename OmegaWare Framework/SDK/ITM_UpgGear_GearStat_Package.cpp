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
	 * 		Name   -> Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGearStatEntry                              InStat                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_UpgGear_GearStat_C::SetGearStat(const struct FGearStatEntry& InStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat");
		
		UITM_UpgGear_GearStat_C_SetGearStat_Params params {};
		params.InStat = InStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InStatName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InStatValue                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InStatBaseValue                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InStatUpgradeValue                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EItemPreviewStatus                                 InItemPreviewStatus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearStat_C::SetData(const class FText& InStatName, const class FText& InStatValue, const class FText& InStatBaseValue, const class FText& InStatUpgradeValue, EItemPreviewStatus InItemPreviewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData");
		
		UITM_UpgGear_GearStat_C_SetData_Params params {};
		params.InStatName = InStatName;
		params.InStatValue = InStatValue;
		params.InStatBaseValue = InStatBaseValue;
		params.InStatUpgradeValue = InStatUpgradeValue;
		params.InItemPreviewStatus = InItemPreviewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_UpgGear_GearStat_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct");
		
		UITM_UpgGear_GearStat_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UpgGear_GearStat_C::ExecuteUbergraph_ITM_UpgGear_GearStat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat");
		
		UITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UpgGear_GearStat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UpgGear_GearStat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C");
		return ptr;
	}

}


