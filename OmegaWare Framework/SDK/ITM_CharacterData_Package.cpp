/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          OptionalCharacterClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterData_C::FromPlayerState(class AFSDPlayerState* InPlayerState, class UPlayerCharacterID* OptionalCharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerState");
		
		UITM_CharacterData_C_FromPlayerState_Params params {};
		params.InPlayerState = InPlayerState;
		params.OptionalCharacterClass = OptionalCharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            SetCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterData_C::FromPlayerCharacter(class APlayerCharacter* SetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerCharacter");
		
		UITM_CharacterData_C_FromPlayerCharacter_Params params {};
		params.SetCharacter = SetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        HeroName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PlayerRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CharacterLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LevelProgress                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentXP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequiredXP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterData_C::SetData(const class FString& PlayerName, const class FText& HeroName, int32_t PlayerRank, int32_t CharacterLevel, float LevelProgress, int32_t CurrentXP, int32_t RequiredXP, class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.SetData");
		
		UITM_CharacterData_C_SetData_Params params {};
		params.PlayerName = PlayerName;
		params.HeroName = HeroName;
		params.PlayerRank = PlayerRank;
		params.CharacterLevel = CharacterLevel;
		params.LevelProgress = LevelProgress;
		params.CurrentXP = CurrentXP;
		params.RequiredXP = RequiredXP;
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.SetToggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayerRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CharacterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CharacterLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               XPcounter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               XPbar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Supplies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CharacterData_C::SetToggles(bool PlayerName, bool PlayerRank, bool CharacterName, bool CharacterLevel, bool XPcounter, bool XPbar, bool Supplies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.SetToggles");
		
		UITM_CharacterData_C_SetToggles_Params params {};
		params.PlayerName = PlayerName;
		params.PlayerRank = PlayerRank;
		params.CharacterName = CharacterName;
		params.CharacterLevel = CharacterLevel;
		params.XPcounter = XPcounter;
		params.XPbar = XPbar;
		params.Supplies = Supplies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CharacterData_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.PreConstruct");
		
		UITM_CharacterData_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.RefreshSpeakVisibility
	 * 		Flags  -> ()
	 */
	void UITM_CharacterData_C::RefreshSpeakVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.RefreshSpeakVisibility");
		
		UITM_CharacterData_C_RefreshSpeakVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.OnPlayerJoined_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterData_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.OnPlayerJoined_Event");
		
		UITM_CharacterData_C_OnPlayerJoined_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.OnPlayerLeave_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterData_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.OnPlayerLeave_Event");
		
		UITM_CharacterData_C_OnPlayerLeave_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterData.ITM_CharacterData_C.ExecuteUbergraph_ITM_CharacterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterData_C::ExecuteUbergraph_ITM_CharacterData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterData.ITM_CharacterData_C.ExecuteUbergraph_ITM_CharacterData");
		
		UITM_CharacterData_C_ExecuteUbergraph_ITM_CharacterData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CharacterData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CharacterData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CharacterData.ITM_CharacterData_C");
		return ptr;
	}

}


