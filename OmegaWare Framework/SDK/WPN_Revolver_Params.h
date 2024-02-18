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
	 * Function WPN_Revolver.WPN_Revolver_C.Receive_GetTPAnimationEventMesh
	 */
	struct AWPN_Revolver_C_Receive_GetTPAnimationEventMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.Receive_GetFPAnimationEventMesh
	 */
	struct AWPN_Revolver_C_Receive_GetFPAnimationEventMesh_Params
	{
	public:
		class UFirstPersonStaticMeshComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.GetGearStatEntry
	 */
	struct AWPN_Revolver_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.UserConstructionScript
	 */
	struct AWPN_Revolver_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadBegin
	 */
	struct AWPN_Revolver_C_Receive_ReloadBegin_Params
	{	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadEnd
	 */
	struct AWPN_Revolver_C_Receive_ReloadEnd_Params
	{	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.ReceiveBeginPlay
	 */
	struct AWPN_Revolver_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.OnSpreadChanged_Event_1
	 */
	struct AWPN_Revolver_C_OnSpreadChanged_Event_1_Params
	{
	public:
		float                                                      HorizontalSpread;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VerticalSpread;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAtRest;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.OnSkinChanged
	 */
	struct AWPN_Revolver_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Revolver.WPN_Revolver_C.ExecuteUbergraph_WPN_Revolver
	 */
	struct AWPN_Revolver_C_ExecuteUbergraph_WPN_Revolver_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JFP1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
