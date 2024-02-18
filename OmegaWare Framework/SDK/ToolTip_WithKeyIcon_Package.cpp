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
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::FadeIn(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.FadeIn");
		
		UToolTip_WithKeyIcon_C_FadeIn_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidthOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::SetWidth(float InWidthOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetWidth");
		
		UToolTip_WithKeyIcon_C_SetWidth_Params params {};
		params.InWidthOverride = InWidthOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMaxWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::SetMaxWidth(float MaxWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMaxWidth");
		
		UToolTip_WithKeyIcon_C_SetMaxWidth_Params params {};
		params.MaxWidth = MaxWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMinWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::SetMinWidth(float MinWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMinWidth");
		
		UToolTip_WithKeyIcon_C_SetMinWidth_Params params {};
		params.MinWidth = MinWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetPostionAndAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::SetPostionAndAlignment(const struct FVector2D& InPosition, const struct FVector2D& InAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetPostionAndAlignment");
		
		UToolTip_WithKeyIcon_C_SetPostionAndAlignment_Params params {};
		params.InPosition = InPosition;
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Headline                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FActionIconMapping                          Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UToolTip_WithKeyIcon_C::SetData(const class FText& Headline, const class FText& Text, const struct FActionIconMapping& Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetData");
		
		UToolTip_WithKeyIcon_C_SetData_Params params {};
		params.Headline = Headline;
		params.Text = Text;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     TargetWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::SetTarget(class UWidget* TargetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetTarget");
		
		UToolTip_WithKeyIcon_C_SetTarget_Params params {};
		params.TargetWidget = TargetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UToolTip_WithKeyIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.PreConstruct");
		
		UToolTip_WithKeyIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.Set Tool Tip Owner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::SetToolTipOwner(class UWidget* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.Set Tool Tip Owner");
		
		UToolTip_WithKeyIcon_C_SetToolTipOwner_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.ExecuteUbergraph_ToolTip_WithKeyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTip_WithKeyIcon_C::ExecuteUbergraph_ToolTip_WithKeyIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.ExecuteUbergraph_ToolTip_WithKeyIcon");
		
		UToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTip_WithKeyIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTip_WithKeyIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C");
		return ptr;
	}

}


