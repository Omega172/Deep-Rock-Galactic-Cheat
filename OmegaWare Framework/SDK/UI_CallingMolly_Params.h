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
	 * Function UI_CallingMolly.UI_CallingMolly_C.GetIsPlayerCalling
	 */
	struct UUI_CallingMolly_C_GetIsPlayerCalling_Params
	{
	public:
		bool                                                       OutIsCalling;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JX65[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.SetDonkey
	 */
	struct UUI_CallingMolly_C_SetDonkey_Params
	{
	public:
		class AMolly*                                              InDonkey;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.SetPlayerState
	 */
	struct UUI_CallingMolly_C_SetPlayerState_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.OnDonkeyChanged
	 */
	struct UUI_CallingMolly_C_OnDonkeyChanged_Params
	{
	public:
		class AMolly*                                              InDonkey;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.SetIconVisible
	 */
	struct UUI_CallingMolly_C_SetIconVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.OnAnimStarted
	 */
	struct UUI_CallingMolly_C_OnAnimStarted_Params
	{	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.OnAnimFinished
	 */
	struct UUI_CallingMolly_C_OnAnimFinished_Params
	{	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.OnCalledByChanged
	 */
	struct UUI_CallingMolly_C_OnCalledByChanged_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.Construct
	 */
	struct UUI_CallingMolly_C_Construct_Params
	{	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.PreConstruct
	 */
	struct UUI_CallingMolly_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.OnTimeOut
	 */
	struct UUI_CallingMolly_C_OnTimeOut_Params
	{	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.PingIcon
	 */
	struct UUI_CallingMolly_C_PingIcon_Params
	{	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.OnPingFinished
	 */
	struct UUI_CallingMolly_C_OnPingFinished_Params
	{	};

	/**
	 * Function UI_CallingMolly.UI_CallingMolly_C.ExecuteUbergraph_UI_CallingMolly
	 */
	struct UUI_CallingMolly_C_ExecuteUbergraph_UI_CallingMolly_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
