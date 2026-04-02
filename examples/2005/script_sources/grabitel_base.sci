include std.sci
include wanderer_base.sci
include follow.sci
include idle.sci
include grabitel_attack.sci
include pdamage_classes.sci

// CONSTANTS
const float c_fReputationLevel = 0.33;
const float c_fAttackReactDist = 1000;
const float c_fAttackNoticeDist = 700;
const float c_fDeathRepChange = 0.05;
const float c_fShadowBrightness = 0.2;
const int c_iCampTime = 5;
// CONSTANTS

const int c_iUpdateWalkModeTimer = 130;
const float c_fUpdateWalkModeFreq = 0.3;

var object g_Enemies;

void InitGlobals(void)
{
	g_Enemies = CreateObjectSet();
}

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
		return fReputation >= c_fReputationLevel;
	}
	if (!HasProperty(actor, "class"))
		return false;
	string strClass;
	actor->GetProperty("class", strClass);
	return IsCommonClass(strClass);
}

bool FilterHearNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleHearNormal(object actor)
{
	if (TAttack{actor})
		TSearch{actor};
	@ResetAAS();
}

bool FilterSeeNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleSeeNormal(object actor)
{
	if (TAttack{actor})
		TSearch{actor};
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
}

void HandleAttack(object actor)
{
	HandleAttackBase(actor);
	if (!IsAccessible(actor))
		return;
	if (TAttack{actor})
		TSearch{actor};
	@ResetAAS();
}

bool FilterPlayerDamage(object player, object actor)
{
	if (EgoistClass(actor)) {
		bool bCanSee;
		@CanSee(bCanSee, player);
		float fActorDistSqr = GetActorDistanceSqr(player);
		if (fActorDistSqr <= c_fAttackReactDist * c_fAttackReactDist && (bCanSee || fActorDistSqr <= c_fAttackNoticeDist * c_fAttackNoticeDist)) {
			return true;
		}
	}
	return false;
}

void HandleDeath(object actor)
{
	if (IsPlayerActor(actor)) {
		PlayerModReputation(actor, c_fDeathRepChange);
	}
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

void OnDeath(object actor)
{
	HandleDeath(actor);
}

maintask TGrabitel : TWanderBase
{
	var bool m_bInShadow;
	
	void init(void) {
		InitGlobals();

		m_bInShadow = false;
		for (;;) {
			@SetTimer(c_iUpdateWalkModeTimer, c_fUpdateWalkModeFreq);
			super.init();
		}
	}
	
	void CancelActivity(void) {
		super.CancelActivity();
		@KillTimer(c_iUpdateWalkModeTimer);
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnTimer(int id) {
		if (id != c_iUpdateWalkModeTimer)
			return;
		bool bInWalk;
		@IsInWalkMode(bInWalk);
		if (bInWalk) {
			float fBrightness;
			@GetBrightness(fBrightness);
			bool bShadow = (fBrightness <= c_fShadowBrightness);
			if (bShadow != m_bInShadow) {
				m_bInShadow = bShadow;
				if (bShadow) {
					CancelActivityAndKP();
					@KillTimer(c_iUpdateWalkModeTimer);
					if (TCamp{})
						super.CancelActivity();
					else
						@SetTimer(c_iUpdateWalkModeTimer, c_fUpdateWalkModeFreq);
				}
			}
		}
	}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			HandleHearNormal(actor);
		}
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}
}

task TIdle : TIdleBase
{
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			HandleHearNormal(actor);
		}
	}

	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}
}

task TCamp
{
	bool init(void) {
		bool bSuccess;
		@Sleep(c_iCampTime, bSuccess);
		return !bSuccess;
	}
	
	void CancelActivity(void) {
		@StopGroup0();
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
			CancelActivity();
			HandleHearNormal(actor);
		}
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}
}

task TSearch : TFollowBase
{
	var bool m_bFollowing;

	void init(object actor) {
		m_bFollowing = false;
		bool bSuccess;
		@Sleep(1, bSuccess);
		if (!bSuccess)
			return;
		m_bFollowing = true;
		if (!super.init(actor, 200, 2000, true, true))
			return;
		m_bFollowing = false;
		@Face(actor);
		@WaitForAnimEnd(bSuccess);
		if (!bSuccess) {
			@StopAsync();
			return;
		}
		@PlayAnimation("all", "hunt");
		@WaitForAnimEnd(bSuccess);
		@StopAsync();
		if (!bSuccess) {
			return;
		}
	}

	bool ContinueFollow(object actor) {
		return IsAccessibleOrDead(actor);
	}
	
	void CancelActivity(void) {
		if (m_bFollowing) {
			super.CancelActivity();
		}
		else {
			@StopGroup0();
			@StopAnimation();
			@StopAsync();
		}
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}
}

task TAttack : TAttackBase
{
	bool init(object actor) {
		if (IsPlayerActor(actor))
			@SendPlayerEnemy(actor, self());
		return super.init(actor);
	}
}
