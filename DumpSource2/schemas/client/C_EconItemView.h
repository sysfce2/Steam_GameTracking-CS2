class C_EconItemView : public IEconItemInterface
{
	bool m_bInventoryImageRgbaRequested;
	bool m_bInventoryImageTriedCache;
	int32 m_nInventoryImageRgbaWidth;
	int32 m_nInventoryImageRgbaHeight;
	char[4096] m_szCurrentLoadCachedFileName;
	bool m_bRestoreCustomMaterialAfterPrecache;
	uint16 m_iItemDefinitionIndex;
	int32 m_iEntityQuality;
	uint32 m_iEntityLevel;
	uint64 m_iItemID;
	uint32 m_iItemIDHigh;
	uint32 m_iItemIDLow;
	uint32 m_iAccountID;
	uint32 m_iInventoryPosition;
	bool m_bInitialized;
	bool m_bDisallowSOC;
	bool m_bIsStoreItem;
	bool m_bIsTradeItem;
	int32 m_iEntityQuantity;
	int32 m_iRarityOverride;
	int32 m_iQualityOverride;
	int32 m_iOriginOverride;
	uint8 m_unClientFlags;
	uint8 m_unOverrideStyle;
	CAttributeList m_AttributeList;
	CAttributeList m_NetworkedDynamicAttributes;
	char[161] m_szCustomName;
	char[161] m_szCustomNameOverride;
	bool m_bInitializedTags;
}
