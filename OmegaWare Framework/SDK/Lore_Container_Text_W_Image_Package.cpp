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
	 * 		Name   -> Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULore_Container_Text_W_Image_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.PreConstruct");
		
		ULore_Container_Text_W_Image_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMargin                                     InPadding                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESlateSizeRule                                     SizeRule                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_Text_W_Image_C::AddItem(class UWidget* Content, EHorizontalAlignment InHorizontalAlignment, EVerticalAlignment InVerticalAlignment, const struct FMargin& InPadding, ESlateSizeRule SizeRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.AddItem");
		
		ULore_Container_Text_W_Image_C_AddItem_Params params {};
		params.Content = Content;
		params.InHorizontalAlignment = InHorizontalAlignment;
		params.InVerticalAlignment = InVerticalAlignment;
		params.InPadding = InPadding;
		params.SizeRule = SizeRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMinersManualData*                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_Text_W_Image_C::SetData(class UMinersManualData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.SetData");
		
		ULore_Container_Text_W_Image_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh
	 * 		Flags  -> ()
	 */
	void ULore_Container_Text_W_Image_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.Refresh");
		
		ULore_Container_Text_W_Image_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_Text_W_Image_C::ExecuteUbergraph_Lore_Container_Text_W_Image(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C.ExecuteUbergraph_Lore_Container_Text_W_Image");
		
		ULore_Container_Text_W_Image_C_ExecuteUbergraph_Lore_Container_Text_W_Image_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_Container_Text_W_Image_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_Container_Text_W_Image_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_Container_Text_W_Image.Lore_Container_Text_W_Image_C");
		return ptr;
	}

}


