include std.sci
include bcitizen_std.sci
include wanderer_base.sci
include idle.sci

// CONSTANTS
const float c_fIgnorePlayerTime = 10;
// CONSTANTS

const int c_iIgnorePlayerTimer = 110;

maintask TWander : TWanderBase
{
	var bool m_bIgnorePlayer;
	
	void init(void) {
		@SensePlayerOnly(true);
		PerformInit();

		CheckLoaded();

		for (;;) {
			m_bIgnorePlayer = false;
			super.init();
		}
	}
	
	void CheckLoaded(void)
	{
		if (!IsLoaded())
			citHandleUnload();
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

	void OnSee(object actor) {
		if (StdFilterSee(actor)) {
			CancelActivity();
			StdHandleSee(actor);
		}
		else {
			Notice(actor);
		}
	}
	
	void OnHear(object actor) {
		Notice(actor);
	}
	
	void OnTimer(int id) {
		if (id != c_iIgnorePlayerTimer)
			return;
		m_bIgnorePlayer = false;
		@KillTimer(c_iIgnorePlayerTimer);
		@ResetAAS();
	}
	
	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}

	void CancelActivity(void) {
		@KillTimer(c_iIgnorePlayerTimer);
		m_bIgnorePlayer = false;
		super.CancelActivity();
	}
	
	void CancelActivityAndKP(void) {
		@KillTimer(c_iIgnorePlayerTimer);
		m_bIgnorePlayer = false;
		super.CancelActivityAndKP();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void Notice(object actor) {
		if (!IsAccessible(actor))
			return;
		if (m_bIgnorePlayer)
			return;
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (!bPlayer)
			return;
		int iReaction = citFilterPlayerNotice(actor);
		if (iReaction > 0) {
			if (iReaction > 1)
				CancelActivityAndKP();
			citHandlePlayerNotice(actor);
			m_bIgnorePlayer = true;
			@SetTimer(c_iIgnorePlayerTimer, c_fIgnorePlayerTime);
		}
	}
}

task TIdle : TIdleBase
{
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
