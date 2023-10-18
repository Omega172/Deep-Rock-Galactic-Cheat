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
	 * 		Name   -> Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.SetConnectorVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PipeGrindingConnector_C::SetConnectorVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.SetConnectorVisible");
		
		ABP_PipeGrindingConnector_C_SetConnectorVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PipeGrindingConnector_C::ReceiveConnected(const struct FVector& WorldLocation, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveConnected");
		
		ABP_PipeGrindingConnector_C_ReceiveConnected_Params params {};
		params.WorldLocation = WorldLocation;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveDisconnected
	 * 		Flags  -> ()
	 */
	void ABP_PipeGrindingConnector_C::ReceiveDisconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveDisconnected");
		
		ABP_PipeGrindingConnector_C_ReceiveDisconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveUpdateZipLinePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Directioy                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Speeding                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PipeGrindingConnector_C::ReceiveUpdateZipLinePoint(const struct FVector& WorldLocation, const struct FVector& Directioy, bool Speeding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveUpdateZipLinePoint");
		
		ABP_PipeGrindingConnector_C_ReceiveUpdateZipLinePoint_Params params {};
		params.WorldLocation = WorldLocation;
		params.Directioy = Directioy;
		params.Speeding = Speeding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.UpdateLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PipeGrindingConnector_C::UpdateLocation(const struct FVector& Location, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.UpdateLocation");
		
		ABP_PipeGrindingConnector_C_UpdateLocation_Params params {};
		params.Location = Location;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PipeGrindingConnector_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveBeginPlay");
		
		ABP_PipeGrindingConnector_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ExecuteUbergraph_BP_PipeGrindingConnector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PipeGrindingConnector_C::ExecuteUbergraph_BP_PipeGrindingConnector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ExecuteUbergraph_BP_PipeGrindingConnector");
		
		ABP_PipeGrindingConnector_C_ExecuteUbergraph_BP_PipeGrindingConnector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PipeGrindingConnector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PipeGrindingConnector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PipeGrindingConnector.BP_PipeGrindingConnector_C");
		return ptr;
	}

}


