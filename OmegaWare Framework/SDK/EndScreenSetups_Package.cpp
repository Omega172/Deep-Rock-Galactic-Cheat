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
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                VicPose                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRandomStream                               RandStream                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UEndScreenSetups_C::GetRandomWalkAnim(class UVictoryPose* VicPose, struct FRandomStream* RandStream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.GetRandomWalkAnim");
		
		UEndScreenSetups_C_GetRandomWalkAnim_Params params {};
		params.VicPose = VicPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandStream != nullptr)
			*RandStream = params.RandStream;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRandomStream                               RandStream                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FEndScreenMove                              EndScreenMove                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::LoadVictoryAnims(class UVictoryPose* InputPin, struct FRandomStream* RandStream, struct FEndScreenMove* EndScreenMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadVictoryAnims");
		
		UEndScreenSetups_C_LoadVictoryAnims_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandStream != nullptr)
			*RandStream = params.RandStream;
		if (EndScreenMove != nullptr)
			*EndScreenMove = params.EndScreenMove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.LoadActorClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Hard                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::LoadActorClass(class UClass** Hard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadActorClass");
		
		UEndScreenSetups_C_LoadActorClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hard != nullptr)
			*Hard = params.Hard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UAnimSequence*>                       Hard                                                       (Parm, OutParm)
	 */
	void UEndScreenSetups_C::LoadAnimSeqArray(TArray<class UAnimSequence*>* Hard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeqArray");
		
		UEndScreenSetups_C_LoadAnimSeqArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hard != nullptr)
			*Hard = params.Hard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Hard                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::LoadAnimSeq(class UAnimSequence** Hard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.LoadAnimSeq");
		
		UEndScreenSetups_C_LoadAnimSeq_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hard != nullptr)
			*Hard = params.Hard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Selected1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::SplitMoveSetAnims(class UAnimSequence** Selected1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.SplitMoveSetAnims");
		
		UEndScreenSetups_C_SplitMoveSetAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selected1 != nullptr)
			*Selected1 = params.Selected1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.ResetMovesets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::ResetMovesets(int32_t NewSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.ResetMovesets");
		
		UEndScreenSetups_C_ResetMovesets_Params params {};
		params.NewSeed = NewSeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEndScreenMoveSet>                   Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEndScreenMove                              Selected                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::RandomWeightedMoveSet(TArray<struct FEndScreenMoveSet>* Array, struct FEndScreenMove* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.RandomWeightedMoveSet");
		
		UEndScreenSetups_C_RandomWeightedMoveSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Selected != nullptr)
			*Selected = params.Selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Survived                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UVictoryPose*                                VictPose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRandomStream                               RandStream                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FEndScreenMove                              Selected                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::GetEndScreenMoveSet(bool Survived, class UVictoryPose* VictPose, struct FRandomStream* RandStream, struct FEndScreenMove* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.GetEndScreenMoveSet");
		
		UEndScreenSetups_C_GetEndScreenMoveSet_Params params {};
		params.Survived = Survived;
		params.VictPose = VictPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandStream != nullptr)
			*RandStream = params.RandStream;
		if (Selected != nullptr)
			*Selected = params.Selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UAnimSequence*>                       Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UAnimSequence*                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndScreenSetups_C::RandomAnimElement(TArray<class UAnimSequence*>* Array, class UAnimSequence** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndScreenSetups.EndScreenSetups_C.RandomAnimElement");
		
		UEndScreenSetups_C_RandomAnimElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndScreenSetups_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndScreenSetups_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EndScreenSetups.EndScreenSetups_C");
		return ptr;
	}

}


