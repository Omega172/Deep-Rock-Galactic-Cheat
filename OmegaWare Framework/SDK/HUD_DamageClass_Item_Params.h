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
	 * Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct
	 */
	struct UHUD_DamageClass_Item_C_Construct_Params
	{	};

	/**
	 * Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate
	 */
	struct UHUD_DamageClass_Item_C_Deactivate_Params
	{	};

	/**
	 * Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Activate
	 */
	struct UHUD_DamageClass_Item_C_Activate_Params
	{	};

	/**
	 * Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.OnDeactivedFinished
	 */
	struct UHUD_DamageClass_Item_C_OnDeactivedFinished_Params
	{	};

	/**
	 * Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item
	 */
	struct UHUD_DamageClass_Item_C_ExecuteUbergraph_HUD_DamageClass_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature
	 */
	struct UHUD_DamageClass_Item_C_Elapsed__DelegateSignature_Params
	{
	public:
		class UHUD_DamageClass_Item_C*                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
