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
	 * 		Name   -> Function AIC_Shredder.AIC_Shredder_C.FindNewMother
	 * 		Flags  -> ()
	 */
	class AENE_Jelly_Passive_Mother_C* AAIC_Shredder_C::FindNewMother()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Shredder.AIC_Shredder_C.FindNewMother");
		
		AAIC_Shredder_C_FindNewMother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Shredder.AIC_Shredder_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAIC_Shredder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Shredder.AIC_Shredder_C.ReceiveBeginPlay");
		
		AAIC_Shredder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Shredder.AIC_Shredder_C.OnDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Shredder_C::OnDeath(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Shredder.AIC_Shredder_C.OnDeath");
		
		AAIC_Shredder_C_OnDeath_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Shredder.AIC_Shredder_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Shredder_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Shredder.AIC_Shredder_C.ReceivePossess");
		
		AAIC_Shredder_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Shredder.AIC_Shredder_C.Speed Changer
	 * 		Flags  -> ()
	 */
	void AAIC_Shredder_C::SpeedChanger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Shredder.AIC_Shredder_C.Speed Changer");
		
		AAIC_Shredder_C_SpeedChanger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Shredder.AIC_Shredder_C.StartSpeedModifier
	 * 		Flags  -> ()
	 */
	void AAIC_Shredder_C::StartSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Shredder.AIC_Shredder_C.StartSpeedModifier");
		
		AAIC_Shredder_C_StartSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Shredder.AIC_Shredder_C.ExecuteUbergraph_AIC_Shredder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Shredder_C::ExecuteUbergraph_AIC_Shredder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_Shredder.AIC_Shredder_C.ExecuteUbergraph_AIC_Shredder");
		
		AAIC_Shredder_C_ExecuteUbergraph_AIC_Shredder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_Shredder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_Shredder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Shredder.AIC_Shredder_C");
		return ptr;
	}

}


