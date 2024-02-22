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
	 * Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UpdateMaterial
	 */
	struct ABP_LaserPointer_Marker_C_UpdateMaterial_Params
	{	};

	/**
	 * Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay
	 */
	struct ABP_LaserPointer_Marker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target
	 */
	struct ABP_LaserPointer_Marker_C_OnDestroyed_Target_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self
	 */
	struct ABP_LaserPointer_Marker_C_OnDestroyed_Self_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDeath_Event
	 */
	struct ABP_LaserPointer_Marker_C_OnDeath_Event_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker
	 */
	struct ABP_LaserPointer_Marker_C_ExecuteUbergraph_BP_LaserPointer_Marker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z5GW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
