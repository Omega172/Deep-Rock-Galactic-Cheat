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
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.UpdateAmount
	 */
	struct UHUD_Resources_Team_Icon_C_UpdateAmount_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.SetResource
	 */
	struct UHUD_Resources_Team_Icon_C_SetResource_Params
	{
	public:
		class UCappedResource*                                     InResource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HideIfEmpty;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Init Resource
	 */
	struct UHUD_Resources_Team_Icon_C_InitResource_Params
	{	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnChanged
	 */
	struct UHUD_Resources_Team_Icon_C_OnChanged_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.PreConstruct
	 */
	struct UHUD_Resources_Team_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Tick
	 */
	struct UHUD_Resources_Team_Icon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.Construct
	 */
	struct UHUD_Resources_Team_Icon_C_Construct_Params
	{	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.OnPingAmountFinished
	 */
	struct UHUD_Resources_Team_Icon_C_OnPingAmountFinished_Params
	{	};

	/**
	 * Function HUD_Resources_Team_Icon.HUD_Resources_Team_Icon_C.ExecuteUbergraph_HUD_Resources_Team_Icon
	 */
	struct UHUD_Resources_Team_Icon_C_ExecuteUbergraph_HUD_Resources_Team_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
