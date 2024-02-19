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
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor
	 * 		Flags  -> ()
	 */
	void ABP_DrinksBox_C::OnRep_DrinkableActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor");
		
		ABP_DrinksBox_C_OnRep_DrinkableActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DrinksBox_C::IsAvailable(bool* IsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable");
		
		ABP_DrinksBox_C_IsAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAvailable != nullptr)
			*IsAvailable = params.IsAvailable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State
	 * 		Flags  -> ()
	 */
	void ABP_DrinksBox_C::OnRep_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State");
		
		ABP_DrinksBox_C_OnRep_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.OnLoaded_C20044584A6E4C14650B318543524FEE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_DrinksBox_C::OnLoaded_C20044584A6E4C14650B318543524FEE(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnLoaded_C20044584A6E4C14650B318543524FEE");
		
		ABP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drinkable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinksBox_C::SpawnDrink(class UDrinkableDataAsset* Drinkable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink");
		
		ABP_DrinksBox_C_SpawnDrink_Params params {};
		params.Drinkable = Drinkable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinksBox_C::OnDrinkableDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed");
		
		ABP_DrinksBox_C_OnDrinkableDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor
	 * 		Flags  -> ()
	 */
	void ABP_DrinksBox_C::FillDrinkableActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor");
		
		ABP_DrinksBox_C_FillDrinkableActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinksBox_C::ExecuteUbergraph_BP_DrinksBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox");
		
		ABP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinksBox_C::OnStateChanged__DelegateSignature(unsigned char State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature");
		
		ABP_DrinksBox_C_OnStateChanged__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DrinksBox_C*                             DrinkBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinksBox_C::OnDrinkReady__DelegateSignature(class ABP_DrinksBox_C* DrinkBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature");
		
		ABP_DrinksBox_C_OnDrinkReady__DelegateSignature_Params params {};
		params.DrinkBox = DrinkBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DrinksBox_C*                             DrinkBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinksBox_C::OnAvailableForNewDrink__DelegateSignature(class ABP_DrinksBox_C* DrinkBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature");
		
		ABP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature_Params params {};
		params.DrinkBox = DrinkBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DrinksBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DrinksBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DrinksBox.BP_DrinksBox_C");
		return ptr;
	}

}


