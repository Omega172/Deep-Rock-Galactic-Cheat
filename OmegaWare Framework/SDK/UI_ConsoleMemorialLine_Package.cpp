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
	 * 		Name   -> Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UConsoleScreenMemorialWall_C*                NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConsoleMemorialLine_C::AddBoard(class UConsoleScreenMemorialWall_C* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard");
		
		UUI_ConsoleMemorialLine_C_AddBoard_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConsoleMemorialLine_C::SetSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed");
		
		UUI_ConsoleMemorialLine_C_SetSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_ConsoleMemorialLine_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText");
		
		UUI_ConsoleMemorialLine_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ConsoleMemorialLine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct");
		
		UUI_ConsoleMemorialLine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished
	 * 		Flags  -> ()
	 */
	void UUI_ConsoleMemorialLine_C::OnMoveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished");
		
		UUI_ConsoleMemorialLine_C_OnMoveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConsoleMemorialLine_C::ExecuteUbergraph_UI_ConsoleMemorialLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine");
		
		UUI_ConsoleMemorialLine_C_ExecuteUbergraph_UI_ConsoleMemorialLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ConsoleMemorialLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ConsoleMemorialLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C");
		return ptr;
	}

}


