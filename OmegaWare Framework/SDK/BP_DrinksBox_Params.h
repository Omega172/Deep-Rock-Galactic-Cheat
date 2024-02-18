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
	 * Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor
	 */
	struct ABP_DrinksBox_C_OnRep_DrinkableActor_Params
	{	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable
	 */
	struct ABP_DrinksBox_C_IsAvailable_Params
	{
	public:
		bool                                                       IsAvailable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State
	 */
	struct ABP_DrinksBox_C_OnRep_State_Params
	{	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.OnLoaded_C20044584A6E4C14650B318543524FEE
	 */
	struct ABP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink
	 */
	struct ABP_DrinksBox_C_SpawnDrink_Params
	{
	public:
		class UDrinkableDataAsset*                                 Drinkable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed
	 */
	struct ABP_DrinksBox_C_OnDrinkableDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor
	 */
	struct ABP_DrinksBox_C_FillDrinkableActor_Params
	{	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox
	 */
	struct ABP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature
	 */
	struct ABP_DrinksBox_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		unsigned char                                              State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature
	 */
	struct ABP_DrinksBox_C_OnDrinkReady__DelegateSignature_Params
	{
	public:
		class ABP_DrinksBox_C*                                     DrinkBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature
	 */
	struct ABP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature_Params
	{
	public:
		class ABP_DrinksBox_C*                                     DrinkBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
