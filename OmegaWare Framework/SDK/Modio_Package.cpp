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
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.SetSessionIdentifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioInitializeOptions                     options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioCommonTypesLibrary::SetSessionIdentifier(const struct FModioInitializeOptions& options, const class FString& SessionIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.SetSessionIdentifier");
		
		UModioCommonTypesLibrary_SetSessionIdentifier_Params params {};
		params.options = options;
		params.SessionIdentifier = SessionIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.SetPortal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioInitializeOptions                     options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioPortal                                       PortalToUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioCommonTypesLibrary::SetPortal(const struct FModioInitializeOptions& options, EModioPortal PortalToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.SetPortal");
		
		UModioCommonTypesLibrary_SetPortal_Params params {};
		params.options = options;
		params.PortalToUse = PortalToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.NotEqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioCommonTypesLibrary::NotEqualTo(const struct FModioModID& A, const struct FModioModID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.NotEqualTo");
		
		UModioCommonTypesLibrary_NotEqualTo_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeInitializeOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            GameId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ApiKey                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioEnvironment                                  GameEnvironment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioPortal                                       PortalInUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioCommonTypesLibrary::MakeInitializeOptions(int64_t GameId, const class FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.MakeInitializeOptions");
		
		UModioCommonTypesLibrary_MakeInitializeOptions_Params params {};
		params.GameId = GameId;
		params.ApiKey = ApiKey;
		params.GameEnvironment = GameEnvironment;
		params.PortalInUse = PortalInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeGameId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            GameId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioGameID UModioCommonTypesLibrary::MakeGameId(int64_t GameId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.MakeGameId");
		
		UModioCommonTypesLibrary_MakeGameId_Params params {};
		params.GameId = GameId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeAuthParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AuthToken                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EmailAddress                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAcceptedTOS                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioAuthenticationParams UModioCommonTypesLibrary::MakeAuthParams(const class FString& AuthToken, const class FString& EmailAddress, bool bHasAcceptedTOS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.MakeAuthParams");
		
		UModioCommonTypesLibrary_MakeAuthParams_Params params {};
		params.AuthToken = AuthToken;
		params.EmailAddress = EmailAddress;
		params.bHasAcceptedTOS = bHasAcceptedTOS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.MakeApiKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ApiKey                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioApiKey UModioCommonTypesLibrary::MakeApiKey(const class FString& ApiKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.MakeApiKey");
		
		UModioCommonTypesLibrary_MakeApiKey_Params params {};
		params.ApiKey = ApiKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.GetRawValueFromModID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UModioCommonTypesLibrary::GetRawValueFromModID(const struct FModioModID& In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.GetRawValueFromModID");
		
		UModioCommonTypesLibrary_GetRawValueFromModID_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.EqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioCommonTypesLibrary::EqualTo(const struct FModioModID& A, const struct FModioModID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.EqualTo");
		
		UModioCommonTypesLibrary_EqualTo_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_UserIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUserID                                UserId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_UserIDToString(const struct FModioUserID& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_UserIDToString");
		
		UModioCommonTypesLibrary_Conv_UserIDToString_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioEmailAuthCode UModioCommonTypesLibrary::Conv_StringToEmailAuthCode(const class FString& AuthCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode");
		
		UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Params params {};
		params.AuthCode = AuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioEmailAddress UModioCommonTypesLibrary::Conv_StringToEmailAddress(const class FString& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress");
		
		UModioCommonTypesLibrary_Conv_StringToEmailAddress_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_ModIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_ModIDToString(const struct FModioModID& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_ModIDToString");
		
		UModioCommonTypesLibrary_Conv_ModIDToString_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_GameIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioGameID                                GameId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_GameIDToString(const struct FModioGameID& GameId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_GameIDToString");
		
		UModioCommonTypesLibrary_Conv_GameIDToString_Params params {};
		params.GameId = GameId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFileMetadataID                        FileMetadataID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_FileMetadataIDToString(const struct FModioFileMetadataID& FileMetadataID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString");
		
		UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Params params {};
		params.FileMetadataID = FileMetadataID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAuthCode                         EmailAuthCode                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_EmailAuthCodeToString(const struct FModioEmailAuthCode& EmailAuthCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString");
		
		UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Params params {};
		params.EmailAuthCode = EmailAuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAddress                          EmailAddress                                               (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_EmailAddressToString(const struct FModioEmailAddress& EmailAddress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString");
		
		UModioCommonTypesLibrary_Conv_EmailAddressToString_Params params {};
		params.EmailAddress = EmailAddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioApiKey                                ApiKey                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UModioCommonTypesLibrary::Conv_ApiKeyToString(const struct FModioApiKey& ApiKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString");
		
		UModioCommonTypesLibrary_Conv_ApiKeyToString_Params params {};
		params.ApiKey = ApiKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioCommonTypesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioCommonTypesLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioCommonTypesLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetVersionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Version                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetVersionString(struct FModioCreateModFileParams* In, const class FString& Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetVersionString");
		
		UModioCreateModLibrary_SetVersionString_Params params {};
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tags                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetTags(struct FModioCreateModParams* In, TArray<class FString>* Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetTags");
		
		UModioCreateModLibrary_SetTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
		if (Tags != nullptr)
			*Tags = params.Tags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetModfilePlatforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<EModioModfilePlatform>                      Platforms                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetModfilePlatforms(struct FModioCreateModFileParams* In, TArray<EModioModfilePlatform>* Platforms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetModfilePlatforms");
		
		UModioCreateModLibrary_SetModfilePlatforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
		if (Platforms != nullptr)
			*Platforms = params.Platforms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetModFileMetadataBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetadataBlob                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetModFileMetadataBlob(struct FModioCreateModFileParams* In, const class FString& MetadataBlob)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetModFileMetadataBlob");
		
		UModioCreateModLibrary_SetModFileMetadataBlob_Params params {};
		params.MetadataBlob = MetadataBlob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetMetadataBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetadataBlob                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetMetadataBlob(struct FModioCreateModParams* In, const class FString& MetadataBlob)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetMetadataBlob");
		
		UModioCreateModLibrary_SetMetadataBlob_Params params {};
		params.MetadataBlob = MetadataBlob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetMarkAsActiveRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkAsActiveRelease                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetMarkAsActiveRelease(struct FModioCreateModFileParams* In, bool bMarkAsActiveRelease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetMarkAsActiveRelease");
		
		UModioCreateModLibrary_SetMarkAsActiveRelease_Params params {};
		params.bMarkAsActiveRelease = bMarkAsActiveRelease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetInitialVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               InitialVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetInitialVisibility(struct FModioCreateModParams* In, bool InitialVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetInitialVisibility");
		
		UModioCreateModLibrary_SetInitialVisibility_Params params {};
		params.InitialVisibility = InitialVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetHomepageURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      HomepageURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetHomepageURL(struct FModioCreateModParams* In, const class FString& HomepageURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetHomepageURL");
		
		UModioCreateModLibrary_SetHomepageURL_Params params {};
		params.HomepageURL = HomepageURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModParams                       In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetDescription(struct FModioCreateModParams* In, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetDescription");
		
		UModioCreateModLibrary_SetDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioCreateModLibrary.SetChangelogString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioCreateModFileParams                   In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Changelog                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioCreateModLibrary::SetChangelogString(struct FModioCreateModFileParams* In, const class FString& Changelog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioCreateModLibrary.SetChangelogString");
		
		UModioCreateModLibrary_SetChangelogString_Params params {};
		params.Changelog = Changelog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioCreateModLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioCreateModLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioCreateModLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetVisibility(struct FModioEditModParams* In, bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetVisibility");
		
		UModioEditModLibrary_SetVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Summary                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetSummary(struct FModioEditModParams* In, const class FString& Summary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetSummary");
		
		UModioEditModLibrary_SetSummary_Params params {};
		params.Summary = Summary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetNamePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      NamePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetNamePath(struct FModioEditModParams* In, const class FString& NamePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetNamePath");
		
		UModioEditModLibrary_SetNamePath_Params params {};
		params.NamePath = NamePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetName(struct FModioEditModParams* In, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetName");
		
		UModioEditModLibrary_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetMetadataBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetadataBlob                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetMetadataBlob(struct FModioEditModParams* In, const class FString& MetadataBlob)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetMetadataBlob");
		
		UModioEditModLibrary_SetMetadataBlob_Params params {};
		params.MetadataBlob = MetadataBlob;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetMaturityFlags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioMaturityFlags                                MaturityFlags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetMaturityFlags(struct FModioEditModParams* In, EModioMaturityFlags MaturityFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetMaturityFlags");
		
		UModioEditModLibrary_SetMaturityFlags_Params params {};
		params.MaturityFlags = MaturityFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetHomepageURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      HomepageURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetHomepageURL(struct FModioEditModParams* In, const class FString& HomepageURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetHomepageURL");
		
		UModioEditModLibrary_SetHomepageURL_Params params {};
		params.HomepageURL = HomepageURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioEditModLibrary.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEditModParams                         In                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioEditModLibrary::SetDescription(struct FModioEditModParams* In, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioEditModLibrary.SetDescription");
		
		UModioEditModLibrary_SetDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (In != nullptr)
			*In = params.In;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioEditModLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioEditModLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioEditModLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorCodeLibrary.IsError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioErrorCodeLibrary::IsError(const struct FModioErrorCode& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioErrorCodeLibrary.IsError");
		
		UModioErrorCodeLibrary_IsError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorCodeLibrary.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UModioErrorCodeLibrary::GetValue(const struct FModioErrorCode& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioErrorCodeLibrary.GetValue");
		
		UModioErrorCodeLibrary_GetValue_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorCodeLibrary.GetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioErrorCodeLibrary::GetMessage(const struct FModioErrorCode& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioErrorCodeLibrary.GetMessage");
		
		UModioErrorCodeLibrary_GetMessage_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioErrorCodeLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioErrorCodeLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioErrorCodeLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioErrorConditionLibrary.ErrorCodeMatches
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioErrorCode                             ErrorCode                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioErrorCondition                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioErrorConditionLibrary::ErrorCodeMatches(const struct FModioErrorCode& ErrorCode, EModioErrorCondition Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioErrorConditionLibrary.ErrorCodeMatches");
		
		UModioErrorConditionLibrary_ErrorCodeMatches_Params params {};
		params.ErrorCode = ErrorCode;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioErrorConditionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioErrorConditionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioErrorConditionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.ListUserSubscriptionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          FilterParams                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioExampleLibrary::ListUserSubscriptionAsync(const struct FModioFilterParams& FilterParams, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioExampleLibrary.ListUserSubscriptionAsync");
		
		UModioExampleLibrary_ListUserSubscriptionAsync_Params params {};
		params.FilterParams = FilterParams;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.GetLogoThumbnailSize
	 * 		Flags  -> ()
	 */
	EModioLogoSize UModioExampleLibrary::GetLogoThumbnailSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioExampleLibrary.GetLogoThumbnailSize");
		
		UModioExampleLibrary_GetLogoThumbnailSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.GetLogoFullSize
	 * 		Flags  -> ()
	 */
	EModioLogoSize UModioExampleLibrary::GetLogoFullSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioExampleLibrary.GetLogoFullSize");
		
		UModioExampleLibrary_GetLogoFullSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioExampleLibrary.GetAvatarThumbnailSize
	 * 		Flags  -> ()
	 */
	EModioAvatarSize UModioExampleLibrary::GetAvatarThumbnailSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioExampleLibrary.GetAvatarThumbnailSize");
		
		UModioExampleLibrary_GetAvatarThumbnailSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioExampleLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioExampleLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioExampleLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              NewTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithTags(struct FModioFilterParams* Filter, TArray<class FString> NewTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.WithTags");
		
		UModioFilterParamsLibrary_WithTags_Params params {};
		params.NewTags = NewTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithTag(struct FModioFilterParams* Filter, const class FString& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.WithTag");
		
		UModioFilterParamsLibrary_WithTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithoutTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              NewTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithoutTags(struct FModioFilterParams* Filter, TArray<class FString> NewTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.WithoutTags");
		
		UModioFilterParamsLibrary_WithoutTags_Params params {};
		params.NewTags = NewTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.WithoutTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::WithoutTag(struct FModioFilterParams* Filter, const class FString& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.WithoutTag");
		
		UModioFilterParamsLibrary_WithoutTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.SortBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioSortFieldType                                ByField                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioSortDirection                                ByDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::SortBy(struct FModioFilterParams* Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.SortBy");
		
		UModioFilterParamsLibrary_SortBy_Params params {};
		params.ByField = ByField;
		params.ByDirection = ByDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.PagedResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int64_t                                            PageNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            PageSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::PagedResults(struct FModioFilterParams* Filter, int64_t PageNumber, int64_t PageSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.PagedResults");
		
		UModioFilterParamsLibrary_PagedResults_Params params {};
		params.PageNumber = PageNumber;
		params.PageSize = PageSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.NameContainsStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SearchStrings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::NameContainsStrings(struct FModioFilterParams* Filter, TArray<class FString> SearchStrings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.NameContainsStrings");
		
		UModioFilterParamsLibrary_NameContainsStrings_Params params {};
		params.SearchStrings = SearchStrings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.NameContains
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::NameContains(struct FModioFilterParams* Filter, const class FString& SearchString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.NameContains");
		
		UModioFilterParamsLibrary_NameContains_Params params {};
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MetadataLike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MetadataLike(struct FModioFilterParams* Filter, const class FString& SearchString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.MetadataLike");
		
		UModioFilterParamsLibrary_MetadataLike_Params params {};
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MatchingIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModioModID>                         IDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MatchingIDs(struct FModioFilterParams* Filter, TArray<struct FModioModID> IDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.MatchingIDs");
		
		UModioFilterParamsLibrary_MatchingIDs_Params params {};
		params.IDs = IDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MarkedLiveBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   LiveBefore                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MarkedLiveBefore(struct FModioFilterParams* Filter, const struct FDateTime& LiveBefore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.MarkedLiveBefore");
		
		UModioFilterParamsLibrary_MarkedLiveBefore_Params params {};
		params.LiveBefore = LiveBefore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.MarkedLiveAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   LiveAfter                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::MarkedLiveAfter(struct FModioFilterParams* Filter, const struct FDateTime& LiveAfter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.MarkedLiveAfter");
		
		UModioFilterParamsLibrary_MarkedLiveAfter_Params params {};
		params.LiveAfter = LiveAfter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.IndexedResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int64_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            ResultCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::IndexedResults(struct FModioFilterParams* Filter, int64_t StartIndex, int64_t ResultCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.IndexedResults");
		
		UModioFilterParamsLibrary_IndexedResults_Params params {};
		params.StartIndex = StartIndex;
		params.ResultCount = ResultCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioFilterParamsLibrary.ExcludingIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModioModID>                         IDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioFilterParams UModioFilterParamsLibrary::ExcludingIDs(struct FModioFilterParams* Filter, TArray<struct FModioModID> IDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioFilterParamsLibrary.ExcludingIDs");
		
		UModioFilterParamsLibrary_ExcludingIDs_Params params {};
		params.IDs = IDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioFilterParamsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioFilterParamsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioFilterParamsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.LoadAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioImageWrapper                          Image                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnImageLoaded                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioImageLibrary::LoadAsync(const struct FModioImageWrapper& Image, const class FScriptDelegate& OnImageLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioImageLibrary.LoadAsync");
		
		UModioImageLibrary_LoadAsync_Params params {};
		params.Image = Image;
		params.OnImageLoaded = OnImageLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioImageWrapper                          Image                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UTexture2DDynamic* UModioImageLibrary::GetTexture(const struct FModioImageWrapper& Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioImageLibrary.GetTexture");
		
		UModioImageLibrary_GetTexture_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioImageWrapper                          Image                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EModioImageState UModioImageLibrary::GetState(const struct FModioImageWrapper& Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioImageLibrary.GetState");
		
		UModioImageLibrary_GetState_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetLogoSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Logo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioLogoSize                                     LogoSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UModioImageLibrary::GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioImageLibrary.GetLogoSize");
		
		UModioImageLibrary_GetLogoSize_Params params {};
		params.Logo = Logo;
		params.LogoSize = LogoSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetGallerySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    GalleryImage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioGallerySize                                  GallerySize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UModioImageLibrary::GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioImageLibrary.GetGallerySize");
		
		UModioImageLibrary_GetGallerySize_Params params {};
		params.GalleryImage = GalleryImage;
		params.GallerySize = GallerySize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioImageLibrary.GetAvatarSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    avatar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UModioImageLibrary::GetAvatarSize(class UTexture* avatar, EModioAvatarSize AvatarSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioImageLibrary.GetAvatarSize");
		
		UModioImageLibrary_GetAvatarSize_Params params {};
		params.avatar = avatar;
		params.AvatarSize = AvatarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioImageLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioImageLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioImageLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UModioModCollectionLibrary::GetPath(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModCollectionLibrary.GetPath");
		
		UModioModCollectionLibrary_GetPath_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetModState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EModioModState UModioModCollectionLibrary::GetModState(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModCollectionLibrary.GetModState");
		
		UModioModCollectionLibrary_GetModState_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetModProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioModInfo UModioModCollectionLibrary::GetModProfile(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModCollectionLibrary.GetModProfile");
		
		UModioModCollectionLibrary_GetModProfile_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModCollectionLibrary.GetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCollectionEntry                    Entry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioModID UModioModCollectionLibrary::GetID(const struct FModioModCollectionEntry& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModCollectionLibrary.GetID");
		
		UModioModCollectionLibrary_GetID_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModCollectionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioModCollectionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioModCollectionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModDependenciesLibrary.GetPagedResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModDependencyList                     ModTags                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FModioPagedResult UModioModDependenciesLibrary::GetPagedResult(const struct FModioModDependencyList& ModTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModDependenciesLibrary.GetPagedResult");
		
		UModioModDependenciesLibrary_GetPagedResult_Params params {};
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModDependenciesLibrary.GetDependencies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModDependencyList                     ModTags                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FModioModDependency> UModioModDependenciesLibrary::GetDependencies(const struct FModioModDependencyList& ModTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModDependenciesLibrary.GetDependencies");
		
		UModioModDependenciesLibrary_GetDependencies_Params params {};
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModDependenciesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioModDependenciesLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioModDependenciesLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModInfoListLibrary.GetPagedResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModInfoList                           ModInfoList                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioPagedResult UModioModInfoListLibrary::GetPagedResult(const struct FModioModInfoList& ModInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModInfoListLibrary.GetPagedResult");
		
		UModioModInfoListLibrary_GetPagedResult_Params params {};
		params.ModInfoList = ModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModInfoListLibrary.GetMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModInfoList                           ModInfoList                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FModioModInfo> UModioModInfoListLibrary::GetMods(const struct FModioModInfoList& ModInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModInfoListLibrary.GetMods");
		
		UModioModInfoListLibrary_GetMods_Params params {};
		params.ModInfoList = ModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModInfoListLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioModInfoListLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioModInfoListLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModTagOptionsLibrary.GetTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModTagOptions                         ModTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FModioModTagInfo> UModioModTagOptionsLibrary::GetTags(const struct FModioModTagOptions& ModTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModTagOptionsLibrary.GetTags");
		
		UModioModTagOptionsLibrary_GetTags_Params params {};
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioModTagOptionsLibrary.GetPagedResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModTagOptions                         ModTags                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioPagedResult UModioModTagOptionsLibrary::GetPagedResult(const struct FModioModTagOptions& ModTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioModTagOptionsLibrary.GetPagedResult");
		
		UModioModTagOptionsLibrary_GetPagedResult_Params params {};
		params.ModTags = ModTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModTagOptionsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioModTagOptionsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioModTagOptionsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalUser                          OptionalUser                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser");
		
		UModioOptionalLibrary_IsSet_ModioOptionalUser_Params params {};
		params.OptionalUser = OptionalUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalTerms                         OptionalTerms                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms");
		
		UModioOptionalLibrary_IsSet_ModioOptionalTerms_Params params {};
		params.OptionalTerms = OptionalTerms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModTagOptions                 OptionalModTagOptions                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions");
		
		UModioOptionalLibrary_IsSet_ModioOptionalModTagOptions_Params params {};
		params.OptionalModTagOptions = OptionalModTagOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModProgressInfo               OptionalModProgressInfo                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo");
		
		UModioOptionalLibrary_IsSet_ModioOptionalModProgressInfo_Params params {};
		params.OptionalModProgressInfo = OptionalModProgressInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfoList                   OptionalModInfoList                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList");
		
		UModioOptionalLibrary_IsSet_ModioOptionalModInfoList_Params params {};
		params.OptionalModInfoList = OptionalModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfo                       OptionalModInfo                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo");
		
		UModioOptionalLibrary_IsSet_ModioOptionalModInfo_Params params {};
		params.OptionalModInfo = OptionalModInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModID                         OptionalID                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModID(const struct FModioOptionalModID& OptionalID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID");
		
		UModioOptionalLibrary_IsSet_ModioOptionalModID_Params params {};
		params.OptionalID = OptionalID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModDependencyList             OptionalDependencyList                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList");
		
		UModioOptionalLibrary_IsSet_ModioOptionalModDependencyList_Params params {};
		params.OptionalDependencyList = OptionalDependencyList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalImage                         OptionalImage                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::IsSet_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage");
		
		UModioOptionalLibrary_IsSet_ModioOptionalImage_Params params {};
		params.OptionalImage = OptionalImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalUser                          OptionalUser                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioUser                                  User                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser, struct FModioUser* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser");
		
		UModioOptionalLibrary_GetValue_ModioOptionalUser_Params params {};
		params.OptionalUser = OptionalUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (User != nullptr)
			*User = params.User;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalTerms                         OptionalTerms                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioTerms                                 Terms                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms, struct FModioTerms* Terms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms");
		
		UModioOptionalLibrary_GetValue_ModioOptionalTerms_Params params {};
		params.OptionalTerms = OptionalTerms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Terms != nullptr)
			*Terms = params.Terms;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModTagOptions                 OptionalModTagOptions                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModTagOptions                         ModTagOptions                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions, struct FModioModTagOptions* ModTagOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions");
		
		UModioOptionalLibrary_GetValue_ModioOptionalModTagOptions_Params params {};
		params.OptionalModTagOptions = OptionalModTagOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModTagOptions != nullptr)
			*ModTagOptions = params.ModTagOptions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModProgressInfo               OptionalModProgressInfo                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModProgressInfo                       ModProgressInfo                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo, struct FModioModProgressInfo* ModProgressInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo");
		
		UModioOptionalLibrary_GetValue_ModioOptionalModProgressInfo_Params params {};
		params.OptionalModProgressInfo = OptionalModProgressInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModProgressInfo != nullptr)
			*ModProgressInfo = params.ModProgressInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfoList                   OptionalModInfoList                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModInfoList                           ModInfoList                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList, struct FModioModInfoList* ModInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList");
		
		UModioOptionalLibrary_GetValue_ModioOptionalModInfoList_Params params {};
		params.OptionalModInfoList = OptionalModInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModInfoList != nullptr)
			*ModInfoList = params.ModInfoList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModInfo                       OptionalModInfo                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModInfo                               ModInfo                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo, struct FModioModInfo* ModInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo");
		
		UModioOptionalLibrary_GetValue_ModioOptionalModInfo_Params params {};
		params.OptionalModInfo = OptionalModInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModInfo != nullptr)
			*ModInfo = params.ModInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModID                         OptionalID                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModID                                 ID                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModID(const struct FModioOptionalModID& OptionalID, struct FModioModID* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID");
		
		UModioOptionalLibrary_GetValue_ModioOptionalModID_Params params {};
		params.OptionalID = OptionalID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalModDependencyList             OptionalDependencyList                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioModDependencyList                     DependencyList                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList, struct FModioModDependencyList* DependencyList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList");
		
		UModioOptionalLibrary_GetValue_ModioOptionalModDependencyList_Params params {};
		params.OptionalDependencyList = OptionalDependencyList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DependencyList != nullptr)
			*DependencyList = params.DependencyList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioOptionalImage                         OptionalImage                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FModioImageWrapper                          Image                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UModioOptionalLibrary::GetValue_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage, struct FModioImageWrapper* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage");
		
		UModioOptionalLibrary_GetValue_ModioOptionalImage_Params params {};
		params.OptionalImage = OptionalImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioOptionalLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioOptionalLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioOptionalLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioPopupBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioPopupBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioPopupBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioPopupContainer.PushPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      PopupClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UModioPopupBase* UModioPopupContainer::PushPopup(class UClass* PopupClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioPopupContainer.PushPopup");
		
		UModioPopupContainer_PushPopup_Params params {};
		params.PopupClass = PopupClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioPopupContainer.PopPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      PopupClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UModioPopupBase* UModioPopupContainer::PopPopup(class UClass* PopupClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioPopupContainer.PopPopup");
		
		UModioPopupContainer_PopPopup_Params params {};
		params.PopupClass = PopupClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioPopupContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioPopupContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioPopupContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioReportLibrary.MakeReportForUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUserID                                User                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioReportType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportDescription                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterContact                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioReportParams UModioReportLibrary::MakeReportForUser(const struct FModioUserID& User, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioReportLibrary.MakeReportForUser");
		
		UModioReportLibrary_MakeReportForUser_Params params {};
		params.User = User;
		params.Type = Type;
		params.ReportDescription = ReportDescription;
		params.ReporterName = ReporterName;
		params.ReporterContact = ReporterContact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioReportLibrary.MakeReportForMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioReportType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportDescription                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterContact                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioReportParams UModioReportLibrary::MakeReportForMod(const struct FModioModID& Mod, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioReportLibrary.MakeReportForMod");
		
		UModioReportLibrary_MakeReportForMod_Params params {};
		params.Mod = Mod;
		params.Type = Type;
		params.ReportDescription = ReportDescription;
		params.ReporterName = ReporterName;
		params.ReporterContact = ReporterContact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioReportLibrary.MakeReportForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioGameID                                Game                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioReportType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportDescription                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReporterContact                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioReportParams UModioReportLibrary::MakeReportForGame(const struct FModioGameID& Game, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioReportLibrary.MakeReportForGame");
		
		UModioReportLibrary_MakeReportForGame_Params params {};
		params.Game = Game;
		params.Type = Type;
		params.ReportDescription = ReportDescription;
		params.ReporterName = ReporterName;
		params.ReporterContact = ReporterContact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioReportLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioReportLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioReportLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Pct_Int64Int64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Dividend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Divisor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UModioSDKLibrary::Pct_Int64Int64(int64_t Dividend, int64_t Divisor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.Pct_Int64Int64");
		
		UModioSDKLibrary_Pct_Int64Int64_Params params {};
		params.Dividend = Dividend;
		params.Divisor = Divisor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.IsValidSecurityCodeFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioSDKLibrary::IsValidSecurityCodeFormat(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.IsValidSecurityCodeFormat");
		
		UModioSDKLibrary_IsValidSecurityCodeFormat_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.IsValidEmailAddressFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModioSDKLibrary::IsValidEmailAddressFormat(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.IsValidEmailAddressFormat");
		
		UModioSDKLibrary_IsValidEmailAddressFormat_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      sessionId                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptionsForSessionId(const class FString& sessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId");
		
		UModioSDKLibrary_GetProjectInitializeOptionsForSessionId_Params params {};
		params.sessionId = sessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectInitializeOptions
	 * 		Flags  -> ()
	 */
	struct FModioInitializeOptions UModioSDKLibrary::GetProjectInitializeOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.GetProjectInitializeOptions");
		
		UModioSDKLibrary_GetProjectInitializeOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectGameId
	 * 		Flags  -> ()
	 */
	struct FModioGameID UModioSDKLibrary::GetProjectGameId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.GetProjectGameId");
		
		UModioSDKLibrary_GetProjectGameId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectEnvironment
	 * 		Flags  -> ()
	 */
	EModioEnvironment UModioSDKLibrary::GetProjectEnvironment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.GetProjectEnvironment");
		
		UModioSDKLibrary_GetProjectEnvironment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.GetProjectApiKey
	 * 		Flags  -> ()
	 */
	struct FModioApiKey UModioSDKLibrary::GetProjectApiKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.GetProjectApiKey");
		
		UModioSDKLibrary_GetProjectApiKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Filesize_ToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Filesize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxDecimals                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFileSizeUnit                                      Unit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UModioSDKLibrary::Filesize_ToString(int64_t Filesize, int32_t MaxDecimals, EFileSizeUnit Unit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.Filesize_ToString");
		
		UModioSDKLibrary_Filesize_ToString_Params params {};
		params.Filesize = Filesize;
		params.MaxDecimals = MaxDecimals;
		params.Unit = Unit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Conv_Int64ToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlwaysSign                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseGrouping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinimumIntegralDigits                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaximumIntegralDigits                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UModioSDKLibrary::Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.Conv_Int64ToText");
		
		UModioSDKLibrary_Conv_Int64ToText_Params params {};
		params.Value = Value;
		params.bAlwaysSign = bAlwaysSign;
		params.bUseGrouping = bUseGrouping;
		params.MinimumIntegralDigits = MinimumIntegralDigits;
		params.MaximumIntegralDigits = MaximumIntegralDigits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSDKLibrary.Conv_Int64ToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            inInt                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModioSDKLibrary::Conv_Int64ToString(int64_t inInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSDKLibrary.Conv_Int64ToString");
		
		UModioSDKLibrary_Conv_Int64ToString_Params params {};
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioSDKLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioSDKLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioSDKLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.SetLogLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioLogLevel                                     UnrealLogLevel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::SetLogLevel(EModioLogLevel UnrealLogLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.SetLogLevel");
		
		UModioSubsystem_SetLogLevel_Params params {};
		params.UnrealLogLevel = UnrealLogLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.RunPendingHandlers
	 * 		Flags  -> ()
	 */
	void UModioSubsystem::RunPendingHandlers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.RunPendingHandlers");
		
		UModioSubsystem_RunPendingHandlers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.QueryUserSubscriptions
	 * 		Flags  -> ()
	 */
	TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QueryUserSubscriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.QueryUserSubscriptions");
		
		UModioSubsystem_QueryUserSubscriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.QueryUserInstallations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIncludeOutdatedMods                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QueryUserInstallations(bool bIncludeOutdatedMods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.QueryUserInstallations");
		
		UModioSubsystem_QueryUserInstallations_Params params {};
		params.bIncludeOutdatedMods = bIncludeOutdatedMods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.QuerySystemInstallations
	 * 		Flags  -> ()
	 */
	TMap<struct FModioModID, struct FModioModCollectionEntry> UModioSubsystem::QuerySystemInstallations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.QuerySystemInstallations");
		
		UModioSubsystem_QuerySystemInstallations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.PrioritizeTransferForMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToPrioritize                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioErrorCode UModioSubsystem::PrioritizeTransferForMod(const struct FModioModID& ModToPrioritize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.PrioritizeTransferForMod");
		
		UModioSubsystem_PrioritizeTransferForMod_Params params {};
		params.ModToPrioritize = ModToPrioritize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_VerifyUserAuthenticationAsync(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync");
		
		UModioSubsystem_K2_VerifyUserAuthenticationAsync_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_UnsubscribeFromModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToUnsubscribeFrom                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnUnsubscribeComplete                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_UnsubscribeFromModAsync(const struct FModioModID& ModToUnsubscribeFrom, const class FScriptDelegate& OnUnsubscribeComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_UnsubscribeFromModAsync");
		
		UModioSubsystem_K2_UnsubscribeFromModAsync_Params params {};
		params.ModToUnsubscribeFrom = ModToUnsubscribeFrom;
		params.OnUnsubscribeComplete = OnUnsubscribeComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubscribeToModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToSubscribeTo                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSubscribeComplete                                        (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_SubscribeToModAsync(const struct FModioModID& ModToSubscribeTo, const class FScriptDelegate& OnSubscribeComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_SubscribeToModAsync");
		
		UModioSubsystem_K2_SubscribeToModAsync_Params params {};
		params.ModToSubscribeTo = ModToSubscribeTo;
		params.OnSubscribeComplete = OnSubscribeComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitNewModFileForMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioCreateModFileParams                   Params                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_SubmitNewModFileForMod(const struct FModioModID& Mod, const struct FModioCreateModFileParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_SubmitNewModFileForMod");
		
		UModioSubsystem_K2_SubmitNewModFileForMod_Params params {};
		params.Mod = Mod;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitNewModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModCreationHandle                     Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioCreateModParams                       Params                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_SubmitNewModAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_SubmitNewModAsync");
		
		UModioSubsystem_K2_SubmitNewModAsync_Params params {};
		params.Handle = Handle;
		params.Params = Params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitModRatingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioRating                                       Rating                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_SubmitModRatingAsync(const struct FModioModID& Mod, EModioRating Rating, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_SubmitModRatingAsync");
		
		UModioSubsystem_K2_SubmitModRatingAsync_Params params {};
		params.Mod = Mod;
		params.Rating = Rating;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_SubmitModChangesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModioEditModParams                         Params                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_SubmitModChangesAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_SubmitModChangesAsync");
		
		UModioSubsystem_K2_SubmitModChangesAsync_Params params {};
		params.Mod = Mod;
		params.Params = Params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ShutdownAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnShutdownComplete                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_ShutdownAsync(const class FScriptDelegate& OnShutdownComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_ShutdownAsync");
		
		UModioSubsystem_K2_ShutdownAsync_Params params {};
		params.OnShutdownComplete = OnShutdownComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAddress                          EmailAddress                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_RequestEmailAuthCodeAsync(const struct FModioEmailAddress& EmailAddress, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync");
		
		UModioSubsystem_K2_RequestEmailAuthCodeAsync_Params params {};
		params.EmailAddress = EmailAddress;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ReportContentAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioReportParams                          Report                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_ReportContentAsync(const struct FModioReportParams& Report, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_ReportContentAsync");
		
		UModioSubsystem_K2_ReportContentAsync_Params params {};
		params.Report = Report;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_QueryUserProfile
	 * 		Flags  -> ()
	 */
	struct FModioOptionalUser UModioSubsystem::K2_QueryUserProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_QueryUserProfile");
		
		UModioSubsystem_K2_QueryUserProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_QueryCurrentModUpdate
	 * 		Flags  -> ()
	 */
	struct FModioOptionalModProgressInfo UModioSubsystem::K2_QueryCurrentModUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_QueryCurrentModUpdate");
		
		UModioSubsystem_K2_QueryCurrentModUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ListAllModsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioFilterParams                          Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_ListAllModsAsync(const struct FModioFilterParams& Filter, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_ListAllModsAsync");
		
		UModioSubsystem_K2_ListAllModsAsync_Params params {};
		params.Filter = Filter;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_InitializeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioInitializeOptions                     InitializeOptions                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnInitComplete                                             (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_InitializeAsync(const struct FModioInitializeOptions& InitializeOptions, const class FScriptDelegate& OnInitComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_InitializeAsync");
		
		UModioSubsystem_K2_InitializeAsync_Params params {};
		params.InitializeOptions = InitializeOptions;
		params.OnInitComplete = OnInitComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync");
		
		UModioSubsystem_K2_GetUserMediaAvatarAsync_Params params {};
		params.AvatarSize = AvatarSize;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetTermsOfUseAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioAuthenticationProvider                       Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioLanguage                                     Locale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetTermsOfUseAsync");
		
		UModioSubsystem_K2_GetTermsOfUseAsync_Params params {};
		params.Provider = Provider;
		params.Locale = Locale;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModTagOptionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetModTagOptionsAsync(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetModTagOptionsAsync");
		
		UModioSubsystem_K2_GetModTagOptionsAsync_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModMediaLogoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioLogoSize                                     LogoSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetModMediaLogoAsync(const struct FModioModID& ModId, EModioLogoSize LogoSize, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetModMediaLogoAsync");
		
		UModioSubsystem_K2_GetModMediaLogoAsync_Params params {};
		params.ModId = ModId;
		params.LogoSize = LogoSize;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioGallerySize                                  GallerySize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetModMediaGalleryImageAsync(const struct FModioModID& ModId, EModioGallerySize GallerySize, int32_t Index, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync");
		
		UModioSubsystem_K2_GetModMediaGalleryImageAsync_Params params {};
		params.ModId = ModId;
		params.GallerySize = GallerySize;
		params.Index = Index;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModMediaAvatarAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EModioAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetModMediaAvatarAsync(const struct FModioModID& ModId, EModioAvatarSize AvatarSize, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetModMediaAvatarAsync");
		
		UModioSubsystem_K2_GetModMediaAvatarAsync_Params params {};
		params.ModId = ModId;
		params.AvatarSize = AvatarSize;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetModInfoAsync(const struct FModioModID& ModId, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetModInfoAsync");
		
		UModioSubsystem_K2_GetModInfoAsync_Params params {};
		params.ModId = ModId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModDependenciesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModId                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_GetModDependenciesAsync(const struct FModioModID& ModId, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetModDependenciesAsync");
		
		UModioSubsystem_K2_GetModDependenciesAsync_Params params {};
		params.ModId = ModId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_GetModCreationHandle
	 * 		Flags  -> ()
	 */
	struct FModioModCreationHandle UModioSubsystem::K2_GetModCreationHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_GetModCreationHandle");
		
		UModioSubsystem_K2_GetModCreationHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ForceUninstallModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 ModToRemove                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_ForceUninstallModAsync(const struct FModioModID& ModToRemove, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_ForceUninstallModAsync");
		
		UModioSubsystem_K2_ForceUninstallModAsync_Params params {};
		params.ModToRemove = ModToRemove;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnFetchDone                                                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_FetchExternalUpdatesAsync(const class FScriptDelegate& OnFetchDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync");
		
		UModioSubsystem_K2_FetchExternalUpdatesAsync_Params params {};
		params.OnFetchDone = OnFetchDone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_EnableModManagement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioErrorCode UModioSubsystem::K2_EnableModManagement(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_EnableModManagement");
		
		UModioSubsystem_K2_EnableModManagement_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ClearUserDataAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_ClearUserDataAsync(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_ClearUserDataAsync");
		
		UModioSubsystem_K2_ClearUserDataAsync_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioAuthenticationParams                  User                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EModioAuthenticationProvider                       Provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_AuthenticateUserExternalAsync(const struct FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync");
		
		UModioSubsystem_K2_AuthenticateUserExternalAsync_Params params {};
		params.User = User;
		params.Provider = Provider;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioEmailAuthCode                         AuthenticationCode                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_AuthenticateUserEmailAsync(const struct FModioEmailAuthCode& AuthenticationCode, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync");
		
		UModioSubsystem_K2_AuthenticateUserEmailAsync_Params params {};
		params.AuthenticationCode = AuthenticationCode;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.K2_ArchiveModAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioModID                                 Mod                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UModioSubsystem::K2_ArchiveModAsync(const struct FModioModID& Mod, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.K2_ArchiveModAsync");
		
		UModioSubsystem_K2_ArchiveModAsync_Params params {};
		params.Mod = Mod;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.IsModManagementBusy
	 * 		Flags  -> ()
	 */
	bool UModioSubsystem::IsModManagementBusy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.IsModManagementBusy");
		
		UModioSubsystem_IsModManagementBusy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.GetLastValidationError
	 * 		Flags  -> ()
	 */
	TArray<struct FModioValidationError> UModioSubsystem::GetLastValidationError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.GetLastValidationError");
		
		UModioSubsystem_GetLastValidationError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioSubsystem.DisableModManagement
	 * 		Flags  -> ()
	 */
	void UModioSubsystem::DisableModManagement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioSubsystem.DisableModManagement");
		
		UModioSubsystem_DisableModManagement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioTestSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioTestSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioTestSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Subtract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::Subtract(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.Subtract");
		
		UModioUnsigned64Library_Subtract_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Percentage_Unsigned64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::Percentage_Unsigned64(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.Percentage_Unsigned64");
		
		UModioUnsigned64Library_Percentage_Unsigned64_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.NotEqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::NotEqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.NotEqualTo");
		
		UModioUnsigned64Library_NotEqualTo_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.MakeFromComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            High                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Low                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::MakeFromComponents(int32_t High, int32_t Low)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.MakeFromComponents");
		
		UModioUnsigned64Library_MakeFromComponents_Params params {};
		params.High = High;
		params.Low = Low;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.LessThan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::LessThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.LessThan");
		
		UModioUnsigned64Library_LessThan_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.GreaterThan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::GreaterThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.GreaterThan");
		
		UModioUnsigned64Library_GreaterThan_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.EqualTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UModioUnsigned64Library::EqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.EqualTo");
		
		UModioUnsigned64Library_EqualTo_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.DivideToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::DivideToFloat(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.DivideToFloat");
		
		UModioUnsigned64Library_DivideToFloat_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.DivideFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              RHS                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::DivideFloat(const struct FModioUnsigned64& LHS, float RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.DivideFloat");
		
		UModioUnsigned64Library_DivideFloat_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Divide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::Divide(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.Divide");
		
		UModioUnsigned64Library_Divide_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UModioUnsigned64Library::Conv_FModioUnsigned64ToFloat(const struct FModioUnsigned64& In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat");
		
		UModioUnsigned64Library_Conv_FModioUnsigned64ToFloat_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.BreakToComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            High                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Low                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModioUnsigned64Library::BreakToComponents(const struct FModioUnsigned64& In, int32_t* High, int32_t* Low)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.BreakToComponents");
		
		UModioUnsigned64Library_BreakToComponents_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (High != nullptr)
			*High = params.High;
		if (Low != nullptr)
			*Low = params.Low;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Modio.ModioUnsigned64Library.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModioUnsigned64                            LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FModioUnsigned64                            RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FModioUnsigned64 UModioUnsigned64Library::Add(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Modio.ModioUnsigned64Library.Add");
		
		UModioUnsigned64Library_Add_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioUnsigned64Library.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioUnsigned64Library::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Modio.ModioUnsigned64Library");
		return ptr;
	}

}


