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
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsMenuAction2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsMenuAction2(const struct FKeyEvent& Input, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsMenuAction2");
		
		ULIB_Input_C_IsMenuAction2_Params params {};
		params.Input = Input;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsMenuAction1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsMenuAction1(const struct FKeyEvent& Input, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsMenuAction1");
		
		ULIB_Input_C_IsMenuAction1_Params params {};
		params.Input = Input;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsSelectNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsSelectNext(const struct FKeyEvent& KeyEvent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsSelectNext");
		
		ULIB_Input_C_IsSelectNext_Params params {};
		params.KeyEvent = KeyEvent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsSelectPrevious
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsSelectPrevious(const struct FKeyEvent& KeyEvent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsSelectPrevious");
		
		ULIB_Input_C_IsSelectPrevious_Params params {};
		params.KeyEvent = KeyEvent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsBackMenuMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsBackMenuMouse(const struct FPointerEvent& PointerEvent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsBackMenuMouse");
		
		ULIB_Input_C_IsBackMenuMouse_Params params {};
		params.PointerEvent = PointerEvent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsUseButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsUseButton(const struct FKeyEvent& Input, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsUseButton");
		
		ULIB_Input_C_IsUseButton_Params params {};
		params.Input = Input;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsOkMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsOkMenu(const struct FKeyEvent& Input, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsOkMenu");
		
		ULIB_Input_C_IsOkMenu_Params params {};
		params.Input = Input;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LIB_Input.LIB_Input_C.IsCloseOrBackMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULIB_Input_C::IsCloseOrBackMenu(struct FKeyEvent* Input, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LIB_Input.LIB_Input_C.IsCloseOrBackMenu");
		
		ULIB_Input_C_IsCloseOrBackMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Input != nullptr)
			*Input = params.Input;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULIB_Input_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULIB_Input_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Input.LIB_Input_C");
		return ptr;
	}

}


