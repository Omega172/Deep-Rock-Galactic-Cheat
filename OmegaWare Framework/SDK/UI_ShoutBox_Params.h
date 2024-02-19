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
	 * Function UI_ShoutBox.UI_ShoutBox_C.UpdateBoxWidth
	 */
	struct UUI_ShoutBox_C_UpdateBoxWidth_Params
	{	};

	/**
	 * Function UI_ShoutBox.UI_ShoutBox_C.SetDistance
	 */
	struct UUI_ShoutBox_C_SetDistance_Params
	{
	public:
		float                                                      InDistance;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShoutBox.UI_ShoutBox_C.OnShoutEnd
	 */
	struct UUI_ShoutBox_C_OnShoutEnd_Params
	{	};

	/**
	 * Function UI_ShoutBox.UI_ShoutBox_C.ShoutStart
	 */
	struct UUI_ShoutBox_C_ShoutStart_Params
	{
	public:
		class APlayerCharacter*                                    InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      InDuration;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShoutBox.UI_ShoutBox_C.PreConstruct
	 */
	struct UUI_ShoutBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShoutBox.UI_ShoutBox_C.ExecuteUbergraph_UI_ShoutBox
	 */
	struct UUI_ShoutBox_C_ExecuteUbergraph_UI_ShoutBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShoutBox.UI_ShoutBox_C.OnShoutActiveChanged__DelegateSignature
	 */
	struct UUI_ShoutBox_C_OnShoutActiveChanged__DelegateSignature_Params
	{
	public:
		bool                                                       InShoutActive;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
