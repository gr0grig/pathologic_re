include std.sci

maintask TBodyLook
{
	var object m_Target;

	void init(void) {
		m_Target = GetPlayerActor();

		@LockAnimationEnd("all", "attack_on");

		float fHeight;
		@GetEyesHeight(fHeight);
		float fTargetHeight;
		m_Target->GetEyesHeight(fTargetHeight);
		Vector vOffset = [0, 0, 0];
		vOffset.y = fTargetHeight - fHeight;
		@DirLookAsyncRel(m_Target, "spine", vOffset);
		
		for (;;) {
			@Hold();
		}
	}
}
