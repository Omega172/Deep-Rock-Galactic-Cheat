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
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.SetNotificationVisible
	 */
	struct UConsoleScreen_Season01_C_SetNotificationVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.SetNotification
	 */
	struct UConsoleScreen_Season01_C_SetNotification_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          InIcon;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.PreConstruct
	 */
	struct UConsoleScreen_Season01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnClaimStatusChanged
	 */
	struct UConsoleScreen_Season01_C_OnClaimStatusChanged_Params
	{
	public:
		bool                                                       AllClaimed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnTokensChanged
	 */
	struct UConsoleScreen_Season01_C_OnTokensChanged_Params
	{
	public:
		int32_t                                                    NumberOfTokens;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Change;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.Construct
	 */
	struct UConsoleScreen_Season01_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.OnWeaponMaintenanceChanged
	 */
	struct UConsoleScreen_Season01_C_OnWeaponMaintenanceChanged_Params
	{	};

	/**
	 * Function ConsoleScreen_Season01.ConsoleScreen_Season01_C.ExecuteUbergraph_ConsoleScreen_Season01
	 */
	struct UConsoleScreen_Season01_C_ExecuteUbergraph_ConsoleScreen_Season01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U24N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
