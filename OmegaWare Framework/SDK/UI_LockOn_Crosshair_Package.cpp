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
	 * 		Name   -> Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.SetCircleVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockOn_Crosshair_C::SetCircleVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.SetCircleVisible");
		
		UUI_LockOn_Crosshair_C_SetCircleVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.SetAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Crosshair_C::SetAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.SetAngle");
		
		UUI_LockOn_Crosshair_C_SetAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LockOn_Crosshair_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.PreConstruct");
		
		UUI_LockOn_Crosshair_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.Ping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Crosshair_C::Ping(float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.Ping");
		
		UUI_LockOn_Crosshair_C_Ping_Params params {};
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.ExecuteUbergraph_UI_LockOn_Crosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LockOn_Crosshair_C::ExecuteUbergraph_UI_LockOn_Crosshair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.ExecuteUbergraph_UI_LockOn_Crosshair");
		
		UUI_LockOn_Crosshair_C_ExecuteUbergraph_UI_LockOn_Crosshair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LockOn_Crosshair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LockOn_Crosshair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LockOn_Crosshair.UI_LockOn_Crosshair_C");
		return ptr;
	}

}


