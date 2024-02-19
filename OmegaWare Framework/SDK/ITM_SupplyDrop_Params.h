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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem
	 */
	struct AITM_SupplyDrop_C_RecieveCycledItem_Params
	{	};

	/**
	 * Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped
	 */
	struct AITM_SupplyDrop_C_RecieveEquipped_Params
	{	};

	/**
	 * Function ITM_SupplyDrop.ITM_SupplyDrop_C.OnMarkerSpawned_Event
	 */
	struct AITM_SupplyDrop_C_OnMarkerSpawned_Event_Params
	{
	public:
		class AItemMarker*                                         Marker;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SupplyDrop.ITM_SupplyDrop_C.Update Widget
	 */
	struct AITM_SupplyDrop_C_UpdateWidget_Params
	{	};

	/**
	 * Function ITM_SupplyDrop.ITM_SupplyDrop_C.ReceiveItemPlacerSpawned
	 */
	struct AITM_SupplyDrop_C_ReceiveItemPlacerSpawned_Params
	{
	public:
		class UItemPlacerAggregator*                               InItemPlacer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop
	 */
	struct AITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
