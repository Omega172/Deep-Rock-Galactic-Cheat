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
	 * 		Name   -> Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_DamageClass_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct");
		
		UHUD_DamageClass_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate
	 * 		Flags  -> ()
	 */
	void UHUD_DamageClass_Item_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate");
		
		UHUD_DamageClass_Item_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Activate
	 * 		Flags  -> ()
	 */
	void UHUD_DamageClass_Item_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Activate");
		
		UHUD_DamageClass_Item_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.OnDeactivedFinished
	 * 		Flags  -> ()
	 */
	void UHUD_DamageClass_Item_C::OnDeactivedFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.OnDeactivedFinished");
		
		UHUD_DamageClass_Item_C_OnDeactivedFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageClass_Item_C::ExecuteUbergraph_HUD_DamageClass_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item");
		
		UHUD_DamageClass_Item_C_ExecuteUbergraph_HUD_DamageClass_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUD_DamageClass_Item_C*                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageClass_Item_C::Elapsed__DelegateSignature(class UHUD_DamageClass_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature");
		
		UHUD_DamageClass_Item_C_Elapsed__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_DamageClass_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_DamageClass_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DamageClass_Item.HUD_DamageClass_Item_C");
		return ptr;
	}

}


