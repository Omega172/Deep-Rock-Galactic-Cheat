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
	 * 		Name   -> Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.GetResourceAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_Resources_C::GetResourceAmount(class UResourceData* Resource, float* Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.GetResourceAmount");
		
		UITM_TopBar_Resources_C_GetResourceAmount_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Amount != nullptr)
			*Amount = params.Amount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InHideWhenZero                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_TopBar_Resources_C::AddResource(class UResourceData* InResource, bool InHideWhenZero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource");
		
		UITM_TopBar_Resources_C_AddResource_Params params {};
		params.InResource = InResource;
		params.InHideWhenZero = InHideWhenZero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UResourceData*>                       InResources                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_TopBar_Resources_C::SetResources(TArray<class UResourceData*>* InResources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources");
		
		UITM_TopBar_Resources_C_SetResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InResources != nullptr)
			*InResources = params.InResources;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_TopBar_Resources_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct");
		
		UITM_TopBar_Resources_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.UpdateResourceBehavior
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideWhenZero                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoCountAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_TopBar_Resources_C::UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.UpdateResourceBehavior");
		
		UITM_TopBar_Resources_C_UpdateResourceBehavior_Params params {};
		params.HideWhenZero = HideWhenZero;
		params.DoCountAnim = DoCountAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_Resources_C::ExecuteUbergraph_ITM_TopBar_Resources(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources");
		
		UITM_TopBar_Resources_C_ExecuteUbergraph_ITM_TopBar_Resources_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_TopBar_Resources_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_TopBar_Resources_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_TopBar_Resources.ITM_TopBar_Resources_C");
		return ptr;
	}

}


