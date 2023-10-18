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
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.Refresh");
		
		UUI_Modding_SortBy_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.UpdateHovered
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::UpdateHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.UpdateHovered");
		
		UUI_Modding_SortBy_C_UpdateHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.Click
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPackageSortField                                  InField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Modding_SortBy_C::Click(EPackageSortField InField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.Click");
		
		UUI_Modding_SortBy_C_Click_Params params {};
		params.InField = InField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.GetSortBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPackageSortField                                  Field                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ascending                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Modding_SortBy_C::GetSortBy(EPackageSortField* Field, bool* Ascending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.GetSortBy");
		
		UUI_Modding_SortBy_C_GetSortBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Field != nullptr)
			*Field = params.Field;
		if (Ascending != nullptr)
			*Ascending = params.Ascending;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.SetSortBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPackageSortField                                  InField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InAscending                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Modding_SortBy_C::SetSortBy(EPackageSortField InField, bool InAscending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.SetSortBy");
		
		UUI_Modding_SortBy_C_SetSortBy_Params params {};
		params.InField = InField;
		params.InAscending = InAscending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Modding_SortBy_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.PreConstruct");
		
		UUI_Modding_SortBy_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Category_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Name_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Name_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Name_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Name_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Author_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Author_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Author_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Author_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Name_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Name_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Name_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Name_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Name_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Name_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Name_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Name_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Author_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Author_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Author_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Author_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Author_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Author_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Author_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Author_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Active_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Active_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Active_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Active_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Active_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Active_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Active_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Active_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Active_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Modding_SortBy_C::BndEvt__Button_Active_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Button_Active_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Button_Active_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Modding_SortBy_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature");
		
		UUI_Modding_SortBy_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.ExecuteUbergraph_UI_Modding_SortBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Modding_SortBy_C::ExecuteUbergraph_UI_Modding_SortBy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.ExecuteUbergraph_UI_Modding_SortBy");
		
		UUI_Modding_SortBy_C_ExecuteUbergraph_UI_Modding_SortBy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.OnEnableDisableAll__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnableAll                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Modding_SortBy_C::OnEnableDisableAll__DelegateSignature(bool InEnableAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.OnEnableDisableAll__DelegateSignature");
		
		UUI_Modding_SortBy_C_OnEnableDisableAll__DelegateSignature_Params params {};
		params.InEnableAll = InEnableAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Modding_SortBy.UI_Modding_SortBy_C.OnSortByChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPackageSortField                                  InField                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InAscending                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Modding_SortBy_C::OnSortByChanged__DelegateSignature(EPackageSortField InField, bool InAscending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Modding_SortBy.UI_Modding_SortBy_C.OnSortByChanged__DelegateSignature");
		
		UUI_Modding_SortBy_C_OnSortByChanged__DelegateSignature_Params params {};
		params.InField = InField;
		params.InAscending = InAscending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Modding_SortBy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Modding_SortBy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Modding_SortBy.UI_Modding_SortBy_C");
		return ptr;
	}

}


