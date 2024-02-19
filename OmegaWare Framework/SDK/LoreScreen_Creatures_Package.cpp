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
	 * 		Name   -> Function LoreScreen_Creatures.LoreScreen_Creatures_C.Construct
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Creatures_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.Construct");
		
		ULoreScreen_Creatures_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshContent
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Creatures_C::RefreshContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshContent");
		
		ULoreScreen_Creatures_C_RefreshContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshCreature
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Creatures_C::RefreshCreature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshCreature");
		
		ULoreScreen_Creatures_C_RefreshCreature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Creatures.LoreScreen_Creatures_C.FadeOutFinished
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Creatures_C::FadeOutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.FadeOutFinished");
		
		ULoreScreen_Creatures_C_FadeOutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Creatures.LoreScreen_Creatures_C.ShowCreature
	 * 		Flags  -> ()
	 */
	void ULoreScreen_Creatures_C::ShowCreature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.ShowCreature");
		
		ULoreScreen_Creatures_C_ShowCreature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Creatures.LoreScreen_Creatures_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_Creatures_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.Tick");
		
		ULoreScreen_Creatures_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoreScreen_Creatures.LoreScreen_Creatures_C.ExecuteUbergraph_LoreScreen_Creatures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoreScreen_Creatures_C::ExecuteUbergraph_LoreScreen_Creatures(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoreScreen_Creatures.LoreScreen_Creatures_C.ExecuteUbergraph_LoreScreen_Creatures");
		
		ULoreScreen_Creatures_C_ExecuteUbergraph_LoreScreen_Creatures_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoreScreen_Creatures_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoreScreen_Creatures_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoreScreen_Creatures.LoreScreen_Creatures_C");
		return ptr;
	}

}


