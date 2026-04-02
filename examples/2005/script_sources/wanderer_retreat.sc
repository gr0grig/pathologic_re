include std.sci
include bcitizen_handle_std.sci
include bcitizen_wanderer.sci
include bcitizen_attack_retreat.sci
include bcitizen_pdamage_retreat.sci
include bcitizen_use_none.sci
include bcitizen_death_none.sci
include bcitizen_unload_wait.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_none.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci

const float c_fAttackRepChange = 0;

void PerformInit(void)
{
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	return true;
}
