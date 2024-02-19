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
	 * 		Name   -> Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct
	 * 		Flags  -> ()
	 */
	void UITEM_SpaceRig_PersonalCharacterLevel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct");
		
		UITEM_SpaceRig_PersonalCharacterLevel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_PersonalCharacterLevel_C::Update(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update");
		
		UITEM_SpaceRig_PersonalCharacterLevel_C_Update_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_PersonalCharacterLevel_C::OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned");
		
		UITEM_SpaceRig_PersonalCharacterLevel_C_OnPlayerCharacterSpawned_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_PersonalCharacterLevel_C::OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event");
		
		UITEM_SpaceRig_PersonalCharacterLevel_C_OnCharacterStatsChanged_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_PersonalCharacterLevel_C::ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel");
		
		UITEM_SpaceRig_PersonalCharacterLevel_C_ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITEM_SpaceRig_PersonalCharacterLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITEM_SpaceRig_PersonalCharacterLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C");
		return ptr;
	}

}


