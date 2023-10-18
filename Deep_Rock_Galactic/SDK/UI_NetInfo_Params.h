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
	 * Function UI_NetInfo.UI_NetInfo_C.GetPktLossString
	 */
	struct UUI_NetInfo_C_GetPktLossString_Params
	{
	public:
		class FText                                                Names;                                                   // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                PktLossIn;                                               // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                PktLossOut;                                              // 0x0030(0x0018)  (Parm, OutParm)
		class FText                                                Ping;                                                    // 0x0048(0x0018)  (Parm, OutParm)
		class FText                                                Jitter;                                                  // 0x0060(0x0018)  (Parm, OutParm)
		bool                                                       IsValid;                                                 // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MDSI[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_NetInfo.UI_NetInfo_C.GetPlayerName
	 */
	struct UUI_NetInfo_C_GetPlayerName_Params
	{
	public:
		class AFSDPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NetInfo.UI_NetInfo_C.PreConstruct
	 */
	struct UUI_NetInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_NetInfo.UI_NetInfo_C.Construct
	 */
	struct UUI_NetInfo_C_Construct_Params
	{	};

	/**
	 * Function UI_NetInfo.UI_NetInfo_C.SlowTick
	 */
	struct UUI_NetInfo_C_SlowTick_Params
	{	};

	/**
	 * Function UI_NetInfo.UI_NetInfo_C.OnNetInfoLevelChanged
	 */
	struct UUI_NetInfo_C_OnNetInfoLevelChanged_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo
	 */
	struct UUI_NetInfo_C_ExecuteUbergraph_UI_NetInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
