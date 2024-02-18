#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.SendRoomData
	 */
	struct UBP_ProceduralController_C_SendRoomData_Params
	{	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.SendTunnelData
	 */
	struct UBP_ProceduralController_C_SendTunnelData_Params
	{	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.ReceivedRoomData
	 */
	struct UBP_ProceduralController_C_ReceivedRoomData_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPGZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRoomNode>                                   Rooms;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FPathObstacle>                               Obstacles;                                               // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.ReceivedTunnelData
	 */
	struct UBP_ProceduralController_C_ReceivedTunnelData_Params
	{
	public:
		TArray<struct FTunnelNode>                                 tunnels;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestPLSData
	 */
	struct UBP_ProceduralController_C_Server_RequestPLSData_Params
	{	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.Server_RequestCarverData
	 */
	struct UBP_ProceduralController_C_Server_RequestCarverData_Params
	{
	public:
		EDebrisItemPass                                            pass;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.RequestPLSData
	 */
	struct UBP_ProceduralController_C_RequestPLSData_Params
	{	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.RequestCarverData
	 */
	struct UBP_ProceduralController_C_RequestCarverData_Params
	{
	public:
		EDebrisItemPass                                            pass;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProceduralController.BP_ProceduralController_C.ExecuteUbergraph_BP_ProceduralController
	 */
	struct UBP_ProceduralController_C_ExecuteUbergraph_BP_ProceduralController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
