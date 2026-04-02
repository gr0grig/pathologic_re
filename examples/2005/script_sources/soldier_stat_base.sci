include std.sci
include stationary_base.sci
include soldier_base.sci
include pdamage_classes.sci

// CONSTANTS
const float c_fDamageAmount = 1.5;
const float c_fLooseTrackTime = 3;
const float c_fCloseDistance = 200;
const float c_fCloseAttackDistance = 100;
const float c_fShootingConeAngle = 2 * PI / 180;
const float c_fAttackNoticeDist = 700;
// CONSTANTS

const int c_iLooseTrackTimer = 100;

var object g_Enemies;

void InitGlobals(void)
{
	g_Enemies = CreateObjectSet();
}

void DoAttack(object actor, bool bPrepare)
{
	TAttack{actor, bPrepare};
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
	
	DoAttack(actor, true);	
}

void HandleSeeNormalStd(object actor)
{
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (bInEnemySet) {
		DoAttack(actor, true);
	}
	else {
		THandleIntruder{actor};
		@ResetAAS();
	}
}

bool IsTooClose(object actor)
{
	return GetActorDistanceSqr(actor) <= c_fCloseDistance * c_fCloseDistance;
}

bool IsTarget(object actor)
{
	if (!IsAccessible(actor))
		return false;
	if (IsPlayerActor(actor)) {
		float fReputation;
		actor->GetProperty("reputation", fReputation);
		return fReputation < 0.33;
	}
	if (!HasProperty(actor, "class"))
		return false;
	string strClass;
	actor->GetProperty("class", strClass);
	if (strClass == "bomber" || strClass == "hunter" || strClass == "grabitel")
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

bool FilterSeeNormal(object actor)
{
	if (!IsAccessible(actor))
		return false;
	bool bInEnemySet;
	g_Enemies->in(bInEnemySet, actor);
	if (bInEnemySet)
		return true;
	return IsTarget(actor);
}

void HandleSeeTrackSource(object actor)
{
	HandleSeeNormal(actor);
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

task TSoldierBase : TStationaryBase
{
	void init(void) {
		InitGlobals();
		for (;;) {
			super.init();
		}
	}

	void DoSomething(void) {}

	void OnHear(object actor) {
		if (!IsAccessible(actor))
			return;
		if (!IsTarget(actor)) {
			bool bInEnemySet;
			g_Enemies->in(bInEnemySet, actor);
			if (!bInEnemySet)
				return;
		}
		CancelActivity();
		TTrackSoundSource{actor};
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
	
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
}

task TSoldierBaseAttack : TSoldierBase
{
	void init(object actor) {
		InitGlobals();
		super.OnAttacked(actor);
		for (;;) {
			super.init();
		}
	}
}

task TTrackSoundSource
{
	var object m_Source;

	void init(object actor) {
		m_Source = actor;
		@Face(actor);
		for (;;) {
			bool bSuccess;
			@Sleep(0.5, bSuccess);
			if (!bSuccess || !IsAccessible(m_Source))
				break;
		}
		@StopAsync();
	}
	
	void CancelActivity(void) {
		@StopAsync();
		@KillTimer(c_iLooseTrackTimer);
		@StopGroup0();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	void OnHear(object actor) {
		if (actor == m_Source) {
			@KillTimer(c_iLooseTrackTimer);
			@Face(m_Source);
		}
	}

	void OnStopHear(object actor) {
		if (actor == m_Source) {
			@SetTimer(c_iLooseTrackTimer, c_fLooseTrackTime);
			RotateAsyncToActor(m_Source);
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
	
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeTrackSource(actor);
		}
	}
	
	void OnTimer(int id) {
		if (id != c_iLooseTrackTimer)
			return;
		@KillTimer(c_iLooseTrackTimer);
		@StopGroup0();
	}
}

task THandleIntruder
{
	var object m_Intruder;
	var bool m_bCanSee;
	
	void init(object actor) {
		m_Intruder = actor;
		PlayAttackMusic(m_Intruder);

		@CanSee(m_bCanSee, m_Intruder);
		if (m_bCanSee) {
			if (IsTooClose(m_Intruder)) {
				DoAttack(m_Intruder, true);
				return;
			}
			@Face(m_Intruder);
		}
		BroadcastBattle();
		@PlayAnimation("all", "shoot_begin");
		bool bSuccess;
		@WaitForAnimEnd(bSuccess);
		if (!bSuccess) {
			@StopAsync();
			return;
		}
		@Speak("shot");
		@PlayAnimation("all", "shoot_end");
		@WaitForAnimEnd(bSuccess);
		if (!bSuccess) {
			@StopAsync();
			return;
		}
		@LockAnimationEnd("all", "shoot_end");
		
		int iCantSeeIteration = 0;
		for (int i = 0; i < 20; ++i) {
			PlayAttackMusic(m_Intruder);
			@Sleep(0.5, bSuccess);
			if (!bSuccess) return;
			@CanSee(m_bCanSee, m_Intruder);
			if (m_bCanSee) {
				iCantSeeIteration = 0;
				if (IsTooClose(m_Intruder)) {
					CancelActivity();
					DoAttack(m_Intruder, false);
					return;
				}
				@Face(m_Intruder);
			}
			else {
				@StopAsync();
				if (++iCantSeeIteration == 4) {
					@PlayAnimation("all", "attack_off");
					@WaitForAnimEnd();
					return;
				}
			}
		}
		CancelActivity();
		DoAttack(actor, false);
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

	void CancelActivity(void) {
		@StopAsync();
		@StopGroup0();
		@Stop();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
}

task TAttack
{
	var object m_Target;
	var object m_NewTarget;
	var bool m_bSeeking;
	
	void init(object actor, bool bPrepare) {
		m_Target = actor;
		PlayAttackMusic(m_Target);
		
		BroadcastBattle();
		@Face(m_Target);
		bool bSuccess;
		if (bPrepare) {
			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd();
		}
		@LockAnimationEnd("all", "attack_on");
		@SetAttackState(true);
		while (IsAccessible(m_Target)) {
			bool bCanSee;
			@CanSee(bCanSee, m_Target);
			if (bCanSee) {
				PlayAttackMusic(m_Target);
				PerformAttack();
			}
			else {
				RotateAsyncToActor(m_Target);
				m_bSeeking = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(bSuccess);
				if (!bSuccess) {
					if (m_NewTarget != null) {
						ChangeTarget();
					}
					@LockAnimationEnd("all", "attack_on");
					continue;
				}
				if (!IsAccessible(m_Target))
					break;
				@CanSee(bCanSee, m_Target);
				if (bCanSee) {
					m_bSeeking = false;
					@Face(m_Target);
					PerformAttack();
				}
				else {
					@LockAnimationEnd("all", "attack_on");
					@Sleep(3, bSuccess);
					if (!bSuccess) {
						if (m_NewTarget != null) {
							ChangeTarget();
						}
						@LockAnimationEnd("all", "attack_on");
						continue;
					}
					if (!IsAccessible(m_Target))
						break;
					m_bSeeking = false;
					@CanSee(bCanSee, m_Target);
					if (bCanSee) {
						@Face(m_Target);
						PerformAttack();
					}
					else {
						break;
					}
				}
			}
			if (m_NewTarget != null) {
				ChangeTarget();
			}
			else {
				@Sleep(2);
			}
		}
		@SetAttackState(false);
		@StopAsync();
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	
	void OnHear(object actor) {
		if (m_bSeeking && actor == m_Target) {
			RotateAsyncToActor(m_Target);
		}
	}
	
	void OnSee(object actor) {
		if (m_bSeeking && actor == m_Target) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}
	
	void ChangeTarget(void) {
		m_Target = m_NewTarget;
		m_NewTarget = null;
		@Face(m_Target);
	}
	
	void PerformAttack(void) {
		PlayAttackMusic(m_Target);
		@ReportAttack(m_Target);
		if (IsPlayerActor(m_Target))
			@SendPlayerEnemy(m_Target, self());
			
		Vector vCurDir;
		@GetDirection(vCurDir);
		Vector vTargetDir;
		vTargetDir = GetActorDelta(m_Target);

		if (CosAngle2D(vCurDir, vTargetDir) < cos(c_fShootingConeAngle))
			return;
		
		BroadcastBattle();
		@PlayAnimation("all", "attack_begin1");
		
		// airat		
		bool bFound;
		Vector vLPos, vLDir;
		@GetGeometryLocator("attack", bFound, vLPos, vLDir);
		if (bFound) {
			object actor, scene;
			@GetScene(scene);
			@AddActorByType(actor, "light-dynamic", scene, vLPos, vLDir, "soldier_fire.xml");
		}
		else
		// end airat
				
		@WaitForAnimEnd();

		@Speak("shot");

		@GetDirection(vCurDir);
		vTargetDir = GetActorDelta(m_Target);

		vTargetDir.y += GetEyesHeightDelta(m_Target);
		Vector vDir;
		@RandVecCone3D(vDir, vTargetDir, c_fShootingConeAngle);
		object victim;
		int iMaterial;
		Vector vRPos;
		@GetVictimMaterial(vDir, victim, iMaterial, vRPos);
		if (victim != null) {
			if (victim == m_Target) {
				float fDamage = Damage(m_Target, c_fDamageAmount, c_iDamageTypeBullet);
				@ReportHit(m_Target, c_iHitTypeBullet, fDamage, c_fDamageAmount);
			}
			else if (iMaterial != -1) {
				object scene;
				@GetScene(scene);
				object ricochet;
				@AddActorByType(ricochet, "scripted", scene, vRPos, [0, 0, 1], "richochet.xml");
				ricochet->SetScriptProperty("Material", iMaterial);
			}
		}
		
		@PlayAnimation("all", "attack_end1");
		@WaitForAnimEnd();
		@LockAnimationEnd("all", "attack_on");
	}

	void OnAttacked(object actor) {
		if (!IsAccessible(actor))
			return;
		HandleAttackBase(actor);
		if (actor == m_Target) {
			m_NewTarget = null;
		}
		else {
			m_NewTarget = actor;
			if (m_bSeeking) {
				@StopAnimation();
				@StopGroup0();
			}
		}
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor, bEnemy)) {
			OnAttacked(player);
		}
	}
}
