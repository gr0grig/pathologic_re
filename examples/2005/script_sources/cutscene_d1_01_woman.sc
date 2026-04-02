include bcitizen_handle_std.sci
include bcitizen_wanderer.sci
include bcitizen_attack_wretreat.sci
include bcitizen_pdamage_retreat.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_use_latent.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_none.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci
include NPC_Woman.sci
include dgame.sci

const float c_fAttackRepChange = -0.05;

void PerformInit() 
{
	GenerateCitizenItems(true);
}

void PerformUse(object actor)
{
	TDlg_CS_D1Fire_Woman{actor};
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	return true;
}

void citHandleUnload(void)
{
	@RemoveActor(self());
	@Hold();
}

void citHandleDeath(object actor)
{
}
