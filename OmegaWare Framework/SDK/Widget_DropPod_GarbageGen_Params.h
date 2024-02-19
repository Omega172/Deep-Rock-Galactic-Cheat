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
	 * Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.GetNewOperation
	 */
	struct UWidget_DropPod_GarbageGen_C_GetNewOperation_Params
	{	};

	/**
	 * Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.DoOperation
	 */
	struct UWidget_DropPod_GarbageGen_C_DoOperation_Params
	{	};

	/**
	 * Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Construct
	 */
	struct UWidget_DropPod_GarbageGen_C_Construct_Params
	{	};

	/**
	 * Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.PreConstruct
	 */
	struct UWidget_DropPod_GarbageGen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Tick
	 */
	struct UWidget_DropPod_GarbageGen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.OnGeneratedMissionChanged
	 */
	struct UWidget_DropPod_GarbageGen_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.ExecuteUbergraph_Widget_DropPod_GarbageGen
	 */
	struct UWidget_DropPod_GarbageGen_C_ExecuteUbergraph_Widget_DropPod_GarbageGen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2NNI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
