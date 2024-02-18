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
	 * 		Name   -> Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid
	 * 		Flags  -> ()
	 */
	void UITM_LoadoutIconSelector_C::FillGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid");
		
		UITM_LoadoutIconSelector_C_FillGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.SetData
	 * 		Flags  -> ()
	 */
	void UITM_LoadoutIconSelector_C::SetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.SetData");
		
		UITM_LoadoutIconSelector_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutIconSelector_C::OnIconClicked(class UTexture2D* Texture, int32_t ImageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked");
		
		UITM_LoadoutIconSelector_C_OnIconClicked_Params params {};
		params.Texture = Texture;
		params.ImageIndex = ImageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutIconSelector_C::ExecuteUbergraph_ITM_LoadoutIconSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector");
		
		UITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadoutIconSelector_C::OnIconSelected__DelegateSignature(class UTexture2D* Texture, int32_t ImageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature");
		
		UITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature_Params params {};
		params.Texture = Texture;
		params.ImageIndex = ImageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_LoadoutIconSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_LoadoutIconSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C");
		return ptr;
	}

}


