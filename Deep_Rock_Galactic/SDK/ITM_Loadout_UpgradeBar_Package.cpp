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
	 * 		Name   -> Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          inCharacterID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EnableHoverTooltip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_UpgradeBar_C::ShowItemUpgrades(class UPlayerCharacterID* inCharacterID, class UClass* InItemClass, class AFSDPlayerState* InPlayerState, bool EnableHoverTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades");
		
		UITM_Loadout_UpgradeBar_C_ShowItemUpgrades_Params params {};
		params.inCharacterID = inCharacterID;
		params.InItemClass = InItemClass;
		params.InPlayerState = InPlayerState;
		params.EnableHoverTooltip = EnableHoverTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UItemUpgrade*>                        upgrades                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UItemUpgrade*                                Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_UpgradeBar_C::GetUpgradeFromList(int32_t Index, TArray<class UItemUpgrade*>* upgrades, class UItemUpgrade** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList");
		
		UITM_Loadout_UpgradeBar_C_GetUpgradeFromList_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (upgrades != nullptr)
			*upgrades = params.upgrades;
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_UpgradeBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct");
		
		UITM_Loadout_UpgradeBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_UpgradeBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct");
		
		UITM_Loadout_UpgradeBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_UpgradeBar_C::ExecuteUbergraph_ITM_Loadout_UpgradeBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar");
		
		UITM_Loadout_UpgradeBar_C_ExecuteUbergraph_ITM_Loadout_UpgradeBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Loadout_UpgradeBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Loadout_UpgradeBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C");
		return ptr;
	}

}


