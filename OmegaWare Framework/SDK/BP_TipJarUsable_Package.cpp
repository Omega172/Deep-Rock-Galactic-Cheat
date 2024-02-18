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
	 * 		Name   -> Function BP_TipJarUsable.BP_TipJarUsable_C.GetUseText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UBP_TipJarUsable_C::GetUseText(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TipJarUsable.BP_TipJarUsable_C.GetUseText");
		
		UBP_TipJarUsable_C_GetUseText_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TipJarUsable.BP_TipJarUsable_C.BPCanUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             useCollider                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_TipJarUsable_C::BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TipJarUsable.BP_TipJarUsable_C.BPCanUse");
		
		UBP_TipJarUsable_C_BPCanUse_Params params {};
		params.User = User;
		params.useCollider = useCollider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TipJarUsable.BP_TipJarUsable_C.SetTipAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Credits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TipJarUsable_C::SetTipAmount(int32_t Credits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TipJarUsable.BP_TipJarUsable_C.SetTipAmount");
		
		UBP_TipJarUsable_C_SetTipAmount_Params params {};
		params.Credits = Credits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TipJarUsable.BP_TipJarUsable_C.ExecuteUbergraph_BP_TipJarUsable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TipJarUsable_C::ExecuteUbergraph_BP_TipJarUsable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TipJarUsable.BP_TipJarUsable_C.ExecuteUbergraph_BP_TipJarUsable");
		
		UBP_TipJarUsable_C_ExecuteUbergraph_BP_TipJarUsable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TipJarUsable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TipJarUsable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TipJarUsable.BP_TipJarUsable_C");
		return ptr;
	}

}


