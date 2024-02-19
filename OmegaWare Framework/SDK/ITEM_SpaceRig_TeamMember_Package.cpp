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
	 * 		Name   -> Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.SetPlayerName
	 * 		Flags  -> ()
	 */
	void UITEM_SpaceRig_TeamMember_C::SetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.SetPlayerName");
		
		UITEM_SpaceRig_TeamMember_C_SetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_TeamMember_C::Update(class APlayerCharacter* Character, class AFSDPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update");
		
		UITEM_SpaceRig_TeamMember_C_Update_Params params {};
		params.Character = Character;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITEM_SpaceRig_TeamMember_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct");
		
		UITEM_SpaceRig_TeamMember_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct
	 * 		Flags  -> ()
	 */
	void UITEM_SpaceRig_TeamMember_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct");
		
		UITEM_SpaceRig_TeamMember_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_SpaceRig_TeamMember_C::ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember");
		
		UITEM_SpaceRig_TeamMember_C_ExecuteUbergraph_ITEM_SpaceRig_TeamMember_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITEM_SpaceRig_TeamMember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITEM_SpaceRig_TeamMember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C");
		return ptr;
	}

}


