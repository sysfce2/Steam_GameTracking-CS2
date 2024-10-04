class CEnvWindShared
{
	GameTime_t m_flStartTime;
	uint32 m_iWindSeed;
	uint16 m_iMinWind;
	uint16 m_iMaxWind;
	int32 m_windRadius;
	uint16 m_iMinGust;
	uint16 m_iMaxGust;
	float32 m_flMinGustDelay;
	float32 m_flMaxGustDelay;
	float32 m_flGustDuration;
	uint16 m_iGustDirChange;
	Vector m_location;
	int32 m_iszGustSound;
	int32 m_iWindDir;
	float32 m_flWindSpeed;
	Vector m_currentWindVector;
	Vector m_CurrentSwayVector;
	Vector m_PrevSwayVector;
	uint16 m_iInitialWindDir;
	float32 m_flInitialWindSpeed;
	CEntityIOOutput m_OnGustStart;
	CEntityIOOutput m_OnGustEnd;
	GameTime_t m_flVariationTime;
	GameTime_t m_flSwayTime;
	GameTime_t m_flSimTime;
	GameTime_t m_flSwitchTime;
	float32 m_flAveWindSpeed;
	bool m_bGusting;
	float32 m_flWindAngleVariation;
	float32 m_flWindSpeedVariation;
	CHandle< CBaseEntity > m_hEntOwner;
}
