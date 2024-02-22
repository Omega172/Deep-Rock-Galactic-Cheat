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
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked
	 */
	struct UITM_DeepDives_ServerList_C_UpdateLocked_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer
	 */
	struct UITM_DeepDives_ServerList_C_JoinServer_Params
	{
	public:
		struct FBlueprintSessionResult                             InSession;                                               // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate
	 */
	struct UITM_DeepDives_ServerList_C_FinishUpdate_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer
	 */
	struct UITM_DeepDives_ServerList_C_UpdateServer_Params
	{
	public:
		struct FBlueprintSessionResult                             ServerInfo;                                              // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate
	 */
	struct UITM_DeepDives_ServerList_C_BeginUpdate_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct
	 */
	struct UITM_DeepDives_ServerList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct
	 */
	struct UITM_DeepDives_ServerList_C_Construct_Params
	{	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnIsUGCAllowed
	 */
	struct UITM_DeepDives_ServerList_C_OnIsUGCAllowed_Params
	{
	public:
		class APlayerState*                                        CheckedPlayerState;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintableUserPrivileges                               CheckedPrivilege;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintablePrivilegeResults                             PrivilegeResult;                                         // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList
	 */
	struct UITM_DeepDives_ServerList_C_ExecuteUbergraph_ITM_DeepDives_ServerList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature
	 */
	struct UITM_DeepDives_ServerList_C_OnJoinServer__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
