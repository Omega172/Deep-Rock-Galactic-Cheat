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
	 * 		Name   -> Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.SetLives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLives                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Lives_C::SetLives(int32_t InLives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.SetLives");
		
		UUI_JettyBoots_Lives_C_SetLives_Params params {};
		params.InLives = InLives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Lives_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.PreConstruct");
		
		UUI_JettyBoots_Lives_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.ExecuteUbergraph_UI_JettyBoots_Lives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Lives_C::ExecuteUbergraph_UI_JettyBoots_Lives(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Lives.UI_JettyBoots_Lives_C.ExecuteUbergraph_UI_JettyBoots_Lives");
		
		UUI_JettyBoots_Lives_C_ExecuteUbergraph_UI_JettyBoots_Lives_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_Lives_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_Lives_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_Lives.UI_JettyBoots_Lives_C");
		return ptr;
	}

}


