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
	 * 		Name   -> Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* ULore_DamageTypeIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.GetToolTipWidget_1");
		
		ULore_DamageTypeIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void ULore_DamageTypeIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.Construct");
		
		ULore_DamageTypeIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageTypeDescription                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULore_DamageTypeIcon_C::SetData(const struct FDamageTypeDescription& DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.SetData");
		
		ULore_DamageTypeIcon_C_SetData_Params params {};
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_DamageTypeIcon_C::PlayIntro(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.PlayIntro");
		
		ULore_DamageTypeIcon_C_PlayIntro_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_DamageTypeIcon_C::ExecuteUbergraph_Lore_DamageTypeIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_DamageTypeIcon.Lore_DamageTypeIcon_C.ExecuteUbergraph_Lore_DamageTypeIcon");
		
		ULore_DamageTypeIcon_C_ExecuteUbergraph_Lore_DamageTypeIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_DamageTypeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_DamageTypeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_DamageTypeIcon.Lore_DamageTypeIcon_C");
		return ptr;
	}

}


