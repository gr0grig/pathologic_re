include std.sci
include stationary_base.sci
include patrol_base.sci
include NPC_Patrol.sci
include dialogs.sci
include item_base.sci

// CONSTANTS
const float c_fDiseaseNoticeDist = 700;
// CONSTANTS

const float c_fResetFreq = 2;
const int c_iResetTimerID = 1;

bool IsEnemy(object actor)
{
	if (!IsAccessible(actor))
		return false;
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (bInEnemySet)
		return true;
	if (IsPlayerActor(actor)) {
		float fReputation;
		actor->GetProperty("reputation", fReputation);
		return fReputation < c_fReputationLevel;
	}
	if (HasProperty(actor, "class")) {
		string strClass;
		actor->GetProperty("class", strClass);
		if (strClass == "bomber" || strClass == "hunter" || strClass == "grabitel")
			return true;
		if (IsCommonClass(strClass) && HasProperty(actor, "disease")) {
			float fDisease;
			actor->GetProperty("disease", fDisease);
			return fDisease > 0 && GetActorDistanceSqr(actor) <= c_fDiseaseNoticeDist * c_fDiseaseNoticeDist;
		}
	}
	return false;
}

maintask TStationary : TStationaryBase
{
	void init(void) {
		InitGlobals();
		GeneratePatrolTradeItems();
		super.init();
	}
	
	void OnTimer(int id) {
		if (id == c_iResetTimerID) {
			@ResetAAS();
		}
	}

	void CancelActivity(void) {
		@KillTimer(c_iResetTimerID);
		super.CancelActivity();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	void OnUse(object actor) {
		if (IsEnemy(actor))
			return;
		CancelActivity();
		if (1000 == TDlg_Ct_Patrol_Stat{actor}) {
			PatrolTrade(actor);
		}
	}

	void OnResumeActivity(void) {
		@SetTimer(c_iResetTimerID, c_fResetFreq);
	}

	void DoSomething(void) {}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}

	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			if (IsPlayerActor(actor)) {
				THunt{actor};
			}
			else {
				HandleHearNormal(actor);
			}
		}
	}

	void OnAttacked(object actor) {
		if (!IsAccessible(actor)) {
			HandleAttackBase(actor);
			return;
		}
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor, bEnemy)) {
			OnAttacked(player);
		}
	}
}

task TFollowAttackMelee : TFollowAttackMeleePatrol
{
}

task TAttack : TAttackPatrol
{
}

task TDeath : TDeathPatrol
{
	void init(object actor) {
		if (IsPlayerActor(actor)) {
			object scene;
			@GetScene(scene);
			scene->RemoveStationaryActor(self());
		}
		super.init(actor);
	}
}

task THunt
{
	void init(object actor) {
		RotateAsyncToActor(actor);
		@PlayAnimation("all", "hunt");
		@WaitForAnimEnd();
	}
	
	void CancelActivity(void) {
		@StopAnimation();
		@StopAsync();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}

	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			if (IsPlayerActor(actor)) {
				return;
			}
			CancelActivity();
			HandleHearNormal(actor);
		}
	}

	void OnAttacked(object actor) {
		if (!IsAccessible(actor)) {
			HandleAttackBase(actor);
			return;
		}
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor, bEnemy)) {
			OnAttacked(player);
		}
	}
}