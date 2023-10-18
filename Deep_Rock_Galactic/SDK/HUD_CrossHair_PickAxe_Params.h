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
	 * Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.PreConstruct
	 */
	struct UHUD_CrossHair_PickAxe_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.SetData
	 */
	struct UHUD_CrossHair_PickAxe_C_SetData_Params
	{
	public:
		class APickaxeItem*                                        PickAxe;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CrossHair_PickAxe.HUD_CrossHair_PickAxe_C.ExecuteUbergraph_HUD_CrossHair_PickAxe
	 */
	struct UHUD_CrossHair_PickAxe_C_ExecuteUbergraph_HUD_CrossHair_PickAxe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1OSK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
