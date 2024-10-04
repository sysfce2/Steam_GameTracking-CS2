class CEnvVolumetricFogController : public CBaseEntity
{
	float32 m_flScattering;
	float32 m_flAnisotropy;
	float32 m_flFadeSpeed;
	float32 m_flDrawDistance;
	float32 m_flFadeInStart;
	float32 m_flFadeInEnd;
	float32 m_flIndirectStrength;
	int32 m_nVolumeDepth;
	float32 m_fFirstVolumeSliceThickness;
	int32 m_nIndirectTextureDimX;
	int32 m_nIndirectTextureDimY;
	int32 m_nIndirectTextureDimZ;
	Vector m_vBoxMins;
	Vector m_vBoxMaxs;
	bool m_bActive;
	GameTime_t m_flStartAnisoTime;
	GameTime_t m_flStartScatterTime;
	GameTime_t m_flStartDrawDistanceTime;
	float32 m_flStartAnisotropy;
	float32 m_flStartScattering;
	float32 m_flStartDrawDistance;
	float32 m_flDefaultAnisotropy;
	float32 m_flDefaultScattering;
	float32 m_flDefaultDrawDistance;
	bool m_bStartDisabled;
	bool m_bEnableIndirect;
	bool m_bIndirectUseLPVs;
	bool m_bIsMaster;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture;
	int32 m_nForceRefreshCount;
	float32 m_fNoiseSpeed;
	float32 m_fNoiseStrength;
	Vector m_vNoiseScale;
	bool m_bFirstTime;
}
