include std.sci
include grabitel_attack.sci
include NPC_Grabitel.sci
include idle.sci
include death_base.sci
include bgame.sci

var bool m_bAttacking;

void HandleDeath(object actor)
{
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	if (m_bAttacking)
		TriggerActor("quest_b3_02", "grabitel_dead");
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, 0.03);
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

void OnUnload(void)
{
	if (m_bAttacking) {
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		TriggerActor("quest_b3_02", "grabitel_dead");
	}
}

void HandleAttackBase(object actor)
{
}

bool FilterPlayerDamage(object player, object actor)
{
	return false;
}

maintask TGrabitel : TIdleBase
{
	void init(void) {
		for (;;) {
			super.init();
			@Sleep(3);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN3_Burah_Grabitel{actor};
	}

	void OnAttacked(object actor) {
		TriggerActor("quest_b3_02", "grabitel_attack");
	}
	
	void OnTrigger(string name) {
		if (name == "attack") {
			TAttack{};
		}
	}
}

task TAttack : TAttackBase
{
	void init(void) {
		m_bAttacking = true;
		for (;;) {
			super.init(GetPlayerActor());
			@Sleep(1);
		}
	}
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		GenerateGrabitelItems();
		AddOrgans();
		super.init(actor);
	}
}
