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
	 * 		Name   -> Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioSubsystem*                             Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioCreateModFileMemoryParams             Params                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UModioSubmissionExtensionLibrary::K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, const struct FModioModID& Mod, const struct FModioCreateModFileMemoryParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory");
		
		UModioSubmissionExtensionLibrary_K2_SubmitNewModFileForModFromMemory_Params params {};
		params.Target = Target;
		params.Mod = Mod;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioSubsystem*                             Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ModData                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UModioSubmissionExtensionLibrary::K2_LoadModFileToMemory(class UModioSubsystem* Target, const struct FModioModID& ModId, TArray<unsigned char>* ModData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory");
		
		UModioSubmissionExtensionLibrary_K2_LoadModFileToMemory_Params params {};
		params.Target = Target;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModData != nullptr)
			*ModData = params.ModData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioSubmissionExtensionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioSubmissionExtensionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModioEx.ModioSubmissionExtensionLibrary");
		return ptr;
	}

}


