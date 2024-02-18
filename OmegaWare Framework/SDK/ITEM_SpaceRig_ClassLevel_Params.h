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
	 * Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct
	 */
	struct UITEM_SpaceRig_ClassLevel_C_Construct_Params
	{	};

	/**
	 * Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct
	 */
	struct UITEM_SpaceRig_ClassLevel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel
	 */
	struct UITEM_SpaceRig_ClassLevel_C_SetLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel
	 */
	struct UITEM_SpaceRig_ClassLevel_C_ExecuteUbergraph_ITEM_SpaceRig_ClassLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
