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
	 * 		Name   -> Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URotatingMovementComponent*                  self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadarDish01_C::SetRotationRate(class URotatingMovementComponent* self2, float RotationRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate");
		
		ABP_RadarDish01_C_SetRotationRate_Params params {};
		params.self2 = self2;
		params.RotationRate = RotationRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RadarDish01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay");
		
		ABP_RadarDish01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadarDish01_C::ExecuteUbergraph_BP_RadarDish01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01");
		
		ABP_RadarDish01_C_ExecuteUbergraph_BP_RadarDish01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RadarDish01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RadarDish01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadarDish01.BP_RadarDish01_C");
		return ptr;
	}

}


