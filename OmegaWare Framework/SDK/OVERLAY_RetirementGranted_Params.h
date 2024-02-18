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
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct
	 */
	struct UOVERLAY_RetirementGranted_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play
	 */
	struct UOVERLAY_RetirementGranted_C_Play_Params
	{
	public:
		class UPlayerCharacterID*                                  CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RetirementCount;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct
	 */
	struct UOVERLAY_RetirementGranted_C_Construct_Params
	{	};

	/**
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnEnterFinished
	 */
	struct UOVERLAY_RetirementGranted_C_OnEnterFinished_Params
	{	};

	/**
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnIntroFinished
	 */
	struct UOVERLAY_RetirementGranted_C_OnIntroFinished_Params
	{	};

	/**
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PlayOutro
	 */
	struct UOVERLAY_RetirementGranted_C_PlayOutro_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted
	 */
	struct UOVERLAY_RetirementGranted_C_ExecuteUbergraph_OVERLAY_RetirementGranted_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature
	 */
	struct UOVERLAY_RetirementGranted_C_OnFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
