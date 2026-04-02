include std.sci
include follow.sci
include follow_attack.sci
include item_base.sci
include pdamage_classes.sci

// CONSTANTS
const float c_fCleanBodyRate = 0.04;
const float c_fDamageAmount = 0.1;
const float c_fFireAmount = 0.1;
const float c_fFireAmountCorpse = c_fFireAmount;
const float c_fRetreatDistance = 300;
const float c_fPursuitDistance = 700;
const float c_fAttackNoticeDist = 700;
const float c_fAttackRepChange = -0.07;
const float c_fDeathRepChange = -0.13;
// CONSTANTS

const float c_fNormalFlameLength = 0.05;
const float c_fNearAttackAngle = asin(50.0 / (50.0 + 300.0));
const int c_iAttackTimer = 70;
const int c_iCleanseTimer = 71;

var object g_Flame;
var object g_FlameSound;
var float g_fAttackFlameLength;
var bool g_bFlameAttackState;
var object g_Enemies;

void InitGlobals(void)
{
	g_Enemies = CreateObjectSet();

	float fAttackDist;
	@GetAttackDistance(fAttackDist);
	g_fAttackFlameLength = fAttackDist / c_fMaxFlameLength;

	object scene;
	@GetScene(scene);
	object flame;
	@AddActorByType(flame, "flame", scene, [0, 0, 0]);
	flame->Attach(self(), "flame");
	g_bFlameAttackState = false;
	flame->SetLength(c_fNormalFlameLength);
	g_Flame = flame;

	@SetTimer(c_iAttackTimer, 0.1);
}

void SetFlameLength(bool bAttack)
{
	float fLength = (bAttack)? g_fAttackFlameLength : c_fNormalFlameLength;
	float fActualLength;
	g_Flame->GetLength(fActualLength);
	if (fLength < fActualLength) {
		fActualLength = fLength;
	}
	g_Flame->SetLength(fActualLength);
	
	if (g_bFlameAttackState != bAttack) {
		if (bAttack) {
			if (g_FlameSound == null) {
				object sound;
				Vector vSource = [0, 0, 0];
				float fHeight;
				@GetHeight(fHeight);
				vSource.y = fHeight;
				@PlayLoopedGlobalSound(sound, "flame_loop", vSource, 0, 200);
				g_FlameSound = sound;
			}
			g_FlameSound->FadeIn(2);
		}
		else {
			if (g_FlameSound != null) {
				g_FlameSound->FadeOut(2);
			}
		}
		g_bFlameAttackState = bAttack;
	}
}

void PlayAttackAnimationByPos(Vector vPosition)
{
	Vector vCurPosition;
	@GetPosition(vCurPosition); 
	float fHeight;
	@GetHeight(fHeight);
	vCurPosition.y += fHeight / 2;
	Vector vDelta = vPosition - vCurPosition;
	float fDist = sqrt(vDelta | vDelta);
	bool bNear;
	if (fDist < 50) {
		bNear = false;
	}
	else {
		bNear = (vDelta.y / fDist < -sin(c_fNearAttackAngle));
	}
	@PlayAnimation("all", (bNear)? "cattack" : "attack");
}

void PlayAttackAnimation(object actor)
{
	Vector vPosition;
	actor->GetPosition(vPosition);
	if (actor->FuncExist("@GetHeight", 1)) {
		float fHeight;
		actor->GetHeight(fHeight);
		vPosition.y += fHeight / 2;
	}
	PlayAttackAnimationByPos(vPosition);
}

bool IsEnemyStd(object actor)
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
		if (fReputation < 0.33)
			return true;
		float fDisease;
		actor->GetProperty("disease", fDisease);
		return fDisease > 0.33;
	}
	if (!HasProperty(actor, "class"))
		return false;
	string strClass;
	actor->GetProperty("class", strClass);
	if (strClass == "bomber" || strClass == "hunter" || strClass == "grabitel" || strClass == "rat_big")
		return true;
	if (!HasProperty(actor, "disease"))
		return false;
	if (IsCommonClass(strClass) || strClass == "dog") {
		float fDisease;
		actor->GetProperty("disease", fDisease);
		return fDisease > 0;
	}
	return false;
}

