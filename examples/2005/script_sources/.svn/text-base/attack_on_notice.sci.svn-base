include std.sci
include idle.sci

void HandleDeath(object actor)
{
	TDeath{actor};
}

void OnHit(object actor, int iHitType, float fDamage, float fHit)
{
	StdHandleHit(actor, iHitType, fDamage);
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

void OnPropertyChange(object actor, string strProp)
{
	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth <= 0) {
			@SignalDeath(actor);
		}
	}
}

void OnDeath(object actor)
{
	HandleDeath(actor);
}

bool FilterAttacked(object actor)
{
	return IsAccessible(actor);
}

void HandleAttacked(object actor)
{
	DoAttack(actor);
}

task TAttackOnNotice : TIdleBase
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init();
		}
	}

	void OnAttacked(object actor) {
		if (FilterAttacked(actor)) {
			CancelActivity();
			HandleAttacked(actor);
		}
	}
	
	void OnSee(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			OnAttacked(actor);
	}

	void OnHear(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			OnAttacked(actor);
	}
}

task TAttackOnNoticeSpecialIdle : TSpecialIdleBase
{
	void init(string idle) {
		for (;;) {
			@Sleep(3);
			super.init(idle);
		}
	}

	void OnAttacked(object actor) {
		if (FilterAttacked(actor)) {
			CancelActivity();
			HandleAttacked(actor);
		}
	}
	
	void OnSee(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			OnAttacked(actor);
	}

	void OnHear(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer)
			OnAttacked(actor);
	}
}
