#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ReceiveBeginPlay
	 */
	struct AMOD_Proxy_SpawnEnemy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.spawned
	 */
	struct AMOD_Proxy_SpawnEnemy_C_spawned_Params
	{
	public:
		class APawn*                                               enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.ExecuteUbergraph_MOD_Proxy_SpawnEnemy
	 */
	struct AMOD_Proxy_SpawnEnemy_C_ExecuteUbergraph_MOD_Proxy_SpawnEnemy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MOD_Proxy_SpawnEnemy.MOD_Proxy_SpawnEnemy_C.OnEnemySpawned__DelegateSignature
	 */
	struct AMOD_Proxy_SpawnEnemy_C_OnEnemySpawned__DelegateSignature_Params
	{
	public:
		class APawn*                                               enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
