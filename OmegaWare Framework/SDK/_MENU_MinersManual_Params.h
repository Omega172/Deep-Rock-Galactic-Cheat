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
	 * Function _MENU_MinersManual._MENU_MinersManual_C.IsCreatureUnlocked
	 */
	struct U_MENU_MinersManual_C_IsCreatureUnlocked_Params
	{
	public:
		class UEnemyMinersManualData*                              enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUnlocked;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y9AQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyDown
	 */
	struct U_MENU_MinersManual_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OpenPageInternal
	 */
	struct U_MENU_MinersManual_C_OpenPageInternal_Params
	{
	public:
		EMinersManualSection                                       Section;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A1AY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_JIJQ[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.GetButtonInfoFromSoftPage
	 */
	struct U_MENU_MinersManual_C_GetButtonInfoFromSoftPage_Params
	{
	public:
		unsigned char                                              UnknownData_FA6A[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMM_ButtonInfo                                      OutButton;                                               // 0x0028(0x0070)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnMouseButtonUp
	 */
	struct U_MENU_MinersManual_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyUp
	 */
	struct U_MENU_MinersManual_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectOverview
	 */
	struct U_MENU_MinersManual_C_SelectOverview_Params
	{	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.LoadSinglePage
	 */
	struct U_MENU_MinersManual_C_LoadSinglePage_Params
	{
	public:
		unsigned char                                              UnknownData_DPX7[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectResourcesPage
	 */
	struct U_MENU_MinersManual_C_SelectResourcesPage_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectBiome
	 */
	struct U_MENU_MinersManual_C_SelectBiome_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5NNK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectCreature
	 */
	struct U_MENU_MinersManual_C_SelectCreature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WY6N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectCombat
	 */
	struct U_MENU_MinersManual_C_SelectCombat_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectBasics
	 */
	struct U_MENU_MinersManual_C_SelectBasics_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectMissionType
	 */
	struct U_MENU_MinersManual_C_SelectMissionType_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3BP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B51F0A3566
	 */
	struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B51F0A3566_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8
	 */
	struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDAF081D51
	 */
	struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDAF081D51_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B52E4010C5
	 */
	struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B52E4010C5_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD7D04604B
	 */
	struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD7D04604B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF
	 */
	struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C56F864BC
	 */
	struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C56F864BC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF15F73D6
	 */
	struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF15F73D6_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6
	 */
	struct U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B59B3DD428
	 */
	struct U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B59B3DD428_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CDF02186B
	 */
	struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CDF02186B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF666E15C
	 */
	struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF666E15C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C821EC396
	 */
	struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C821EC396_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C0BF30CCE
	 */
	struct U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C0BF30CCE_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SetLoreScreenContent
	 */
	struct U_MENU_MinersManual_C_SetLoreScreenContent_Params
	{
	public:
		class ULoreScreen_Master_C*                                InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.Construct
	 */
	struct U_MENU_MinersManual_C_Construct_Params
	{	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.PreConstruct
	 */
	struct U_MENU_MinersManual_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.ButtonClicked
	 */
	struct U_MENU_MinersManual_C_ButtonClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectSection
	 */
	struct U_MENU_MinersManual_C_SelectSection_Params
	{
	public:
		EMinersManualSection                                       Section;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SelectFirst;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectPageFromObject
	 */
	struct U_MENU_MinersManual_C_SelectPageFromObject_Params
	{
	public:
		class UObject*                                             IdentifyingObject;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.SelectSinglePage
	 */
	struct U_MENU_MinersManual_C_SelectSinglePage_Params
	{
	public:
		EMinersManualSinglePage                                    page;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.StepBack
	 */
	struct U_MENU_MinersManual_C_StepBack_Params
	{	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.OpenFromSavegameID
	 */
	struct U_MENU_MinersManual_C_OpenFromSavegameID_Params
	{
	public:
		EMinersManualSection                                       Section;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_50JG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ID;                                                      // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function _MENU_MinersManual._MENU_MinersManual_C.ExecuteUbergraph__MENU_MinersManual
	 */
	struct U_MENU_MinersManual_C_ExecuteUbergraph__MENU_MinersManual_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
