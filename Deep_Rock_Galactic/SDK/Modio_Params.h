#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * Function Modio.ModioCommonTypesLibrary.SetSessionIdentifier
	 */
	struct UModioCommonTypesLibrary_SetSessionIdentifier_Params
	{
	public:
		struct FModioInitializeOptions                             options;                                                 // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              SessionIdentifier;                                       // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioInitializeOptions                             ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.SetPortal
	 */
	struct UModioCommonTypesLibrary_SetPortal_Params
	{
	public:
		struct FModioInitializeOptions                             options;                                                 // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EModioPortal                                               PortalToUse;                                             // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P1I5[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FModioInitializeOptions                             ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.NotEqualTo
	 */
	struct UModioCommonTypesLibrary_NotEqualTo_Params
	{
	public:
		struct FModioModID                                         A;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioModID                                         B;                                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.MakeInitializeOptions
	 */
	struct UModioCommonTypesLibrary_MakeInitializeOptions_Params
	{
	public:
		int64_t                                                    GameId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ApiKey;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioEnvironment                                          GameEnvironment;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioPortal                                               PortalInUse;                                             // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M3M1[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FModioInitializeOptions                             ReturnValue;                                             // 0x0020(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.MakeGameId
	 */
	struct UModioCommonTypesLibrary_MakeGameId_Params
	{
	public:
		int64_t                                                    GameId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioGameID                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.MakeAuthParams
	 */
	struct UModioCommonTypesLibrary_MakeAuthParams_Params
	{
	public:
		class FString                                              AuthToken;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EmailAddress;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasAcceptedTOS;                                         // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y1K5[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FModioAuthenticationParams                          ReturnValue;                                             // 0x0028(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.MakeApiKey
	 */
	struct UModioCommonTypesLibrary_MakeApiKey_Params
	{
	public:
		class FString                                              ApiKey;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioApiKey                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.GetRawValueFromModID
	 */
	struct UModioCommonTypesLibrary_GetRawValueFromModID_Params
	{
	public:
		struct FModioModID                                         In;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.EqualTo
	 */
	struct UModioCommonTypesLibrary_EqualTo_Params
	{
	public:
		struct FModioModID                                         A;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioModID                                         B;                                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_UserIDToString
	 */
	struct UModioCommonTypesLibrary_Conv_UserIDToString_Params
	{
	public:
		struct FModioUserID                                        UserId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode
	 */
	struct UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Params
	{
	public:
		class FString                                              AuthCode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioEmailAuthCode                                 ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress
	 */
	struct UModioCommonTypesLibrary_Conv_StringToEmailAddress_Params
	{
	public:
		class FString                                              Email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioEmailAddress                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_ModIDToString
	 */
	struct UModioCommonTypesLibrary_Conv_ModIDToString_Params
	{
	public:
		struct FModioModID                                         ModId;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_GameIDToString
	 */
	struct UModioCommonTypesLibrary_Conv_GameIDToString_Params
	{
	public:
		struct FModioGameID                                        GameId;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString
	 */
	struct UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Params
	{
	public:
		struct FModioFileMetadataID                                FileMetadataID;                                          // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString
	 */
	struct UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Params
	{
	public:
		struct FModioEmailAuthCode                                 EmailAuthCode;                                           // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString
	 */
	struct UModioCommonTypesLibrary_Conv_EmailAddressToString_Params
	{
	public:
		struct FModioEmailAddress                                  EmailAddress;                                            // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString
	 */
	struct UModioCommonTypesLibrary_Conv_ApiKeyToString_Params
	{
	public:
		struct FModioApiKey                                        ApiKey;                                                  // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetVersionString
	 */
	struct UModioCreateModLibrary_SetVersionString_Params
	{
	public:
		struct FModioCreateModFileParams                           In;                                                      // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Version;                                                 // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetTags
	 */
	struct UModioCreateModLibrary_SetTags_Params
	{
	public:
		struct FModioCreateModParams                               In;                                                      // 0x0000(0x00C8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Tags;                                                    // 0x00C8(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetModfilePlatforms
	 */
	struct UModioCreateModLibrary_SetModfilePlatforms_Params
	{
	public:
		struct FModioCreateModFileParams                           In;                                                      // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<EModioModfilePlatform>                              Platforms;                                               // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetModFileMetadataBlob
	 */
	struct UModioCreateModLibrary_SetModFileMetadataBlob_Params
	{
	public:
		struct FModioCreateModFileParams                           In;                                                      // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              MetadataBlob;                                            // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetMetadataBlob
	 */
	struct UModioCreateModLibrary_SetMetadataBlob_Params
	{
	public:
		struct FModioCreateModParams                               In;                                                      // 0x0000(0x00C8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              MetadataBlob;                                            // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetMarkAsActiveRelease
	 */
	struct UModioCreateModLibrary_SetMarkAsActiveRelease_Params
	{
	public:
		struct FModioCreateModFileParams                           In;                                                      // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bMarkAsActiveRelease;                                    // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetInitialVisibility
	 */
	struct UModioCreateModLibrary_SetInitialVisibility_Params
	{
	public:
		struct FModioCreateModParams                               In;                                                      // 0x0000(0x00C8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       InitialVisibility;                                       // 0x00C8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetHomepageURL
	 */
	struct UModioCreateModLibrary_SetHomepageURL_Params
	{
	public:
		struct FModioCreateModParams                               In;                                                      // 0x0000(0x00C8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              HomepageURL;                                             // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetDescription
	 */
	struct UModioCreateModLibrary_SetDescription_Params
	{
	public:
		struct FModioCreateModParams                               In;                                                      // 0x0000(0x00C8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Description;                                             // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioCreateModLibrary.SetChangelogString
	 */
	struct UModioCreateModLibrary_SetChangelogString_Params
	{
	public:
		struct FModioCreateModFileParams                           In;                                                      // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Changelog;                                               // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetVisibility
	 */
	struct UModioEditModLibrary_SetVisibility_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       Visibility;                                              // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetSummary
	 */
	struct UModioEditModLibrary_SetSummary_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Summary;                                                 // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetNamePath
	 */
	struct UModioEditModLibrary_SetNamePath_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              NamePath;                                                // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetName
	 */
	struct UModioEditModLibrary_SetName_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetMetadataBlob
	 */
	struct UModioEditModLibrary_SetMetadataBlob_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              MetadataBlob;                                            // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetMaturityFlags
	 */
	struct UModioEditModLibrary_SetMaturityFlags_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EModioMaturityFlags                                        MaturityFlags;                                           // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetHomepageURL
	 */
	struct UModioEditModLibrary_SetHomepageURL_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              HomepageURL;                                             // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioEditModLibrary.SetDescription
	 */
	struct UModioEditModLibrary_SetDescription_Params
	{
	public:
		struct FModioEditModParams                                 In;                                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Description;                                             // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioErrorCodeLibrary.IsError
	 */
	struct UModioErrorCodeLibrary_IsError_Params
	{
	public:
		struct FModioErrorCode                                     Error;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioErrorCodeLibrary.GetValue
	 */
	struct UModioErrorCodeLibrary_GetValue_Params
	{
	public:
		struct FModioErrorCode                                     Error;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioErrorCodeLibrary.GetMessage
	 */
	struct UModioErrorCodeLibrary_GetMessage_Params
	{
	public:
		struct FModioErrorCode                                     Error;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioErrorConditionLibrary.ErrorCodeMatches
	 */
	struct UModioErrorConditionLibrary_ErrorCodeMatches_Params
	{
	public:
		struct FModioErrorCode                                     ErrorCode;                                               // 0x0000(0x0008)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioErrorCondition                                       Condition;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioExampleLibrary.ListUserSubscriptionAsync
	 */
	struct UModioExampleLibrary_ListUserSubscriptionAsync_Params
	{
	public:
		struct FModioFilterParams                                  FilterParams;                                            // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00A8(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioExampleLibrary.GetLogoThumbnailSize
	 */
	struct UModioExampleLibrary_GetLogoThumbnailSize_Params
	{
	public:
		EModioLogoSize                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioExampleLibrary.GetLogoFullSize
	 */
	struct UModioExampleLibrary_GetLogoFullSize_Params
	{
	public:
		EModioLogoSize                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioExampleLibrary.GetAvatarThumbnailSize
	 */
	struct UModioExampleLibrary_GetAvatarThumbnailSize_Params
	{
	public:
		EModioAvatarSize                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.WithTags
	 */
	struct UModioFilterParamsLibrary_WithTags_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      NewTags;                                                 // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.WithTag
	 */
	struct UModioFilterParamsLibrary_WithTag_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Tag;                                                     // 0x00A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.WithoutTags
	 */
	struct UModioFilterParamsLibrary_WithoutTags_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      NewTags;                                                 // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.WithoutTag
	 */
	struct UModioFilterParamsLibrary_WithoutTag_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Tag;                                                     // 0x00A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.SortBy
	 */
	struct UModioFilterParamsLibrary_SortBy_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EModioSortFieldType                                        ByField;                                                 // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioSortDirection                                        ByDirection;                                             // 0x00A9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QWVQ[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.PagedResults
	 */
	struct UModioFilterParamsLibrary_PagedResults_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int64_t                                                    PageNumber;                                              // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    PageSize;                                                // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.NameContainsStrings
	 */
	struct UModioFilterParamsLibrary_NameContainsStrings_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      SearchStrings;                                           // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.NameContains
	 */
	struct UModioFilterParamsLibrary_NameContains_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              SearchString;                                            // 0x00A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.MetadataLike
	 */
	struct UModioFilterParamsLibrary_MetadataLike_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              SearchString;                                            // 0x00A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.MatchingIDs
	 */
	struct UModioFilterParamsLibrary_MatchingIDs_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FModioModID>                                 IDs;                                                     // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.MarkedLiveBefore
	 */
	struct UModioFilterParamsLibrary_MarkedLiveBefore_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDateTime                                           LiveBefore;                                              // 0x00A8(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.MarkedLiveAfter
	 */
	struct UModioFilterParamsLibrary_MarkedLiveAfter_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDateTime                                           LiveAfter;                                               // 0x00A8(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.IndexedResults
	 */
	struct UModioFilterParamsLibrary_IndexedResults_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int64_t                                                    StartIndex;                                              // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ResultCount;                                             // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioFilterParamsLibrary.ExcludingIDs
	 */
	struct UModioFilterParamsLibrary_ExcludingIDs_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FModioModID>                                 IDs;                                                     // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioFilterParams                                  ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioImageLibrary.LoadAsync
	 */
	struct UModioImageLibrary_LoadAsync_Params
	{
	public:
		struct FModioImageWrapper                                  Image;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnImageLoaded;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioImageLibrary.GetTexture
	 */
	struct UModioImageLibrary_GetTexture_Params
	{
	public:
		struct FModioImageWrapper                                  Image;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTexture2DDynamic*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioImageLibrary.GetState
	 */
	struct UModioImageLibrary_GetState_Params
	{
	public:
		struct FModioImageWrapper                                  Image;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EModioImageState                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioImageLibrary.GetLogoSize
	 */
	struct UModioImageLibrary_GetLogoSize_Params
	{
	public:
		class UTexture*                                            Logo;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioLogoSize                                             LogoSize;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FFFT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioImageLibrary.GetGallerySize
	 */
	struct UModioImageLibrary_GetGallerySize_Params
	{
	public:
		class UTexture*                                            GalleryImage;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioGallerySize                                          GallerySize;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TN0U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioImageLibrary.GetAvatarSize
	 */
	struct UModioImageLibrary_GetAvatarSize_Params
	{
	public:
		class UTexture*                                            avatar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioAvatarSize                                           AvatarSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2CUS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModCollectionLibrary.GetPath
	 */
	struct UModioModCollectionLibrary_GetPath_Params
	{
	public:
		struct FModioModCollectionEntry                            Entry;                                                   // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x01F0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModCollectionLibrary.GetModState
	 */
	struct UModioModCollectionLibrary_GetModState_Params
	{
	public:
		struct FModioModCollectionEntry                            Entry;                                                   // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EModioModState                                             ReturnValue;                                             // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModCollectionLibrary.GetModProfile
	 */
	struct UModioModCollectionLibrary_GetModProfile_Params
	{
	public:
		struct FModioModCollectionEntry                            Entry;                                                   // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModInfo                                       ReturnValue;                                             // 0x01F0(0x01C0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModCollectionLibrary.GetID
	 */
	struct UModioModCollectionLibrary_GetID_Params
	{
	public:
		struct FModioModCollectionEntry                            Entry;                                                   // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModID                                         ReturnValue;                                             // 0x01F0(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModDependenciesLibrary.GetPagedResult
	 */
	struct UModioModDependenciesLibrary_GetPagedResult_Params
	{
	public:
		struct FModioModDependencyList                             ModTags;                                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioPagedResult                                   ReturnValue;                                             // 0x0028(0x0014)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModDependenciesLibrary.GetDependencies
	 */
	struct UModioModDependenciesLibrary_GetDependencies_Params
	{
	public:
		struct FModioModDependencyList                             ModTags;                                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FModioModDependency>                         ReturnValue;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModInfoListLibrary.GetPagedResult
	 */
	struct UModioModInfoListLibrary_GetPagedResult_Params
	{
	public:
		struct FModioModInfoList                                   ModInfoList;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioPagedResult                                   ReturnValue;                                             // 0x0028(0x0014)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModInfoListLibrary.GetMods
	 */
	struct UModioModInfoListLibrary_GetMods_Params
	{
	public:
		struct FModioModInfoList                                   ModInfoList;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FModioModInfo>                               ReturnValue;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModTagOptionsLibrary.GetTags
	 */
	struct UModioModTagOptionsLibrary_GetTags_Params
	{
	public:
		struct FModioModTagOptions                                 ModTags;                                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FModioModTagInfo>                            ReturnValue;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioModTagOptionsLibrary.GetPagedResult
	 */
	struct UModioModTagOptionsLibrary_GetPagedResult_Params
	{
	public:
		struct FModioModTagOptions                                 ModTags;                                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioPagedResult                                   ReturnValue;                                             // 0x0028(0x0014)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalUser_Params
	{
	public:
		struct FModioOptionalUser                                  OptionalUser;                                            // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalTerms_Params
	{
	public:
		struct FModioOptionalTerms                                 OptionalTerms;                                           // 0x0000(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalModTagOptions_Params
	{
	public:
		struct FModioOptionalModTagOptions                         OptionalModTagOptions;                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalModProgressInfo_Params
	{
	public:
		struct FModioOptionalModProgressInfo                       OptionalModProgressInfo;                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalModInfoList_Params
	{
	public:
		struct FModioOptionalModInfoList                           OptionalModInfoList;                                     // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalModInfo_Params
	{
	public:
		struct FModioOptionalModInfo                               OptionalModInfo;                                         // 0x0000(0x01C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalModID_Params
	{
	public:
		struct FModioOptionalModID                                 OptionalID;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalModDependencyList_Params
	{
	public:
		struct FModioOptionalModDependencyList                     OptionalDependencyList;                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage
	 */
	struct UModioOptionalLibrary_IsSet_ModioOptionalImage_Params
	{
	public:
		struct FModioOptionalImage                                 OptionalImage;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalUser_Params
	{
	public:
		struct FModioOptionalUser                                  OptionalUser;                                            // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioUser                                          User;                                                    // 0x0038(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalTerms_Params
	{
	public:
		struct FModioOptionalTerms                                 OptionalTerms;                                           // 0x0000(0x00D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioTerms                                         Terms;                                                   // 0x00D8(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalModTagOptions_Params
	{
	public:
		struct FModioOptionalModTagOptions                         OptionalModTagOptions;                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModTagOptions                                 ModTagOptions;                                           // 0x0030(0x0028)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalModProgressInfo_Params
	{
	public:
		struct FModioOptionalModProgressInfo                       OptionalModProgressInfo;                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModProgressInfo                               ModProgressInfo;                                         // 0x0030(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalModInfoList_Params
	{
	public:
		struct FModioOptionalModInfoList                           OptionalModInfoList;                                     // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModInfoList                                   ModInfoList;                                             // 0x0030(0x0028)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalModInfo_Params
	{
	public:
		struct FModioOptionalModInfo                               OptionalModInfo;                                         // 0x0000(0x01C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModInfo                                       ModInfo;                                                 // 0x01C8(0x01C0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0388(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalModID_Params
	{
	public:
		struct FModioOptionalModID                                 OptionalID;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModID                                         ID;                                                      // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalModDependencyList_Params
	{
	public:
		struct FModioOptionalModDependencyList                     OptionalDependencyList;                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioModDependencyList                             DependencyList;                                          // 0x0030(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage
	 */
	struct UModioOptionalLibrary_GetValue_ModioOptionalImage_Params
	{
	public:
		struct FModioOptionalImage                                 OptionalImage;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FModioImageWrapper                                  Image;                                                   // 0x0018(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioPopupContainer.PushPopup
	 */
	struct UModioPopupContainer_PushPopup_Params
	{
	public:
		class UClass*                                              PopupClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UModioPopupBase*                                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioPopupContainer.PopPopup
	 */
	struct UModioPopupContainer_PopPopup_Params
	{
	public:
		class UClass*                                              PopupClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UModioPopupBase*                                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioReportLibrary.MakeReportForUser
	 */
	struct UModioReportLibrary_MakeReportForUser_Params
	{
	public:
		struct FModioUserID                                        User;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioReportType                                           Type;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8BQP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReportDescription;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReporterName;                                            // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReporterContact;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioReportParams                                  ReturnValue;                                             // 0x0040(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioReportLibrary.MakeReportForMod
	 */
	struct UModioReportLibrary_MakeReportForMod_Params
	{
	public:
		struct FModioModID                                         Mod;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioReportType                                           Type;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UQ51[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReportDescription;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReporterName;                                            // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReporterContact;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioReportParams                                  ReturnValue;                                             // 0x0040(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioReportLibrary.MakeReportForGame
	 */
	struct UModioReportLibrary_MakeReportForGame_Params
	{
	public:
		struct FModioGameID                                        Game;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioReportType                                           Type;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WNXG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReportDescription;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReporterName;                                            // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReporterContact;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioReportParams                                  ReturnValue;                                             // 0x0040(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.Pct_Int64Int64
	 */
	struct UModioSDKLibrary_Pct_Int64Int64_Params
	{
	public:
		int64_t                                                    Dividend;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    Divisor;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.IsValidSecurityCodeFormat
	 */
	struct UModioSDKLibrary_IsValidSecurityCodeFormat_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.IsValidEmailAddressFormat
	 */
	struct UModioSDKLibrary_IsValidEmailAddressFormat_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId
	 */
	struct UModioSDKLibrary_GetProjectInitializeOptionsForSessionId_Params
	{
	public:
		class FString                                              sessionId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioInitializeOptions                             ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.GetProjectInitializeOptions
	 */
	struct UModioSDKLibrary_GetProjectInitializeOptions_Params
	{
	public:
		struct FModioInitializeOptions                             ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.GetProjectGameId
	 */
	struct UModioSDKLibrary_GetProjectGameId_Params
	{
	public:
		struct FModioGameID                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.GetProjectEnvironment
	 */
	struct UModioSDKLibrary_GetProjectEnvironment_Params
	{
	public:
		EModioEnvironment                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.GetProjectApiKey
	 */
	struct UModioSDKLibrary_GetProjectApiKey_Params
	{
	public:
		struct FModioApiKey                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.Filesize_ToString
	 */
	struct UModioSDKLibrary_Filesize_ToString_Params
	{
	public:
		int64_t                                                    Filesize;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxDecimals;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFileSizeUnit                                              Unit;                                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L4K5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.Conv_Int64ToText
	 */
	struct UModioSDKLibrary_Conv_Int64ToText_Params
	{
	public:
		int64_t                                                    Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlwaysSign;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseGrouping;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_19UL[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MinimumIntegralDigits;                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaximumIntegralDigits;                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1S5B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSDKLibrary.Conv_Int64ToString
	 */
	struct UModioSDKLibrary_Conv_Int64ToString_Params
	{
	public:
		int64_t                                                    inInt;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.SetLogLevel
	 */
	struct UModioSubsystem_SetLogLevel_Params
	{
	public:
		EModioLogLevel                                             UnrealLogLevel;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.RunPendingHandlers
	 */
	struct UModioSubsystem_RunPendingHandlers_Params
	{	};

	/**
	 * Function Modio.ModioSubsystem.QueryUserSubscriptions
	 */
	struct UModioSubsystem_QueryUserSubscriptions_Params
	{
	public:
		TMap<struct FModioModID, struct FModioModCollectionEntry>  ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.QueryUserInstallations
	 */
	struct UModioSubsystem_QueryUserInstallations_Params
	{
	public:
		bool                                                       bIncludeOutdatedMods;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q5ME[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<struct FModioModID, struct FModioModCollectionEntry>  ReturnValue;                                             // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.QuerySystemInstallations
	 */
	struct UModioSubsystem_QuerySystemInstallations_Params
	{
	public:
		TMap<struct FModioModID, struct FModioModCollectionEntry>  ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.PrioritizeTransferForMod
	 */
	struct UModioSubsystem_PrioritizeTransferForMod_Params
	{
	public:
		struct FModioModID                                         ModToPrioritize;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioErrorCode                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync
	 */
	struct UModioSubsystem_K2_VerifyUserAuthenticationAsync_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_UnsubscribeFromModAsync
	 */
	struct UModioSubsystem_K2_UnsubscribeFromModAsync_Params
	{
	public:
		struct FModioModID                                         ModToUnsubscribeFrom;                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnUnsubscribeComplete;                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_SubscribeToModAsync
	 */
	struct UModioSubsystem_K2_SubscribeToModAsync_Params
	{
	public:
		struct FModioModID                                         ModToSubscribeTo;                                        // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSubscribeComplete;                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_SubmitNewModFileForMod
	 */
	struct UModioSubsystem_K2_SubmitNewModFileForMod_Params
	{
	public:
		struct FModioModID                                         Mod;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioCreateModFileParams                           Params;                                                  // 0x0008(0x0078)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_SubmitNewModAsync
	 */
	struct UModioSubsystem_K2_SubmitNewModAsync_Params
	{
	public:
		struct FModioModCreationHandle                             Handle;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioCreateModParams                               Params;                                                  // 0x0008(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00D0(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_SubmitModRatingAsync
	 */
	struct UModioSubsystem_K2_SubmitModRatingAsync_Params
	{
	public:
		struct FModioModID                                         Mod;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioRating                                               Rating;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W56M[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_SubmitModChangesAsync
	 */
	struct UModioSubsystem_K2_SubmitModChangesAsync_Params
	{
	public:
		struct FModioModID                                         Mod;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioEditModParams                                 Params;                                                  // 0x0008(0x00A0)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00A8(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_ShutdownAsync
	 */
	struct UModioSubsystem_K2_ShutdownAsync_Params
	{
	public:
		class FScriptDelegate                                      OnShutdownComplete;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync
	 */
	struct UModioSubsystem_K2_RequestEmailAuthCodeAsync_Params
	{
	public:
		struct FModioEmailAddress                                  EmailAddress;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_ReportContentAsync
	 */
	struct UModioSubsystem_K2_ReportContentAsync_Params
	{
	public:
		struct FModioReportParams                                  Report;                                                  // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_QueryUserProfile
	 */
	struct UModioSubsystem_K2_QueryUserProfile_Params
	{
	public:
		struct FModioOptionalUser                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_QueryCurrentModUpdate
	 */
	struct UModioSubsystem_K2_QueryCurrentModUpdate_Params
	{
	public:
		struct FModioOptionalModProgressInfo                       ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_ListAllModsAsync
	 */
	struct UModioSubsystem_K2_ListAllModsAsync_Params
	{
	public:
		struct FModioFilterParams                                  Filter;                                                  // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00A8(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_InitializeAsync
	 */
	struct UModioSubsystem_K2_InitializeAsync_Params
	{
	public:
		struct FModioInitializeOptions                             InitializeOptions;                                       // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnInitComplete;                                          // 0x0038(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync
	 */
	struct UModioSubsystem_K2_GetUserMediaAvatarAsync_Params
	{
	public:
		EModioAvatarSize                                           AvatarSize;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QNLY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetTermsOfUseAsync
	 */
	struct UModioSubsystem_K2_GetTermsOfUseAsync_Params
	{
	public:
		EModioAuthenticationProvider                               Provider;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioLanguage                                             Locale;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_01D9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetModTagOptionsAsync
	 */
	struct UModioSubsystem_K2_GetModTagOptionsAsync_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetModMediaLogoAsync
	 */
	struct UModioSubsystem_K2_GetModMediaLogoAsync_Params
	{
	public:
		struct FModioModID                                         ModId;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioLogoSize                                             LogoSize;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YCIQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync
	 */
	struct UModioSubsystem_K2_GetModMediaGalleryImageAsync_Params
	{
	public:
		struct FModioModID                                         ModId;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioGallerySize                                          GallerySize;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IU6Z[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetModMediaAvatarAsync
	 */
	struct UModioSubsystem_K2_GetModMediaAvatarAsync_Params
	{
	public:
		struct FModioModID                                         ModId;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EModioAvatarSize                                           AvatarSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3IY7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetModInfoAsync
	 */
	struct UModioSubsystem_K2_GetModInfoAsync_Params
	{
	public:
		struct FModioModID                                         ModId;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetModDependenciesAsync
	 */
	struct UModioSubsystem_K2_GetModDependenciesAsync_Params
	{
	public:
		struct FModioModID                                         ModId;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_GetModCreationHandle
	 */
	struct UModioSubsystem_K2_GetModCreationHandle_Params
	{
	public:
		struct FModioModCreationHandle                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_ForceUninstallModAsync
	 */
	struct UModioSubsystem_K2_ForceUninstallModAsync_Params
	{
	public:
		struct FModioModID                                         ModToRemove;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync
	 */
	struct UModioSubsystem_K2_FetchExternalUpdatesAsync_Params
	{
	public:
		class FScriptDelegate                                      OnFetchDone;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_EnableModManagement
	 */
	struct UModioSubsystem_K2_EnableModManagement_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioErrorCode                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_ClearUserDataAsync
	 */
	struct UModioSubsystem_K2_ClearUserDataAsync_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync
	 */
	struct UModioSubsystem_K2_AuthenticateUserExternalAsync_Params
	{
	public:
		struct FModioAuthenticationParams                          User;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EModioAuthenticationProvider                               Provider;                                                // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZBGZ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x002C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync
	 */
	struct UModioSubsystem_K2_AuthenticateUserEmailAsync_Params
	{
	public:
		struct FModioEmailAuthCode                                 AuthenticationCode;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.K2_ArchiveModAsync
	 */
	struct UModioSubsystem_K2_ArchiveModAsync_Params
	{
	public:
		struct FModioModID                                         Mod;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.IsModManagementBusy
	 */
	struct UModioSubsystem_IsModManagementBusy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.GetLastValidationError
	 */
	struct UModioSubsystem_GetLastValidationError_Params
	{
	public:
		TArray<struct FModioValidationError>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioSubsystem.DisableModManagement
	 */
	struct UModioSubsystem_DisableModManagement_Params
	{	};

	/**
	 * Function Modio.ModioUnsigned64Library.Subtract
	 */
	struct UModioUnsigned64Library_Subtract_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.Percentage_Unsigned64
	 */
	struct UModioUnsigned64Library_Percentage_Unsigned64_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.NotEqualTo
	 */
	struct UModioUnsigned64Library_NotEqualTo_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.MakeFromComponents
	 */
	struct UModioUnsigned64Library_MakeFromComponents_Params
	{
	public:
		int32_t                                                    High;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Low;                                                     // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.LessThan
	 */
	struct UModioUnsigned64Library_LessThan_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.GreaterThan
	 */
	struct UModioUnsigned64Library_GreaterThan_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.EqualTo
	 */
	struct UModioUnsigned64Library_EqualTo_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.DivideToFloat
	 */
	struct UModioUnsigned64Library_DivideToFloat_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.DivideFloat
	 */
	struct UModioUnsigned64Library_DivideFloat_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      RHS;                                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.Divide
	 */
	struct UModioUnsigned64Library_Divide_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat
	 */
	struct UModioUnsigned64Library_Conv_FModioUnsigned64ToFloat_Params
	{
	public:
		struct FModioUnsigned64                                    In;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.BreakToComponents
	 */
	struct UModioUnsigned64Library_BreakToComponents_Params
	{
	public:
		struct FModioUnsigned64                                    In;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    High;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Low;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Modio.ModioUnsigned64Library.Add
	 */
	struct UModioUnsigned64Library_Add_Params
	{
	public:
		struct FModioUnsigned64                                    LHS;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    RHS;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FModioUnsigned64                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
