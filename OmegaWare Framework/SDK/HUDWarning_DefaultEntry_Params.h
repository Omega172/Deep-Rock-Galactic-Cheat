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
	 * Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.SetData
	 */
	struct UHUDWarning_DefaultEntry_C_SetData_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          PingSound;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PreConstruct
	 */
	struct UHUDWarning_DefaultEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Ping
	 */
	struct UHUDWarning_DefaultEntry_C_Ping_Params
	{
	public:
		bool                                                       DestroyAfterPing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.PingFinished
	 */
	struct UHUDWarning_DefaultEntry_C_PingFinished_Params
	{	};

	/**
	 * Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.Construct
	 */
	struct UHUDWarning_DefaultEntry_C_Construct_Params
	{	};

	/**
	 * Function HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C.ExecuteUbergraph_HUDWarning_DefaultEntry
	 */
	struct UHUDWarning_DefaultEntry_C_ExecuteUbergraph_HUDWarning_DefaultEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QEDK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
