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
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.UpdateFailsafeMollyCounters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     v2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Salvage_C::UpdateFailsafeMollyCounters(const struct FVector& v2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.UpdateFailsafeMollyCounters");
		
		AGM_Salvage_C_UpdateFailsafeMollyCounters_Params params {};
		params.v2 = v2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::SpawnRepairPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints");
		
		AGM_Salvage_C_SpawnRepairPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::EnableNextRepairPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint");
		
		AGM_Salvage_C_EnableNextRepairPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Salvage_C::OnLevelGenerationComplete(int32_t pass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete");
		
		AGM_Salvage_C_OnLevelGenerationComplete_Params params {};
		params.pass = pass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.Call DropPod
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::CallDropPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Call DropPod");
		
		AGM_Salvage_C_CallDropPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::DonkeyButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed");
		
		AGM_Salvage_C_DonkeyButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.ReachedDropShip
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::ReachedDropShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ReachedDropShip");
		
		AGM_Salvage_C_ReachedDropShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      RepairPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Salvage_C::RepairPoint_Repaired(class AActor* RepairPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired");
		
		AGM_Salvage_C_RepairPoint_Repaired_Params params {};
		params.RepairPoint = RepairPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.DefendFail
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::DefendFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DefendFail");
		
		AGM_Salvage_C_DefendFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.DefendDone
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::DefendDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.DefendDone");
		
		AGM_Salvage_C_DefendDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.OnCountdownFinished
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::OnCountdownFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnCountdownFinished");
		
		AGM_Salvage_C_OnCountdownFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.Countdowncomplete
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::Countdowncomplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Countdowncomplete");
		
		AGM_Salvage_C_Countdowncomplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.ActivateDonkeyButton
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::ActivateDonkeyButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ActivateDonkeyButton");
		
		AGM_Salvage_C_ActivateDonkeyButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.OnMuleBayOpenedDispatch_Event_1
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::OnMuleBayOpenedDispatch_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnMuleBayOpenedDispatch_Event_1");
		
		AGM_Salvage_C_OnMuleBayOpenedDispatch_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.OnObjectivesInitialized
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::OnObjectivesInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.OnObjectivesInitialized");
		
		AGM_Salvage_C_OnObjectivesInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.AllActorsSalaged
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::AllActorsSalaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.AllActorsSalaged");
		
		AGM_Salvage_C_AllActorsSalaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.Cheat_ActivateDropPod
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::Cheat_ActivateDropPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Cheat_ActivateDropPod");
		
		AGM_Salvage_C_Cheat_ActivateDropPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.Cheat_FinishSalvagePoint
	 * 		Flags  -> ()
	 */
	void AGM_Salvage_C::Cheat_FinishSalvagePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.Cheat_FinishSalvagePoint");
		
		AGM_Salvage_C_Cheat_FinishSalvagePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Salvage_C::ExecuteUbergraph_GM_Salvage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage");
		
		AGM_Salvage_C_ExecuteUbergraph_GM_Salvage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGM_Salvage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_Salvage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_Salvage.GM_Salvage_C");
		return ptr;
	}

}


