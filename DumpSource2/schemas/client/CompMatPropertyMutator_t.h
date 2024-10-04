class CompMatPropertyMutator_t
{
	bool m_bEnabled;
	CompMatPropertyMutatorType_t m_nMutatorCommandType;
	CUtlString m_strInitWith_Container;
	CUtlString m_strCopyProperty_InputContainerSrc;
	CUtlString m_strCopyProperty_InputContainerProperty;
	CUtlString m_strCopyProperty_TargetProperty;
	CUtlString m_strRandomRollInputVars_SeedInputVar;
	CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll;
	CUtlString m_strCopyMatchingKeys_InputContainerSrc;
	CUtlString m_strCopyKeysWithSuffix_InputContainerSrc;
	CUtlString m_strCopyKeysWithSuffix_FindSuffix;
	CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix;
	CompositeMaterialInputLooseVariable_t m_nSetValue_Value;
	CUtlString m_strGenerateTexture_TargetParam;
	CUtlString m_strGenerateTexture_InitialContainer;
	int32 m_nResolution;
	bool m_bIsScratchTarget;
	bool m_bSplatDebugInfo;
	bool m_bCaptureInRenderDoc;
	CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions;
	CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators;
	CUtlString m_strPopInputQueue_Container;
	CUtlString m_strDrawText_InputContainerSrc;
	CUtlString m_strDrawText_InputContainerProperty;
	Vector2D m_vecDrawText_Position;
	Color m_colDrawText_Color;
	CUtlString m_strDrawText_Font;
	CUtlVector< CompMatMutatorCondition_t > m_vecConditions;
}
