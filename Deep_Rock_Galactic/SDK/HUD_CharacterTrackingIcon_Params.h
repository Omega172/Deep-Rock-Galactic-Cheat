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
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.PreConstruct
	 */
	struct UHUD_CharacterTrackingIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateArrow
	 */
	struct UHUD_CharacterTrackingIcon_C_UpdateArrow_Params
	{
	public:
		bool                                                       inView;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q60A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnShow
	 */
	struct UHUD_CharacterTrackingIcon_C_OnShow_Params
	{	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnInViewChanged
	 */
	struct UHUD_CharacterTrackingIcon_C_OnInViewChanged_Params
	{
	public:
		bool                                                       inView;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PLUP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetSet
	 */
	struct UHUD_CharacterTrackingIcon_C_OnTargetSet_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetDistanceChanged
	 */
	struct UHUD_CharacterTrackingIcon_C_OnTargetDistanceChanged_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnUpdateName
	 */
	struct UHUD_CharacterTrackingIcon_C_OnUpdateName_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterChanged
	 */
	struct UHUD_CharacterTrackingIcon_C_OnCharacterChanged_Params
	{
	public:
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterStateChanged
	 */
	struct UHUD_CharacterTrackingIcon_C_OnCharacterStateChanged_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.Construct
	 */
	struct UHUD_CharacterTrackingIcon_C_Construct_Params
	{	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateClassIcon
	 */
	struct UHUD_CharacterTrackingIcon_C_UpdateClassIcon_Params
	{	};

	/**
	 * Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.ExecuteUbergraph_HUD_CharacterTrackingIcon
	 */
	struct UHUD_CharacterTrackingIcon_C_ExecuteUbergraph_HUD_CharacterTrackingIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
