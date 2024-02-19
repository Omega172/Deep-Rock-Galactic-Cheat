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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateToggleButton
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::UpdateToggleButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateToggleButton");
		
		UITM_Wardrobe_ItemSlot_Base_C_UpdateToggleButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveToggleType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveToggleType(bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveToggleType");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveToggleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGetNumberOfItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveGetNumberOfItems(int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGetNumberOfItems");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveGetNumberOfItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveItemDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDLCBase*                                    FromDLC                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveItemDLC(int32_t Index, class UDLCBase** FromDLC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveItemDLC");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveItemDLC_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FromDLC != nullptr)
			*FromDLC = params.FromDLC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.EquipRandomItem
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::EquipRandomItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.EquipRandomItem");
		
		UITM_Wardrobe_ItemSlot_Base_C_EquipRandomItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateShuffleButton
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::UpdateShuffleButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateShuffleButton");
		
		UITM_Wardrobe_ItemSlot_Base_C_UpdateShuffleButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetTextToLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TextToLeft                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::GetTextToLeft(bool* TextToLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetTextToLeft");
		
		UITM_Wardrobe_ItemSlot_Base_C_GetTextToLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextToLeft != nullptr)
			*TextToLeft = params.TextToLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSlotHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetHovered(bool InSlotHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetHovered");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetHovered_Params params {};
		params.InSlotHovered = InSlotHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreviewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceivePreviewItem(int32_t Index, bool Show, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreviewItem");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceivePreviewItem_Params params {};
		params.Index = Index;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSuccess != nullptr)
			*OutSuccess = params.OutSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetRefreshSlotsOnChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UITM_Wardrobe_ItemSlot_Base_C*>       InOtherSlots                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetRefreshSlotsOnChange(TArray<class UITM_Wardrobe_ItemSlot_Base_C*>* InOtherSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetRefreshSlotsOnChange");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetRefreshSlotsOnChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOtherSlots != nullptr)
			*InOtherSlots = params.InOtherSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveItemNotificationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             Array                                                      (Parm, OutParm)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveItemNotificationData(int32_t Index, TArray<class UObject*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveItemNotificationData");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveItemNotificationData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AvailableItems                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveInitialize(int32_t* AvailableItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveInitialize");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableItems != nullptr)
			*AvailableItems = params.AvailableItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SelectorItemUnhovered(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemUnhovered");
		
		UITM_Wardrobe_ItemSlot_Base_C_SelectorItemUnhovered_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SelectorItemHovered(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemHovered");
		
		UITM_Wardrobe_ItemSlot_Base_C_SelectorItemHovered_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveGetSelectedIndex(int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGetSelectedIndex");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveGetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetItemName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetItemName");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetItemName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Refresh");
		
		UITM_Wardrobe_ItemSlot_Base_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutCloseSelector                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SelectorItemClicked(int32_t Index, bool* OutCloseSelector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SelectorItemClicked");
		
		UITM_Wardrobe_ItemSlot_Base_C_SelectorItemClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCloseSelector != nullptr)
			*OutCloseSelector = params.OutCloseSelector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreConstruct
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceivePreConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceivePreConstruct");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceivePreConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetItemWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             ItemWidgets                                                (Parm, OutParm, ContainsInstancedReference)
	 * 		TArray<int32_t>                                    NewItemIndices                                             (Parm, OutParm)
	 * 		int32_t                                            OutSelectedIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::GetItemWidgets(TArray<class UWidget*>* ItemWidgets, TArray<int32_t>* NewItemIndices, int32_t* OutSelectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.GetItemWidgets");
		
		UITM_Wardrobe_ItemSlot_Base_C_GetItemWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemWidgets != nullptr)
			*ItemWidgets = params.ItemWidgets;
		if (NewItemIndices != nullptr)
			*NewItemIndices = params.NewItemIndices;
		if (OutSelectedIndex != nullptr)
			*OutSelectedIndex = params.OutSelectedIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveReleaseResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveReleaseResource(class UWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveReleaseResource");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveReleaseResource_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTextToLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetTextToLeft(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTextToLeft");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetTextToLeft_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          InCharacterID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::Initialize(class UPlayerCharacterID* InCharacterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.Initialize");
		
		UITM_Wardrobe_ItemSlot_Base_C_Initialize_Params params {};
		params.InCharacterID = InCharacterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetTypeIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetTypeIcon");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetTypeIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetSlotName(const class FText& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotName");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetSlotName_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetSlotSize(int32_t InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSlotSize");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetSlotSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetSelected(bool InSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetSelected");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetSelected_Params params {};
		params.InSelected = InSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReleaseResources
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReleaseResources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReleaseResources");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReleaseResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveEquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveEquipItem(int32_t InIndex, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveEquipItem");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveEquipItem_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSuccess != nullptr)
			*OutSuccess = params.OutSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGenerateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             OutItemWidgets                                             (Parm, OutParm, ContainsInstancedReference)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ReceiveGenerateItems");
		
		UITM_Wardrobe_ItemSlot_Base_C_ReceiveGenerateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemWidgets != nullptr)
			*OutItemWidgets = params.OutItemWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidgetClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetContentAsWidgetClass(class UUserWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidgetClass");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetContentAsWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetContentAsTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsTexture");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetContentAsTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::SetContentAsWidget(class UWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.SetContentAsWidget");
		
		UITM_Wardrobe_ItemSlot_Base_C_SetContentAsWidget_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateSelectionBorder
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::UpdateSelectionBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.UpdateSelectionBorder");
		
		UITM_Wardrobe_ItemSlot_Base_C_UpdateSelectionBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.RefreshNextFrame
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::RefreshNextFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.RefreshNextFrame");
		
		UITM_Wardrobe_ItemSlot_Base_C_RefreshNextFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PlayIntroAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLeftSide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::PlayIntroAnim(bool IsLeftSide, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PlayIntroAnim");
		
		UITM_Wardrobe_ItemSlot_Base_C_PlayIntroAnim_Params params {};
		params.IsLeftSide = IsLeftSide;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseEnter");
		
		UITM_Wardrobe_ItemSlot_Base_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnMouseLeave");
		
		UITM_Wardrobe_ItemSlot_Base_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.PreConstruct");
		
		UITM_Wardrobe_ItemSlot_Base_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_BndEvt__ITM_Wardrobe_ItemSlot_Base_SleevelessButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base");
		
		UITM_Wardrobe_ItemSlot_Base_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnEquippedChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Base_C::OnEquippedChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C.OnEquippedChanged__DelegateSignature");
		
		UITM_Wardrobe_ItemSlot_Base_C_OnEquippedChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ItemSlot_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ItemSlot_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Base.ITM_Wardrobe_ItemSlot_Base_C");
		return ptr;
	}

}


