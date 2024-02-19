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
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemData*                                   ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::FromActorClass(class UItemData* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromActorClass");
		
		UUI_Forge_Schematic_OwnerIcon_C_FromActorClass_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemID*                                     ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::FromItemID(class UItemID* ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromItemID");
		
		UUI_Forge_Schematic_OwnerIcon_C_FromItemID_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::SetIconAndVisibility(class UTexture2D* Texture, const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetIconAndVisibility");
		
		UUI_Forge_Schematic_OwnerIcon_C_SetIconAndVisibility_Params params {};
		params.Texture = Texture;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::FromSchematic(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.FromSchematic");
		
		UUI_Forge_Schematic_OwnerIcon_C_FromSchematic_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWidth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHeight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::SetMaxSize(int32_t InWidth, int32_t InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.SetMaxSize");
		
		UUI_Forge_Schematic_OwnerIcon_C_SetMaxSize_Params params {};
		params.InWidth = InWidth;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.PreConstruct");
		
		UUI_Forge_Schematic_OwnerIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.Construct");
		
		UUI_Forge_Schematic_OwnerIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Schematic_OwnerIcon_C::ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C.ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon");
		
		UUI_Forge_Schematic_OwnerIcon_C_ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_Schematic_OwnerIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_Schematic_OwnerIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_Schematic_OwnerIcon.UI_Forge_Schematic_OwnerIcon_C");
		return ptr;
	}

}


