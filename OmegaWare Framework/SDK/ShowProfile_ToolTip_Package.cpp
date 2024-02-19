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
	 * 		Name   -> Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShowProfile_ToolTip_C::FadeIn(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.FadeIn");
		
		UShowProfile_ToolTip_C_FadeIn_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetPostionAndAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShowProfile_ToolTip_C::SetPostionAndAlignment(const struct FVector2D& InPosition, const struct FVector2D& InAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetPostionAndAlignment");
		
		UShowProfile_ToolTip_C_SetPostionAndAlignment_Params params {};
		params.InPosition = InPosition;
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ToolTip                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UShowProfile_ToolTip_C::SetText(const class FText& ToolTip, const class FText& Region, const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetText");
		
		UShowProfile_ToolTip_C_SetText_Params params {};
		params.ToolTip = ToolTip;
		params.Region = Region;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     TargetWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShowProfile_ToolTip_C::SetTarget(class UWidget* TargetWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetTarget");
		
		UShowProfile_ToolTip_C_SetTarget_Params params {};
		params.TargetWidget = TargetWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShowProfile_ToolTip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.PreConstruct");
		
		UShowProfile_ToolTip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.Set Tool Tip Owner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShowProfile_ToolTip_C::SetToolTipOwner(class UWidget* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.Set Tool Tip Owner");
		
		UShowProfile_ToolTip_C_SetToolTipOwner_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.ExecuteUbergraph_ShowProfile_ToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShowProfile_ToolTip_C::ExecuteUbergraph_ShowProfile_ToolTip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.ExecuteUbergraph_ShowProfile_ToolTip");
		
		UShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShowProfile_ToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShowProfile_ToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShowProfile_ToolTip.ShowProfile_ToolTip_C");
		return ptr;
	}

}


