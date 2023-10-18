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
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo
	 */
	struct UHUD_ActorTrackingIcon_C_SetInfo_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Texture;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InTint;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged
	 */
	struct UHUD_ActorTrackingIcon_C_OnTargetDistanceChanged_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet
	 */
	struct UHUD_ActorTrackingIcon_C_OnTargetSet_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged
	 */
	struct UHUD_ActorTrackingIcon_C_OnPlayerNameChanged_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged
	 */
	struct UHUD_ActorTrackingIcon_C_OnInViewChanged_Params
	{
	public:
		bool                                                       inView;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IRFF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct
	 */
	struct UHUD_ActorTrackingIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow
	 */
	struct UHUD_ActorTrackingIcon_C_UpdateArrow_Params
	{
	public:
		bool                                                       inView;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LAMR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow
	 */
	struct UHUD_ActorTrackingIcon_C_OnShow_Params
	{	};

	/**
	 * Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon
	 */
	struct UHUD_ActorTrackingIcon_C_ExecuteUbergraph_HUD_ActorTrackingIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
