include bcitizen_handle_std.sci
include bcitizen_wanderer_notice.sci
include bcitizen_notice_look.sci
include bcitizen_attack_wretreat.sci
include bcitizen_pdamage_retreat.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_use_latent.sci
include bcitizen_unload_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_retreat.sci
include bcitizen_battle_pshot.sci
include bcitizen_heal_none.sci
include item_base.sci
include game.sci
include NPC_woman.sci

const float c_fAttackNoticeDist = 500.0;
const float c_fAttackRepChange = -0.05;
const float c_fDeathRepChange = -0.1;

var bool g_bDead;

void BroadcastKillme() 
{
	object scene;
	@GetActiveScene(scene);
	@BroadcastMessage("killme", self(), scene);
}

void PerformInit() 
{
	g_bDead = false;
	GenerateCitizenItems(false);
}

void PerformUse(object actor) 
{
	if (g_bDead) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			HumanBarter(actor);
		return;
	}
	else {
		BroadcastKillme();
	}
}

bool citNeedNoticeLook(void)
{
	BroadcastKillme();
	return (GetPlayerReputation() > 0.7);
}

bool citIsZombieEnemy(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer;
}

int citFilterZombieAttacked(object actor)
{
	return 0;
}

void citHandleZombieAttacked(object actor)
{
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	return pdamageVictim(player, actor, c_fAttackNoticeDist);
}

void citHandleDeath(object actor)
{
	if (IsPlayerActor(actor)) {
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
		GenerateCitizenItems(false);
	}
	AddOrgans();

	g_bDead = true;
	@SetRTEnvelope(50, 40);	
}

