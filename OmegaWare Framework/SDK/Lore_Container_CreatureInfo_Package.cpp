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
	 * 		Name   -> Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.TwinsCustomAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnemyMinersManualData*                      enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_CreatureInfo_C::TwinsCustomAttack(class UEnemyMinersManualData* enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.TwinsCustomAttack");
		
		ULore_Container_CreatureInfo_C_TwinsCustomAttack_Params params {};
		params.enemy = enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.GetTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEnemyType                                         InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayText                                                (Parm, OutParm)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_CreatureInfo_C::GetTypeText(EEnemyType InType, class FText* DisplayText, class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.GetTypeText");
		
		ULore_Container_CreatureInfo_C_GetTypeText_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnemyMinersManualData*                      Creature                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMinersManual*                               MinersManual                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_CreatureInfo_C::SetData(class UEnemyMinersManualData* Creature, class UMinersManual* MinersManual)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.SetData");
		
		ULore_Container_CreatureInfo_C_SetData_Params params {};
		params.Creature = Creature;
		params.MinersManual = MinersManual;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.FillInAttacks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWrapBox*                                    Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FEnemyAttackDescription>             Attacks                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULore_Container_CreatureInfo_C::FillInAttacks(class UWrapBox* Container, TArray<struct FEnemyAttackDescription> Attacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.FillInAttacks");
		
		ULore_Container_CreatureInfo_C_FillInAttacks_Params params {};
		params.Container = Container;
		params.Attacks = Attacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.ExecuteUbergraph_Lore_Container_CreatureInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULore_Container_CreatureInfo_C::ExecuteUbergraph_Lore_Container_CreatureInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.ExecuteUbergraph_Lore_Container_CreatureInfo");
		
		ULore_Container_CreatureInfo_C_ExecuteUbergraph_Lore_Container_CreatureInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_Container_CreatureInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_Container_CreatureInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C");
		return ptr;
	}

}


