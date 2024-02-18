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
	 * 		Name   -> Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer
	 * 		Flags  -> ()
	 */
	void ALVL_Loading_DeepDive_B_C::StopPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer");
		
		ALVL_Loading_DeepDive_B_C_StopPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.Start Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              LevelSequence                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_Loading_DeepDive_B_C::StartPlayer(class ULevelSequence* LevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.Start Player");
		
		ALVL_Loading_DeepDive_B_C_StartPlayer_Params params {};
		params.LevelSequence = LevelSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALVL_Loading_DeepDive_B_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay");
		
		ALVL_Loading_DeepDive_B_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequence*                              LoaderLevelSequence                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_Loading_DeepDive_B_C::PlayerStart(class ULevelSequence* LoaderLevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart");
		
		ALVL_Loading_DeepDive_B_C_PlayerStart_Params params {};
		params.LoaderLevelSequence = LoaderLevelSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop
	 * 		Flags  -> ()
	 */
	void ALVL_Loading_DeepDive_B_C::PlayerStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop");
		
		ALVL_Loading_DeepDive_B_C_PlayerStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALVL_Loading_DeepDive_B_C::ExecuteUbergraph_LVL_Loading_DeepDive_B(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B");
		
		ALVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALVL_Loading_DeepDive_B_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALVL_Loading_DeepDive_B_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C");
		return ptr;
	}

}


