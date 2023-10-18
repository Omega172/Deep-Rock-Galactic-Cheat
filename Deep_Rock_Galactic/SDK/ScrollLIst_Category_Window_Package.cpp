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
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SelectNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::SelectNext(int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SelectNext");
		
		UScrollLIst_Category_Window_C_SelectNext_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CreateButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMM_ButtonInfo                              Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FText                                        HeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShouldClick                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowArrow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::CreateButton(const struct FMM_ButtonInfo& Button, const class FText& HeaderText, bool ShouldClick, bool ShowArrow, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CreateButton");
		
		UScrollLIst_Category_Window_C_CreateButton_Params params {};
		params.Button = Button;
		params.HeaderText = HeaderText;
		params.ShouldClick = ShouldClick;
		params.ShowArrow = ShowArrow;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::OnClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnClicked");
		
		UScrollLIst_Category_Window_C_OnClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class U_MENU_MinersManual_C*                       _MENU_MinersManual                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::SetData(class U_MENU_MinersManual_C* _MENU_MinersManual)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetData");
		
		UScrollLIst_Category_Window_C_SetData_Params params {};
		params._MENU_MinersManual = _MENU_MinersManual;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayButtonIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULore_List_Element_C*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::PlayButtonIntro(class ULore_List_Element_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayButtonIntro");
		
		UScrollLIst_Category_Window_C_PlayButtonIntro_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Clear
	 * 		Flags  -> ()
	 */
	void UScrollLIst_Category_Window_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Clear");
		
		UScrollLIst_Category_Window_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Tick");
		
		UScrollLIst_Category_Window_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayAnimInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULore_List_Element_C*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::PlayAnimInternal(class ULore_List_Element_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayAnimInternal");
		
		UScrollLIst_Category_Window_C_PlayAnimInternal_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CheckForHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULore_List_Element_C*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::CheckForHeader(class ULore_List_Element_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CheckForHeader");
		
		UScrollLIst_Category_Window_C_CheckForHeader_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Construct
	 * 		Flags  -> ()
	 */
	void UScrollLIst_Category_Window_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Construct");
		
		UScrollLIst_Category_Window_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::CustomEvent(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CustomEvent");
		
		UScrollLIst_Category_Window_C_CustomEvent_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ScrollIntoViewDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::ScrollIntoViewDelay(class UWidget* WidgetToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ScrollIntoViewDelay");
		
		UScrollLIst_Category_Window_C_ScrollIntoViewDelay_Params params {};
		params.WidgetToFind = WidgetToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PrepareNewSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfButtons                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::PrepareNewSection(int32_t NumberOfButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PrepareNewSection");
		
		UScrollLIst_Category_Window_C_PrepareNewSection_Params params {};
		params.NumberOfButtons = NumberOfButtons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UScrollLIst_Category_Window_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnInitialized");
		
		UScrollLIst_Category_Window_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.DecreseFillSpace
	 * 		Flags  -> ()
	 */
	void UScrollLIst_Category_Window_C::DecreseFillSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.DecreseFillSpace");
		
		UScrollLIst_Category_Window_C_DecreseFillSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetSelectedButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::SetSelectedButton(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetSelectedButton");
		
		UScrollLIst_Category_Window_C_SetSelectedButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ExecuteUbergraph_ScrollLIst_Category_Window
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollLIst_Category_Window_C::ExecuteUbergraph_ScrollLIst_Category_Window(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ExecuteUbergraph_ScrollLIst_Category_Window");
		
		UScrollLIst_Category_Window_C_ExecuteUbergraph_ScrollLIst_Category_Window_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrollLIst_Category_Window_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollLIst_Category_Window_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScrollLIst_Category_Window.ScrollLIst_Category_Window_C");
		return ptr;
	}

}


