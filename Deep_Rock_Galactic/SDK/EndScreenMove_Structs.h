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
	 * UserDefinedStruct EndScreenMove.EndScreenMove
	 * Size -> 0x0048
	 */
	struct FEndScreenMove
	{
	public:
		class UAnimSequence*                                       Walk_2_2D5808D7436DCFFCD4A0E9BBCDEFD20E;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Pose_Optional_4_0C5B3E154236E596C7B98C8674399C23;        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Loop_6_27B6CF03496CE4F887DB9EA6A66910EF;                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAnimSequence*>                               Breaks_9_1147962749C4EB29B65F459960CD7D35;               // 0x0018(0x0010) Edit, BlueprintVisible
		class UClass*                                              Attachment_Class_22_EEC03C3F4B9D7EDB458BBBA919D7D9FC;    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attachment_Walk_14_52090DCE439608881FD4209FC0978507;     // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attachment_Pose_17_3B4F2F6F4DC9CE21E3410BAB9AF65BE7;     // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Attachment_Loop_18_F18D69F048465180117268B98657613C;     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
