class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
	float32 m_flMaxFallVelocity;
	Vector m_vecLadderNormal;
	int32 m_nLadderSurfacePropIndex;
	float32 m_flDuckAmount;
	float32 m_flDuckSpeed;
	bool m_bDuckOverride;
	bool m_bDesiresDuck;
	float32 m_flDuckOffset;
	uint32 m_nDuckTimeMsecs;
	uint32 m_nDuckJumpTimeMsecs;
	uint32 m_nJumpTimeMsecs;
	float32 m_flLastDuckTime;
	Vector2D m_vecLastPositionAtFullCrouchSpeed;
	bool m_duckUntilOnGround;
	bool m_bHasWalkMovedSinceLastJump;
	bool m_bInStuckTest;
	float32[64][2] m_flStuckCheckTime;
	int32 m_nTraceCount;
	int32 m_StuckLast;
	bool m_bSpeedCropped;
	float32 m_flGroundMoveEfficiency;
	int32 m_nOldWaterLevel;
	float32 m_flWaterEntryTime;
	Vector m_vecForward;
	Vector m_vecLeft;
	Vector m_vecUp;
	int32 m_nGameCodeHasMovedPlayerAfterCommand;
	bool m_bMadeFootstepNoise;
	int32 m_iFootsteps;
	bool m_bOldJumpPressed;
	float32 m_flJumpPressedTime;
	float32 m_flJumpUntil;
	float32 m_flJumpVel;
	GameTime_t m_fStashGrenadeParameterWhen;
	uint64 m_nButtonDownMaskPrev;
	float32 m_flOffsetTickCompleteTime;
	float32 m_flOffsetTickStashedSpeed;
	float32 m_flStamina;
	float32 m_flHeightAtJumpStart;
	float32 m_flMaxJumpHeightThisJump;
	float32 m_flMaxJumpHeightLastJump;
}
