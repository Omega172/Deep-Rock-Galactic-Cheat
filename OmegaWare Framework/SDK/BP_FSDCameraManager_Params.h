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
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeMaxDistance
	 */
	struct ABP_FSDCameraManager_C_ChangeMaxDistance_Params
	{
	public:
		float                                                      MaxDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ChangeSpeed
	 */
	struct ABP_FSDCameraManager_C_ChangeSpeed_Params
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2XFS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.SmoothReturnVelocity
	 */
	struct ABP_FSDCameraManager_C_SmoothReturnVelocity_Params
	{
	public:
		struct FVector                                             NewCameraLocation;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.SphereDirectionToPlayer
	 */
	struct ABP_FSDCameraManager_C_SphereDirectionToPlayer_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4JN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.SetToThirdPersonCamera
	 */
	struct ABP_FSDCameraManager_C_SetToThirdPersonCamera_Params
	{
	public:
		struct FVector                                             NewCameraPosition;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode
	 */
	struct ABP_FSDCameraManager_C_ReturnCameraMode_Params
	{
	public:
		class APlayerCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterCameraMode                                       NewCameraMode;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify
	 */
	struct ABP_FSDCameraManager_C_PhotographyCameraModify_Params
	{
	public:
		struct FVector                                             NewCameraLocation;                                       // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PreviousCameraLocation;                                  // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OriginalCameraLocation;                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ResultCameraLocation;                                    // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed
	 */
	struct ABP_FSDCameraManager_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd
	 */
	struct ABP_FSDCameraManager_C_OnPhotographySessionEnd_Params
	{	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart
	 */
	struct ABP_FSDCameraManager_C_OnPhotographySessionStart_Params
	{	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick
	 */
	struct ABP_FSDCameraManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay
	 */
	struct ABP_FSDCameraManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode
	 */
	struct ABP_FSDCameraManager_C_TogglePhotographyMode_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera
	 */
	struct ABP_FSDCameraManager_C_ReturnCamera_Params
	{	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStart
	 */
	struct ABP_FSDCameraManager_C_LoaderStart_Params
	{
	public:
		class ULevelSequence*                                      LoaderLevelSequence;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.LoaderStop
	 */
	struct ABP_FSDCameraManager_C_LoaderStop_Params
	{	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager
	 */
	struct ABP_FSDCameraManager_C_ExecuteUbergraph_BP_FSDCameraManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature
	 */
	struct ABP_FSDCameraManager_C_ShowHUDForPhotography__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature
	 */
	struct ABP_FSDCameraManager_C_HideHUDForPhotography__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
