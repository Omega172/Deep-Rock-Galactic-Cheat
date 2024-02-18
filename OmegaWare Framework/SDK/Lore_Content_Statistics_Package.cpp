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
	 * 		Name   -> Function Lore_Content_Statistics.Lore_Content_Statistics_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnemyMinersManualData*                      enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDamageTypeDescription>              WeaknessesIcons                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FDamageTypeDescription>              ResistancesIcons                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULore_Content_Statistics_C::SetData(class UEnemyMinersManualData* enemy, TArray<struct FDamageTypeDescription> WeaknessesIcons, TArray<struct FDamageTypeDescription> ResistancesIcons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lore_Content_Statistics.Lore_Content_Statistics_C.SetData");
		
		ULore_Content_Statistics_C_SetData_Params params {};
		params.enemy = enemy;
		params.WeaknessesIcons = WeaknessesIcons;
		params.ResistancesIcons = ResistancesIcons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULore_Content_Statistics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULore_Content_Statistics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Lore_Content_Statistics.Lore_Content_Statistics_C");
		return ptr;
	}

}


