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
	 * 		Name   -> Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MenuDamageIndicator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.PreConstruct");
		
		UITM_MenuDamageIndicator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageData                                 DamageData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               anyHealthLost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MenuDamageIndicator_C::OnHit(float Damage, const struct FDamageData& DamageData, bool anyHealthLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnHit");
		
		UITM_MenuDamageIndicator_C_OnHit_Params params {};
		params.Damage = Damage;
		params.DamageData = DamageData;
		params.anyHealthLost = anyHealthLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnAnimFinished
	 * 		Flags  -> ()
	 */
	void UITM_MenuDamageIndicator_C::OnAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnAnimFinished");
		
		UITM_MenuDamageIndicator_C_OnAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.SetMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 EscapeMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MenuDamageIndicator_C::SetMenu(class UUserWidget* EscapeMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.SetMenu");
		
		UITM_MenuDamageIndicator_C_SetMenu_Params params {};
		params.EscapeMenu = EscapeMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.ExecuteUbergraph_ITM_MenuDamageIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MenuDamageIndicator_C::ExecuteUbergraph_ITM_MenuDamageIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.ExecuteUbergraph_ITM_MenuDamageIndicator");
		
		UITM_MenuDamageIndicator_C_ExecuteUbergraph_ITM_MenuDamageIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MenuDamageIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MenuDamageIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C");
		return ptr;
	}

}


