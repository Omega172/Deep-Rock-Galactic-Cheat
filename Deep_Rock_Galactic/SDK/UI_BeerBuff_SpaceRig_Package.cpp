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
	 * 		Name   -> Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.OnLoaded_E76038A2482A1272456904B10D0684E1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BeerBuff_Spacerig_C::OnLoaded_E76038A2482A1272456904B10D0684E1(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.OnLoaded_E76038A2482A1272456904B10D0684E1");
		
		UUI_BeerBuff_Spacerig_C_OnLoaded_E76038A2482A1272456904B10D0684E1_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BeerBuff_Spacerig_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.Construct");
		
		UUI_BeerBuff_Spacerig_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BeerBuff_Spacerig_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.PreConstruct");
		
		UUI_BeerBuff_Spacerig_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.On Buff Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTemporaryBuff*                              buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BeerBuff_Spacerig_C::OnBuffChanged(class UTemporaryBuff* buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.On Buff Changed");
		
		UUI_BeerBuff_Spacerig_C_OnBuffChanged_Params params {};
		params.buff = buff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.ExecuteUbergraph_UI_BeerBuff_Spacerig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BeerBuff_Spacerig_C::ExecuteUbergraph_UI_BeerBuff_Spacerig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C.ExecuteUbergraph_UI_BeerBuff_Spacerig");
		
		UUI_BeerBuff_Spacerig_C_ExecuteUbergraph_UI_BeerBuff_Spacerig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BeerBuff_Spacerig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BeerBuff_Spacerig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BeerBuff_SpaceRig.UI_BeerBuff_Spacerig_C");
		return ptr;
	}

}


