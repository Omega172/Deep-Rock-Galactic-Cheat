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
	 * UserDefinedStruct StickeyAttach.StickeyAttach
	 * Size -> 0x0028
	 */
	struct FStickeyAttach
	{
	public:
		class FName                                                Socket_2_902DCD154F05A6E81AE6B880D31B34E5;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SceneComponent_5_A419FEEB413DA5CD5FDD83A6BFAF23B1;       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector_NetQuantize                                 RelativeLocation_8_01FAC98E47B434B725E373A4D0454F47;     // 0x0010(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3BAO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target_11_AB1915E04828ED8DA6642BBE07CE34E1;              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
