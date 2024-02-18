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
	 * Function BP_PointOfInterest.BP_PointOfInterest_C.Init
	 */
	struct ABP_PointOfInterest_C_Init_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay
	 */
	struct ABP_PointOfInterest_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event
	 */
	struct ABP_PointOfInterest_C_Finished_Event_Params
	{	};

	/**
	 * Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest
	 */
	struct ABP_PointOfInterest_C_ExecuteUbergraph_BP_PointOfInterest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
