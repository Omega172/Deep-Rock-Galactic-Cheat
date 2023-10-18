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
	 * 		Name   -> Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UWidget_HandheldTablet_UseProgress_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateIcon");
		
		UWidget_HandheldTablet_UseProgress_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.GetUsableIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HandheldTablet_UseProgress_C::GetUsableIcon(class UTexture2D** OutTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.GetUsableIcon");
		
		UWidget_HandheldTablet_UseProgress_C_GetUsableIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateProgress
	 * 		Flags  -> ()
	 */
	void UWidget_HandheldTablet_UseProgress_C::UpdateProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateProgress");
		
		UWidget_HandheldTablet_UseProgress_C_UpdateProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_HandheldTablet_UseProgress_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.PreConstruct");
		
		UWidget_HandheldTablet_UseProgress_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Construct
	 * 		Flags  -> ()
	 */
	void UWidget_HandheldTablet_UseProgress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Construct");
		
		UWidget_HandheldTablet_UseProgress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HandheldTablet_UseProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Tick");
		
		UWidget_HandheldTablet_UseProgress_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.ExecuteUbergraph_Widget_HandheldTablet_UseProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_HandheldTablet_UseProgress_C::ExecuteUbergraph_Widget_HandheldTablet_UseProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.ExecuteUbergraph_Widget_HandheldTablet_UseProgress");
		
		UWidget_HandheldTablet_UseProgress_C_ExecuteUbergraph_Widget_HandheldTablet_UseProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_HandheldTablet_UseProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_HandheldTablet_UseProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C");
		return ptr;
	}

}


