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
	 * Function Announcement_Controller.Announcement_Controller_C.CreateEverythingCollectedAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreateEverythingCollectedAnnouncement_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.CreateVanityAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreateVanityAnnouncement_Params
	{
	public:
		class UVanityItem*                                         VanityItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  VanityOwner;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.CreatePickaxeAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreatePickaxeAnnouncement_Params
	{
	public:
		class UPickaxePart*                                        PickaxePart;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.CreateSchematicAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreateSchematicAnnouncement_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.CreateVPAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreateVPAnnouncement_Params
	{
	public:
		class UVictoryPose*                                        VictoryPose;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  VPOwner;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.QueueWidget
	 */
	struct UAnnouncement_Controller_C_QueueWidget_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.GetStartDelay
	 */
	struct UAnnouncement_Controller_C_GetStartDelay_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.CreateSkinAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreateSkinAnnouncement_Params
	{
	public:
		class UItemSkin*                                           Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemID*                                             SkinOwner;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreateValueAnnouncement_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3H6T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FractionalDigits;                                        // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9NUO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        IconTint;                                                // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement
	 */
	struct UAnnouncement_Controller_C_CreateTextAnnouncement_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        IconTint;                                                // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.Construct
	 */
	struct UAnnouncement_Controller_C_Construct_Params
	{	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnHealed
	 */
	struct UAnnouncement_Controller_C_OnHealed_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnResourceFull
	 */
	struct UAnnouncement_Controller_C_OnResourceFull_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased
	 */
	struct UAnnouncement_Controller_C_OnResourceIncreased_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.Do Resource Full
	 */
	struct UAnnouncement_Controller_C_DoResourceFull_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal
	 */
	struct UAnnouncement_Controller_C_OnFullHealthCannotHeal_Params
	{	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnResourceFullStarted
	 */
	struct UAnnouncement_Controller_C_OnResourceFullStarted_Params
	{	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnResourceFullFinished
	 */
	struct UAnnouncement_Controller_C_OnResourceFullFinished_Params
	{	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnCollectedSkin
	 */
	struct UAnnouncement_Controller_C_OnCollectedSkin_Params
	{
	public:
		class UItemSkin*                                           Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemID*                                             ItemID;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnCollectedVictoryPose_Event_1
	 */
	struct UAnnouncement_Controller_C_OnCollectedVictoryPose_Event_1_Params
	{
	public:
		class UVictoryPose*                                        pose;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  characterID;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnCollectedSchematic_Event
	 */
	struct UAnnouncement_Controller_C_OnCollectedSchematic_Event_Params
	{
	public:
		class USchematic*                                          Schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnCollectedPickaxePart_Event_1
	 */
	struct UAnnouncement_Controller_C_OnCollectedPickaxePart_Event_1_Params
	{
	public:
		class UPickaxePart*                                        PickaxePart;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnCollectedVanityItem_Event_1
	 */
	struct UAnnouncement_Controller_C_OnCollectedVanityItem_Event_1_Params
	{
	public:
		class UVanityItem*                                         Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  characterID;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.OnCollectedEverything_Event
	 */
	struct UAnnouncement_Controller_C_OnCollectedEverything_Event_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller
	 */
	struct UAnnouncement_Controller_C_ExecuteUbergraph_Announcement_Controller_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
