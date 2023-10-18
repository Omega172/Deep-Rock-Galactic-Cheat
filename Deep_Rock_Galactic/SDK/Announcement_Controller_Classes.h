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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Announcement_Controller.Announcement_Controller_C
	 * Size -> 0x003C (FullSize[0x029C] - InheritedSize[0x0260])
	 */
	class UAnnouncement_Controller_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ResourceFull;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          ResourceFullLabel;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RootPanel;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObject*                                             GoldFrenzyComponent;                                     // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerCharacter*                                    Character;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerHealthComponent*                              HealthComponent;                                         // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NextAnnouncementTime;                                    // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateEverythingCollectedAnnouncement(const class FText& Message);
		void CreateVanityAnnouncement(class UVanityItem* VanityItem, class UPlayerCharacterID* VanityOwner);
		void CreatePickaxeAnnouncement(class UPickaxePart* PickaxePart);
		void CreateSchematicAnnouncement(class USchematic* InSchematic);
		void CreateVPAnnouncement(class UVictoryPose* VictoryPose, class UPlayerCharacterID* VPOwner);
		void QueueWidget(class UUserWidget* InWidget);
		float GetStartDelay();
		void CreateSkinAnnouncement(class UItemSkin* Skin, class UItemID* SkinOwner);
		void CreateValueAnnouncement(float Value, const class FText& Name, const struct FLinearColor& Color, int32_t FractionalDigits, class UTexture2D* Icon, const struct FLinearColor& IconTint);
		void CreateTextAnnouncement(const class FText& Text, const struct FLinearColor& Color, class UTexture2D* Icon, const struct FLinearColor& IconTint);
		void Construct();
		void OnHealed(float Amount);
		void OnResourceFull(class UCappedResource* Resource);
		void OnResourceIncreased(class UCappedResource* Resource, float Amount);
		void DoResourceFull(const class FText& Name);
		void OnFullHealthCannotHeal();
		void OnResourceFullStarted();
		void OnResourceFullFinished();
		void OnCollectedSkin(class UItemSkin* Skin, class UItemID* ItemID);
		void OnCollectedVictoryPose_Event_1(class UVictoryPose* pose, class UPlayerCharacterID* characterID);
		void OnCollectedSchematic_Event(class USchematic* Schematic);
		void OnCollectedPickaxePart_Event_1(class UPickaxePart* PickaxePart);
		void OnCollectedVanityItem_Event_1(class UVanityItem* Item, class UPlayerCharacterID* characterID);
		void OnCollectedEverything_Event(const class FText& InMessage);
		void ExecuteUbergraph_Announcement_Controller(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