void DoAttack(object actor)
{
	actor = TAttack{actor};
	@ResetAAS();

	if (IsAccessibleOrDead(actor) && IsDead(actor)) {
		TCleanBody{actor};
		@ResetAAS();
	}
}

bool FilterSeeNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleSeeNormal(object actor)
{
	DoAttack(actor);
}

bool FilterHearNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleHearNormal(object actor)
{
	DoAttack(actor);
}

bool FilterSeeDiseased(object actor)
{
	if (actor == null || !IsDead(actor) || !HasProperty(actor, "disease"))
		return false;
	float fDisease;
	actor->GetProperty("disease", fDisease);
	return fDisease > 0;
}

void HandleSeeDiseased(object actor)
{
	TCleanBody{actor};
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

	if (IsPlayerActor(actor)) {
		@ReportReputationChange(actor, self(), c_fAttackRepChange);
	}
}

void HandleAttack(object actor)
{
	HandleAttackBase(actor);

	DoAttack(actor);
}

void HandleDeath(object actor)
{
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

void HandleTimer(int id)
{
	if (id != c_iAttackTimer)
		return;
	if (g_Flame == null)
		return;
	object pActorList;
	float fDist;
	g_Flame->Intersect(pActorList, fDist);
	g_Flame->SetLength((g_bFlameAttackState)? minf(fDist, g_fAttackFlameLength) : c_fNormalFlameLength);
	BroadcastBattle();
	
	object pActor;
	bool bMore;
	while (pActorList->Next(bMore, pActor), bMore) {
		if (pActor != null && pActor != self()) {
			float fDamage = Damage(pActor, c_fDamageAmount, c_iDamageTypeFire);
			
			if (HasProperty(pActor, "disease")) {
				float fDisease;
				pActor->GetProperty("disease", fDisease);
				if (fDisease <= c_fCleanBodyRate) {
					fDisease = 0;
				}
				else {
					fDisease -= c_fCleanBodyRate;
				}
				pActor->SetProperty("disease", fDisease);
			}
			
			if (HasProperty(pActor, "fire")) {
				float fFire;
				pActor->GetProperty("fire", fFire);
				pActor->SetProperty("fire", fFire + c_fFireAmount);
			}
		}
	}
}

task TAttackSanitar
{
	var object m_Victim;
	
	object init(object actor) {
		m_Victim = actor;
		@Face(actor);

		@SetAttackState(true);
		bool bAttacking = false;

		while (IsEnemy(m_Victim)) {
			PlayAttackMusic(m_Victim);

			@ReportAttack(m_Victim);

			float fDist2 = GetActorDistanceSqr(m_Victim);
			if (fDist2 <= c_fRetreatDistance * c_fRetreatDistance) {
				if (!bAttacking) {
					@SetAttackState(true);
					SetFlameLength(true);
					@PlayAnimation("all", "attack_on");
					bAttacking = true;
				}
				else {
					@PlayAnimation("all", "bjump");
				}
			}
			else if (fDist2 >= c_fPursuitDistance * c_fPursuitDistance) {
				if (bAttacking) {
					@SetAttackState(false);
					SetFlameLength(false);
					@PlayAnimation("all", "attack_off");
					bAttacking = false;
				}
				else {
					@StopAsync();
					object NewVictim = TAttackFollow{m_Victim};
					m_Victim = NewVictim;
					if (m_Victim == null)
						break;
					@Face(m_Victim);
				}
			}
			else {
				if (!bAttacking) {
					@SetAttackState(true);
					SetFlameLength(true);
					@PlayAnimation("all", "attack_on");
					bAttacking = true;
				}
				else {
					PlayAttackAnimation(m_Victim);
				}
			}
			@WaitForAnimEnd();
		}

		@SetAttackState(false);

		@PlayAnimation("all", "attack_off");

		SetFlameLength(false);
		@StopAsync();
		
		return m_Victim;
	}
	
	void OnAttacked(object actor) {
		HandleAttackBase(actor);
		if (actor != null) {
			m_Victim = actor;
			@Face(m_Victim);
		}
	}

	void OnTimer(int id) {
		HandleTimer(id);
	}
}

task TDeathSanitar : TDeathDirUsableBase
{
	void init(object actor) {
		@KillTimer(c_iAttackTimer);
		SetFlameLength(false);
		@RemoveActor(g_Flame);

		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			GenerateSanitarItems();
		}
		
		AddOrgans();
		super.init(actor);
	}
}

