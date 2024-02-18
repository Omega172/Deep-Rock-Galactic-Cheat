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
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              LevelSequence                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_CharacterSelection_C::PlaySpecificSequence(class ULevelSequence* LevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence");
		
		ALVL_CharacterSelection_C_PlaySpecificSequence_Params params {};
		params.LevelSequence = LevelSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer
	 * 		Flags  -> ()
	 */
	void ALVL_CharacterSelection_C::StopPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer");
		
		ALVL_CharacterSelection_C_StopPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharselectionCameraLocation                       CamSetting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_CharacterSelection_C::StartPlayer(ECharselectionCameraLocation CamSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer");
		
		ALVL_CharacterSelection_C_StartPlayer_Params params {};
		params.CamSetting = CamSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay
	 * 		Flags  -> ()
	 */
	void ALVL_CharacterSelection_C::StopPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay");
		
		ALVL_CharacterSelection_C_StopPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharselectionCameraLocation                       selectionLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_CharacterSelection_C::StartPlay(ECharselectionCameraLocation selectionLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay");
		
		ALVL_CharacterSelection_C_StartPlay_Params params {};
		params.selectionLocation = selectionLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              CharacterLevelSequence                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_CharacterSelection_C::StartLevelSeq(class ULevelSequence* CharacterLevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq");
		
		ALVL_CharacterSelection_C_StartLevelSeq_Params params {};
		params.CharacterLevelSequence = CharacterLevelSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALVL_CharacterSelection_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay");
		
		ALVL_CharacterSelection_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ALVL_CharacterSelection_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveDestroyed");
		
		ALVL_CharacterSelection_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_CharacterSelection_C::ExecuteUbergraph_LVL_CharacterSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection");
		
		ALVL_CharacterSelection_C_ExecuteUbergraph_LVL_CharacterSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALVL_CharacterSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALVL_CharacterSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C");
		return ptr;
	}

}


