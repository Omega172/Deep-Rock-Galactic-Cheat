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
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetBorderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OutputColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ItemIcon_C::GetBorderColor(struct FLinearColor* OutputColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetBorderColor");
		
		UITM_Craft_ItemIcon_C_GetBorderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputColor != nullptr)
			*OutputColor = params.OutputColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.FreeRenderTarget
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemIcon_C::FreeRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.FreeRenderTarget");
		
		UITM_Craft_ItemIcon_C_FreeRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ItemIcon_C::SetIconTexture(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetIconTexture");
		
		UITM_Craft_ItemIcon_C_SetIconTexture_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             AsFSDPlayerState                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ItemIcon_C::GetPlayerState(class AFSDPlayerState** AsFSDPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState");
		
		UITM_Craft_ItemIcon_C_GetPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsFSDPlayerState != nullptr)
			*AsFSDPlayerState = params.AsFSDPlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ItemIcon_C::SetData(class UClass* CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData");
		
		UITM_Craft_ItemIcon_C_SetData_Params params {};
		params.CharacterClass = CharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Craft_ItemIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct");
		
		UITM_Craft_ItemIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ItemIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct");
		
		UITM_Craft_ItemIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ItemIcon_C::ExecuteUbergraph_ITM_Craft_ItemIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon");
		
		UITM_Craft_ItemIcon_C_ExecuteUbergraph_ITM_Craft_ItemIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Craft_ItemIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Craft_ItemIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C");
		return ptr;
	}

}


