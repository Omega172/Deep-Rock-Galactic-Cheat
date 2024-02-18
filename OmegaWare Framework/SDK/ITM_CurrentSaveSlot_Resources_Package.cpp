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
	 * 		Name   -> Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.UpdateResourceAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDSaveGame*                                SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CurrentSaveSlot_Resources_C::UpdateResourceAmount(class UFSDSaveGame* SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.UpdateResourceAmount");
		
		UITM_CurrentSaveSlot_Resources_C_UpdateResourceAmount_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.AddResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InHideWhenZero                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CurrentSaveSlot_Resources_C::AddResource(class UResourceData* InResource, bool InHideWhenZero, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.AddResource");
		
		UITM_CurrentSaveSlot_Resources_C_AddResource_Params params {};
		params.InResource = InResource;
		params.InHideWhenZero = InHideWhenZero;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.SetResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UResourceData*>                       InResources                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_CurrentSaveSlot_Resources_C::SetResources(TArray<class UResourceData*>* InResources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.SetResources");
		
		UITM_CurrentSaveSlot_Resources_C_SetResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InResources != nullptr)
			*InResources = params.InResources;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CurrentSaveSlot_Resources_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.PreConstruct");
		
		UITM_CurrentSaveSlot_Resources_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.ExecuteUbergraph_ITM_CurrentSaveSlot_Resources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CurrentSaveSlot_Resources_C::ExecuteUbergraph_ITM_CurrentSaveSlot_Resources(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.ExecuteUbergraph_ITM_CurrentSaveSlot_Resources");
		
		UITM_CurrentSaveSlot_Resources_C_ExecuteUbergraph_ITM_CurrentSaveSlot_Resources_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CurrentSaveSlot_Resources_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CurrentSaveSlot_Resources_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C");
		return ptr;
	}

}


