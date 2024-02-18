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
	 * Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.CanShowMissionType
	 */
	struct UUI_MissionReadOut_Base_C_CanShowMissionType_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanShow;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.Construct
	 */
	struct UUI_MissionReadOut_Base_C_Construct_Params
	{	};

	/**
	 * Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnGeneratedMissionChanged
	 */
	struct UUI_MissionReadOut_Base_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.ExecuteUbergraph_UI_MissionReadOut_Base
	 */
	struct UUI_MissionReadOut_Base_C_ExecuteUbergraph_UI_MissionReadOut_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNK0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnMissionSelected__DelegateSignature
	 */
	struct UUI_MissionReadOut_Base_C_OnMissionSelected__DelegateSignature_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
