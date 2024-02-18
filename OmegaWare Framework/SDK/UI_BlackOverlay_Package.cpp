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
	 * 		Name   -> Function UI_BlackOverlay.UI_BlackOverlay_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFade                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InToSpacerig                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture*                                    InLoadingImage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BlackOverlay_C::SetProgress(float InFade, bool InToSpacerig, class UTexture* InLoadingImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.SetProgress");
		
		UUI_BlackOverlay_C_SetProgress_Params params {};
		params.InFade = InFade;
		params.InToSpacerig = InToSpacerig;
		params.InLoadingImage = InLoadingImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlackOverlay.UI_BlackOverlay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BlackOverlay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.PreConstruct");
		
		UUI_BlackOverlay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlackOverlay.UI_BlackOverlay_C.SetFadeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fade                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ToSpaceRig                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture*                                    LoadingImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BlackOverlay_C::SetFadeProgress(float fade, bool ToSpaceRig, class UTexture* LoadingImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.SetFadeProgress");
		
		UUI_BlackOverlay_C_SetFadeProgress_Params params {};
		params.fade = fade;
		params.ToSpaceRig = ToSpaceRig;
		params.LoadingImage = LoadingImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BlackOverlay.UI_BlackOverlay_C.ExecuteUbergraph_UI_BlackOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BlackOverlay_C::ExecuteUbergraph_UI_BlackOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BlackOverlay.UI_BlackOverlay_C.ExecuteUbergraph_UI_BlackOverlay");
		
		UUI_BlackOverlay_C_ExecuteUbergraph_UI_BlackOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BlackOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BlackOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BlackOverlay.UI_BlackOverlay_C");
		return ptr;
	}

}


