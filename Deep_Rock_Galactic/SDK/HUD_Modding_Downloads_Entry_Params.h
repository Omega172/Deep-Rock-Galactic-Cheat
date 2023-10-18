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
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetIsFinished
	 */
	struct UHUD_Modding_Downloads_Entry_C_GetIsFinished_Params
	{
	public:
		bool                                                       IsFinished;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Error
	 */
	struct UHUD_Modding_Downloads_Entry_C_Error_Params
	{
	public:
		EUGCPackageError                                           InErrorType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.Finish
	 */
	struct UHUD_Modding_Downloads_Entry_C_Finish_Params
	{	};

	/**
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetProgress
	 */
	struct UHUD_Modding_Downloads_Entry_C_GetProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.GetModName
	 */
	struct UHUD_Modding_Downloads_Entry_C_GetModName_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.SetProgress
	 */
	struct UHUD_Modding_Downloads_Entry_C_SetProgress_Params
	{
	public:
		class FString                                              InModName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InDownloading;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DOGK[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InDownloaded;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTotal;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.PreConstruct
	 */
	struct UHUD_Modding_Downloads_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C.ExecuteUbergraph_HUD_Modding_Downloads_Entry
	 */
	struct UHUD_Modding_Downloads_Entry_C_ExecuteUbergraph_HUD_Modding_Downloads_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
