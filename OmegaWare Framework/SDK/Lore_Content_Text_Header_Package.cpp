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
	 * 		Name   -> Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FObjectiveMissionIcon                       MissionIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ULore_Content_Text_Header_C::SetData(const class FText& HeaderText, class UTexture2D* Icon, const struct FObjectiveMissionIcon& MissionIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.SetData");
		
		ULore_Content_Text_Header_C_SetData_Params params {};
		params.HeaderText = HeaderText;
		params.Icon = Icon;
		params.MissionIcon = MissionIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULore_Content_Text_Header_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.PreConstruct");
		
		ULore_Content_Text_Header_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.ExecuteUbergraph_Lore_Content_Text_Header
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Content_Text_Header_C::ExecuteUbergraph_Lore_Content_Text_Header(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Text_Header.Lore_Content_Text_Header_C.ExecuteUbergraph_Lore_Content_Text_Header");
		
		ULore_Content_Text_Header_C_ExecuteUbergraph_Lore_Content_Text_Header_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_Content_Text_Header_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_Content_Text_Header_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_Content_Text_Header.Lore_Content_Text_Header_C");
		return ptr;
	}

}


