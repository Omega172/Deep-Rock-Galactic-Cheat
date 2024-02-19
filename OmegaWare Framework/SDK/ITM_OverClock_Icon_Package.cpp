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
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Overclock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetOverclockTooltip(class UItemUpgrade* Overclock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip");
		
		UITM_Overclock_Icon_C_SetOverclockTooltip_Params params {};
		params.Overclock = Overclock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Overclock_Icon_C::GetOverclockTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip");
		
		UITM_Overclock_Icon_C_GetOverclockTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ColorAndOpacity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::GetFrameLinearColor(struct FLinearColor* ColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor");
		
		UITM_Overclock_Icon_C_GetFrameLinearColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorAndOpacity != nullptr)
			*ColorAndOpacity = params.ColorAndOpacity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESchematicType                                     InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::FromSchematicType(ESchematicType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType");
		
		UITM_Overclock_Icon_C_FromSchematicType_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematicCategory*                          InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetCategory(class USchematicCategory* InCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory");
		
		UITM_Overclock_Icon_C_SetCategory_Params params {};
		params.InCategory = InCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetFrameLinearColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor");
		
		UITM_Overclock_Icon_C_SetFrameLinearColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                InUpgrade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USchematicCategory*                          OutSchematicCategory                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::FromUpgrade(class UItemUpgrade* InUpgrade, class USchematicCategory** OutSchematicCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade");
		
		UITM_Overclock_Icon_C_FromUpgrade_Params params {};
		params.InUpgrade = InUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSchematicCategory != nullptr)
			*OutSchematicCategory = params.OutSchematicCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclock_Icon_C::FromSchematic(class USchematic* InSchematic, bool ShowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic");
		
		UITM_Overclock_Icon_C_FromSchematic_Params params {};
		params.InSchematic = InSchematic;
		params.ShowState = ShowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetIconColor(ENUM_MenuColors Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor");
		
		UITM_Overclock_Icon_C_SetIconColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetIcon(class UTexture2D* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon");
		
		UITM_Overclock_Icon_C_SetIcon_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetFrame(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame");
		
		UITM_Overclock_Icon_C_SetFrame_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    ColorSelector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetFrameColor(ENUM_MenuColors ColorSelector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor");
		
		UITM_Overclock_Icon_C_SetFrameColor_Params params {};
		params.ColorSelector = ColorSelector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::SetIconSize(int32_t InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize");
		
		UITM_Overclock_Icon_C_SetIconSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclock_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct");
		
		UITM_Overclock_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclock_Icon_C::ExecuteUbergraph_ITM_Overclock_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon");
		
		UITM_Overclock_Icon_C_ExecuteUbergraph_ITM_Overclock_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Overclock_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Overclock_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_OverClock_Icon.ITM_Overclock_Icon_C");
		return ptr;
	}

}


