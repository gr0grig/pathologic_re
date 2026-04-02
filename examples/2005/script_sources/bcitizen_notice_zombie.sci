include std.sci
include attack_zombie.sci

int citFilterPlayerNotice(object actor)
{
	return 2;
}

void citHandlePlayerNotice(object actor)
{
	bcitizen_notice_zombie_TNotice{actor};
}

task bcitizen_notice_zombie_TNotice : TAttackZombieBase
{
	void init(object actor) {
		if (citIsZombieEnemy(actor)) {
			super.init(actor);
		}
	}

	void OnAttacked(object actor) {
		StdAttacked(actor);
		int iReaction = citFilterZombieAttacked(actor);
		if (iReaction > 0) {
			if (iReaction > 1)
				CancelActivity();
			citHandleZombieAttacked(actor);
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
}

task TAttackZombieFollow : TAttackZombieFollowBase
{
	void OnAttacked(object actor) {
		StdAttacked(actor);
		int iReaction = citFilterZombieAttacked(actor);
		if (iReaction > 0) {
			if (iReaction > 1)
				CancelActivity();
			citHandleZombieAttacked(actor);
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
}
