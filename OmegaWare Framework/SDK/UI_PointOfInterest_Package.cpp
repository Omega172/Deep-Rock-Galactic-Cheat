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
	 * 		Name   -> Function UI_PointOfInterest.UI_PointOfInterest_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterest_C::Init(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.Init");
		
		UUI_PointOfInterest_C_Init_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterest.UI_PointOfInterest_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterest_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.Construct");
		
		UUI_PointOfInterest_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterest.UI_PointOfInterest_C.OnIntroFinished
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterest_C::OnIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.OnIntroFinished");
		
		UUI_PointOfInterest_C_OnIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterest.UI_PointOfInterest_C.OnOutroFinished
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterest_C::OnOutroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.OnOutroFinished");
		
		UUI_PointOfInterest_C_OnOutroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterest.UI_PointOfInterest_C.ExecuteUbergraph_UI_PointOfInterest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterest_C::ExecuteUbergraph_UI_PointOfInterest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.ExecuteUbergraph_UI_PointOfInterest");
		
		UUI_PointOfInterest_C_ExecuteUbergraph_UI_PointOfInterest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterest.UI_PointOfInterest_C.Finished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterest_C::Finished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterest.UI_PointOfInterest_C.Finished__DelegateSignature");
		
		UUI_PointOfInterest_C_Finished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PointOfInterest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PointOfInterest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PointOfInterest.UI_PointOfInterest_C");
		return ptr;
	}

}


