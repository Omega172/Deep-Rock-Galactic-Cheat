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
	 * Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetMissionSelect
	 */
	struct ABP_SR_PlayerControllerBase_C_GetMissionSelect_Params
	{
	public:
		class UWindowWidget*                                       Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetPopupCrafting
	 */
	struct ABP_SR_PlayerControllerBase_C_GetPopupCrafting_Params
	{
	public:
		class UWindowWidget*                                       Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.GetCrafting
	 */
	struct ABP_SR_PlayerControllerBase_C_GetCrafting_Params
	{
	public:
		class UWindowWidget*                                       Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ShowCharacterSelectionBackground
	 */
	struct ABP_SR_PlayerControllerBase_C_ShowCharacterSelectionBackground_Params
	{
	public:
		bool                                                       resetToDefaultWeapon;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECharselectionCameraLocation                               cameraLocation;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ShowForgeWorkshop
	 */
	struct ABP_SR_PlayerControllerBase_C_ShowForgeWorkshop_Params
	{	};

	/**
	 * Function BP_SR_PlayerControllerBase.BP_SR_PlayerControllerBase_C.ExecuteUbergraph_BP_SR_PlayerControllerBase
	 */
	struct ABP_SR_PlayerControllerBase_C_ExecuteUbergraph_BP_SR_PlayerControllerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
