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
	 * 		Name   -> Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPlayerCharacterID*>                  Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsClassLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutIcon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          OutPlayer                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ServerList_Entry_PlayerIcons_C::GetPlayerDetails(TArray<class UPlayerCharacterID*>* Players, int32_t PlayerIndex, bool IsClassLocked, struct FLinearColor* OutColor, class UTexture2D** OutIcon, class UPlayerCharacterID** OutPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details");
		
		UITM_ServerList_Entry_PlayerIcons_C_GetPlayerDetails_Params params {};
		params.PlayerIndex = PlayerIndex;
		params.IsClassLocked = IsClassLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Players != nullptr)
			*Players = params.Players;
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
		if (OutIcon != nullptr)
			*OutIcon = params.OutIcon;
		if (OutPlayer != nullptr)
			*OutPlayer = params.OutPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip
	 * 		Flags  -> ()
	 */
	class UTOOLTIP_ServerEntry_Team_C* UITM_ServerList_Entry_PlayerIcons_C::GetToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip");
		
		UITM_ServerList_Entry_PlayerIcons_C_GetToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EntryNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPlayerCharacterID*>                  Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsClassLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ServerList_Entry_PlayerIcons_C::SetIndexBrush(int32_t NumPlayers, int32_t EntryNum, class UImage* Target, TArray<class UPlayerCharacterID*>* Players, bool IsClassLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush");
		
		UITM_ServerList_Entry_PlayerIcons_C_SetIndexBrush_Params params {};
		params.NumPlayers = NumPlayers;
		params.EntryNum = EntryNum;
		params.Target = Target;
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
	 * 		Name   -> Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPlayerCharacterID*>                  Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsClassLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ServerList_Entry_PlayerIcons_C::SetNumPlayers(int32_t NumPlayers, TArray<class UPlayerCharacterID*>* Players, bool IsClassLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers");
		
		UITM_ServerList_Entry_PlayerIcons_C_SetNumPlayers_Params params {};
		params.NumPlayers = NumPlayers;
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
	 * 		Name   -> Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_ServerList_Entry_PlayerIcons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct");
		
		UITM_ServerList_Entry_PlayerIcons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ServerList_Entry_PlayerIcons_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct");
		
		UITM_ServerList_Entry_PlayerIcons_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ServerList_Entry_PlayerIcons_C::ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons");
		
		UITM_ServerList_Entry_PlayerIcons_C_ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_ServerList_Entry_PlayerIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_ServerList_Entry_PlayerIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C");
		return ptr;
	}

}


