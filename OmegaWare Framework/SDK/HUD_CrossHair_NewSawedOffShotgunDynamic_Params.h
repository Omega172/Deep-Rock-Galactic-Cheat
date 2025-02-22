﻿#pragma once

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
	 * Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.Construct
	 */
	struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C_Construct_Params
	{	};

	/**
	 * Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnDamagedEnemy_Event
	 */
	struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C_OnDamagedEnemy_Event_Params
	{
	public:
		unsigned char                                              UnknownData_7AQD[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Damage;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageModifier;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthRemaining;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWeakPoint;                                             // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRadial;                                                // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnSpreadChanged
	 */
	struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C_OnSpreadChanged_Params
	{
	public:
		float                                                      HorizontalSpread;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VerticalSpread;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAtRest;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnClipCountChanged
	 */
	struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C_OnClipCountChanged_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.SetData
	 */
	struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C_SetData_Params
	{
	public:
		class AAmmoDrivenWeapon*                                   Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.PreConstruct
	 */
	struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic
	 */
	struct UHUD_CrossHair_NewSawedOffShotgunDynamic_C_ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
