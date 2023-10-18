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
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForwardDirection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MissionStats_Categories_C::SelectNext(bool ForwardDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext");
		
		UUI_MissionStats_Categories_C_SelectNext_Params params {};
		params.ForwardDirection = ForwardDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_Categories_C::AddVerticalBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar");
		
		UUI_MissionStats_Categories_C_AddVerticalBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  CategoryIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAllCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_MissionStats_Category_C*                 CategoryWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStats_Categories_C::AddCategory(class UTexture2D* CategoryIcon, bool IsAllCategory, class UUI_MissionStats_Category_C** CategoryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category");
		
		UUI_MissionStats_Categories_C_AddCategory_Params params {};
		params.CategoryIcon = CategoryIcon;
		params.IsAllCategory = IsAllCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryWidget != nullptr)
			*CategoryWidget = params.CategoryWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          Selection                                                  (Parm, OutParm)
	 */
	void UUI_MissionStats_Categories_C::GetCategorySelection(TArray<class UTexture2D*>* Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection");
		
		UUI_MissionStats_Categories_C_GetCategorySelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MissionStats_Categories_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct");
		
		UUI_MissionStats_Categories_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          CategoryIcons                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MissionStats_Categories_C::SetCategories(TArray<class UTexture2D*> CategoryIcons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories");
		
		UUI_MissionStats_Categories_C_SetCategories_Params params {};
		params.CategoryIcons = CategoryIcons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MissionStats_Category_C*                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStats_Categories_C::SetupWidgetEvents(class UUI_MissionStats_Category_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events");
		
		UUI_MissionStats_Categories_C_SetupWidgetEvents_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MissionStats_Category_C*                 CategoryWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MissionStats_Categories_C::OnCategoryClicked(class UUI_MissionStats_Category_C* CategoryWidget, bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked");
		
		UUI_MissionStats_Categories_C_OnCategoryClicked_Params params {};
		params.CategoryWidget = CategoryWidget;
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_Categories_C::BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UUI_MissionStats_Categories_C_BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_Categories_C::BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UUI_MissionStats_Categories_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStats_Categories_C::ExecuteUbergraph_UI_MissionStats_Categories(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories");
		
		UUI_MissionStats_Categories_C_ExecuteUbergraph_UI_MissionStats_Categories_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_Categories_C::OnSelectedChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature");
		
		UUI_MissionStats_Categories_C_OnSelectedChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MissionStats_Categories_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MissionStats_Categories_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MissionStats_Categories.UI_MissionStats_Categories_C");
		return ptr;
	}

}


