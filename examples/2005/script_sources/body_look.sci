include std.sci

// CONSTANTS
const float c_fFaceTime = 0.5;
const float c_fFaceAngle = 45 * PI / 180;
// CONSTANTS

task TBodyLook
{
	var object m_Target;
	var bool m_bStop;

	void init(object actor) {
		m_Target = actor;
		m_bStop = false;

		Look();

		do {
			Vector vCurDir;
			@GetDirection(vCurDir);
			Vector vDeltaDir = GetActorDelta(m_Target);
			if (CosAngle2D(vCurDir, vDeltaDir) < cos(c_fFaceAngle)) {
				RotateAsyncToActor(m_Target, PI * 1.5);
				OnRotatedToTarget();
			}
			@Sleep(c_fFaceTime);
		} while (!m_bStop && IsAccessible(m_Target));

		@StopAsync();
		@UnlookAsync("spine");
	}

	void Look(void) {
		float fHeight;
		@GetEyesHeight(fHeight);
		float fTargetHeight;
		m_Target->GetEyesHeight(fTargetHeight);
		Vector vOffset = [0, 0, 0];
		vOffset.y = fTargetHeight - fHeight;
		@DirLookAsyncRel(m_Target, "spine", vOffset);
	}

	void CancelActivity(void) {
		@StopGroup0();
		m_bStop = true;
	}

	void OnRotatedToTarget(void) {}
}
