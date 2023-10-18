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
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.HandlePhotosensitivity
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_Uplink_C::HandlePhotosensitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.HandlePhotosensitivity");
		
		ABP_Salvage_Point_Uplink_C_HandlePhotosensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_Uplink_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ReceiveBeginPlay");
		
		ABP_Salvage_Point_Uplink_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseStart
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_Uplink_C::OnDefenseStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseStart");
		
		ABP_Salvage_Point_Uplink_C_OnDefenseStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseComplete
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_Uplink_C::OnDefenseComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseComplete");
		
		ABP_Salvage_Point_Uplink_C_OnDefenseComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Salvage_Point_Uplink_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature");
		
		ABP_Salvage_Point_Uplink_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseFail
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_Uplink_C::OnDefenseFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseFail");
		
		ABP_Salvage_Point_Uplink_C_OnDefenseFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Salvage_Point_Uplink_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature");
		
		ABP_Salvage_Point_Uplink_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.UpdateTerrainScannerMesh
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_Uplink_C::UpdateTerrainScannerMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.UpdateTerrainScannerMesh");
		
		ABP_Salvage_Point_Uplink_C_UpdateTerrainScannerMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.Cheat_RepairUplink
	 * 		Flags  -> ()
	 */
	void ABP_Salvage_Point_Uplink_C::Cheat_RepairUplink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.Cheat_RepairUplink");
		
		ABP_Salvage_Point_Uplink_C_Cheat_RepairUplink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ExecuteUbergraph_BP_Salvage_Point_Uplink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Salvage_Point_Uplink_C::ExecuteUbergraph_BP_Salvage_Point_Uplink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ExecuteUbergraph_BP_Salvage_Point_Uplink");
		
		ABP_Salvage_Point_Uplink_C_ExecuteUbergraph_BP_Salvage_Point_Uplink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Salvage_Point_Uplink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Salvage_Point_Uplink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C");
		return ptr;
	}

}


