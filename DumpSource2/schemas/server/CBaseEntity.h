class CBaseEntity : public CEntityInstance
{
	CBodyComponent* m_CBodyComponent;
	CNetworkTransmitComponent m_NetworkTransmitComponent;
	CUtlVector< thinkfunc_t > m_aThinkFunctions;
	int32 m_iCurrentThinkContext;
	GameTick_t m_nLastThinkTick;
	bool m_bDisabledContextThinks;
	CTypedBitVec< 64 > m_isSteadyState;
	float32 m_lastNetworkChange;
	CUtlVector< ResponseContext_t > m_ResponseContexts;
	CUtlSymbolLarge m_iszResponseContext;
	int32 m_iHealth;
	int32 m_iMaxHealth;
	uint8 m_lifeState;
	float32 m_flDamageAccumulator;
	bool m_bTakesDamage;
	TakeDamageFlags_t m_nTakeDamageFlags;
	EntityPlatformTypes_t m_nPlatformType;
	MoveCollide_t m_MoveCollide;
	MoveType_t m_MoveType;
	MoveType_t m_nActualMoveType;
	uint8 m_nWaterTouch;
	uint8 m_nSlimeTouch;
	bool m_bRestoreInHierarchy;
	CUtlSymbolLarge m_target;
	CHandle< CBaseFilter > m_hDamageFilter;
	CUtlSymbolLarge m_iszDamageFilterName;
	float32 m_flMoveDoneTime;
	CUtlStringToken m_nSubclassID;
	float32 m_flAnimTime;
	float32 m_flSimulationTime;
	GameTime_t m_flCreateTime;
	bool m_bClientSideRagdoll;
	uint8 m_ubInterpolationFrame;
	Vector m_vPrevVPhysicsUpdatePos;
	uint8 m_iTeamNum;
	CUtlSymbolLarge m_iGlobalname;
	int32 m_iSentToClients;
	float32 m_flSpeed;
	CUtlString m_sUniqueHammerID;
	uint32 m_spawnflags;
	GameTick_t m_nNextThinkTick;
	int32 m_nSimulationTick;
	CEntityIOOutput m_OnKilled;
	uint32 m_fFlags;
	Vector m_vecAbsVelocity;
	CNetworkVelocityVector m_vecVelocity;
	Vector m_vecBaseVelocity;
	int32 m_nPushEnumCount;
	CCollisionProperty* m_pCollision;
	CHandle< CBaseEntity > m_hEffectEntity;
	CHandle< CBaseEntity > m_hOwnerEntity;
	uint32 m_fEffects;
	CHandle< CBaseEntity > m_hGroundEntity;
	int32 m_nGroundBodyIndex;
	float32 m_flFriction;
	float32 m_flElasticity;
	float32 m_flGravityScale;
	float32 m_flTimeScale;
	float32 m_flWaterLevel;
	bool m_bAnimatedEveryTick;
	bool m_bDisableLowViolence;
	uint8 m_nWaterType;
	int32 m_iEFlags;
	CEntityIOOutput m_OnUser1;
	CEntityIOOutput m_OnUser2;
	CEntityIOOutput m_OnUser3;
	CEntityIOOutput m_OnUser4;
	int32 m_iInitialTeamNum;
	GameTime_t m_flNavIgnoreUntilTime;
	QAngle m_vecAngVelocity;
	bool m_bNetworkQuantizeOriginAndAngles;
	bool m_bLagCompensate;
	float32 m_flOverriddenFriction;
	CHandle< CBaseEntity > m_pBlocker;
	float32 m_flLocalTime;
	float32 m_flVPhysicsUpdateLocalTime;
	BloodType m_nBloodType;
}
