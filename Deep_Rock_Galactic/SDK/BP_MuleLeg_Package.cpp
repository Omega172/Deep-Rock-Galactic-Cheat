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
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.GetDistToNearestMULE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutDist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MuleLeg_C::GetDistToNearestMULE(float* OutDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.GetDistToNearestMULE");
		
		ABP_MuleLeg_C_GetDistToNearestMULE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDist != nullptr)
			*OutDist = params.OutDist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.UpdateBeacon
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::UpdateBeacon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.UpdateBeacon");
		
		ABP_MuleLeg_C_UpdateBeacon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.InitVisibleOnScanner
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::InitVisibleOnScanner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.InitVisibleOnScanner");
		
		ABP_MuleLeg_C_InitVisibleOnScanner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.SetPingedByMule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MiniMule_Salvage_C*                      InMiniMule                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InPinged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MuleLeg_C::SetPingedByMule(class ABP_MiniMule_Salvage_C* InMiniMule, bool InPinged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.SetPingedByMule");
		
		ABP_MuleLeg_C_SetPingedByMule_Params params {};
		params.InMiniMule = InMiniMule;
		params.InPinged = InPinged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.OnRep_IsVisibleOnScanner
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::OnRep_IsVisibleOnScanner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnRep_IsVisibleOnScanner");
		
		ABP_MuleLeg_C_OnRep_IsVisibleOnScanner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.Beacon__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::Beacon__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.Beacon__FinishedFunc");
		
		ABP_MuleLeg_C_Beacon__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.Beacon__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::Beacon__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.Beacon__UpdateFunc");
		
		ABP_MuleLeg_C_Beacon__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay");
		
		ABP_MuleLeg_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::DisableDistressSphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere");
		
		ABP_MuleLeg_C_DisableDistressSphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.SetVisibleOnScanner
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::SetVisibleOnScanner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.SetVisibleOnScanner");
		
		ABP_MuleLeg_C_SetVisibleOnScanner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.OnDropped_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::OnDropped_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnDropped_Event_1");
		
		ABP_MuleLeg_C_OnDropped_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUp_Event
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::OnPickedUp_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUp_Event");
		
		ABP_MuleLeg_C_OnPickedUp_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.Ping Beacon
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::PingBeacon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.Ping Beacon");
		
		ABP_MuleLeg_C_PingBeacon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.OnDisableLegSpheres_Event
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::OnDisableLegSpheres_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnDisableLegSpheres_Event");
		
		ABP_MuleLeg_C_OnDisableLegSpheres_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.Ping While Carried
	 * 		Flags  -> ()
	 */
	void ABP_MuleLeg_C::PingWhileCarried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.Ping While Carried");
		
		ABP_MuleLeg_C_PingWhileCarried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MuleLeg_C::ExecuteUbergraph_BP_MuleLeg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg");
		
		ABP_MuleLeg_C_ExecuteUbergraph_BP_MuleLeg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MuleLeg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MuleLeg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C");
		return ptr;
	}

}


