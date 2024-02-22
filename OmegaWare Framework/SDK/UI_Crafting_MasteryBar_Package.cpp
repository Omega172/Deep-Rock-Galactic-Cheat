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
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.SetLevelAndXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InXP                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crafting_MasteryBar_C::SetLevelAndXP(int32_t InLevel, int32_t InXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.SetLevelAndXP");
		
		UUI_Crafting_MasteryBar_C_SetLevelAndXP_Params params {};
		params.InLevel = InLevel;
		params.InXP = InXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.SetProgressAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crafting_MasteryBar_C::SetProgressAnim(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.SetProgressAnim");
		
		UUI_Crafting_MasteryBar_C_SetProgressAnim_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Finished_D0849C0B40CCD7B2D78053B311632C3E
	 * 		Flags  -> ()
	 */
	void UUI_Crafting_MasteryBar_C::Finished_D0849C0B40CCD7B2D78053B311632C3E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Finished_D0849C0B40CCD7B2D78053B311632C3E");
		
		UUI_Crafting_MasteryBar_C_Finished_D0849C0B40CCD7B2D78053B311632C3E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Finished_6474C18043258635ED36ACA9F1D56472
	 * 		Flags  -> ()
	 */
	void UUI_Crafting_MasteryBar_C::Finished_6474C18043258635ED36ACA9F1D56472()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Finished_6474C18043258635ED36ACA9F1D56472");
		
		UUI_Crafting_MasteryBar_C_Finished_6474C18043258635ED36ACA9F1D56472_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Crafting_MasteryBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.PreConstruct");
		
		UUI_Crafting_MasteryBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Crafting_MasteryBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.Construct");
		
		UUI_Crafting_MasteryBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.OnVanityMasteryChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVanityMasteryResult                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_Crafting_MasteryBar_C::OnVanityMasteryChanged(const struct FVanityMasteryResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.OnVanityMasteryChanged");
		
		UUI_Crafting_MasteryBar_C_OnVanityMasteryChanged_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.StartAnimProgress
	 * 		Flags  -> ()
	 */
	void UUI_Crafting_MasteryBar_C::StartAnimProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.StartAnimProgress");
		
		UUI_Crafting_MasteryBar_C_StartAnimProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.ExecuteUbergraph_UI_Crafting_MasteryBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crafting_MasteryBar_C::ExecuteUbergraph_UI_Crafting_MasteryBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.ExecuteUbergraph_UI_Crafting_MasteryBar");
		
		UUI_Crafting_MasteryBar_C_ExecuteUbergraph_UI_Crafting_MasteryBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.OnMasteryAnimFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Crafting_MasteryBar_C::OnMasteryAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C.OnMasteryAnimFinished__DelegateSignature");
		
		UUI_Crafting_MasteryBar_C_OnMasteryAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Crafting_MasteryBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Crafting_MasteryBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Crafting_MasteryBar.UI_Crafting_MasteryBar_C");
		return ptr;
	}

}


