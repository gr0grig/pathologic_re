include std.sci
include idle.sci
include retreat.sci
include death_base.sci
include dgame.sci
include NPC_Albinos.sci

// CONSTANTS
const float c_fDamageFreq = 1;
const float c_fDamageAmount = 0.05;
const float c_fDamageDist = 800;
// CONSTANTS

const int c_iDamageTimer = 100;

void HandleDeath(object actor)
{
	@KillTimer(c_iDamageTimer);
	TriggerActor("quest_d6_03", "albinos_dead");
	TDeath{actor};
}

void DamagePlayer(void)
{
	object player;
	@FindActor(player, "player");
	if (player) {
		if (GetActorDistanceSqr(player) <= c_fDamageDist * c_fDamageDist) {
			float fDamage = Damage(player, c_fDamageAmount, c_iDamageTypePhysical);
			@ReportHit(player, c_iHitTypeMental, fDamage, c_fDamageAmount);
		}
	}
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

maintask TAlbinos : TIdleBase
{
	void init(void) {
		@SetTimer(c_iDamageTimer, c_fDamageFreq);
		for (;;) {
			@Sleep(3);
			super.init();
		}
	}
	
	void OnAttacked(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			TRetreat{actor};
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN6_Danko_Albinos{actor};
	}

	void OnTimer(int id)
	{
		if (id == c_iDamageTimer)
			DamagePlayer();
	}
}

task TRetreat : TRetreatBase
{
	void OnUnload(void) {
		TriggerActor("quest_d6_03", "albinos_retreated");
		@Hold();
	}

	void OnTimer(int id)
	{
		if (id == c_iDamageTimer)
			DamagePlayer();
		else
			super.OnTimer(id);
	}
}

task TDeath : TDeathDirHoldBase
{
}
