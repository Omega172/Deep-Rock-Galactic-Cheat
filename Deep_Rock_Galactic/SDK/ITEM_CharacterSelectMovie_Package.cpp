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
	 * 		Name   -> Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse
	 * 		Flags  -> ()
	 */
	void UITEM_CharacterSelectMovie_C::Collapse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse");
		
		UITEM_CharacterSelectMovie_C_Collapse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_CharacterSelectMovie_C::SetVideo(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo");
		
		UITEM_CharacterSelectMovie_C_SetVideo_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct
	 * 		Flags  -> ()
	 */
	void UITEM_CharacterSelectMovie_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct");
		
		UITEM_CharacterSelectMovie_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer
	 * 		Flags  -> ()
	 */
	void UITEM_CharacterSelectMovie_C::InitPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer");
		
		UITEM_CharacterSelectMovie_C_InitPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie
	 * 		Flags  -> ()
	 */
	void UITEM_CharacterSelectMovie_C::BuildCharacterSelectionMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.BuildCharacterSelectionMovie");
		
		UITEM_CharacterSelectMovie_C_BuildCharacterSelectionMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITEM_CharacterSelectMovie_C::ExecuteUbergraph_ITEM_CharacterSelectMovie(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie");
		
		UITEM_CharacterSelectMovie_C_ExecuteUbergraph_ITEM_CharacterSelectMovie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITEM_CharacterSelectMovie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITEM_CharacterSelectMovie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C");
		return ptr;
	}

}


