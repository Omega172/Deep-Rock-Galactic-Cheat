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
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PointsGathered
	 */
	struct UUI_JettyBoots_Obstacle_C_PointsGathered_Params
	{
	public:
		struct FSpriteRect                                         InRect;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       OutGatheredPoints;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FLPU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutPoints;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.CalculateColumn
	 */
	struct UUI_JettyBoots_Obstacle_C_CalculateColumn_Params
	{
	public:
		class UUI_JettyBoots_Column_C*                             InColumn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStartX;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InGateWidth;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InTop;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InBottom;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSpriteRect                                         OutRect;                                                 // 0x0018(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.SetColumnRect
	 */
	struct UUI_JettyBoots_Obstacle_C_SetColumnRect_Params
	{
	public:
		class UUI_JettyBoots_Column_C*                             Column;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSpriteRect                                         Rect;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      StartX;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.OnInitialize
	 */
	struct UUI_JettyBoots_Obstacle_C_OnInitialize_Params
	{
	public:
		struct FRandomStream                                       InRandom;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		struct FJettyBootSetting                                   InLevelSettings;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    InCanvasHeight;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStartX;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsFirstGate;                                           // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HT2V[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutStartX;                                               // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutEndX;                                                 // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Init
	 */
	struct UUI_JettyBoots_Obstacle_C_Init_Params
	{
	public:
		struct FRandomStream                                       InRandom;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		struct FJettyBootSetting                                   InLevelSettings;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    InCanvasHeight;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStartX;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsFirstGate;                                           // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CPMV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutEndX;                                                 // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.Intersects
	 */
	struct UUI_JettyBoots_Obstacle_C_Intersects_Params
	{
	public:
		struct FSpriteRect                                         InRect;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       OutIntersects;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.PreConstruct
	 */
	struct UUI_JettyBoots_Obstacle_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Obstacle.UI_JettyBoots_Obstacle_C.ExecuteUbergraph_UI_JettyBoots_Obstacle
	 */
	struct UUI_JettyBoots_Obstacle_C_ExecuteUbergraph_UI_JettyBoots_Obstacle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
