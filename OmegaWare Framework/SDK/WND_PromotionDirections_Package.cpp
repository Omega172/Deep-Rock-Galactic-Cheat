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
	 * 		Name   -> Function WND_PromotionDirections.WND_PromotionDirections_C.ReceiveCanCloseWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               InIsMouseEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UWND_PromotionDirections_C::ReceiveCanCloseWindow(const class FName& InActionName, const struct FKey& InKey, bool InIsMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.ReceiveCanCloseWindow");
		
		UWND_PromotionDirections_C_ReceiveCanCloseWindow_Params params {};
		params.InActionName = InActionName;
		params.InKey = InKey;
		params.InIsMouseEvent = InIsMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_PromotionDirections.WND_PromotionDirections_C.Finished_A0ADC2C4421D1470173667A7D2CBA086
	 * 		Flags  -> ()
	 */
	void UWND_PromotionDirections_C::Finished_A0ADC2C4421D1470173667A7D2CBA086()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.Finished_A0ADC2C4421D1470173667A7D2CBA086");
		
		UWND_PromotionDirections_C_Finished_A0ADC2C4421D1470173667A7D2CBA086_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_PromotionDirections.WND_PromotionDirections_C.OnShown
	 * 		Flags  -> ()
	 */
	void UWND_PromotionDirections_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.OnShown");
		
		UWND_PromotionDirections_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_PromotionDirections.WND_PromotionDirections_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_PromotionDirections_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.PreConstruct");
		
		UWND_PromotionDirections_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_PromotionDirections.WND_PromotionDirections_C.BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_PromotionDirections_C::BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWND_PromotionDirections_C_BndEvt__ITM_Special_ButtonCutCorner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_PromotionDirections.WND_PromotionDirections_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_PromotionDirections_C::SetCharacter(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.SetCharacter");
		
		UWND_PromotionDirections_C_SetCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_PromotionDirections.WND_PromotionDirections_C.ExecuteUbergraph_WND_PromotionDirections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_PromotionDirections_C::ExecuteUbergraph_WND_PromotionDirections(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_PromotionDirections.WND_PromotionDirections_C.ExecuteUbergraph_WND_PromotionDirections");
		
		UWND_PromotionDirections_C_ExecuteUbergraph_WND_PromotionDirections_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_PromotionDirections_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_PromotionDirections_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_PromotionDirections.WND_PromotionDirections_C");
		return ptr;
	}

}


