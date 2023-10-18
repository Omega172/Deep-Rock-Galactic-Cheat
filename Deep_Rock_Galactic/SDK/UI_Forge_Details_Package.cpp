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
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.SequenceEvent__ENTRYPOINTUI_Forge_Details_1
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Details_C::SequenceEvent__ENTRYPOINTUI_Forge_Details_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.SequenceEvent__ENTRYPOINTUI_Forge_Details_1");
		
		UUI_Forge_Details_C_SequenceEvent__ENTRYPOINTUI_Forge_Details_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.StartCounting
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Details_C::StartCounting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.StartCounting");
		
		UUI_Forge_Details_C_StartCounting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Details_C::SetCountProgress(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress");
		
		UUI_Forge_Details_C_SetCountProgress_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Details_C::OpenMatrixCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore");
		
		UUI_Forge_Details_C_OpenMatrixCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Subtitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Forge_Details_C::SetItemDescription(const class FText& Title, const class FText& Subtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription");
		
		UUI_Forge_Details_C_SetItemDescription_Params params {};
		params.Title = Title;
		params.Subtitle = Subtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Details_C::ShowSchematic(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic");
		
		UUI_Forge_Details_C_ShowSchematic_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_Details_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct");
		
		UUI_Forge_Details_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Details_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.Construct");
		
		UUI_Forge_Details_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.AnimOpenMatrixFinished
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Details_C::AnimOpenMatrixFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.AnimOpenMatrixFinished");
		
		UUI_Forge_Details_C_AnimOpenMatrixFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.Stop Counting
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Details_C::StopCounting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.Stop Counting");
		
		UUI_Forge_Details_C_StopCounting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Details_C::ExecuteUbergraph_UI_Forge_Details(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details");
		
		UUI_Forge_Details_C_ExecuteUbergraph_UI_Forge_Details_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Details.UI_Forge_Details_C.OnMatrixCoreOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Details_C::OnMatrixCoreOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Details.UI_Forge_Details_C.OnMatrixCoreOpened__DelegateSignature");
		
		UUI_Forge_Details_C_OnMatrixCoreOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_Details_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_Details_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_Details.UI_Forge_Details_C");
		return ptr;
	}

}


