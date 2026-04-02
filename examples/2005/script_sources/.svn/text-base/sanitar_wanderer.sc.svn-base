include std.sci
include wanderer_base.sci
include idle.sci
include death_base.sci
include sanitar_base.sci

bool IsEnemy(object actor)
{
	return IsEnemyStd(actor);
}

maintask TSanitar : TWanderBase
{
	void init(void) {
		InitGlobals();
		for (;;) {
			super.init();
		}
	}
	
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
		else if (FilterSeeDiseased(actor)) {
			CancelActivity();
			HandleSeeDiseased(actor);
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

	void OnTimer(int id) {
		HandleTimer(id);
	}
}

task TIdle : TIdleBase
{
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
		else if (FilterSeeDiseased(actor)) {
			CancelActivity();
			HandleSeeDiseased(actor);
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

	void OnTimer(int id) {
		HandleTimer(id);
	}
}

task TAttack : TAttackSanitar
{
}

task TDeath : TDeathSanitar
{
}

task TCleanBody : TCleanBodySanitar
{
}