task TCleanBodySanitar
{
	var object m_Body;
	var object m_Fire;

	void init(object actor) {
		if (!HasProperty(actor, "disease"))
			return;
		
		if (!TCleanBodyFollow{actor})
			return;

		@Face(actor);
		
		bool bSuccess;
		@WaitForAnimEnd(bSuccess);
		if (bSuccess) {
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd(bSuccess);
			if (bSuccess) {
				SetFlameLength(true);
				@SetTimer(c_iCleanseTimer, 1);
				for (;;) {
					if (!m_Body && !HasProperty(actor, "cleansed")) {
						actor->SetProperty("cleansed", true);
						m_Body = actor;
						object scene;
						@GetScene(scene);
						Vector vPos;
						actor->GetPosition(vPos);
						@AddActorByType(m_Fire, "scripted", scene, vPos, [0, 0, 1], "corpse_fire.xml");
					}
					@PlayAnimation("all", "cattack");
					@WaitForAnimEnd(bSuccess);
					if (!bSuccess || !IsAccessibleOrDead(actor))
						break;

					float fCurDisease;
					actor->GetProperty("disease", fCurDisease);
					if (fCurDisease <= c_fCleanBodyRate) {
						actor->SetProperty("disease", 0.0);
						break;
					}
					actor->SetProperty("disease", fCurDisease - c_fCleanBodyRate);
				}
				@KillTimer(c_iCleanseTimer);
				SetFlameLength(false);
				if (m_Body) {
					m_Body->RemoveProperty("cleansed");
					m_Body = null;
				}
				
				if (bSuccess) {
					@PlayAnimation("all", "attack_off");
					@WaitForAnimEnd();
				}
			}
		}
		
		@StopAsync();
	}
	
	void OnDispose(void) {
		if (m_Body) {
			m_Body->RemoveProperty("cleansed");
		}
	}
	
	void CancelActivity(void) {
		if (m_Body) {
			m_Body->RemoveProperty("cleansed");
		}
		@KillTimer(c_iCleanseTimer);
		SetFlameLength(false);
		@Stop();
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

	void OnTimer(int id) {
		if (id == c_iCleanseTimer) {
			if (m_Fire)
				@Trigger(m_Fire, "continue");
		}
		else HandleTimer(id);
	}
}

task TCleanBodyFollow : TFollowBase
{
	bool init(object actor) {
		return super.init(actor, 350, 5000, false, true);
	}

	bool ContinueFollow(object actor) {
		return IsAccessibleOrDead(actor);
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
		if (!IsAccessible(actor)) {
			HandleAttackBase(actor);
			return;
		}
		CancelActivity();
		HandleAttack(actor);
	}

	void OnTimer(int id) {
		super.OnTimer(id);
		HandleTimer(id);
	}
}

task TAttackFollow : TFollowAttackBase
{
	var object m_NewVictim;

	object init(object actor) {
		m_NewVictim = actor;
		if (!super.init(actor, (c_fRetreatDistance + c_fPursuitDistance) / 2, 5000, false, true))
			m_NewVictim = null;
		return m_NewVictim;
	}

	void OnAttacked(object actor) {
		if (!IsAccessible(actor))
			return;
		m_NewVictim = actor;
		CancelActivity();
	}

	void OnTimer(int id) {
		super.OnTimer(id);
		HandleTimer(id);
	}
}
