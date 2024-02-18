#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DiscordSDK.DiscordSDKInterface.RejectInvite
	 */
	struct UDiscordSDKInterface_RejectInvite_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordSDKInterface.IgnoreInvite
	 */
	struct UDiscordSDKInterface_IgnoreInvite_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordSDKInterface.Get
	 */
	struct UDiscordSDKInterface_Get_Params
	{
	public:
		class UDiscordSDKInterface*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordSDKInterface.AcceptInvite
	 */
	struct UDiscordSDKInterface_AcceptInvite_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
