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
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.RemoveCustomWidget
	 */
	struct UHUD_BossFight_Manager_C_RemoveCustomWidget_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddCustomWidget
	 */
	struct UHUD_BossFight_Manager_C_AddCustomWidget_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.AddBossFight
	 */
	struct UHUD_BossFight_Manager_C_AddBossFight_Params
	{
	public:
		unsigned char                                              UnknownData_UO94[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9
	 */
	struct UHUD_BossFight_Manager_C_OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Construct
	 */
	struct UHUD_BossFight_Manager_C_Construct_Params
	{	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.OnNewBossFight
	 */
	struct UHUD_BossFight_Manager_C_OnNewBossFight_Params
	{	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.PreConstruct
	 */
	struct UHUD_BossFight_Manager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Setup BossFights
	 */
	struct UHUD_BossFight_Manager_C_SetupBossFights_Params
	{	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.Setup Custom Widgets
	 */
	struct UHUD_BossFight_Manager_C_SetupCustomWidgets_Params
	{	};

	/**
	 * Function HUD_BossFight_Manager.HUD_BossFight_Manager_C.ExecuteUbergraph_HUD_BossFight_Manager
	 */
	struct UHUD_BossFight_Manager_C_ExecuteUbergraph_HUD_BossFight_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
