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
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.Hover
	 */
	struct UITM_DLC_Entry_C_Hover_Params
	{
	public:
		bool                                                       InHover;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutChanged;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.GetMediaPlayer
	 */
	struct UITM_DLC_Entry_C_GetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.OnLoaded_842E9D344CABB7D6534CBDB978324582
	 */
	struct UITM_DLC_Entry_C_OnLoaded_842E9D344CABB7D6534CBDB978324582_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.BndEvt__DLC_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_DLC_Entry_C_BndEvt__DLC_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.BndEvt__DLC_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_DLC_Entry_C_BndEvt__DLC_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.BndEvt__DLC_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_DLC_Entry_C_BndEvt__DLC_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.Construct
	 */
	struct UITM_DLC_Entry_C_Construct_Params
	{	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.Tick
	 */
	struct UITM_DLC_Entry_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.PreConstruct
	 */
	struct UITM_DLC_Entry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.ExecuteUbergraph_ITM_DLC_Entry
	 */
	struct UITM_DLC_Entry_C_ExecuteUbergraph_ITM_DLC_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L56H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.OnClicked__DelegateSignature
	 */
	struct UITM_DLC_Entry_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_DLC_Entry_C*                                    InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.OnHoverEnd__DelegateSignature
	 */
	struct UITM_DLC_Entry_C_OnHoverEnd__DelegateSignature_Params
	{
	public:
		class UITM_DLC_Entry_C*                                    InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Itm_DLC_Entry.ITM_DLC_Entry_C.OnHoverBegin__DelegateSignature
	 */
	struct UITM_DLC_Entry_C_OnHoverBegin__DelegateSignature_Params
	{
	public:
		class UITM_DLC_Entry_C*                                    InEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
