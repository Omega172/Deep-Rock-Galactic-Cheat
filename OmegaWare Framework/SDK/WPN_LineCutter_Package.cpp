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
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.Get Homing Target Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::GetHomingTargetLocation(struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.Get Homing Target Location");
		
		AWPN_LineCutter_C_GetHomingTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.GetHomingIgnoreList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              OutTargets                                                 (Parm, OutParm)
	 */
	void AWPN_LineCutter_C::GetHomingIgnoreList(TArray<class AActor*>* OutTargets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.GetHomingIgnoreList");
		
		AWPN_LineCutter_C_GetHomingIgnoreList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTargets != nullptr)
			*OutTargets = params.OutTargets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_LineCutter_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.GetGearStatEntry");
		
		AWPN_LineCutter_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_LineCutter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.UserConstructionScript");
		
		AWPN_LineCutter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AWPN_LineCutter_C::FlickerBrightness__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__FinishedFunc");
		
		AWPN_LineCutter_C_FlickerBrightness__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AWPN_LineCutter_C::FlickerBrightness__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__UpdateFunc");
		
		AWPN_LineCutter_C_FlickerBrightness__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.OnFireWhileLastProjectileAlive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ALineCutterProjectile*                       Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::OnFireWhileLastProjectileAlive(class ALineCutterProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.OnFireWhileLastProjectileAlive");
		
		AWPN_LineCutter_C_OnFireWhileLastProjectileAlive_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectileBase*                             Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature");
		
		AWPN_LineCutter_C_BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.UpdateHomingTarget
	 * 		Flags  -> ()
	 */
	void AWPN_LineCutter_C::UpdateHomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.UpdateHomingTarget");
		
		AWPN_LineCutter_C_UpdateHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.StopHoming
	 * 		Flags  -> ()
	 */
	void AWPN_LineCutter_C::StopHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.StopHoming");
		
		AWPN_LineCutter_C_StopHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.Server_SetHomingLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize                         HomingLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::Server_SetHomingLocation(const struct FVector_NetQuantize& HomingLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.Server_SetHomingLocation");
		
		AWPN_LineCutter_C_Server_SetHomingLocation_Params params {};
		params.HomingLocation = HomingLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.OnHomingHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AWPN_LineCutter_C::OnHomingHit(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.OnHomingHit");
		
		AWPN_LineCutter_C_OnHomingHit_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.RecieveStopUsing
	 * 		Flags  -> ()
	 */
	void AWPN_LineCutter_C::RecieveStopUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.RecieveStopUsing");
		
		AWPN_LineCutter_C_RecieveStopUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_LineCutter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.ReceiveBeginPlay");
		
		AWPN_LineCutter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.Server_StopHoming
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectile*                                 InProjectile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::Server_StopHoming(class AProjectile* InProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.Server_StopHoming");
		
		AWPN_LineCutter_C_Server_StopHoming_Params params {};
		params.InProjectile = InProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.All_SetHomingLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize                         InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::All_SetHomingLocation(const struct FVector_NetQuantize& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.All_SetHomingLocation");
		
		AWPN_LineCutter_C_All_SetHomingLocation_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.All_StopHoming
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectile*                                 InProjectile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::All_StopHoming(class AProjectile* InProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.All_StopHoming");
		
		AWPN_LineCutter_C_All_StopHoming_Params params {};
		params.InProjectile = InProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LineCutter.WPN_LineCutter_C.ExecuteUbergraph_WPN_LineCutter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LineCutter_C::ExecuteUbergraph_WPN_LineCutter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.ExecuteUbergraph_WPN_LineCutter");
		
		AWPN_LineCutter_C_ExecuteUbergraph_WPN_LineCutter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_LineCutter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_LineCutter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_LineCutter.WPN_LineCutter_C");
		return ptr;
	}

}


