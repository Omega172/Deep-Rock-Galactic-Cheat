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
	 * 		Name   -> Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.FindNewMother
	 * 		Flags  -> ()
	 */
	class AENE_Jelly_Passive_Mother_C* AAIC_FriendlyShredder_C::FindNewMother()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.FindNewMother");
		
		AAIC_FriendlyShredder_C_FindNewMother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAIC_FriendlyShredder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ReceiveBeginPlay");
		
		AAIC_FriendlyShredder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.OnDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FriendlyShredder_C::OnDeath(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.OnDeath");
		
		AAIC_FriendlyShredder_C_OnDeath_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FriendlyShredder_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ReceivePossess");
		
		AAIC_FriendlyShredder_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.Speed Changer
	 * 		Flags  -> ()
	 */
	void AAIC_FriendlyShredder_C::SpeedChanger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.Speed Changer");
		
		AAIC_FriendlyShredder_C_SpeedChanger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.StartSpeedModifier
	 * 		Flags  -> ()
	 */
	void AAIC_FriendlyShredder_C::StartSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.StartSpeedModifier");
		
		AAIC_FriendlyShredder_C_StartSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ExecuteUbergraph_AIC_FriendlyShredder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FriendlyShredder_C::ExecuteUbergraph_AIC_FriendlyShredder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ExecuteUbergraph_AIC_FriendlyShredder");
		
		AAIC_FriendlyShredder_C_ExecuteUbergraph_AIC_FriendlyShredder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_FriendlyShredder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_FriendlyShredder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIC_FriendlyShredder.AIC_FriendlyShredder_C");
		return ptr;
	}

}


