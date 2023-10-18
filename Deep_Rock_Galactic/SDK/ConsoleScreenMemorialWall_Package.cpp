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
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreenMemorialWall_C::SetLinesSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed");
		
		UConsoleScreenMemorialWall_C_SetLinesSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ConsoleMemorialLine_C*                   NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreenMemorialWall_C::RemoveLine(class UUI_ConsoleMemorialLine_C* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine");
		
		UConsoleScreenMemorialWall_C_RemoveLine_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFast                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsoleScreenMemorialWall_C::SetAnimationSpeed(bool IsFast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed");
		
		UConsoleScreenMemorialWall_C_SetAnimationSpeed_Params params {};
		params.IsFast = IsFast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine
	 * 		Flags  -> ()
	 */
	void UConsoleScreenMemorialWall_C::SpawnNewLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine");
		
		UConsoleScreenMemorialWall_C_SpawnNewLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Row                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UConsoleScreenMemorialWall_C::GetNameFromRow(int32_t Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow");
		
		UConsoleScreenMemorialWall_C_GetNameFromRow_Params params {};
		params.Row = Row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreenMemorialWall_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick");
		
		UConsoleScreenMemorialWall_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreenMemorialWall_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct");
		
		UConsoleScreenMemorialWall_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreenMemorialWall_C::ExecuteUbergraph_ConsoleScreenMemorialWall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall");
		
		UConsoleScreenMemorialWall_C_ExecuteUbergraph_ConsoleScreenMemorialWall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreenMemorialWall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreenMemorialWall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C");
		return ptr;
	}

}


