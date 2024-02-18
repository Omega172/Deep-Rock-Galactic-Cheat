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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class FSDAnsel.FSDAnselFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFSDAnselFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void StopPhotographySession(class UObject* WorldContextObject);
		void StartPhotographySession(class UObject* WorldContextObject);
		void SetUIControlVisibility(class UObject* WorldContextObject, EUIControlEffectTarget UIControlTarget, bool bIsVisible);
		void SetSettleFrames(int32_t NumSettleFrames);
		void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
		void SetCameraMovementSpeed(float TranslationSpeed);
		void SetCameraConstraintDistance(float MaxCameraDistance);
		void SetCameraConstraintCameraSize(float CameraSize);
		void SetAutoPostprocess(bool bShouldAutoPostprocess);
		void SetAutoPause(bool bShouldAutoPause);
		bool IsPhotographyAvailable();
		bool IsPhotographyAllowed();
		void ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation);
		void ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation, float MaxDistance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
