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
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSeparator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Forge_SchematicList_C::AddSeparator(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSeparator");
		
		UUI_Forge_SchematicList_C_AddSeparator_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.PopulateList
	 * 		Flags  -> ()
	 */
	void UUI_Forge_SchematicList_C::PopulateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.PopulateList");
		
		UUI_Forge_SchematicList_C_PopulateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.TryAddSeparator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InNextSchematic                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_SchematicList_C::TryAddSeparator(class USchematic* InNextSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.TryAddSeparator");
		
		UUI_Forge_SchematicList_C_TryAddSeparator_Params params {};
		params.InNextSchematic = InNextSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.GetCategoryOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  Schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutOrder                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 */
	void UUI_Forge_SchematicList_C::GetCategoryOrder(class USchematic* Schematic, int32_t* OutOrder, class FText* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.GetCategoryOrder");
		
		UUI_Forge_SchematicList_C_GetCategoryOrder_Params params {};
		params.Schematic = Schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOrder != nullptr)
			*OutOrder = params.OutOrder;
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddNext
	 * 		Flags  -> ()
	 */
	void UUI_Forge_SchematicList_C::AddNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddNext");
		
		UUI_Forge_SchematicList_C_AddNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_Forge_SchematicList_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Refresh");
		
		UUI_Forge_SchematicList_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Forge_Schematic_C*                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_SchematicList_C::ItemClicked(class UUI_Forge_Schematic_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ItemClicked");
		
		UUI_Forge_SchematicList_C_ItemClicked_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSchematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_SchematicList_C::AddSchematic(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSchematic");
		
		UUI_Forge_SchematicList_C_AddSchematic_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Clear
	 * 		Flags  -> ()
	 */
	void UUI_Forge_SchematicList_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Clear");
		
		UUI_Forge_SchematicList_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Forge_SchematicList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Construct");
		
		UUI_Forge_SchematicList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ExecuteUbergraph_UI_Forge_SchematicList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_SchematicList_C::ExecuteUbergraph_UI_Forge_SchematicList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ExecuteUbergraph_UI_Forge_SchematicList");
		
		UUI_Forge_SchematicList_C_ExecuteUbergraph_UI_Forge_SchematicList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.OnItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Forge_Schematic_C*                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_SchematicList_C::OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.OnItemClicked__DelegateSignature");
		
		UUI_Forge_SchematicList_C_OnItemClicked__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_SchematicList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_SchematicList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_SchematicList.UI_Forge_SchematicList_C");
		return ptr;
	}

}


