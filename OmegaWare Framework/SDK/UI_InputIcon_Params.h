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
	 * Function UI_InputIcon.UI_InputIcon_C.GetBrushTint
	 */
	struct UUI_InputIcon_C_GetBrushTint_Params
	{
	public:
		bool                                                       IsTintable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VGHX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        OutputColor;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.GetIconSize
	 */
	struct UUI_InputIcon_C_GetIconSize_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           OutSize;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.Refresh
	 */
	struct UUI_InputIcon_C_Refresh_Params
	{	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.SetSettings
	 */
	struct UUI_InputIcon_C_SetSettings_Params
	{
	public:
		struct FStruct_InputIcon                                   InSettings;                                              // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.GetCurrentMenuAction
	 */
	struct UUI_InputIcon_C_GetCurrentMenuAction_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFSDInputSource                                            OutSource;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.PreConstruct
	 */
	struct UUI_InputIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.Construct
	 */
	struct UUI_InputIcon_C_Construct_Params
	{	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.OnInputSourceChanged
	 */
	struct UUI_InputIcon_C_OnInputSourceChanged_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InputIcon.UI_InputIcon_C.ExecuteUbergraph_UI_InputIcon
	 */
	struct UUI_InputIcon_C_ExecuteUbergraph_UI_InputIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
