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
	 * 		Name   -> Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MisComp_FXspawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.UserConstructionScript");
		
		ABP_MisComp_FXspawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.SetSurvived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Survived                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MisComp_FXspawner_C::SetSurvived(bool Survived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.SetSurvived");
		
		ABP_MisComp_FXspawner_C_SetSurvived_Params params {};
		params.Survived = Survived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.ExecuteUbergraph_BP_MisComp_FXspawner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MisComp_FXspawner_C::ExecuteUbergraph_BP_MisComp_FXspawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MisComp_FXspawner.BP_MisComp_FXspawner_C.ExecuteUbergraph_BP_MisComp_FXspawner");
		
		ABP_MisComp_FXspawner_C_ExecuteUbergraph_BP_MisComp_FXspawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MisComp_FXspawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MisComp_FXspawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MisComp_FXspawner.BP_MisComp_FXspawner_C");
		return ptr;
	}

}


