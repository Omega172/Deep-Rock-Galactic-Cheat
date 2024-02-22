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
	 * 		Name   -> Function BP_Hologram_Base.BP_Hologram_Base_C.SetHologramMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  InMaterials                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Hologram_Base_C::SetHologramMaterials(TArray<class UMaterialInterface*>* InMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hologram_Base.BP_Hologram_Base_C.SetHologramMaterials");
		
		ABP_Hologram_Base_C_SetHologramMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMaterials != nullptr)
			*InMaterials = params.InMaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Hologram_Base.BP_Hologram_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Hologram_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hologram_Base.BP_Hologram_Base_C.UserConstructionScript");
		
		ABP_Hologram_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Hologram_Base.BP_Hologram_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Hologram_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hologram_Base.BP_Hologram_Base_C.ReceiveBeginPlay");
		
		ABP_Hologram_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Hologram_Base.BP_Hologram_Base_C.ExecuteUbergraph_BP_Hologram_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Hologram_Base_C::ExecuteUbergraph_BP_Hologram_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Hologram_Base.BP_Hologram_Base_C.ExecuteUbergraph_BP_Hologram_Base");
		
		ABP_Hologram_Base_C_ExecuteUbergraph_BP_Hologram_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Hologram_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Hologram_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hologram_Base.BP_Hologram_Base_C");
		return ptr;
	}

}


