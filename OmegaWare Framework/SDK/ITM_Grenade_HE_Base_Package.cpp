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
	 * 		Name   -> Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.AddGearStateEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AITM_Grenade_HE_Base_C::AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.AddGearStateEntries");
		
		AITM_Grenade_HE_Base_C_AddGearStateEntries_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.OnExploded
	 * 		Flags  -> ()
	 */
	void AITM_Grenade_HE_Base_C::OnExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.OnExploded");
		
		AITM_Grenade_HE_Base_C_OnExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.ExecuteUbergraph_ITM_Grenade_HE_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_Grenade_HE_Base_C::ExecuteUbergraph_ITM_Grenade_HE_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C.ExecuteUbergraph_ITM_Grenade_HE_Base");
		
		AITM_Grenade_HE_Base_C_ExecuteUbergraph_ITM_Grenade_HE_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_Grenade_HE_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_Grenade_HE_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_Grenade_HE_Base.ITM_Grenade_HE_Base_C");
		return ptr;
	}

}


