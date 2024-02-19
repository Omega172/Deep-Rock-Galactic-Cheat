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
	 * BlueprintGeneratedClass RadarPointInterface.RadarPointInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URadarPointInterface_C : public UInterface
	{
	public:
		void UpdatePoint(float alpha, float verticalDist, bool* destroy);
		void Get3dPosition(struct FVector* Pos);
		void InitPoint(class URadarPointComponent* RadarComponent, bool* success);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
