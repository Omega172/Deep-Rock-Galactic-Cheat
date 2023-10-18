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
	 * 		Name   -> Function UI_Character_Supplies.UI_Character_Supplies_C.HandleVisiblity
	 * 		Flags  -> ()
	 */
	void UUI_Character_Supplies_C::HandleVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.HandleVisiblity");
		
		UUI_Character_Supplies_C_HandleVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Character_Supplies.UI_Character_Supplies_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Character_Supplies_C::SetData(class AFSDPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.SetData");
		
		UUI_Character_Supplies_C_SetData_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Character_Supplies.UI_Character_Supplies_C.OnSupplyStatusChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ammoStatus01                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              healthStatus01                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Character_Supplies_C::OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.OnSupplyStatusChangedEvent");
		
		UUI_Character_Supplies_C_OnSupplyStatusChangedEvent_Params params {};
		params.ammoStatus01 = ammoStatus01;
		params.healthStatus01 = healthStatus01;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Character_Supplies.UI_Character_Supplies_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Character_Supplies_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.PreConstruct");
		
		UUI_Character_Supplies_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Character_Supplies.UI_Character_Supplies_C.ExecuteUbergraph_UI_Character_Supplies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Character_Supplies_C::ExecuteUbergraph_UI_Character_Supplies(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Character_Supplies.UI_Character_Supplies_C.ExecuteUbergraph_UI_Character_Supplies");
		
		UUI_Character_Supplies_C_ExecuteUbergraph_UI_Character_Supplies_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Character_Supplies_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Character_Supplies_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Character_Supplies.UI_Character_Supplies_C");
		return ptr;
	}

}


