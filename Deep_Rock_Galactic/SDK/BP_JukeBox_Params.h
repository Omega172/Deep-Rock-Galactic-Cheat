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
	 * Function BP_JukeBox.BP_JukeBox_C.UpdateCurrentMusic
	 */
	struct ABP_JukeBox_C_UpdateCurrentMusic_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.GetAvailableMusic
	 */
	struct ABP_JukeBox_C_GetAvailableMusic_Params
	{
	public:
		unsigned char                                              UnknownData_BSMP[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.PayCredits
	 */
	struct ABP_JukeBox_C_PayCredits_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Purchased;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y3AR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex
	 */
	struct ABP_JukeBox_C_OnRep_MusicIndex_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc
	 */
	struct ABP_JukeBox_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc
	 */
	struct ABP_JukeBox_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860
	 */
	struct ABP_JukeBox_C_OnLoaded_C15A19DC4718016F57823CA232EE5860_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_JukeBox_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay
	 */
	struct ABP_JukeBox_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking
	 */
	struct ABP_JukeBox_C_ToggleSpeakerRocking_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6GE[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_JukeBox_C_BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay
	 */
	struct ABP_JukeBox_C_LoadAndPlay_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box
	 */
	struct ABP_JukeBox_C_StopJukeBox_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.StopJukebox
	 */
	struct ABP_JukeBox_C_StopJukebox_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.SetupDisableJukeboxMusic
	 */
	struct ABP_JukeBox_C_SetupDisableJukeboxMusic_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.OnStreamerModeChanged
	 */
	struct ABP_JukeBox_C_OnStreamerModeChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.OnSaluteEvent_Event_1
	 */
	struct ABP_JukeBox_C_OnSaluteEvent_Event_1_Params
	{	};

	/**
	 * Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox
	 */
	struct ABP_JukeBox_C_ExecuteUbergraph_BP_JukeBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
