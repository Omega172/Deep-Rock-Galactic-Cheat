#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial
	 */
	struct AWPN_LaserPointer_C_SetLaserBeamMaterial_Params
	{
	public:
		class APlayerCharacter*                                    InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility
	 */
	struct AWPN_LaserPointer_C_SetBeamVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI
	 */
	struct AWPN_LaserPointer_C_CanPlacePOI_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SR5P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            Icon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanPlace;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7B0L[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor
	 */
	struct AWPN_LaserPointer_C_UpdateBackgroundColor_Params
	{	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor
	 */
	struct AWPN_LaserPointer_C_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam
	 */
	struct AWPN_LaserPointer_C_AdjustBeam_Params
	{	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform
	 */
	struct AWPN_LaserPointer_C_GetPointTransform_Params
	{
	public:
		struct FTransform                                          PointTransform;                                          // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript
	 */
	struct AWPN_LaserPointer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped
	 */
	struct AWPN_LaserPointer_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest
	 */
	struct AWPN_LaserPointer_C_OnPointOfInterest_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BUNC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          TargetIcon;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay
	 */
	struct AWPN_LaserPointer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory
	 */
	struct AWPN_LaserPointer_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete
	 */
	struct AWPN_LaserPointer_C_OnScanComplete_Params
	{	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event
	 */
	struct AWPN_LaserPointer_C_OnMarkerPlaced_Event_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3MOJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELaserPointerTargetType                                    TypeOfTarget;                                            // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible
	 */
	struct AWPN_LaserPointer_C_ToggleLaserVisible_Params
	{
	public:
		bool                                                       aVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped
	 */
	struct AWPN_LaserPointer_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed
	 */
	struct AWPN_LaserPointer_C_OnPOIDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick
	 */
	struct AWPN_LaserPointer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer
	 */
	struct AWPN_LaserPointer_C_ExecuteUbergraph_WPN_LaserPointer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
