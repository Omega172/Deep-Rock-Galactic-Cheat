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
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.Construct
	 */
	struct UHUD_Resources_Player_C_Construct_Params
	{	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.PreConstruct
	 */
	struct UHUD_Resources_Player_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.Add Resource
	 */
	struct UHUD_Resources_Player_C_AddResource_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceAdded
	 */
	struct UHUD_Resources_Player_C_OnResourceAdded_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceChanged
	 */
	struct UHUD_Resources_Player_C_OnResourceChanged_Params
	{
	public:
		class UHUD_Resources_Player_Icon_C*                        ResourceIcon;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.RefreshVisibility
	 */
	struct UHUD_Resources_Player_C_RefreshVisibility_Params
	{	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerPressed_Event
	 */
	struct UHUD_Resources_Player_C_OnLaserPointerPressed_Event_Params
	{	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerReleased_Event
	 */
	struct UHUD_Resources_Player_C_OnLaserPointerReleased_Event_Params
	{	};

	/**
	 * Function HUD_Resources_Player.HUD_Resources_Player_C.ExecuteUbergraph_HUD_Resources_Player
	 */
	struct UHUD_Resources_Player_C_ExecuteUbergraph_HUD_Resources_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
