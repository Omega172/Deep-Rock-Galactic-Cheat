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
	 * 		Name   -> Function BP_PointOfInterest.BP_PointOfInterest_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PointOfInterest_C::Init(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.Init");
		
		ABP_PointOfInterest_C_Init_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PointOfInterest_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay");
		
		ABP_PointOfInterest_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event
	 * 		Flags  -> ()
	 */
	void ABP_PointOfInterest_C::Finished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event");
		
		ABP_PointOfInterest_C_Finished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PointOfInterest_C::ExecuteUbergraph_BP_PointOfInterest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest");
		
		ABP_PointOfInterest_C_ExecuteUbergraph_BP_PointOfInterest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PointOfInterest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PointOfInterest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PointOfInterest.BP_PointOfInterest_C");
		return ptr;
	}

}


