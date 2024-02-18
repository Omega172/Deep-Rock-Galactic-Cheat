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
	 * 		Name   -> Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UITM_DragRotateCharacterShowroom_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonUp");
		
		UITM_DragRotateCharacterShowroom_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UITM_DragRotateCharacterShowroom_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonDown");
		
		UITM_DragRotateCharacterShowroom_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UITM_DragRotateCharacterShowroom_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseMove");
		
		UITM_DragRotateCharacterShowroom_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_DragRotateCharacterShowroom_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.Construct");
		
		UITM_DragRotateCharacterShowroom_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnShowCharacterSelectorRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DragRotateCharacterShowroom_C::OnShowCharacterSelectorRotate(float Pitch, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnShowCharacterSelectorRotate");
		
		UITM_DragRotateCharacterShowroom_C_OnShowCharacterSelectorRotate_Params params {};
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.ExecuteUbergraph_ITM_DragRotateCharacterShowroom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DragRotateCharacterShowroom_C::ExecuteUbergraph_ITM_DragRotateCharacterShowroom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.ExecuteUbergraph_ITM_DragRotateCharacterShowroom");
		
		UITM_DragRotateCharacterShowroom_C_ExecuteUbergraph_ITM_DragRotateCharacterShowroom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DragRotateCharacterShowroom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DragRotateCharacterShowroom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C");
		return ptr;
	}

}


