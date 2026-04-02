include bcitizen_stationary.sci
include bcitizen_handle_std.sci
include bcitizen_stat_doidle_async_player.sci
include bcitizen_attack_melee.sci
include bcitizen_pdamage_attack.sci
include bcitizen_unload_wait.sci
include bcitizen_use_latent.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_none.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci
include item_base.sci

// CONSTANTS
const float c_fAttackNoticeDist = 1000.0;
const float c_fAttackRepChange = -0.05;
const float c_fDeathRepChange = -0.03;
const float c_fMeleeDamage = 0.05;
// CONSTANTS

var bool g_bDead;

void PerformInit(void)
{
	g_bDead = false;
}

void PerformUse(object actor) 
{
	if (g_bDead) {
		HumanBarter(actor);
		return;
	}
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	if (!HasProperty(actor, "class"))
		return false;

	string strClass;
	actor->GetProperty("class", strClass);
	if (strClass != "guard")
		return false;

	bool bCanSee;
	@CanSee(bCanSee, player);
	if (bCanSee || GetActorDistanceSqr(player) <= c_fAttackNoticeDist * c_fAttackNoticeDist) {
		return true;
	}

	return false;
}

void citHandleDeath(object actor)
{
	g_bDead = true;
	@SetRTEnvelope(50, 40);
	
	AddOrgans();
	
	if (IsPlayerActor(actor)) { 
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
		GenerateAlkashItems();
	}
}
