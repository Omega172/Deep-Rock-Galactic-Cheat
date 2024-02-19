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
	 * 		Name   -> Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.Unhide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRandomStream                               RandomStream                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		TArray<class AStaticMeshActor*>                    Meshes                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            NumberToUnhide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASLVL_SpaceRig_Season04_C::Unhide(struct FRandomStream* RandomStream, TArray<class AStaticMeshActor*> Meshes, int32_t NumberToUnhide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.Unhide");
		
		ASLVL_SpaceRig_Season04_C_Unhide_Params params {};
		params.Meshes = Meshes;
		params.NumberToUnhide = NumberToUnhide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomStream != nullptr)
			*RandomStream = params.RandomStream;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.OnRep_SpawnSeed
	 * 		Flags  -> ()
	 */
	void ASLVL_SpaceRig_Season04_C::OnRep_SpawnSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.OnRep_SpawnSeed");
		
		ASLVL_SpaceRig_Season04_C_OnRep_SpawnSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASLVL_SpaceRig_Season04_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.ReceiveBeginPlay");
		
		ASLVL_SpaceRig_Season04_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.ExecuteUbergraph_SLVL_SpaceRig_Season04
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASLVL_SpaceRig_Season04_C::ExecuteUbergraph_SLVL_SpaceRig_Season04(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C.ExecuteUbergraph_SLVL_SpaceRig_Season04");
		
		ASLVL_SpaceRig_Season04_C_ExecuteUbergraph_SLVL_SpaceRig_Season04_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASLVL_SpaceRig_Season04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASLVL_SpaceRig_Season04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SLVL_SpaceRig_Season04.SLVL_SpaceRig_Season04_C");
		return ptr;
	}

}


