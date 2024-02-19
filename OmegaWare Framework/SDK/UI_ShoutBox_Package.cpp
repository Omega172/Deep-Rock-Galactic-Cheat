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
	 * 		Name   -> Function UI_ShoutBox.UI_ShoutBox_C.UpdateBoxWidth
	 * 		Flags  -> ()
	 */
	void UUI_ShoutBox_C::UpdateBoxWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoutBox.UI_ShoutBox_C.UpdateBoxWidth");
		
		UUI_ShoutBox_C_UpdateBoxWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoutBox.UI_ShoutBox_C.SetDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDistance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShoutBox_C::SetDistance(float InDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoutBox.UI_ShoutBox_C.SetDistance");
		
		UUI_ShoutBox_C_SetDistance_Params params {};
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoutBox.UI_ShoutBox_C.OnShoutEnd
	 * 		Flags  -> ()
	 */
	void UUI_ShoutBox_C::OnShoutEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoutBox.UI_ShoutBox_C.OnShoutEnd");
		
		UUI_ShoutBox_C_OnShoutEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoutBox.UI_ShoutBox_C.ShoutStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              InDuration                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShoutBox_C::ShoutStart(class APlayerCharacter* InSender, const class FText& InText, float InDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoutBox.UI_ShoutBox_C.ShoutStart");
		
		UUI_ShoutBox_C_ShoutStart_Params params {};
		params.InSender = InSender;
		params.InText = InText;
		params.InDuration = InDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoutBox.UI_ShoutBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShoutBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoutBox.UI_ShoutBox_C.PreConstruct");
		
		UUI_ShoutBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoutBox.UI_ShoutBox_C.ExecuteUbergraph_UI_ShoutBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShoutBox_C::ExecuteUbergraph_UI_ShoutBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoutBox.UI_ShoutBox_C.ExecuteUbergraph_UI_ShoutBox");
		
		UUI_ShoutBox_C_ExecuteUbergraph_UI_ShoutBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoutBox.UI_ShoutBox_C.OnShoutActiveChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShoutActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShoutBox_C::OnShoutActiveChanged__DelegateSignature(bool InShoutActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoutBox.UI_ShoutBox_C.OnShoutActiveChanged__DelegateSignature");
		
		UUI_ShoutBox_C_OnShoutActiveChanged__DelegateSignature_Params params {};
		params.InShoutActive = InShoutActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShoutBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShoutBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShoutBox.UI_ShoutBox_C");
		return ptr;
	}

}


