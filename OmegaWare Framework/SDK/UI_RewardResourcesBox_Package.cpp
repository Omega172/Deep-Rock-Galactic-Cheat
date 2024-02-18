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
	 * 		Name   -> Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.HasResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasResources                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RewardResourcesBox_C::HasResources(bool* HasResources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.HasResources");
		
		UUI_RewardResourcesBox_C_HasResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasResources != nullptr)
			*HasResources = params.HasResources;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RewardResourcesBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PreConstruct");
		
		UUI_RewardResourcesBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PlayReceiveAnim
	 * 		Flags  -> ()
	 */
	void UUI_RewardResourcesBox_C::PlayReceiveAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PlayReceiveAnim");
		
		UUI_RewardResourcesBox_C_PlayReceiveAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.AddResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URewardWidget*                               RewardWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardResourcesBox_C::AddResource(class URewardWidget* RewardWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.AddResource");
		
		UUI_RewardResourcesBox_C_AddResource_Params params {};
		params.RewardWidget = RewardWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.Clear
	 * 		Flags  -> ()
	 */
	void UUI_RewardResourcesBox_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.Clear");
		
		UUI_RewardResourcesBox_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.ExecuteUbergraph_UI_RewardResourcesBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RewardResourcesBox_C::ExecuteUbergraph_UI_RewardResourcesBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.ExecuteUbergraph_UI_RewardResourcesBox");
		
		UUI_RewardResourcesBox_C_ExecuteUbergraph_UI_RewardResourcesBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RewardResourcesBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RewardResourcesBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RewardResourcesBox.UI_RewardResourcesBox_C");
		return ptr;
	}

}


