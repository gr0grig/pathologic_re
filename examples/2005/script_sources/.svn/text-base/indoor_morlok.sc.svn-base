include bcitizen_handle_std.sci
include bcitizen_wanderer_base.sci
include bcitizen_attack_melee.sci
include bcitizen_pdamage_attack.sci
include bcitizen_steal_none.sci
include bcitizen_message_none.sci
include bcitizen_use_latent.sci
include bcitizen_unload_none.sci
include bcitizen_unholster_none.sci
include bcitizen_pshot_none.sci
include bcitizen_battle_none.sci
include bcitizen_heal_none.sci
include item_base.sci

const float c_fAttackRepChange = -0.03;
const float c_fDeathRepChange = -0.07;
const float c_fMeleeDamage = 0.05;

var bool g_bDead;

void PerformUse(object actor) 
{
	if (g_bDead) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			HumanBarter(actor);
		return;
	}
}

maintask TWander : TWandererBase
{
	bool GetFollowRunMode(void) {return true;}

	object FindPathTo(Vector vDestPosition) {
		object path;
		@FindPathTo(path, vDestPosition, 1, 1);
		return path;
	}
}

void PerformInit() 
{
	g_bDead = false;
}

bool citProcessPlayerDamage(object player, object actor, bool bEnemy)
{
	if (!HasProperty(actor, "class"))
		return false;
	string strClass;
	actor->GetProperty("class", strClass);
	return strClass == "butcher" || strClass == "morlok";
}

void citHandleDeath(object actor)
{
	if (IsPlayerActor(actor)) {
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
		GenerateBoinyMorlokItems();
	}
	
	AddOrgans();
	
	g_bDead = true;
	@SetRTEnvelope(50, 40);
}