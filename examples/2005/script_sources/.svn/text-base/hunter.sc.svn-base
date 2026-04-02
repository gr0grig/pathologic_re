include std.sci
include hunter_base.sci
include hunter_attack.sci
include wanderer_base.sci
include idle.sci

var object g_Enemies;

void InitGlobals(void)
{
	g_Enemies = CreateObjectSet();
}

bool IsEnemy(object actor)
{
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (bInEnemySet)
		return true;
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer;
}

bool FilterHearNormal(object actor)
{
	if (IsEnemy(actor)) {
		Vector vDelta = GetActorDelta(actor);
		return absf(vDelta.y) < 200;
	}
	return false;
}

void HandleHearNormal(object actor)
{
	PerformAttack(actor);
}

bool FilterSeeNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleSeeNormal(object actor)
{
	PerformAttack(actor);
}

void PerformAttack(object actor)
{
	TAttack{actor, true};
	@ResetAAS();
}

void HandleAttackBase(object actor)
{
	if (actor == null)
		return;
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (!bInEnemySet) {
		g_Enemies->add(actor);
	}
}

void HandleAttack(object actor)
{
	HandleAttackBase(actor);
	TAttack{actor, true};
	@ResetAAS();
}

maintask TWander : TWanderBase
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
}

task TIdle : TIdleBase
{
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
}
