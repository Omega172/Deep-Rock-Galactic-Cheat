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
	 * Class EyeTracker.EyeTrackerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetEyeTrackedPlayer(class APlayerController* PlayerController);
		bool IsStereoGazeDataAvailable();
		bool IsEyeTrackerConnected();
		bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
		bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
