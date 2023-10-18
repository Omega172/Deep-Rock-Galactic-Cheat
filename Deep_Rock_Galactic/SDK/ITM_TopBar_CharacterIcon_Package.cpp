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
	 * 		Name   -> Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.FromPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            SelectedCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_CharacterIcon_C::FromPlayerState(class APlayerState* PlayerState, class APlayerCharacter* SelectedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.FromPlayerState");
		
		UITM_TopBar_CharacterIcon_C_FromPlayerState_Params params {};
		params.PlayerState = PlayerState;
		params.SelectedCharacter = SelectedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.SetHeroData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              XPProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TimesRetired                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHost                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_CharacterIcon_C::SetHeroData(float XPProgress, int32_t TimesRetired, bool IsHost, class UClass* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.SetHeroData");
		
		UITM_TopBar_CharacterIcon_C_SetHeroData_Params params {};
		params.XPProgress = XPProgress;
		params.TimesRetired = TimesRetired;
		params.IsHost = IsHost;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_CharacterIcon_C::Update(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Update");
		
		UITM_TopBar_CharacterIcon_C_Update_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_TopBar_CharacterIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Construct");
		
		UITM_TopBar_CharacterIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.OnPlayerCharacterSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_CharacterIcon_C::OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.OnPlayerCharacterSpawned");
		
		UITM_TopBar_CharacterIcon_C_OnPlayerCharacterSpawned_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.ExecuteUbergraph_ITM_TopBar_CharacterIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_TopBar_CharacterIcon_C::ExecuteUbergraph_ITM_TopBar_CharacterIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.ExecuteUbergraph_ITM_TopBar_CharacterIcon");
		
		UITM_TopBar_CharacterIcon_C_ExecuteUbergraph_ITM_TopBar_CharacterIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_TopBar_CharacterIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_TopBar_CharacterIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C");
		return ptr;
	}

}


