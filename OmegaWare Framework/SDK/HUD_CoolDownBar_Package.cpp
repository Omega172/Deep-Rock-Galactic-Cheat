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
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCoolDownItemAggregator*                     CoolDown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CoolDownBar_C::Initialize(class UCoolDownItemAggregator* CoolDown, class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize");
		
		UHUD_CoolDownBar_C_Initialize_Params params {};
		params.CoolDown = CoolDown;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_CoolDownBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct");
		
		UHUD_CoolDownBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CoolDownBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick");
		
		UHUD_CoolDownBar_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.ProgressSound
	 * 		Flags  -> ()
	 */
	void UHUD_CoolDownBar_C::ProgressSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.ProgressSound");
		
		UHUD_CoolDownBar_C_ProgressSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.On UnEquipped
	 * 		Flags  -> ()
	 */
	void UHUD_CoolDownBar_C::OnUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.On UnEquipped");
		
		UHUD_CoolDownBar_C_OnUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.OnEquipped
	 * 		Flags  -> ()
	 */
	void UHUD_CoolDownBar_C::OnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.OnEquipped");
		
		UHUD_CoolDownBar_C_OnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.OnItemSet
	 * 		Flags  -> ()
	 */
	void UHUD_CoolDownBar_C::OnItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.OnItemSet");
		
		UHUD_CoolDownBar_C_OnItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CoolDownBar_C::ExecuteUbergraph_HUD_CoolDownBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar");
		
		UHUD_CoolDownBar_C_ExecuteUbergraph_HUD_CoolDownBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CoolDownBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CoolDownBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CoolDownBar.HUD_CoolDownBar_C");
		return ptr;
	}

}


