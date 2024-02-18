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
	 * Function LIB_Text.LIB_Text_C.Select CharacterText
	 */
	struct ULIB_Text_C_SelectCharacterText_Params
	{
	public:
		class APlayerCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DrillerText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                GunnerText;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ScoutText;                                               // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                EngineerText;                                            // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                BoscoText;                                               // 0x0068(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                NoneText;                                                // 0x0080(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x00A0(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.Select Character Class Text
	 */
	struct ULIB_Text_C_SelectCharacterClassText_Params
	{
	public:
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DrillerText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                GunnerText;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ScoutText;                                               // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                EngineerText;                                            // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                BoscoText;                                               // 0x0068(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                NoneText;                                                // 0x0080(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x00A0(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.Select Character ID Text
	 */
	struct ULIB_Text_C_SelectCharacterIDText_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DrillerText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                GunnerText;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ScoutText;                                               // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                EngineerText;                                            // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                BoscoText;                                               // 0x0068(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                NoneText;                                                // 0x0080(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x00A0(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.GetTimeText
	 */
	struct ULIB_Text_C_GetTimeText_Params
	{
	public:
		float                                                      Dividend;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6OJE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.SetTextCased
	 */
	struct ULIB_Text_C_SetTextCased_Params
	{
	public:
		class UTextBlock*                                          Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ENU_TextCase                                               TextCase;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_306E[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.GetFontSize
	 */
	struct ULIB_Text_C_GetFontSize_Params
	{
	public:
		class UTextBlock*                                          Label;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Size;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.SetFontSize
	 */
	struct ULIB_Text_C_SetFontSize_Params
	{
	public:
		class UTextBlock*                                          Label;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewSize;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OYTD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.SetTextUpperCased
	 */
	struct ULIB_Text_C_SetTextUpperCased_Params
	{
	public:
		class UTextBlock*                                          Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption
	 */
	struct ULIB_Text_C_GetDisconnectReasonCaption_Params
	{
	public:
		EDisconnectReason                                          DisconnectReason;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZB1I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function LIB_Text.LIB_Text_C.GetDisconnectReasonText
	 */
	struct ULIB_Text_C_GetDisconnectReasonText_Params
	{
	public:
		EDisconnectReason                                          DisconnectReason;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LW6H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
