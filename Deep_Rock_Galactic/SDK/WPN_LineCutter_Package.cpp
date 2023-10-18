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


