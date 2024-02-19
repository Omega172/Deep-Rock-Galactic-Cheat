#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * BlueprintGeneratedClass LIB_PlayerControllerBase.LIB_PlayerControllerBase_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_PlayerControllerBase_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetPlayerControllerBase(class UObject* __WorldContext, class ABP_PlayerControllerBase_C** Controller);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
