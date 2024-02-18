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
	 * 		Name   -> Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ValidSeedRequirement_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.PreConstruct");
		
		UITM_ValidSeedRequirement_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_ValidSeedRequirement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.Construct");
		
		UITM_ValidSeedRequirement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.ExecuteUbergraph_ITM_ValidSeedRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ValidSeedRequirement_C::ExecuteUbergraph_ITM_ValidSeedRequirement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.ExecuteUbergraph_ITM_ValidSeedRequirement");
		
		UITM_ValidSeedRequirement_C_ExecuteUbergraph_ITM_ValidSeedRequirement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_ValidSeedRequirement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_ValidSeedRequirement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C");
		return ptr;
	}

}


