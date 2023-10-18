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
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.GetCharacterID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RandomizeLoadoutWithUndo_C::GetCharacterID(class UPlayerCharacterID** characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.GetCharacterID");
		
		UUI_RandomizeLoadoutWithUndo_C_GetCharacterID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (characterID != nullptr)
			*characterID = params.characterID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.GetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            AsPlayerCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RandomizeLoadoutWithUndo_C::GetCharacter(class APlayerCharacter** AsPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.GetCharacter");
		
		UUI_RandomizeLoadoutWithUndo_C_GetCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPlayerCharacter != nullptr)
			*AsPlayerCharacter = params.AsPlayerCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RandomizeLoadoutWithUndo_C::SetHovered(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.SetHovered");
		
		UUI_RandomizeLoadoutWithUndo_C_SetHovered_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.CheckHide
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::CheckHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.CheckHide");
		
		UUI_RandomizeLoadoutWithUndo_C_CheckHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RandomizeLoadoutWithUndo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.PreConstruct");
		
		UUI_RandomizeLoadoutWithUndo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.Clear
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.Clear");
		
		UUI_RandomizeLoadoutWithUndo_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.Construct");
		
		UUI_RandomizeLoadoutWithUndo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.OnHoverAnimFinished
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::OnHoverAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.OnHoverAnimFinished");
		
		UUI_RandomizeLoadoutWithUndo_C_OnHoverAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RandomizeLoadoutWithUndo_C::SetCharacter(class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.SetCharacter");
		
		UUI_RandomizeLoadoutWithUndo_C_SetCharacter_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.ExecuteUbergraph_UI_RandomizeLoadoutWithUndo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RandomizeLoadoutWithUndo_C::ExecuteUbergraph_UI_RandomizeLoadoutWithUndo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.ExecuteUbergraph_UI_RandomizeLoadoutWithUndo");
		
		UUI_RandomizeLoadoutWithUndo_C_ExecuteUbergraph_UI_RandomizeLoadoutWithUndo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.LoadoutRefreshed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RandomizeLoadoutWithUndo_C::LoadoutRefreshed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C.LoadoutRefreshed__DelegateSignature");
		
		UUI_RandomizeLoadoutWithUndo_C_LoadoutRefreshed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RandomizeLoadoutWithUndo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RandomizeLoadoutWithUndo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RandomizeLoadoutWithUndo.UI_RandomizeLoadoutWithUndo_C");
		return ptr;
	}

}


