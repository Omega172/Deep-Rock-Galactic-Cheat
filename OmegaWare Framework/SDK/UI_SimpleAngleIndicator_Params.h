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
	 * Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.SetAngle
	 */
	struct UUI_SimpleAngleIndicator_C_SetAngle_Params
	{
	public:
		float                                                      AngleDegrees;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.PreConstruct
	 */
	struct UUI_SimpleAngleIndicator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Tick
	 */
	struct UUI_SimpleAngleIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Construct
	 */
	struct UUI_SimpleAngleIndicator_C_Construct_Params
	{	};

	/**
	 * Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.ExecuteUbergraph_UI_SimpleAngleIndicator
	 */
	struct UUI_SimpleAngleIndicator_C_ExecuteUbergraph_UI_SimpleAngleIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
