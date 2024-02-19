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
	 * 		Name   -> Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FImageWriteOptions                          options                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");
		
		UImageWriteBlueprintLibrary_ExportToDisk_Params params {};
		params.Texture = Texture;
		params.Filename = Filename;
		params.options = options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageWriteBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageWriteBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImageWriteQueue.ImageWriteBlueprintLibrary");
		return ptr;
	}

}


