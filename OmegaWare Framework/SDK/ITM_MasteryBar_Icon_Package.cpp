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
	 * 		Name   -> Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ToggleIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowIcons                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MasteryBar_Icon_C::ToggleIcons(bool ShowIcons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ToggleIcons");
		
		UITM_MasteryBar_Icon_C_ToggleIcons_Params params {};
		params.ShowIcons = ShowIcons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.SetUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MasteryBar_Icon_C::SetUnlocked(bool IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.SetUnlocked");
		
		UITM_MasteryBar_Icon_C_SetUnlocked_Params params {};
		params.IsUnlocked = IsUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_MasteryBar_Icon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.Construct");
		
		UITM_MasteryBar_Icon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MasteryBar_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.PreConstruct");
		
		UITM_MasteryBar_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ReceiveUnlocked
	 * 		Flags  -> ()
	 */
	void UITM_MasteryBar_Icon_C::ReceiveUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ReceiveUnlocked");
		
		UITM_MasteryBar_Icon_C_ReceiveUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ExecuteUbergraph_ITM_MasteryBar_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MasteryBar_Icon_C::ExecuteUbergraph_ITM_MasteryBar_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ExecuteUbergraph_ITM_MasteryBar_Icon");
		
		UITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MasteryBar_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MasteryBar_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C");
		return ptr;
	}

}


