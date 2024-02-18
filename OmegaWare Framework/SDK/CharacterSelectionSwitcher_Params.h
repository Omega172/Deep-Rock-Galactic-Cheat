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
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanActors
	 */
	struct ACharacterSelectionSwitcher_C_CleanActors_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetViewerActor
	 */
	struct ACharacterSelectionSwitcher_C_GetViewerActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RestartVanityIdleAnimMonatge
	 */
	struct ACharacterSelectionSwitcher_C_RestartVanityIdleAnimMonatge_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanVictoryPoseStuff
	 */
	struct ACharacterSelectionSwitcher_C_CleanVictoryPoseStuff_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.LoadVictoryPoseStuff
	 */
	struct ACharacterSelectionSwitcher_C_LoadVictoryPoseStuff_Params
	{
	public:
		class UVictoryPose*                                        VicPose;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ECZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos
	 */
	struct ACharacterSelectionSwitcher_C_FindEndscreenActorPos_Params
	{
	public:
		int32_t                                                    numplayers;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              NewParam;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors
	 */
	struct ACharacterSelectionSwitcher_C_DestroyPreviousSceneActors_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Add Yaw World Rotation
	 */
	struct ACharacterSelectionSwitcher_C_AddYawWorldRotation_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem
	 */
	struct ACharacterSelectionSwitcher_C_SetPreviewItem_Params
	{
	public:
		class UItemID*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation
	 */
	struct ACharacterSelectionSwitcher_C_SelectCameraLocation_Params
	{
	public:
		ECharselectionCameraLocation                               Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6JYB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter
	 */
	struct ACharacterSelectionSwitcher_C_GetActiveCharacter_Params
	{
	public:
		class APlayerCharacter*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter
	 */
	struct ACharacterSelectionSwitcher_C_RefreshCharacter_Params
	{
	public:
		ECharselectionCameraLocation                               SelectionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D88D99E0F
	 */
	struct ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D88D99E0F_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D1101C230
	 */
	struct ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D1101C230_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_B0CB40174FA1135597179392BE030FD1
	 */
	struct ACharacterSelectionSwitcher_C_OnNotifyEnd_B0CB40174FA1135597179392BE030FD1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_B0CB40174FA1135597179392BE030FD1
	 */
	struct ACharacterSelectionSwitcher_C_OnNotifyBegin_B0CB40174FA1135597179392BE030FD1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_B0CB40174FA1135597179392BE030FD1
	 */
	struct ACharacterSelectionSwitcher_C_OnInterrupted_B0CB40174FA1135597179392BE030FD1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_B0CB40174FA1135597179392BE030FD1
	 */
	struct ACharacterSelectionSwitcher_C_OnBlendOut_B0CB40174FA1135597179392BE030FD1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_B0CB40174FA1135597179392BE030FD1
	 */
	struct ACharacterSelectionSwitcher_C_OnCompleted_B0CB40174FA1135597179392BE030FD1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40
	 */
	struct ACharacterSelectionSwitcher_C_OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40
	 */
	struct ACharacterSelectionSwitcher_C_OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40
	 */
	struct ACharacterSelectionSwitcher_C_OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40
	 */
	struct ACharacterSelectionSwitcher_C_OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40
	 */
	struct ACharacterSelectionSwitcher_C_OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943
	 */
	struct ACharacterSelectionSwitcher_C_OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943
	 */
	struct ACharacterSelectionSwitcher_C_OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943
	 */
	struct ACharacterSelectionSwitcher_C_OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943
	 */
	struct ACharacterSelectionSwitcher_C_OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943
	 */
	struct ACharacterSelectionSwitcher_C_OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay
	 */
	struct ACharacterSelectionSwitcher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector
	 */
	struct ACharacterSelectionSwitcher_C_OnShowCharacterSelector_Params
	{
	public:
		class UClass*                                              NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		ECharselectionCameraLocation                               selectionLocation;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon
	 */
	struct ACharacterSelectionSwitcher_C_SwitchToWeapon_Params
	{
	public:
		int32_t                                                    WeaponIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot
	 */
	struct ACharacterSelectionSwitcher_C_EquipSlot_Params
	{
	public:
		int32_t                                                    EquipSlot;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles
	 */
	struct ACharacterSelectionSwitcher_C_StartIdles_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak
	 */
	struct ACharacterSelectionSwitcher_C_SetIdleBreak_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide
	 */
	struct ACharacterSelectionSwitcher_C_Hide_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate
	 */
	struct ACharacterSelectionSwitcher_C_Rotate_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop
	 */
	struct ACharacterSelectionSwitcher_C_VanityLoop_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff
	 */
	struct ACharacterSelectionSwitcher_C_DoStuff_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles
	 */
	struct ACharacterSelectionSwitcher_C_StartVanityIdles_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped
	 */
	struct ACharacterSelectionSwitcher_C_OnVanityItemEquipped_Params
	{
	public:
		EVanitySlot                                                Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D
	 */
	struct ACharacterSelectionSwitcher_C_ShowViewer3D_Params
	{
	public:
		class UClass*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		ECharselectionCameraLocation                               selectionLocation;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip
	 */
	struct ACharacterSelectionSwitcher_C_Equip_Params
	{
	public:
		class UClass*                                              itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    EquipSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick
	 */
	struct ACharacterSelectionSwitcher_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen
	 */
	struct ACharacterSelectionSwitcher_C_ShowEndScreen_Params
	{
	public:
		struct FCharacterViewScene                                 viewScene;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeLoop
	 */
	struct ACharacterSelectionSwitcher_C_ForgeLoop_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeStart
	 */
	struct ACharacterSelectionSwitcher_C_ForgeStart_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.BreakEnd
	 */
	struct ACharacterSelectionSwitcher_C_BreakEnd_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeIdleLoop
	 */
	struct ACharacterSelectionSwitcher_C_ForgeIdleLoop_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVictoryPoseChanged
	 */
	struct ACharacterSelectionSwitcher_C_OnVictoryPoseChanged_Params
	{
	public:
		class UVictoryPose*                                        VictoryPose;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PropPoseDone
	 */
	struct ACharacterSelectionSwitcher_C_PropPoseDone_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PoseDone
	 */
	struct ACharacterSelectionSwitcher_C_PoseDone_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCharacterRefresh
	 */
	struct ACharacterSelectionSwitcher_C_OnCharacterRefresh_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SkipForging
	 */
	struct ACharacterSelectionSwitcher_C_SkipForging_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnForgingDone
	 */
	struct ACharacterSelectionSwitcher_C_OnForgingDone_Params
	{	};

	/**
	 * Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher
	 */
	struct ACharacterSelectionSwitcher_C_ExecuteUbergraph_CharacterSelectionSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
