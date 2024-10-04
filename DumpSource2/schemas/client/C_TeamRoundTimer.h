class C_TeamRoundTimer : public C_BaseEntity
{
	bool m_bTimerPaused;
	float32 m_flTimeRemaining;
	GameTime_t m_flTimerEndTime;
	bool m_bIsDisabled;
	bool m_bShowInHUD;
	int32 m_nTimerLength;
	int32 m_nTimerInitialLength;
	int32 m_nTimerMaxLength;
	bool m_bAutoCountdown;
	int32 m_nSetupTimeLength;
	int32 m_nState;
	bool m_bStartPaused;
	bool m_bInCaptureWatchState;
	float32 m_flTotalTime;
	bool m_bStopWatchTimer;
	bool m_bFireFinished;
	bool m_bFire5MinRemain;
	bool m_bFire4MinRemain;
	bool m_bFire3MinRemain;
	bool m_bFire2MinRemain;
	bool m_bFire1MinRemain;
	bool m_bFire30SecRemain;
	bool m_bFire10SecRemain;
	bool m_bFire5SecRemain;
	bool m_bFire4SecRemain;
	bool m_bFire3SecRemain;
	bool m_bFire2SecRemain;
	bool m_bFire1SecRemain;
	int32 m_nOldTimerLength;
	int32 m_nOldTimerState;
}
