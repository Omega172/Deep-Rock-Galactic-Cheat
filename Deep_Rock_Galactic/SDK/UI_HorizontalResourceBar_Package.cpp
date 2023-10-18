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
	 * 		Name   -> Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetFromDict
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class UResourceData*, int32_t>                InResources                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_HorizontalResourceBar_C::SetFromDict(TMap<class UResourceData*, int32_t> InResources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetFromDict");
		
		UUI_HorizontalResourceBar_C_SetFromDict_Params params {};
		params.InResources = InResources;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCraftingCost>                       Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutCanAfford                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HorizontalResourceBar_C::SetCraftingCost(TArray<struct FCraftingCost>* Cost, bool* OutCanAfford)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.SetCraftingCost");
		
		UUI_HorizontalResourceBar_C_SetCraftingCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cost != nullptr)
			*Cost = params.Cost;
		if (OutCanAfford != nullptr)
			*OutCanAfford = params.OutCanAfford;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRequiredAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HorizontalResourceBar_C::AddResource(class UResourceData* InResource, float InAmount, float InRequiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResource");
		
		UUI_HorizontalResourceBar_C_AddResource_Params params {};
		params.InResource = InResource;
		params.InAmount = InAmount;
		params.InRequiredAmount = InRequiredAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear
	 * 		Flags  -> ()
	 */
	void UUI_HorizontalResourceBar_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.Clear");
		
		UUI_HorizontalResourceBar_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRequiredAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IconOnRight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowRequiredAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HorizontalResourceBar_C::AddResourceCustom(class UResourceData* InResource, float InAmount, float InRequiredAmount, bool IconOnRight, bool ShowRequiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.AddResourceCustom");
		
		UUI_HorizontalResourceBar_C_AddResourceCustom_Params params {};
		params.InResource = InResource;
		params.InAmount = InAmount;
		params.InRequiredAmount = InRequiredAmount;
		params.IconOnRight = IconOnRight;
		params.ShowRequiredAmount = ShowRequiredAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HorizontalResourceBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.PreConstruct");
		
		UUI_HorizontalResourceBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HorizontalResourceBar_C::ExecuteUbergraph_UI_HorizontalResourceBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HorizontalResourceBar.UI_HorizontalResourceBar_C.ExecuteUbergraph_UI_HorizontalResourceBar");
		
		UUI_HorizontalResourceBar_C_ExecuteUbergraph_UI_HorizontalResourceBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HorizontalResourceBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HorizontalResourceBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HorizontalResourceBar.UI_HorizontalResourceBar_C");
		return ptr;
	}

}


