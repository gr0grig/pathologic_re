include std.sci
include follow.sci

task TFollowAttackBase : TFollowBase
{
	var bool m_bTracking;

	bool init(object actor, float fFollowDist, float fLooseDist, bool bRun, bool bRotate) {
		PlayAttackMusic(actor);
		@SetTimer(1, 5);
		bool bCanSee;
		@CanSee(bCanSee, actor);
		if (bCanSee) {
			m_bTracking = true;
			HeadLook(actor);
		}
		else {
			m_bTracking = false;
		}
		if (IsPlayerActor(actor))
			@SendPlayerEnemy(actor, self());
		bool bResult = super.init(actor, fFollowDist, fLooseDist, bRun, bRotate);
		if (m_bTracking)
			@UnlookAsync("head");
		@KillTimer(1);
		return bResult;
	}

	void OnTimer(int id) {
		if (id == 1) {
			PlayAttackMusic(m_objActor);
		}
		else super.OnTimer(id);
	}

	void CancelActivity(void) {
		@KillTimer(1);
		if (m_bTracking) {
			m_bTracking = false;
			@UnlookAsync("head");
		}
		super.CancelActivity();
	}

	void OnSee(object actor) {
		if (m_objActor == actor && !m_bTracking) {
			m_bTracking = true;
			HeadLook(actor);
		}
	}

	void OnStopSee(object actor) {
		if (m_objActor == actor && m_bTracking) {
			m_bTracking = false;
			@UnlookAsync("head");
		}
	}
}
