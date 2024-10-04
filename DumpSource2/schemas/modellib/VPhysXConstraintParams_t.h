class VPhysXConstraintParams_t
{
	int8 m_nType;
	int8 m_nTranslateMotion;
	int8 m_nRotateMotion;
	int8 m_nFlags;
	Vector[2] m_anchor;
	QuaternionStorage[2] m_axes;
	float32 m_maxForce;
	float32 m_maxTorque;
	float32 m_linearLimitValue;
	float32 m_linearLimitRestitution;
	float32 m_linearLimitSpring;
	float32 m_linearLimitDamping;
	float32 m_twistLowLimitValue;
	float32 m_twistLowLimitRestitution;
	float32 m_twistLowLimitSpring;
	float32 m_twistLowLimitDamping;
	float32 m_twistHighLimitValue;
	float32 m_twistHighLimitRestitution;
	float32 m_twistHighLimitSpring;
	float32 m_twistHighLimitDamping;
	float32 m_swing1LimitValue;
	float32 m_swing1LimitRestitution;
	float32 m_swing1LimitSpring;
	float32 m_swing1LimitDamping;
	float32 m_swing2LimitValue;
	float32 m_swing2LimitRestitution;
	float32 m_swing2LimitSpring;
	float32 m_swing2LimitDamping;
	Vector m_goalPosition;
	QuaternionStorage m_goalOrientation;
	Vector m_goalAngularVelocity;
	float32 m_driveSpringX;
	float32 m_driveSpringY;
	float32 m_driveSpringZ;
	float32 m_driveDampingX;
	float32 m_driveDampingY;
	float32 m_driveDampingZ;
	float32 m_driveSpringTwist;
	float32 m_driveSpringSwing;
	float32 m_driveSpringSlerp;
	float32 m_driveDampingTwist;
	float32 m_driveDampingSwing;
	float32 m_driveDampingSlerp;
	int32 m_solverIterationCount;
	float32 m_projectionLinearTolerance;
	float32 m_projectionAngularTolerance;
}
