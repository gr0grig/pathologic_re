include std.sci
include stationary_base.sci
include attack_melee.sci
include std_melee_attack.sci
include death_base.sci
include NPC_Butcher.sci
include bgame.sci
include item_base.sci

void HandleDeath(object actor)
{
	TriggerActor("quest_b10_01", "butcher_dead");

	AddOrgans();
	object scene;
	@GetScene(scene);
	scene->RemoveStationaryActor(self());
	
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

maintask TButcher : TStationaryBase
{
	void DoSomething(void) {}
	
	void OnUse(object actor) {
		TDlg_DN10_Burah_Butcher{actor};
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TAttack{actor};
		}
	}

	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TAttack{actor};
		}		
	}
}

task TAttack : TAttackMeleeBase
{
	void init(object actor) {
		super.init(actor, true, c_fAttackDistance + 30);
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirUsableBase
{
}
