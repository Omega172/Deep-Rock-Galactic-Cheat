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
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::FadeIn(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.FadeIn");
		
		UBasic_ToolTip_HeadlineAndText_C_FadeIn_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidthOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::SetWidth(float InWidthOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetWidth");
		
		UBasic_ToolTip_HeadlineAndText_C_SetWidth_Params params {};
		params.InWidthOverride = InWidthOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMaxWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::SetMaxWidth(float MaxWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMaxWidth");
		
		UBasic_ToolTip_HeadlineAndText_C_SetMaxWidth_Params params {};
		params.MaxWidth = MaxWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMinWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::SetMinWidth(float MinWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMinWidth");
		
		UBasic_ToolTip_HeadlineAndText_C_SetMinWidth_Params params {};
		params.MinWidth = MinWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetPostionAndAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::SetPostionAndAlignment(const struct FVector2D& InPosition, const struct FVector2D& InAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetPostionAndAlignment");
		
		UBasic_ToolTip_HeadlineAndText_C_SetPostionAndAlignment_Params params {};
		params.InPosition = InPosition;
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Headline                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::SetText(const class FText& Headline, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetText");
		
		UBasic_ToolTip_HeadlineAndText_C_SetText_Params params {};
		params.Headline = Headline;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     TargetWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::SetTarget(class UWidget* TargetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetTarget");
		
		UBasic_ToolTip_HeadlineAndText_C_SetTarget_Params params {};
		params.TargetWidget = TargetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.PreConstruct");
		
		UBasic_ToolTip_HeadlineAndText_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.Set Tool Tip Owner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::SetToolTipOwner(class UWidget* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.Set Tool Tip Owner");
		
		UBasic_ToolTip_HeadlineAndText_C_SetToolTipOwner_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.ExecuteUbergraph_Basic_ToolTip_HeadlineAndText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ToolTip_HeadlineAndText_C::ExecuteUbergraph_Basic_ToolTip_HeadlineAndText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.ExecuteUbergraph_Basic_ToolTip_HeadlineAndText");
		
		UBasic_ToolTip_HeadlineAndText_C_ExecuteUbergraph_Basic_ToolTip_HeadlineAndText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_ToolTip_HeadlineAndText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_ToolTip_HeadlineAndText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C");
		return ptr;
	}

}


