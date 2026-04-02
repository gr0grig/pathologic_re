include std.sci
include attack_melee.sci
include death_base.sci
include item_base.sci
include pdamage_classes.sci

// CONSTANTS
const float c_fReputationLevel = 0.33;
const float c_fLooseDistance = 3000;
const float c_fAttackDistance = 150;
const float c_fLongAttackDistance = 300;
const float c_fForceJumpProbability = 0.4;
const float c_fEvadeProbability = 0.75;
const float c_fFalseAttackProbability = 0.25;
const float c_fHuntPerceptionIncrease = 1.5;
const float c_fHuntFOVIncrease = 1.8;
const float c_fAttackNoticeDist = 400;
const int c_iHuntTime = 15;
const float c_fAttackRepChange = -0.07;
const float c_fDeathRepChange = -0.13;
// CONSTANTS

var object g_Enemies;

void InitGlobals(void)
{
	g_Enemies = CreateObjectSet();
}

void PatrolTrade(object actor)
{
	if (!SetTradeCamera(actor))
		return;
			
	TTrade{actor};
	UnsetTradeCamera(actor);
}

bool FilterHearNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleHearNormal(object actor)
{
	PerformAttack(actor);
}

bool FilterSeeNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleSeeNormal(object actor)
{
	PerformAttack(actor);
}

void PerformAttack(object actor)
{
	TAttack{actor, true};
	@ResetAAS();
}

void HandleAttackBase(object actor)
{
	if (actor == null)
		return;
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (!bInEnemySet) {
		g_Enemies->add(actor);
	}
	if (IsPlayerActor(actor))
		@ReportReputationChange(actor, self(), c_fAttackRepChange);
}

void HandleAttack(object actor)
{
	HandleAttackBase(actor);
	TAttack{actor, true};
	@ResetAAS();
}

void HandleDeath(object actor)
{
	if (IsPlayerActor(actor))
		@ReportReputationChange(actor, self(), c_fDeathRepChange, true);
	TDeath{actor};
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

void OnMessage(object actor, string strMessage) {
	if (strMessage == "prc") {
		@ResetAAS();
	}
}

void OnDeath(object actor)
{
	HandleDeath(actor);
}

bool FilterPlayerDamage(object player, object actor, bool bEnemy)
{
	if (LawEnforcerClass(actor, !bEnemy)) {
		bool bCanSee;
		@CanSee(bCanSee, player);
		if (bCanSee || GetActorDistanceSqr(player) <= c_fAttackNoticeDist * c_fAttackNoticeDist) {
			return true;
		}
	}
	return false;
}

task TFollowAttackMeleePatrol : TFollowAttackMeleeBase
{
	void OnAttacked(object actor) {
		HandleAttackBase(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		FilterPlayerDamage(player, actor, bEnemy);
	}
}

task TAttackPatrol : TAttackMeleeBase
{
	void init(object actor, bool bPrepare) {
		super.init(actor, bPrepare, c_fAttackDistance + 30);
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}

	void OnAttacked(object actor) {
		HandleAttackBase(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		FilterPlayerDamage(player, actor, bEnemy);
	}
}

task TDeathPatrol : TDeathDirUsableBase
{
	void init(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			GeneratePatrolItems();
		}
		else {
			GenerateDeadPatrolItems();
		}
		
		AddOrgans();

		super.init(actor);
	}
}
