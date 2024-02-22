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
	 * 		Name   -> Function DE_ArkenStout.DE_ArkenStout_C.OnLoaded_6720846C4CD973CF4158F2B171D4875F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_ArkenStout_C::OnLoaded_6720846C4CD973CF4158F2B171D4875F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.OnLoaded_6720846C4CD973CF4158F2B171D4875F");
		
		UDE_ArkenStout_C_OnLoaded_6720846C4CD973CF4158F2B171D4875F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_ArkenStout.DE_ArkenStout_C.OnLoaded_6720846C4CD973CF4158F2B1FFC27104
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_ArkenStout_C::OnLoaded_6720846C4CD973CF4158F2B1FFC27104(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.OnLoaded_6720846C4CD973CF4158F2B1FFC27104");
		
		UDE_ArkenStout_C_OnLoaded_6720846C4CD973CF4158F2B1FFC27104_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_ArkenStout.DE_ArkenStout_C.OnStartEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_ArkenStout_C::OnStartEffect(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.OnStartEffect");
		
		UDE_ArkenStout_C_OnStartEffect_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_ArkenStout.DE_ArkenStout_C.OnStopEffect
	 * 		Flags  -> ()
	 */
	void UDE_ArkenStout_C::OnStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.OnStopEffect");
		
		UDE_ArkenStout_C_OnStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DE_ArkenStout.DE_ArkenStout_C.ExecuteUbergraph_DE_ArkenStout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDE_ArkenStout_C::ExecuteUbergraph_DE_ArkenStout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DE_ArkenStout.DE_ArkenStout_C.ExecuteUbergraph_DE_ArkenStout");
		
		UDE_ArkenStout_C_ExecuteUbergraph_DE_ArkenStout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDE_ArkenStout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDE_ArkenStout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DE_ArkenStout.DE_ArkenStout_C");
		return ptr;
	}

}


