class CShatterGlassShard
{
	uint32 m_hShardHandle;
	CUtlVector< Vector2D > m_vecPanelVertices;
	Vector2D m_vLocalPanelSpaceOrigin;
	CStrongHandle< InfoForResourceTypeCModel > m_hModel;
	CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity;
	CHandle< CFuncShatterglass > m_hParentPanel;
	uint32 m_hParentShard;
	ShatterGlassStressType m_ShatterStressType;
	Vector m_vecStressVelocity;
	bool m_bCreatedModel;
	float32 m_flLongestEdge;
	float32 m_flShortestEdge;
	float32 m_flLongestAcross;
	float32 m_flShortestAcross;
	float32 m_flSumOfAllEdges;
	float32 m_flArea;
	OnFrame m_nOnFrameEdge;
	int32 m_nSubShardGeneration;
	Vector2D m_vecAverageVertPosition;
	bool m_bAverageVertPositionIsValid;
	Vector2D m_vecPanelSpaceStressPositionA;
	Vector2D m_vecPanelSpaceStressPositionB;
	bool m_bStressPositionAIsValid;
	bool m_bStressPositionBIsValid;
	bool m_bFlaggedForRemoval;
	GameTime_t m_flPhysicsEntitySpawnedAtTime;
	CHandle< CBaseEntity > m_hEntityHittingMe;
	CUtlVector< uint32 > m_vecNeighbors;
}
