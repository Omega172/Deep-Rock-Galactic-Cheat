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
	 * 		Name   -> Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_ServerList_Entry_PlayerIcons_C*         TeamWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPlayerCharacterID*>                  Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsClassLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_ServerEntry_Team_C::SetData(class UITM_ServerList_Entry_PlayerIcons_C* TeamWidget, TArray<class UPlayerCharacterID*>* Players, bool IsClassLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData");
		
		UTOOLTIP_ServerEntry_Team_C_SetData_Params params {};
		params.TeamWidget = TeamWidget;
		params.IsClassLocked = IsClassLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_ServerEntry_Team_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct");
		
		UTOOLTIP_ServerEntry_Team_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_ServerEntry_Team_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team");
		
		UTOOLTIP_ServerEntry_Team_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Team_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_ServerEntry_Team_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_ServerEntry_Team_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C");
		return ptr;
	}

}


