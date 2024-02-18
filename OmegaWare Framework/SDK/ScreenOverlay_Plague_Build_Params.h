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
	 * Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.Construct
	 */
	struct UScreenOverlay_Plague_Build_C_Construct_Params
	{	};

	/**
	 * Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.Tick
	 */
	struct UScreenOverlay_Plague_Build_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.OnCharacterStateChanged
	 */
	struct UScreenOverlay_Plague_Build_C_OnCharacterStateChanged_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.End Splat
	 */
	struct UScreenOverlay_Plague_Build_C_EndSplat_Params
	{	};

	/**
	 * Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.OnCameraModeChanged
	 */
	struct UScreenOverlay_Plague_Build_C_OnCameraModeChanged_Params
	{
	public:
		ECharacterCameraMode                                       NewCameraMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterCameraMode                                       OldCameraMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.ExecuteUbergraph_ScreenOverlay_Plague_Build
	 */
	struct UScreenOverlay_Plague_Build_C_ExecuteUbergraph_ScreenOverlay_Plague_Build_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
