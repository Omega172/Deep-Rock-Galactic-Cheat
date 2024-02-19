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
	 * BlueprintGeneratedClass LIB_Game_SpaceRig.LIB_Game_SpaceRig_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_Game_SpaceRig_C : public UBlueprintFunctionLibrary
	{
	public:
		void RefreshSpacerigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext);
		void GetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext, class UItemUpgrade** PreviewUpgrade);
		void SetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UItemUpgrade* ItemUpgrade, class UObject* __WorldContext);
		void GetSRGameState(class UObject* __WorldContext, class ABP_GameState_SpaceRig_C** GameState);
		void GetSRController(class UObject* __WorldContext, class ABP_SR_PlayerControllerBase_C** SRController);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
