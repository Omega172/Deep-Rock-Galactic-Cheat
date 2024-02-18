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
	 * BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C
	 * Size -> 0x004C (FullSize[0x286C] - InheritedSize[0x2820])
	 */
	class ABP_FSDCameraManager_C : public AFSDPlayerCameraManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2820(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                PhysicalSphere;                                          // 0x2828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       SessionStarted;                                          // 0x2830(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_16C0[0x3];                                   // 0x2831(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistance;                                             // 0x2834(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             HideHUDForPhotography;                                   // 0x2838(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ShowHUDForPhotography;                                   // 0x2848(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UserVisibility;                                          // 0x2858(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECharacterCameraMode                                       PreviousCameraMode;                                      // 0x2859(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PauseGame;                                               // 0x285A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1IIB[0x1];                                   // 0x285B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereReturnVelocity;                                    // 0x285C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistanceTolerance;                                    // 0x2860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KeyDebug;                                                // 0x2864(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5KCR[0x3];                                   // 0x2865(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSpeed;                                                // 0x2868(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ChangeMaxDistance(float MaxDistance);
		void ChangeSpeed(float MaxSpeed);
		float SmoothReturnVelocity(const struct FVector& NewCameraLocation);
		void SphereDirectionToPlayer(struct FVector* Direction);
		void SetToThirdPersonCamera(struct FVector* NewCameraPosition);
		void ReturnCameraMode(class APlayerCharacter* Target, ECharacterCameraMode NewCameraMode);
		void PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation);
		void ReceiveDestroyed();
		void OnPhotographySessionEnd();
		void OnPhotographySessionStart();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void TogglePhotographyMode(bool Active);
		void ReturnCamera();
		void LoaderStart(class ULevelSequence* LoaderLevelSequence);
		void LoaderStop();
		void ExecuteUbergraph_BP_FSDCameraManager(int32_t EntryPoint);
		void ShowHUDForPhotography__DelegateSignature();
		void HideHUDForPhotography__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
