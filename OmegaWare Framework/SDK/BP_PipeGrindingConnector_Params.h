#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.SetConnectorVisible
	 */
	struct ABP_PipeGrindingConnector_C_SetConnectorVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveConnected
	 */
	struct ABP_PipeGrindingConnector_C_ReceiveConnected_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveDisconnected
	 */
	struct ABP_PipeGrindingConnector_C_ReceiveDisconnected_Params
	{	};

	/**
	 * Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveUpdateZipLinePoint
	 */
	struct ABP_PipeGrindingConnector_C_ReceiveUpdateZipLinePoint_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Directioy;                                               // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Speeding;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.UpdateLocation
	 */
	struct ABP_PipeGrindingConnector_C_UpdateLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ReceiveBeginPlay
	 */
	struct ABP_PipeGrindingConnector_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PipeGrindingConnector.BP_PipeGrindingConnector_C.ExecuteUbergraph_BP_PipeGrindingConnector
	 */
	struct ABP_PipeGrindingConnector_C_ExecuteUbergraph_BP_PipeGrindingConnector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
