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
	 * 		Name   -> Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.OnInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRandomStream                               InRandom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FJettyBootSetting                           InLevelSettings                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            InCanvasHeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStartX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsFirstGate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutStartX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutEndX                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Gate_C::OnInitialize(struct FRandomStream* InRandom, const struct FJettyBootSetting& InLevelSettings, int32_t InCanvasHeight, int32_t InStartX, bool InIsFirstGate, int32_t* OutStartX, int32_t* OutEndX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.OnInitialize");
		
		UUI_JettyBoots_Gate_C_OnInitialize_Params params {};
		params.InLevelSettings = InLevelSettings;
		params.InCanvasHeight = InCanvasHeight;
		params.InStartX = InStartX;
		params.InIsFirstGate = InIsFirstGate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRandom != nullptr)
			*InRandom = params.InRandom;
		if (OutStartX != nullptr)
			*OutStartX = params.OutStartX;
		if (OutEndX != nullptr)
			*OutEndX = params.OutEndX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.Intersects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSpriteRect                                 InRect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               OutIntersects                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Gate_C::Intersects(const struct FSpriteRect& InRect, bool* OutIntersects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.Intersects");
		
		UUI_JettyBoots_Gate_C_Intersects_Params params {};
		params.InRect = InRect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIntersects != nullptr)
			*OutIntersects = params.OutIntersects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Gate_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.PreConstruct");
		
		UUI_JettyBoots_Gate_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.ExecuteUbergraph_UI_JettyBoots_Gate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Gate_C::ExecuteUbergraph_UI_JettyBoots_Gate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Gate.UI_JettyBoots_Gate_C.ExecuteUbergraph_UI_JettyBoots_Gate");
		
		UUI_JettyBoots_Gate_C_ExecuteUbergraph_UI_JettyBoots_Gate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_Gate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_Gate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_Gate.UI_JettyBoots_Gate_C");
		return ptr;
	}

}


