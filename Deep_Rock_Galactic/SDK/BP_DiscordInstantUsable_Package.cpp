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
	 * 		Name   -> Function BP_DiscordInstantUsable.BP_DiscordInstantUsable_C.BPCanUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             useCollider                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_DiscordInstantUsable_C::BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DiscordInstantUsable.BP_DiscordInstantUsable_C.BPCanUse");
		
		UBP_DiscordInstantUsable_C_BPCanUse_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_DiscordInstantUsable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DiscordInstantUsable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DiscordInstantUsable.BP_DiscordInstantUsable_C");
		return ptr;
	}

}


