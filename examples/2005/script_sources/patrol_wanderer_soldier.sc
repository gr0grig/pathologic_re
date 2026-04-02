include std.sci
include wanderer_base.sci
include idle.sci
include patrol_base.sci
include NPC_Patrol.sci
include dialogs.sci
include item_base.sci

bool IsEnemy(object actor)
{
	if (!IsAccessible(actor))
		return false;
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (bInEnemySet)
		return true;
	if (IsPlayerActor(actor)) {
		float fReputation;
		actor->GetProperty("reputation", fReputation);
		return fReputation < c_fReputationLevel;
	}
	if (HasProperty(actor, "class")) {
		string strClass;
		actor->GetProperty("class", strClass);
		return strClass == "bomber" || strClass == "hunter" || strClass == "grabitel";
	}
	return false;
}

maintask TWander : TWanderBase
{
	void init(void) {
		InitGlobals();
		GeneratePatrolTradeItems();
		for (;;) {
			super.init();
		}
	}

	void OnUse(object actor) {
	}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			HandleHearNormal(actor);
		}
	}
	
	void OnAttacked(object actor) {
		if (!IsAccessible(actor)) {
			HandleAttackBase(actor);
			return;
		}
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor, bEnemy)) {
			OnAttacked(player);
		}
	}
}

task TIdle : TIdleBase
{
	void OnUse(object actor) {
		CancelActivity();
		//TDlg_Ct_Patrol{actor};
	}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			HandleHearNormal(actor);
		}
	}

	void OnAttacked(object actor) {
		if (!IsAccessible(actor)) {
			HandleAttackBase(actor);
			return;
		}
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor, bEnemy)) {
			OnAttacked(player);
		}
	}
}

task TFollowAttackMelee : TFollowAttackMeleePatrol
{
}

task TAttack : TAttackPatrol
{
}

task TDeath : TDeathPatrol
{
}
