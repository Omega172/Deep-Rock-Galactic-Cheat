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
	 * 		Name   -> Function DiscordSDK.DiscordSDKInterface.RejectInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordSDKInterface::RejectInvite(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordSDKInterface.RejectInvite");
		
		UDiscordSDKInterface_RejectInvite_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordSDKInterface.IgnoreInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordSDKInterface::IgnoreInvite(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordSDKInterface.IgnoreInvite");
		
		UDiscordSDKInterface_IgnoreInvite_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordSDKInterface.Get
	 * 		Flags  -> ()
	 */
	class UDiscordSDKInterface* UDiscordSDKInterface::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordSDKInterface.Get");
		
		UDiscordSDKInterface_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordSDKInterface.AcceptInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordSDKInterface::AcceptInvite(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordSDKInterface.AcceptInvite");
		
		UDiscordSDKInterface_AcceptInvite_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscordSDKInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscordSDKInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DiscordSDK.DiscordSDKInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscordSDKInterface_Win64.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscordSDKInterface_Win64::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DiscordSDK.DiscordSDKInterface_Win64");
		return ptr;
	}

}


