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
	 * Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Initialize
	 */
	struct UPopUp_CommunityGoal_SelectNewFaction_C_Initialize_Params
	{
	public:
		int32_t                                                    Fee;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QJ2C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommunityGoalFaction*                               Faction1;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoalFaction*                               Faction2;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Construct
	 */
	struct UPopUp_CommunityGoal_SelectNewFaction_C_Construct_Params
	{	};

	/**
	 * Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction1Selected
	 */
	struct UPopUp_CommunityGoal_SelectNewFaction_C_Faction1Selected_Params
	{	};

	/**
	 * Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction2Selected
	 */
	struct UPopUp_CommunityGoal_SelectNewFaction_C_Faction2Selected_Params
	{	};

	/**
	 * Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPopUp_CommunityGoal_SelectNewFaction_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction
	 */
	struct UPopUp_CommunityGoal_SelectNewFaction_C_ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.CheckState__DelegateSignature
	 */
	struct UPopUp_CommunityGoal_SelectNewFaction_C_CheckState__DelegateSignature_Params
	{
	public:
		bool                                                       Changed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
