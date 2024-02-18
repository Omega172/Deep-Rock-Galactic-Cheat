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
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession
	 */
	struct UWND_JoiningPassword_C_SetSession_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_JoiningPassword_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_JoiningPassword_C_BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct
	 */
	struct UWND_JoiningPassword_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__WND_JoiningPassword_Basic_PasswordField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
	 */
	struct UWND_JoiningPassword_C_BndEvt__WND_JoiningPassword_Basic_PasswordField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword
	 */
	struct UWND_JoiningPassword_C_ExecuteUbergraph_WND_JoiningPassword_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FYGU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.OnCancel__DelegateSignature
	 */
	struct UWND_JoiningPassword_C_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature
	 */
	struct UWND_JoiningPassword_C_JoinWithPassword__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
