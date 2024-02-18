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
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.SetIconAndTint
	 */
	struct UHUD_LaserPointerDisplay_C_SetIconAndTint_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Tint;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands
	 */
	struct UHUD_LaserPointerDisplay_C_UpdateCommands_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Finished_2FB3B1024A257294FCE363AC76E7AAF6
	 */
	struct UHUD_LaserPointerDisplay_C_Finished_2FB3B1024A257294FCE363AC76E7AAF6_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest
	 */
	struct UHUD_LaserPointerDisplay_C_PointOfInterest_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Tint;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct
	 */
	struct UHUD_LaserPointerDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged
	 */
	struct UHUD_LaserPointerDisplay_C_OnBoscoChanged_Params
	{
	public:
		class ABosco*                                              Bosco;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartScan
	 */
	struct UHUD_LaserPointerDisplay_C_StartScan_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StopScan
	 */
	struct UHUD_LaserPointerDisplay_C_StopScan_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnUnequipped
	 */
	struct UHUD_LaserPointerDisplay_C_OnUnequipped_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display
	 */
	struct UHUD_LaserPointerDisplay_C_UpdateDisplay_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      Distance;                                                // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3T4V[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLaserPointerData                                   Data;                                                    // 0x0090(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped
	 */
	struct UHUD_LaserPointerDisplay_C_OnEquipped_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct
	 */
	struct UHUD_LaserPointerDisplay_C_Construct_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartShow
	 */
	struct UHUD_LaserPointerDisplay_C_StartShow_Params
	{	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay
	 */
	struct UHUD_LaserPointerDisplay_C_ExecuteUbergraph_HUD_LaserPointerDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ScanComplete__DelegateSignature
	 */
	struct UHUD_LaserPointerDisplay_C_ScanComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
