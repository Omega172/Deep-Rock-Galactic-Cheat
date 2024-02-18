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
	 * Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData
	 */
	struct UITM_ServerEntry_TeamLine_C_SetPlayerData_Params
	{
	public:
		class UTexture2D*                                          InIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InIconTint;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct
	 */
	struct UITM_ServerEntry_TeamLine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine
	 */
	struct UITM_ServerEntry_TeamLine_C_ExecuteUbergraph_ITM_ServerEntry_TeamLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
