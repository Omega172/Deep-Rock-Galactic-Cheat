/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreateEverythingCollectedAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAnnouncement_Controller_C::CreateEverythingCollectedAnnouncement(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateEverythingCollectedAnnouncement");
		
		UAnnouncement_Controller_C_CreateEverythingCollectedAnnouncement_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreateVanityAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 VanityItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          VanityOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::CreateVanityAnnouncement(class UVanityItem* VanityItem, class UPlayerCharacterID* VanityOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateVanityAnnouncement");
		
		UAnnouncement_Controller_C_CreateVanityAnnouncement_Params params {};
		params.VanityItem = VanityItem;
		params.VanityOwner = VanityOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreatePickaxeAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPickaxePart*                                PickaxePart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::CreatePickaxeAnnouncement(class UPickaxePart* PickaxePart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreatePickaxeAnnouncement");
		
		UAnnouncement_Controller_C_CreatePickaxeAnnouncement_Params params {};
		params.PickaxePart = PickaxePart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreateSchematicAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::CreateSchematicAnnouncement(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateSchematicAnnouncement");
		
		UAnnouncement_Controller_C_CreateSchematicAnnouncement_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreateVPAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                VictoryPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          VPOwner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::CreateVPAnnouncement(class UVictoryPose* VictoryPose, class UPlayerCharacterID* VPOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateVPAnnouncement");
		
		UAnnouncement_Controller_C_CreateVPAnnouncement_Params params {};
		params.VictoryPose = VictoryPose;
		params.VPOwner = VPOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.QueueWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::QueueWidget(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.QueueWidget");
		
		UAnnouncement_Controller_C_QueueWidget_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.GetStartDelay
	 * 		Flags  -> ()
	 */
	float UAnnouncement_Controller_C::GetStartDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.GetStartDelay");
		
		UAnnouncement_Controller_C_GetStartDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreateSkinAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     SkinOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::CreateSkinAnnouncement(class UItemSkin* Skin, class UItemID* SkinOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateSkinAnnouncement");
		
		UAnnouncement_Controller_C_CreateSkinAnnouncement_Params params {};
		params.Skin = Skin;
		params.SkinOwner = SkinOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FractionalDigits                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                IconTint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::CreateValueAnnouncement(float Value, const class FText& Name, const struct FLinearColor& Color, int32_t FractionalDigits, class UTexture2D* Icon, const struct FLinearColor& IconTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement");
		
		UAnnouncement_Controller_C_CreateValueAnnouncement_Params params {};
		params.Value = Value;
		params.Name = Name;
		params.Color = Color;
		params.FractionalDigits = FractionalDigits;
		params.Icon = Icon;
		params.IconTint = IconTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                IconTint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::CreateTextAnnouncement(const class FText& Text, const struct FLinearColor& Color, class UTexture2D* Icon, const struct FLinearColor& IconTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement");
		
		UAnnouncement_Controller_C_CreateTextAnnouncement_Params params {};
		params.Text = Text;
		params.Color = Color;
		params.Icon = Icon;
		params.IconTint = IconTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.Construct
	 * 		Flags  -> ()
	 */
	void UAnnouncement_Controller_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.Construct");
		
		UAnnouncement_Controller_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnHealed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnHealed(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnHealed");
		
		UAnnouncement_Controller_C_OnHealed_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnResourceFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnResourceFull(class UCappedResource* Resource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceFull");
		
		UAnnouncement_Controller_C_OnResourceFull_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCappedResource*                             Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnResourceIncreased(class UCappedResource* Resource, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased");
		
		UAnnouncement_Controller_C_OnResourceIncreased_Params params {};
		params.Resource = Resource;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.Do Resource Full
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAnnouncement_Controller_C::DoResourceFull(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.Do Resource Full");
		
		UAnnouncement_Controller_C_DoResourceFull_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal
	 * 		Flags  -> ()
	 */
	void UAnnouncement_Controller_C::OnFullHealthCannotHeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal");
		
		UAnnouncement_Controller_C_OnFullHealthCannotHeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnResourceFullStarted
	 * 		Flags  -> ()
	 */
	void UAnnouncement_Controller_C::OnResourceFullStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceFullStarted");
		
		UAnnouncement_Controller_C_OnResourceFullStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnResourceFullFinished
	 * 		Flags  -> ()
	 */
	void UAnnouncement_Controller_C::OnResourceFullFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceFullFinished");
		
		UAnnouncement_Controller_C_OnResourceFullFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnCollectedSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnCollectedSkin(class UItemSkin* Skin, class UItemID* ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedSkin");
		
		UAnnouncement_Controller_C_OnCollectedSkin_Params params {};
		params.Skin = Skin;
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnCollectedVictoryPose_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                pose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnCollectedVictoryPose_Event_1(class UVictoryPose* pose, class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedVictoryPose_Event_1");
		
		UAnnouncement_Controller_C_OnCollectedVictoryPose_Event_1_Params params {};
		params.pose = pose;
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnCollectedSchematic_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  Schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnCollectedSchematic_Event(class USchematic* Schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedSchematic_Event");
		
		UAnnouncement_Controller_C_OnCollectedSchematic_Event_Params params {};
		params.Schematic = Schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnCollectedPickaxePart_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPickaxePart*                                PickaxePart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnCollectedPickaxePart_Event_1(class UPickaxePart* PickaxePart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedPickaxePart_Event_1");
		
		UAnnouncement_Controller_C_OnCollectedPickaxePart_Event_1_Params params {};
		params.PickaxePart = PickaxePart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnCollectedVanityItem_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::OnCollectedVanityItem_Event_1(class UVanityItem* Item, class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedVanityItem_Event_1");
		
		UAnnouncement_Controller_C_OnCollectedVanityItem_Event_1_Params params {};
		params.Item = Item;
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.OnCollectedEverything_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAnnouncement_Controller_C::OnCollectedEverything_Event(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedEverything_Event");
		
		UAnnouncement_Controller_C_OnCollectedEverything_Event_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnnouncement_Controller_C::ExecuteUbergraph_Announcement_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller");
		
		UAnnouncement_Controller_C_ExecuteUbergraph_Announcement_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnnouncement_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnnouncement_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_Controller.Announcement_Controller_C");
		return ptr;
	}

}


