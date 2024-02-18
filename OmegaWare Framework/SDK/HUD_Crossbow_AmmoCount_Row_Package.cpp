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
	 * 		Name   -> Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIsActiveArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crossbow_AmmoCount_Row_C::SetIsActiveArrow(bool Inactive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIsActiveArrow");
		
		UHUD_Crossbow_AmmoCount_Row_C_SetIsActiveArrow_Params params {};
		params.Inactive = Inactive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetAmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmmoCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crossbow_AmmoCount_Row_C::SetAmmoCount(int32_t InAmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetAmmoCount");
		
		UHUD_Crossbow_AmmoCount_Row_C_SetAmmoCount_Params params {};
		params.InAmmoCount = InAmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crossbow_AmmoCount_Row_C::SetIcon(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.SetIcon");
		
		UHUD_Crossbow_AmmoCount_Row_C_SetIcon_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crossbow_AmmoCount_Row_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.PreConstruct");
		
		UHUD_Crossbow_AmmoCount_Row_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crossbow_AmmoCount_Row_C::ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C.ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row");
		
		UHUD_Crossbow_AmmoCount_Row_C_ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Crossbow_AmmoCount_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Crossbow_AmmoCount_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Crossbow_AmmoCount_Row.HUD_Crossbow_AmmoCount_Row_C");
		return ptr;
	}

}


