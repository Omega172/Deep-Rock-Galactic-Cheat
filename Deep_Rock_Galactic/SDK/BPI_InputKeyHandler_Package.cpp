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
	 * 		Name   -> Function BPI_InputKeyHandler.BPI_InputKeyHandler_C.HandleKeyInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InPressed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FEventReply                                 OutReply                                                   (Parm, OutParm)
	 */
	void UBPI_InputKeyHandler_C::HandleKeyInput(const struct FKeyEvent& InKeyEvent, bool InPressed, struct FEventReply* OutReply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InputKeyHandler.BPI_InputKeyHandler_C.HandleKeyInput");
		
		UBPI_InputKeyHandler_C_HandleKeyInput_Params params {};
		params.InKeyEvent = InKeyEvent;
		params.InPressed = InPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReply != nullptr)
			*OutReply = params.OutReply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_InputKeyHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_InputKeyHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InputKeyHandler.BPI_InputKeyHandler_C");
		return ptr;
	}

}


