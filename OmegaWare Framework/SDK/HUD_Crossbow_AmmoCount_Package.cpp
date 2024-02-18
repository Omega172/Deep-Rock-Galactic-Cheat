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
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.GetArrowIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDefaultArrow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crossbow_AmmoCount_C::GetArrowIcon(bool InDefaultArrow, class UTexture2D** OutTexture, bool* OutValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.GetArrowIcon");
		
		UHUD_Crossbow_AmmoCount_C_GetArrowIcon_Params params {};
		params.InDefaultArrow = InDefaultArrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
		if (OutValid != nullptr)
			*OutValid = params.OutValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.Refresh
	 * 		Flags  -> ()
	 */
	void UHUD_Crossbow_AmmoCount_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.Refresh");
		
		UHUD_Crossbow_AmmoCount_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.Finished_7D5D15E24B34D3D4466E3BA129F1FC49
	 * 		Flags  -> ()
	 */
	void UHUD_Crossbow_AmmoCount_C::Finished_7D5D15E24B34D3D4466E3BA129F1FC49()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.Finished_7D5D15E24B34D3D4466E3BA129F1FC49");
		
		UHUD_Crossbow_AmmoCount_C_Finished_7D5D15E24B34D3D4466E3BA129F1FC49_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.ReceiveItemSet
	 * 		Flags  -> ()
	 */
	void UHUD_Crossbow_AmmoCount_C::ReceiveItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.ReceiveItemSet");
		
		UHUD_Crossbow_AmmoCount_C_ReceiveItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.OnAmmoCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crossbow_AmmoCount_C::OnAmmoCountChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.OnAmmoCountChanged");
		
		UHUD_Crossbow_AmmoCount_C_OnAmmoCountChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.OnArrowTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDefaultArrow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crossbow_AmmoCount_C::OnArrowTypeChanged(bool InDefaultArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.OnArrowTypeChanged");
		
		UHUD_Crossbow_AmmoCount_C_OnArrowTypeChanged_Params params {};
		params.InDefaultArrow = InDefaultArrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crossbow_AmmoCount_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.PreConstruct");
		
		UHUD_Crossbow_AmmoCount_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.ExecuteUbergraph_HUD_Crossbow_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crossbow_AmmoCount_C::ExecuteUbergraph_HUD_Crossbow_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C.ExecuteUbergraph_HUD_Crossbow_AmmoCount");
		
		UHUD_Crossbow_AmmoCount_C_ExecuteUbergraph_HUD_Crossbow_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Crossbow_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Crossbow_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Crossbow_AmmoCount.HUD_Crossbow_AmmoCount_C");
		return ptr;
	}

}


