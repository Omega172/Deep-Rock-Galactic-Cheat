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
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.SendRoomData
	 * 		Flags  -> ()
	 */
	void UBP_ProceduralController_C::SendRoomData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.SendRoomData");
		
		UBP_ProceduralController_C_SendRoomData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.SendTunnelData
	 * 		Flags  -> ()
	 */
	void UBP_ProceduralController_C::SendTunnelData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.SendTunnelData");
		
		UBP_ProceduralController_C_SendTunnelData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.ReceivedRoomData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FRoomNode>                           Rooms                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FPathObstacle>                       Obstacles                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProceduralController_C::ReceivedRoomData(int32_t Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.ReceivedRoomData");
		
		UBP_ProceduralController_C_ReceivedRoomData_Params params {};
		params.Seed = Seed;
		params.Rooms = Rooms;
		params.Obstacles = Obstacles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.ReceivedTunnelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTunnelNode>                         tunnels                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ProceduralController_C::ReceivedTunnelData(TArray<struct FTunnelNode> tunnels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.ReceivedTunnelData");
		
		UBP_ProceduralController_C_ReceivedTunnelData_Params params {};
		params.tunnels = tunnels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestPLSData
	 * 		Flags  -> ()
	 */
	void UBP_ProceduralController_C::Server_RequestPLSData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestPLSData");
		
		UBP_ProceduralController_C_Server_RequestPLSData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestCarverData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebrisItemPass                                    pass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProceduralController_C::Server_RequestCarverData(EDebrisItemPass pass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestCarverData");
		
		UBP_ProceduralController_C_Server_RequestCarverData_Params params {};
		params.pass = pass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.RequestPLSData
	 * 		Flags  -> ()
	 */
	void UBP_ProceduralController_C::RequestPLSData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.RequestPLSData");
		
		UBP_ProceduralController_C_RequestPLSData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.RequestCarverData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebrisItemPass                                    pass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProceduralController_C::RequestCarverData(EDebrisItemPass pass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.RequestCarverData");
		
		UBP_ProceduralController_C_RequestCarverData_Params params {};
		params.pass = pass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProceduralController.BP_ProceduralController_C.ExecuteUbergraph_BP_ProceduralController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProceduralController_C::ExecuteUbergraph_BP_ProceduralController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProceduralController.BP_ProceduralController_C.ExecuteUbergraph_BP_ProceduralController");
		
		UBP_ProceduralController_C_ExecuteUbergraph_BP_ProceduralController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProceduralController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProceduralController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProceduralController.BP_ProceduralController_C");
		return ptr;
	}

}


