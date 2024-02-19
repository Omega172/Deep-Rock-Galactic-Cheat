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
	 * 		Name   -> Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots
	 * 		Flags  -> ()
	 */
	void UCharSelect_HeroSelect_Dots_C::UpdateDots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots");
		
		UCharSelect_HeroSelect_Dots_C_UpdateDots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharSelect_HeroSelect_Dots_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct");
		
		UCharSelect_HeroSelect_Dots_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharSelect_HeroSelect_Dots_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick");
		
		UCharSelect_HeroSelect_Dots_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharSelect_HeroSelect_Dots_C::SetCharacterClass(class UPlayerCharacterID* CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class");
		
		UCharSelect_HeroSelect_Dots_C_SetCharacterClass_Params params {};
		params.CharacterClass = CharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct
	 * 		Flags  -> ()
	 */
	void UCharSelect_HeroSelect_Dots_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct");
		
		UCharSelect_HeroSelect_Dots_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharSelect_HeroSelect_Dots_C::ExecuteUbergraph_CharSelect_HeroSelect_Dots(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots");
		
		UCharSelect_HeroSelect_Dots_C_ExecuteUbergraph_CharSelect_HeroSelect_Dots_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharSelect_HeroSelect_Dots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharSelect_HeroSelect_Dots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C");
		return ptr;
	}

}


