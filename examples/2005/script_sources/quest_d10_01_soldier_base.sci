include std.sci
include soldier_stat_base.sci

const float c_fAttackRepChange = 0.0;
const float c_fDeathRepChange = 0.0;

void HandleSeeNormal(object actor)
{
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (bInEnemySet) {
		DoAttack(actor, true);
	}
}

void OnUnload(void)
{
	@RemoveActor(self());
	@Hold();
}

task TQuestSoldierBase : TSoldierBase
{
	void OnUse(object actor) {
		bool bInEnemySet;
		g_Enemies->in(bInEnemySet, actor);
		if (!bInEnemySet) {
			DoDialog(actor);
		}
	}

	void OnTrigger(string name) {
		if (name == "attack") {
			object player = GetPlayerActor();
			CancelActivity();
			HandleAttack(player);
		}
	}
	
	void OnAttacked(object actor) {
		TriggerActor("quest_d10_01", "soldier_fight");
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {}

	void OnUnload(void) {
		CancelActivity();
		TWaitForLoad{};
	}

	void OnHear(object actor) {
		if (!IsAccessible(actor))
			return;
		bool bInEnemySet;
		g_Enemies->in(bInEnemySet, actor);
		if (bInEnemySet) {
			CancelActivity();
			TTrackSoundSource{actor};
		}
	}

	// void DoDialog(object actor) = 0
}

void HandleDeath(object actor)
{
	HandleDeathBase(actor);
}
