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
	 * 		Name   -> Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.UpdateActorsToHide
	 * 		Flags  -> ()
	 */
	void ABP_Character_ShowroomStage_C::UpdateActorsToHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.UpdateActorsToHide");
		
		ABP_Character_ShowroomStage_C_UpdateActorsToHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.CreateRenderTarget
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* ABP_Character_ShowroomStage_C::CreateRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.CreateRenderTarget");
		
		ABP_Character_ShowroomStage_C_CreateRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Character_ShowroomStage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ReceiveBeginPlay");
		
		ABP_Character_ShowroomStage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ExecuteUbergraph_BP_Character_ShowroomStage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_ShowroomStage_C::ExecuteUbergraph_BP_Character_ShowroomStage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ExecuteUbergraph_BP_Character_ShowroomStage");
		
		ABP_Character_ShowroomStage_C_ExecuteUbergraph_BP_Character_ShowroomStage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Character_ShowroomStage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Character_ShowroomStage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_ShowroomStage.BP_Character_ShowroomStage_C");
		return ptr;
	}

}


