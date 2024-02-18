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
	 * UserDefinedStruct EndScreenMoveSet.EndScreenMoveSet
	 * Size -> 0x0100
	 */
	struct FEndScreenMoveSet
	{
	public:
		float                                                      Weight_20_9172AF0F49C74900EC45C29EEE7FB775;              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E9VQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Walks_42_3B0B99FD43910DD750F305953173B9CB[0x10];         // 0x0008(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Poses_Optional_43_3339A57A4D10CBD0C5C74690F351D108[0x10]; // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Loop_44_0E4E6C8A4331EA36DF87AA9DE7E30AB1[0x28];          // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Breaks_45_342F70184394DAB7D1A06B927C9CEDA1[0x10];        // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Attachment_Class_25_9EA6E9964122F7482D241BB69A8EE5B7[0x28]; // 0x0060(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Attachment_Walk_46_8D4D47EA48F66FA99BB048BCD07D34FB[0x28]; // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Attachment_Pose_47_9862A0C744322DD618B426902448DC92[0x28]; // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Attachment_Loop_48_CB65E924422DC1F25BFB5194B0E606E5[0x28]; // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
