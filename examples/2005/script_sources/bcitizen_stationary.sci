include std.sci
include stationary_base.sci
include bcitizen_std.sci

maintask TStationary : TStationaryBase
{
	var bool m_bIdling;

	void init(void) {
		m_bIdling = false;

		@SensePlayerOnly(true);
		PerformInit();
		
		CheckLoaded();
		
		for (;;) {
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

	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
	}
	
	void CancelActivity(void) {
		if (m_bIdling) {
			citStationaryStopDoSomething();
		}
		else {
			super.CancelActivity();
		}
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnSee(object actor) {
		if (StdFilterSee(actor)) {
			CancelActivity();
			StdHandleSee(actor);
		}
	}

	void DoSomething(void) {
		m_bIdling = true;
		citStationaryDoSomething();
		m_bIdling = false;
	}
}
