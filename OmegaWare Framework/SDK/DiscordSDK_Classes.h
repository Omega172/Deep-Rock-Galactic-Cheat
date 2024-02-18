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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DiscordSDK.DiscordSDKInterface
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDiscordSDKInterface : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnJoinRequest;                                           // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXSA[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		void RejectInvite(const class FString& UserId);
		void IgnoreInvite(const class FString& UserId);
		class UDiscordSDKInterface* Get();
		void AcceptInvite(const class FString& UserId);
		static UClass* StaticClass();
	};

	/**
	 * Class DiscordSDK.DiscordSDKInterface_Win64
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UDiscordSDKInterface_Win64 : public UDiscordSDKInterface
	{
	public:
		unsigned char                                              UnknownData_RHLX[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
