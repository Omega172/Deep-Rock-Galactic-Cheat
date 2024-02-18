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
	 * 		Name   -> Function RadarPointInterface.RadarPointInterface_C.UpdatePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              verticalDist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               destroy                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadarPointInterface_C::UpdatePoint(float alpha, float verticalDist, bool* destroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarPointInterface.RadarPointInterface_C.UpdatePoint");
		
		URadarPointInterface_C_UpdatePoint_Params params {};
		params.alpha = alpha;
		params.verticalDist = verticalDist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (destroy != nullptr)
			*destroy = params.destroy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarPointInterface.RadarPointInterface_C.Get3dPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadarPointInterface_C::Get3dPosition(struct FVector* Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarPointInterface.RadarPointInterface_C.Get3dPosition");
		
		URadarPointInterface_C_Get3dPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pos != nullptr)
			*Pos = params.Pos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarPointInterface.RadarPointInterface_C.InitPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URadarPointComponent*                        RadarComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadarPointInterface_C::InitPoint(class URadarPointComponent* RadarComponent, bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarPointInterface.RadarPointInterface_C.InitPoint");
		
		URadarPointInterface_C_InitPoint_Params params {};
		params.RadarComponent = RadarComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadarPointInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadarPointInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RadarPointInterface.RadarPointInterface_C");
		return ptr;
	}

}


