/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetVanityItemsForWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVanityItem*>                         Items                                                      (Parm, OutParm)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::GetVanityItemsForWidget(TArray<class UVanityItem*>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetVanityItemsForWidget");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_GetVanityItemsForWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGetNumberOfItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveGetNumberOfItems(int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGetNumberOfItems");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveGetNumberOfItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveItemDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDLCBase*                                    FromDLC                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveItemDLC(int32_t Index, class UDLCBase** FromDLC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveItemDLC");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveItemDLC_Params params {};
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 InVanityItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UITM_Wardrobe_ItemSlot_Vanity_C::GetItemName(class UVanityItem* InVanityItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.GetItemName");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_GetItemName_Params params {};
		params.InVanityItem = InVanityItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.UpdateItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_GeneratedIcon_Item_C*                   InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UVanityItem*                                 InVanityItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InShowToolTip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::UpdateItemWidget(class UITM_GeneratedIcon_Item_C* InWidget, class UVanityItem* InVanityItem, bool InShowToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.UpdateItemWidget");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_UpdateItemWidget_Params params {};
		params.InWidget = InWidget;
		params.InVanityItem = InVanityItem;
		params.InShowToolTip = InShowToolTip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveEquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveEquipItem(int32_t InIndex, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveEquipItem");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveEquipItem_Params params {};
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreviewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceivePreviewItem(int32_t Index, bool Show, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreviewItem");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceivePreviewItem_Params params {};
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveItemNotificationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             Array                                                      (Parm, OutParm)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveItemNotificationData(int32_t Index, TArray<class UObject*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveItemNotificationData");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveItemNotificationData_Params params {};
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AvailableItems                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveInitialize(int32_t* AvailableItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveInitialize");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableItems != nullptr)
			*AvailableItems = params.AvailableItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveGetSelectedIndex(int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGetSelectedIndex");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveGetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.CreateItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 InVanityItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InBackgroundVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InShowToolTip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UITM_GeneratedIcon_Item_C*                   OutItemWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::CreateItemWidget(class UVanityItem* InVanityItem, bool InBackgroundVisible, bool InShowToolTip, class UITM_GeneratedIcon_Item_C** OutItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.CreateItemWidget");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_CreateItemWidget_Params params {};
		params.InVanityItem = InVanityItem;
		params.InBackgroundVisible = InBackgroundVisible;
		params.InShowToolTip = InShowToolTip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemWidget != nullptr)
			*OutItemWidget = params.OutItemWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.SetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Equip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::SetSelectedItem(class UVanityItem* Item, bool Equip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.SetSelectedItem");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_SetSelectedItem_Params params {};
		params.Item = Item;
		params.Equip = Equip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGenerateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             OutItemWidgets                                             (Parm, OutParm, ContainsInstancedReference)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveGenerateItems");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveGenerateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemWidgets != nullptr)
			*OutItemWidgets = params.OutItemWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveReleaseResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceiveReleaseResource(class UWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceiveReleaseResource");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceiveReleaseResource_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreConstruct
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ReceivePreConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ReceivePreConstruct");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ReceivePreConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.On Initialized
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.On Initialized");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_Vanity_C::ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity");
		
		UITM_Wardrobe_ItemSlot_Vanity_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ItemSlot_Vanity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ItemSlot_Vanity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_Vanity.ITM_Wardrobe_ItemSlot_Vanity_C");
		return ptr;
	}

}


