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
	 * 		Name   -> Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.RemovePlagueOverlay
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_BiomeBase_C::RemovePlagueOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.RemovePlagueOverlay");
		
		UITM_MisSel_BiomeBase_C_RemovePlagueOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.AddPlagueOverlay
	 * 		Flags  -> ()
	 */
	void UITM_MisSel_BiomeBase_C::AddPlagueOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.AddPlagueOverlay");
		
		UITM_MisSel_BiomeBase_C_AddPlagueOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.GetBasePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                Panel                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_BiomeBase_C::GetBasePanel(class UCanvasPanel** Panel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C.GetBasePanel");
		
		UITM_MisSel_BiomeBase_C_GetBasePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Panel != nullptr)
			*Panel = params.Panel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_BiomeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_BiomeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C");
		return ptr;
	}

}


