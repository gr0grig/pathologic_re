include std.sci
include bcitizen_std.sci

// CONSTANTS
const float c_fPreRotateTime = 1.5;
const float c_fNoticeTime = 5;
const float c_fFaceTime = 0.5;
const float c_fFaceAngle = 60 * PI / 180;
// CONSTANTS

const int c_iNoticeRotateTimer = 111;

int citFilterPlayerNotice(object actor)
{
	return (citNeedNoticeLook())? 2 : 0;
}

void citHandlePlayerNotice(object actor)
{
	bcitizen_notice_look_TNotice{actor};
}

task bcitizen_notice_look_TNotice
{
	var object m_Actor;
	
	void init(object actor) {
		m_Actor = actor;
		
		Look();
		
		Vector vCurDir;
		@GetDirection(vCurDir);
		Vector vDeltaDir = GetActorDelta(m_Actor);
		bool bSuccess;
		if (CosAngle2D(vCurDir, vDeltaDir) < 0) {
			RotateAsyncToActor(m_Actor);
			bSuccess = true;
		}
		else {
			@Sleep(c_fPreRotateTime, bSuccess);
		}

		if (bSuccess) {
			RotateAsyncToActor(m_Actor);
			@SetTimer(c_iNoticeRotateTimer, c_fFaceTime);
			@Sleep(c_fNoticeTime);
			@KillTimer(c_iNoticeRotateTimer);
		}

		@StopAsync();
		@UnlookAsync("head");
	}
	
	void Look(void)
	{
		HeadLook(m_Actor);
	}

	void OnUse(object actor) {
		int iReaction = citFilterUse(actor);
		if (iReaction > 0) {
			if (iReaction > 1)
				CancelActivity();
			citHandleUse(actor);
		}
	}
	
	void OnAttacked(object actor) {
		StdAttacked(actor);
		int iReaction = citFilterAttacked(actor);
		if (iReaction > 0) {
			if (iReaction > 1)
				CancelActivity();
			citHandleAttacked(actor);
		}
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (citProcessPlayerDamage(player, actor, bEnemy)) {
			int iReaction = citFilterPlayerDamage(player, bEnemy);
			if (iReaction > 0) {
				if (iReaction > 1)
					CancelActivity();
				citHandlePlayerDamage(player);
			}
		}
	}

	void OnSteal(object actor) {
		int iReaction = citFilterSteal(actor);
		if (iReaction > 0) {
			if (iReaction > 1)
				CancelActivity();
			citHandleSteal(actor);
		}
	}

	void OnMessage(object actor, string strMessage) {
		if (StdFilterMessage(actor, strMessage)) {
			CancelActivity();
			StdProcessMessage(actor, strMessage);
		}
		else {
			int iReaction = citFilterMessage(strMessage, actor);
			if (iReaction > 0) {
				if (iReaction > 1)
					CancelActivity();
				citHandleMessage(strMessage, actor);
			}
		}
	}
	
	void OnTrigger(string strName) {
		if (StdFilterTrigger(strName)) {
			CancelActivity();
			StdProcessTrigger(strName);
		}
	}

	void CancelActivity(void) {
		@StopGroup0();
		@StopAsync();
		@UnlookAsync("head");
		@KillTimer(c_iNoticeRotateTimer);
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnTimer(int id) {
		if (id != c_iNoticeRotateTimer)
			return;
		if (!IsAccessible(m_Actor)) {
			CancelActivity();
			return;
		}
		Vector vCurDir;
		@GetDirection(vCurDir);
		Vector vDeltaDir = GetActorDelta(m_Actor);
		if (CosAngle2D(vCurDir, vDeltaDir) < cos(c_fFaceAngle)) {
			RotateAsyncToActor(m_Actor);
		}
	}

	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}

	void OnSee(object actor) {
		if (StdFilterSee(actor)) {
			CancelActivity();
			StdHandleSee(actor);
		}
	}
}
