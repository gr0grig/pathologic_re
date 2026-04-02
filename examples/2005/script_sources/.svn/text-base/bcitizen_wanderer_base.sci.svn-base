include std.sci
include bcitizen_std.sci
include wanderer_base.sci
include idle.sci

task TWandererBase : TWanderBase
{
	void init(void) {
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
	
	void OnSee(object actor) {
		if (StdFilterSee(actor)) {
			CancelActivity();
			StdHandleSee(actor);
		}
	}

	void OnUnload(void) {
		CancelActivity();
		citHandleUnload();
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
