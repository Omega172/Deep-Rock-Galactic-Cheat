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
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UpdateHolidayDecoration
	 */
	struct ABP_SpaceRig_Bartender_C_UpdateHolidayDecoration_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors
	 */
	struct ABP_SpaceRig_Bartender_C_SetCableAnchors_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits
	 */
	struct ABP_SpaceRig_Bartender_C_PayCredits_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Purchased;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ORH0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer
	 */
	struct ABP_SpaceRig_Bartender_C_SpawnMixerBeer_Params
	{
	public:
		class FString                                              ControlEventID;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    MixerCooldownToSet;                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VORL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDrinkableDataAsset*                                 OrderedDrink;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OrderingPlayer;                                          // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                AnnouncementText;                                        // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting
	 */
	struct ABP_SpaceRig_Bartender_C_PlayGreeting_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim
	 */
	struct ABP_SpaceRig_Bartender_C_PlayAnim_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C8DA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative
	 */
	struct ABP_SpaceRig_Bartender_C_PlayNegative_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative
	 */
	struct ABP_SpaceRig_Bartender_C_PlayAffirmative_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PourFinished
	 */
	struct ABP_SpaceRig_Bartender_C_PourFinished_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour
	 */
	struct ABP_SpaceRig_Bartender_C_Pour_Params
	{
	public:
		class ABP_DrinksBox_C*                                     DrinkBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PourDuration;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial
	 */
	struct ABP_SpaceRig_Bartender_C_SetBartenderLightMaterial_Params
	{
	public:
		class UMaterialInterface*                                  SourceMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState
	 */
	struct ABP_SpaceRig_Bartender_C_OnRep_CurrentCustomerState_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer
	 */
	struct ABP_SpaceRig_Bartender_C_SetCustomer_Params
	{
	public:
		class APlayerCharacter*                                    Customer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound
	 */
	struct ABP_SpaceRig_Bartender_C_CanOrderNewRound_Params
	{
	public:
		bool                                                       CanOrder;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript
	 */
	struct ABP_SpaceRig_Bartender_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc
	 */
	struct ABP_SpaceRig_Bartender_C_LerpTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc
	 */
	struct ABP_SpaceRig_Bartender_C_LerpTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc
	 */
	struct ABP_SpaceRig_Bartender_C_FinishedTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc
	 */
	struct ABP_SpaceRig_Bartender_C_FinishedTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay
	 */
	struct ABP_SpaceRig_Bartender_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer
	 */
	struct ABP_SpaceRig_Bartender_C_LookAtCustomer_Params
	{
	public:
		class APlayerCharacter*                                    Customer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event
	 */
	struct ABP_SpaceRig_Bartender_C_OnPlayerLeave_Event_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights
	 */
	struct ABP_SpaceRig_Bartender_C_UpdateBartenderLights_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks
	 */
	struct ABP_SpaceRig_Bartender_C_SpawnDrinks_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drinable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To
	 */
	struct ABP_SpaceRig_Bartender_C_LerpTo_Params
	{
	public:
		struct FTransform                                          PourTransform;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink
	 */
	struct ABP_SpaceRig_Bartender_C_ServerSpawnNextDrink_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event
	 */
	struct ABP_SpaceRig_Bartender_C_OnAvailableForNewDrink_Event_Params
	{
	public:
		class ABP_DrinksBox_C*                                     DrinkBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event
	 */
	struct ABP_SpaceRig_Bartender_C_OnDrinkReady_Event_Params
	{
	public:
		class ABP_DrinksBox_C*                                     DrinkBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle
	 */
	struct ABP_SpaceRig_Bartender_C_ReturnToIdle_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks
	 */
	struct ABP_SpaceRig_Bartender_C_All_BeginSpawnDrinks_Params
	{
	public:
		bool                                                       PlayFireworks;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink
	 */
	struct ABP_SpaceRig_Bartender_C_ClientSpawnNextDrink_Params
	{
	public:
		class ABP_DrinksBox_C*                                     DrinkBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_SpaceRig_Bartender_C_BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TUUS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards
	 */
	struct ABP_SpaceRig_Bartender_C_LookTowards_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu
	 */
	struct ABP_SpaceRig_Bartender_C_InitBackgroundMenu_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks
	 */
	struct ABP_SpaceRig_Bartender_C_ToggleFireworks_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer
	 */
	struct ABP_SpaceRig_Bartender_C_InitializeMixer_Params
	{	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer
	 */
	struct ABP_SpaceRig_Bartender_C_OnUsableChanged_Mixer_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayBartenderTip
	 */
	struct ABP_SpaceRig_Bartender_C_PlayBartenderTip_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender
	 */
	struct ABP_SpaceRig_Bartender_C_ExecuteUbergraph_BP_SpaceRig_Bartender_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
