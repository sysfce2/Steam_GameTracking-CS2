class C_BasePlayerPawn : public C_BaseCombatCharacter
{
	CPlayer_WeaponServices* m_pWeaponServices;
	CPlayer_ItemServices* m_pItemServices;
	CPlayer_AutoaimServices* m_pAutoaimServices;
	CPlayer_ObserverServices* m_pObserverServices;
	CPlayer_WaterServices* m_pWaterServices;
	CPlayer_UseServices* m_pUseServices;
	CPlayer_FlashlightServices* m_pFlashlightServices;
	CPlayer_CameraServices* m_pCameraServices;
	CPlayer_MovementServices* m_pMovementServices;
	C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges;
	uint32 m_nHighestConsumedServerViewAngleChangeIndex;
	QAngle v_angle;
	QAngle v_anglePrevious;
	uint32 m_iHideHUD;
	sky3dparams_t m_skybox3d;
	GameTime_t m_flDeathTime;
	Vector m_vecPredictionError;
	GameTime_t m_flPredictionErrorTime;
	Vector m_vecLastCameraSetupLocalOrigin;
	GameTime_t m_flLastCameraSetupTime;
	float32 m_flFOVSensitivityAdjust;
	float32 m_flMouseSensitivity;
	Vector m_vOldOrigin;
	float32 m_flOldSimulationTime;
	int32 m_nLastExecutedCommandNumber;
	int32 m_nLastExecutedCommandTick;
	CHandle< CBasePlayerController > m_hController;
	bool m_bIsSwappingToPredictableController;
}
