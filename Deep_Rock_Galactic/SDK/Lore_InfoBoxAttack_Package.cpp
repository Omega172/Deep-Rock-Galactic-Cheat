/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FDamageTypeDescription                      Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        GrayText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULore_InfoBoxAttack_C::SetData(const class FText& Text, const struct FDamageTypeDescription& Icon, const class FText& GrayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetData");
		
		ULore_InfoBoxAttack_C_SetData_Params params {};
		params.Text = Text;
		params.Icon = Icon;
		params.GrayText = GrayText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULore_InfoBoxAttack_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.PreConstruct");
		
		ULore_InfoBoxAttack_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_InfoBoxAttack_C::SetColor(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetColor");
		
		ULore_InfoBoxAttack_C_SetColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.ExecuteUbergraph_Lore_InfoBoxAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_InfoBoxAttack_C::ExecuteUbergraph_Lore_InfoBoxAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.ExecuteUbergraph_Lore_InfoBoxAttack");
		
		ULore_InfoBoxAttack_C_ExecuteUbergraph_Lore_InfoBoxAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_InfoBoxAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_InfoBoxAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_InfoBoxAttack.Lore_InfoBoxAttack_C");
		return ptr;
	}

}


