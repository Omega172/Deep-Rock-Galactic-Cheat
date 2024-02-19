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
	 * 		Name   -> Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_LevelIcon_C::GetLevel(int32_t* Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel");
		
		UUI_Forge_LevelIcon_C_GetLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level != nullptr)
			*Level = params.Level;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  Schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_LevelIcon_C::SetLevelFromSchematic(class USchematic* Schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic");
		
		UUI_Forge_LevelIcon_C_SetLevelFromSchematic_Params params {};
		params.Schematic = Schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_LevelIcon_C::SetLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel");
		
		UUI_Forge_LevelIcon_C_SetLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_LevelIcon_C::SetIconColor(ENUM_MenuColors InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor");
		
		UUI_Forge_LevelIcon_C_SetIconColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_LevelIcon_C::SetSize(float InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize");
		
		UUI_Forge_LevelIcon_C_SetSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_LevelIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct");
		
		UUI_Forge_LevelIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_LevelIcon_C::ExecuteUbergraph_UI_Forge_LevelIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon");
		
		UUI_Forge_LevelIcon_C_ExecuteUbergraph_UI_Forge_LevelIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_LevelIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_LevelIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_LevelIcon.UI_Forge_LevelIcon_C");
		return ptr;
	}

}


