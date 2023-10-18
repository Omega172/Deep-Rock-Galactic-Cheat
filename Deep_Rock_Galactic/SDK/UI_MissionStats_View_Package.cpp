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
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.NextStoreMode
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_View_C::NextStoreMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.NextStoreMode");
		
		UUI_MissionStats_View_C_NextStoreMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.SortStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMissionStat*>                        InStats                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UTexture2D*>                          Categories                                                 (Parm, OutParm)
	 * 		TArray<class UMissionStat*>                        SortedStats                                                (Parm, OutParm)
	 */
	void UUI_MissionStats_View_C::SortStats(TArray<class UMissionStat*>* InStats, TArray<class UTexture2D*>* Categories, TArray<class UMissionStat*>* SortedStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.SortStats");
		
		UUI_MissionStats_View_C_SortStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStats != nullptr)
			*InStats = params.InStats;
		if (Categories != nullptr)
			*Categories = params.Categories;
		if (SortedStats != nullptr)
			*SortedStats = params.SortedStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.GetMissionStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMissionStat*>                        Assets                                                     (Parm, OutParm)
	 */
	void UUI_MissionStats_View_C::GetMissionStats(TArray<class UMissionStat*>* Assets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.GetMissionStats");
		
		UUI_MissionStats_View_C_GetMissionStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Assets != nullptr)
			*Assets = params.Assets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MissionStats_View_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.PreConstruct");
		
		UUI_MissionStats_View_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_View_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.Construct");
		
		UUI_MissionStats_View_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.Set Selected Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MissionStats_Item_C*                     SelectedLine                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStats_View_C::SetSelectedItem(class UUI_MissionStats_Item_C* SelectedLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.Set Selected Item");
		
		UUI_MissionStats_View_C_SetSelectedItem_Params params {};
		params.SelectedLine = SelectedLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverBegin_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MissionStats_Item_C*                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStats_View_C::OnHoverBegin_Event(class UUI_MissionStats_Item_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverBegin_Event");
		
		UUI_MissionStats_View_C_OnHoverBegin_Event_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverEnd_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_MissionStats_Item_C*                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStats_View_C::OnHoverEnd_Event(class UUI_MissionStats_Item_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverEnd_Event");
		
		UUI_MissionStats_View_C_OnHoverEnd_Event_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.Setup Category Selection
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_View_C::SetupCategorySelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.Setup Category Selection");
		
		UUI_MissionStats_View_C_SetupCategorySelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.OnCategorySelectionChanged
	 * 		Flags  -> ()
	 */
	void UUI_MissionStats_View_C::OnCategorySelectionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.OnCategorySelectionChanged");
		
		UUI_MissionStats_View_C_OnCategorySelectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionStats_View.UI_MissionStats_View_C.ExecuteUbergraph_UI_MissionStats_View
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionStats_View_C::ExecuteUbergraph_UI_MissionStats_View(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionStats_View.UI_MissionStats_View_C.ExecuteUbergraph_UI_MissionStats_View");
		
		UUI_MissionStats_View_C_ExecuteUbergraph_UI_MissionStats_View_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MissionStats_View_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MissionStats_View_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MissionStats_View.UI_MissionStats_View_C");
		return ptr;
	}

}


