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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetNumberOfItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceiveGetNumberOfItems(int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetNumberOfItems");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetNumberOfItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveEquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceiveEquipItem(int32_t InIndex, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveEquipItem");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveEquipItem_Params params {};
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.PreviewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::PreviewItem(class UVictoryPose* Item, bool Show, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.PreviewItem");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_PreviewItem_Params params {};
		params.Item = Item;
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreviewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceivePreviewItem(int32_t Index, bool Show, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreviewItem");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreviewItem_Params params {};
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveItemNotificationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             Array                                                      (Parm, OutParm)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceiveItemNotificationData(int32_t Index, TArray<class UObject*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveItemNotificationData");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveItemNotificationData_Params params {};
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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AvailableItems                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceiveInitialize(int32_t* AvailableItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveInitialize");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableItems != nullptr)
			*AvailableItems = params.AvailableItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceiveGetSelectedIndex(int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateOrCreateItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVictoryPose*                                InVictoryMove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     InReuseWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InShowToolTip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWidget*                                     OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::UpdateOrCreateItemWidget(class UVictoryPose* InVictoryMove, class UWidget* InReuseWidget, bool InShowToolTip, class UWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateOrCreateItemWidget");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_UpdateOrCreateItemWidget_Params params {};
		params.InVictoryMove = InVictoryMove;
		params.InReuseWidget = InReuseWidget;
		params.InShowToolTip = InShowToolTip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGenerateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             OutItemWidgets                                             (Parm, OutParm, ContainsInstancedReference)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceiveGenerateItems");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceiveGenerateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemWidgets != nullptr)
			*OutItemWidgets = params.OutItemWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateEquipped
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::UpdateEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.UpdateEquipped");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_UpdateEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreConstruct
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ReceivePreConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ReceivePreConstruct");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ReceivePreConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSlotHovered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::SetHovered(bool InSlotHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.SetHovered");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_SetHovered_Params params {};
		params.InSlotHovered = InSlotHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ItemSlot_VictoryMoves_C::ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves");
		
		UITM_Wardrobe_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ItemSlot_VictoryMoves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ItemSlot_VictoryMoves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_VictoryMoves.ITM_Wardrobe_ItemSlot_VictoryMoves_C");
		return ptr;
	}

}


