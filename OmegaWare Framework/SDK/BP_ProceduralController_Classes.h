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
	 * BlueprintGeneratedClass BP_ProceduralController.BP_ProceduralController_C
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UBP_ProceduralController_C : public UProceduralController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SendRoomData();
		void SendTunnelData();
		void ReceivedRoomData(int32_t Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles);
		void ReceivedTunnelData(TArray<struct FTunnelNode> tunnels);
		void Server_RequestPLSData();
		void Server_RequestCarverData(EDebrisItemPass pass);
		void RequestPLSData();
		void RequestCarverData(EDebrisItemPass pass);
		void ExecuteUbergraph_BP_ProceduralController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
