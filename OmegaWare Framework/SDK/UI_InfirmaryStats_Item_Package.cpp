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
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal
	 * 		Flags  -> ()
	 */
	bool UUI_InfirmaryStats_Item_C::OwnedByLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal");
		
		UUI_InfirmaryStats_Item_C_OwnedByLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer
	 * 		Flags  -> ()
	 */
	class AFSDPlayerController* UUI_InfirmaryStats_Item_C::GetPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer");
		
		UUI_InfirmaryStats_Item_C_GetPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_InfirmaryStats_Item_C::SetCategoryFilter(TArray<class UTexture2D*>* Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter");
		
		UUI_InfirmaryStats_Item_C_SetCategoryFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InfirmaryStats_Item_C::GetMissionStat(class UMissionStat** MissionStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat");
		
		UUI_InfirmaryStats_Item_C_GetMissionStat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionStat != nullptr)
			*MissionStat = params.MissionStat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InfirmaryStats_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct");
		
		UUI_InfirmaryStats_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_InfirmaryStats_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct");
		
		UUI_InfirmaryStats_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InfirmaryStats_Item_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected");
		
		UUI_InfirmaryStats_Item_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_InfirmaryStats_Item_C::MissonStatUpdate(class UMissionStat* MissionStat, const class FText& StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate");
		
		UUI_InfirmaryStats_Item_C_MissonStatUpdate_Params params {};
		params.MissionStat = MissionStat;
		params.StatValue = StatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InfirmaryStats_Item_C::ExecuteUbergraph_UI_InfirmaryStats_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item");
		
		UUI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MissionStats_Item_C*                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InfirmaryStats_Item_C::OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature");
		
		UUI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MissionStats_Item_C*                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InfirmaryStats_Item_C::OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature");
		
		UUI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InfirmaryStats_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InfirmaryStats_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C");
		return ptr;
	}

}


