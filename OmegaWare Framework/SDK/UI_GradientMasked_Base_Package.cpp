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
	 * 		Name   -> Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetDynamicMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GradientMasked_Base_C::GetDynamicMaterial(class UMaterialInstanceDynamic** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetDynamicMaterial");
		
		UUI_GradientMasked_Base_C_GetDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_GradientMasked_Base_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.Refresh");
		
		UUI_GradientMasked_Base_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetMaterialTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MaskedGradientTypes                           GradientType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          OutTemplate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GradientMasked_Base_C::GetMaterialTemplate(ENUM_MaskedGradientTypes GradientType, class UMaterialInterface** OutTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetMaterialTemplate");
		
		UUI_GradientMasked_Base_C_GetMaterialTemplate_Params params {};
		params.GradientType = GradientType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTemplate != nullptr)
			*OutTemplate = params.OutTemplate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_GradientMasked_Base_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.PreConstruct");
		
		UUI_GradientMasked_Base_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.OnMaterialRefreshed
	 * 		Flags  -> ()
	 */
	void UUI_GradientMasked_Base_C::OnMaterialRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.OnMaterialRefreshed");
		
		UUI_GradientMasked_Base_C_OnMaterialRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.ExecuteUbergraph_UI_GradientMasked_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GradientMasked_Base_C::ExecuteUbergraph_UI_GradientMasked_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.ExecuteUbergraph_UI_GradientMasked_Base");
		
		UUI_GradientMasked_Base_C_ExecuteUbergraph_UI_GradientMasked_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GradientMasked_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GradientMasked_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GradientMasked_Base.UI_GradientMasked_Base_C");
		return ptr;
	}

}


