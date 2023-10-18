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
	 * Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.Receive_CharacterShown
	 */
	struct UBP_CharacterShowroomController_C_Receive_CharacterShown_Params
	{	};

	/**
	 * Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.EquipWeapon
	 */
	struct UBP_CharacterShowroomController_C_EquipWeapon_Params
	{
	public:
		EItemCategory                                              Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.ExecuteUbergraph_BP_CharacterShowroomController
	 */
	struct UBP_CharacterShowroomController_C_ExecuteUbergraph_BP_CharacterShowroomController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
