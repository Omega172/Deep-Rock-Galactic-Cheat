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
	 * Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.SetPlayerData
	 */
	struct UITM_SaveSlot_Entry_ClassIcon_C_SetPlayerData_Params
	{
	public:
		class UTexture2D*                                          InIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InIconTint;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.PreConstruct
	 */
	struct UITM_SaveSlot_Entry_ClassIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon
	 */
	struct UITM_SaveSlot_Entry_ClassIcon_C_ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
