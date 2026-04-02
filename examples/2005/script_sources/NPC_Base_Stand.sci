include std.sci
include NPC_base.sci

task TNPCBaseStand
{
	var bool m_bStanding;
	var Vector m_vInitPos, m_vInitDir;

	void init(void) {
		@GetPosition(m_vInitPos);
		@GetDirection(m_vInitDir);
		m_bStanding = false;

		if (!IsLoaded()) {
			TWaitForLoad{};
			AfterLoad();
		}
		for (;;) {
			PlayHeadAnimation("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}

	void AfterLoad(void) {
		@SetPosition(m_vInitPos);
		@SetDirection(m_vInitDir);
		m_bStanding = false;
		@LockAnimation("all", "stand", 0);
	}

	void StandTriggered(void) {
		if (!m_bStanding) {
			m_bStanding = true;
			@PlayAnimation("all", "stand");
			@WaitForAnimEnd();
		}
	}

	void OnUnload() {
		TWaitForLoad{};
		AfterLoad();
	}
	
	void OnUse(object actor) {
		if (m_bStanding) {
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive) {
				disable OnUse;
				RotateToActor(actor);
				enable OnUse;
				PerformUse(actor);
			}
		}
	}
}
