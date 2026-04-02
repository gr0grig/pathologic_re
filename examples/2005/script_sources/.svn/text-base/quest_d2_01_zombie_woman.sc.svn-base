include bcitizen_handle_std.sci
include bcitizen_wanderer_notice.sci
include bcitizen_notice_zombie.sci
include bcitizen_attack_none.sci
include bcitizen_pdamage_none.sci
include bcitizen_use_none.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_none.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci

const float c_fAttackNoticeDist = 700.0;
const float c_fAttackRepChange = 0;

var bool g_bDead;

void PerformInit() 
{
	g_bDead = false;
}

void PerformUse(object actor) 
{
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
	return false;
}

void citHandleDeath(object actor)
{
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, -0.05);
	g_bDead = true;
	@SetRTEnvelope(50, 40);
}

void citHandleUnload(void)
{
	@RemoveActor(self());
}
