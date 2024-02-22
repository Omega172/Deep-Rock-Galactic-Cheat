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
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnEmpty
	 */
	struct AITM_BarGlass_Item_C_OnEmpty_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_ThrownGlass
	 */
	struct AITM_BarGlass_Item_C_OnRep_ThrownGlass_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_Visible
	 */
	struct AITM_BarGlass_Item_C_OnRep_Visible_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull
	 */
	struct AITM_BarGlass_Item_C_OnRep_IsFull_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute
	 */
	struct AITM_BarGlass_Item_C_CheckCanSalute_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking
	 */
	struct AITM_BarGlass_Item_C_IsDrinking_Params
	{
	public:
		bool                                                       IsDrinking;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7GNG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow
	 */
	struct AITM_BarGlass_Item_C_PlayThrow_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrinkFoam
	 */
	struct AITM_BarGlass_Item_C_PlayDrinkFoam_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrinkPlayer
	 */
	struct AITM_BarGlass_Item_C_PlayDrinkPlayer_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript
	 */
	struct AITM_BarGlass_Item_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing
	 */
	struct AITM_BarGlass_Item_C_RecieveStartUsing_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use
	 */
	struct AITM_BarGlass_Item_C_Server_Use_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink
	 */
	struct AITM_BarGlass_Item_C_All_Drink_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw
	 */
	struct AITM_BarGlass_Item_C_All_Throw_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty
	 */
	struct AITM_BarGlass_Item_C_SetEmpty_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
	 */
	struct AITM_BarGlass_Item_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReset;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ReceiveBeginPlay
	 */
	struct AITM_BarGlass_Item_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SkinThrownGlass
	 */
	struct AITM_BarGlass_Item_C_SkinThrownGlass_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ThrowDrink
	 */
	struct AITM_BarGlass_Item_C_ThrowDrink_Params
	{	};

	/**
	 * Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item
	 */
	struct AITM_BarGlass_Item_C_ExecuteUbergraph_ITM_BarGlass_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
