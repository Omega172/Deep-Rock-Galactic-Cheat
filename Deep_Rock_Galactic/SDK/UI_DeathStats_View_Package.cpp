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
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMissionStat*>                        InStats                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UTexture2D*>                          Categories                                                 (Parm, OutParm)
	 * 		TArray<class UMissionStat*>                        SortedStats                                                (Parm, OutParm)
	 */
	void UUI_DeathStats_View_C::SortStats(TArray<class UMissionStat*>* InStats, TArray<class UTexture2D*>* Categories, TArray<class UMissionStat*>* SortedStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats");
		
		UUI_DeathStats_View_C_SortStats_Params params {};
		
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
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMissionStat*>                        Assets                                                     (Parm, OutParm)
	 */
	void UUI_DeathStats_View_C::GetMissionStats(TArray<class UMissionStat*>* Assets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats");
		
		UUI_DeathStats_View_C_GetMissionStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Assets != nullptr)
			*Assets = params.Assets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathStats_View_C::StoreMode(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode");
		
		UUI_DeathStats_View_C_StoreMode_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_InfirmaryStats_Item_C*                   SelectedLine                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathStats_View_C::SetSelectedItem(class UUI_InfirmaryStats_Item_C* SelectedLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item");
		
		UUI_DeathStats_View_C_SetSelectedItem_Params params {};
		params.SelectedLine = SelectedLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathStats_View_C::SetStatsOwner(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner");
		
		UUI_DeathStats_View_C_SetStatsOwner_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_DeathStats_View_C::ChangeName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName");
		
		UUI_DeathStats_View_C_ChangeName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.ReBuild
	 * 		Flags  -> ()
	 */
	void UUI_DeathStats_View_C::ReBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.ReBuild");
		
		UUI_DeathStats_View_C_ReBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DeathStats_View_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.PreConstruct");
		
		UUI_DeathStats_View_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathStats_View_C::ExecuteUbergraph_UI_DeathStats_View(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View");
		
		UUI_DeathStats_View_C_ExecuteUbergraph_UI_DeathStats_View_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DeathStats_View_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DeathStats_View_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DeathStats_View.UI_DeathStats_View_C");
		return ptr;
	}

}


