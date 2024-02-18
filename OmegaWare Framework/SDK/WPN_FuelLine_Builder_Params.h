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
	 * Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.GetMonitorWidget
	 */
	struct AWPN_FuelLine_Builder_C_GetMonitorWidget_Params
	{
	public:
		class UUI_FuelLine_Builder_C*                              MonitorUI;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceiveBeginPlaceSegment
	 */
	struct AWPN_FuelLine_Builder_C_ReceiveBeginPlaceSegment_Params
	{	};

	/**
	 * Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceivePlacementUpdated
	 */
	struct AWPN_FuelLine_Builder_C_ReceivePlacementUpdated_Params
	{
	public:
		bool                                                       InCanPlace;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InConnecting;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15KS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InDistanceProgress;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ExecuteUbergraph_WPN_FuelLine_Builder
	 */
	struct AWPN_FuelLine_Builder_C_ExecuteUbergraph_WPN_FuelLine_Builder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SI8X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
