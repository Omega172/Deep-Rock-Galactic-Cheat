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
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClaimedTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perk_ToolTip_C::OnPerkClaimed_Event(class UPerkAsset* Perk, int32_t ClaimedTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event");
		
		UUI_Perk_ToolTip_C_OnPerkClaimed_Event_Params params {};
		params.Perk = Perk;
		params.ClaimedTier = ClaimedTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowRank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perk_ToolTip_C::SetPerkAsset(class UPerkAsset* PerkAsset, int32_t Rank, bool ShowRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset");
		
		UUI_Perk_ToolTip_C_SetPerkAsset_Params params {};
		params.PerkAsset = PerkAsset;
		params.Rank = Rank;
		params.ShowRank = ShowRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.KPI_Intro
	 * 		Flags  -> ()
	 */
	void UUI_Perk_ToolTip_C::KPI_Intro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.KPI_Intro");
		
		UUI_Perk_ToolTip_C_KPI_Intro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Equip_Intro
	 * 		Flags  -> ()
	 */
	void UUI_Perk_ToolTip_C::Equip_Intro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Equip_Intro");
		
		UUI_Perk_ToolTip_C_Equip_Intro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShowRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perk_ToolTip_C::ShowRank(bool InShowRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank");
		
		UUI_Perk_ToolTip_C_ShowRank_Params params {};
		params.InShowRank = InShowRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Reset_Animations
	 * 		Flags  -> ()
	 */
	void UUI_Perk_ToolTip_C::Reset_Animations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Reset_Animations");
		
		UUI_Perk_ToolTip_C_Reset_Animations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.AfterFancyDelay
	 * 		Flags  -> ()
	 */
	void UUI_Perk_ToolTip_C::AfterFancyDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.AfterFancyDelay");
		
		UUI_Perk_ToolTip_C_AfterFancyDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perk_ToolTip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct");
		
		UUI_Perk_ToolTip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perk_ToolTip_C::ExecuteUbergraph_UI_Perk_ToolTip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip");
		
		UUI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Perk_ToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Perk_ToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Perk_ToolTip.UI_Perk_ToolTip_C");
		return ptr;
	}

}


