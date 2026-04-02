include bcitizen_handle_undead.sci
include bcitizen_wanderer_notice.sci
include bcitizen_notice_look.sci
include bcitizen_attack_wretreat.sci
include bcitizen_pdamage_retreat.sci
include bcitizen_use_latent.sci
include bcitizen_unload_none.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_unholster_retreat.sci
include bcitizen_pshot_retreat.sci
include bcitizen_battle_pshot.sci
include bcitizen_heal_none.sci
include item_base.sci
include game.sci
include NPC_littleboy.sci

const float c_fAttackNoticeDist = 500.0;
const float c_fAttackRepChange = -0.03;
const float c_fDeathRepChange = -0.07;

var bool g_bDead;

void PerformInit() 
{
	g_bDead = false;
	GenerateChildTradeItems(true);
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
		if (1000 == TDlg_Ct_Littleboy{actor}) {
			if (!SetTradeCamera(actor))
				return;
				
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
	}	
}

bool citNeedNoticeLook(void)
{
	return true;
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
	if (pdamageVictim(player, actor, c_fAttackNoticeDist)) {
		@SetProperty("ToDie", true);
		return true;
	}
	return false;
}

void citHandleDeath(object actor)
{
	if (IsPlayerActor(actor)) { 
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
		GenerateChildItems(true);
	}
	AddOrgans();

	g_bDead = true;
	@SetRTEnvelope(50, 40);
}