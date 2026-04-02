include std.sci
include idle.sci
include follow.sci
include retreat.sci
include death_base.sci
include patrol_enemy_attack_melee.sci

const int c_iStateWaitForLoad	= 0;
const int c_iStateHeatHands		= 1;
const int c_iStateIdle			= 2;
const int c_iStatePatrol		= 3;
const int c_iStateAware			= 4;
const int c_iStateSearchEnemy	= 5;
const int c_iStateHearEnemy		= 6;
const int c_iStateAttack		= 7;

const float c_fFollowDist			= 350;
const float c_fHelpDist				= 2000;
const float c_fShotDist				= 3500;
const float c_fShotKnowDist			= 600;
const float c_fAttackDistance		= 150;
const float c_fLongAttackDistance	= 300;
const float c_fLooseDistance		= 2000;
const float c_fForceJumpProbability = 0.4;
const float c_fEvadeProbability		= 0.75;

var bool g_bCleanup;

// timers
const int c_iAttackTimer		= 1;
const int c_iFollowAttackTimer	= 2;
const int c_iFollowTimer		= 3;

var int g_iBonefire, g_iPatrolPointsCount;
var int g_iState;
// memory
var int m_iWaitForLoadPrevState;
var object g_AwareCorpse, g_SearchEnemyActor, g_HearEnemy, g_AttackEnemy;

void OnTrigger(string name) {
	if (name == "cleanup")
		g_bCleanup = true;
}

bool MessageFilter(object actor, string strMessage)
{
	if (actor == self())
		return false;
		
	if (strMessage == "b9q03_corpse" + (g_iBonefire + 1)) {
		if (ChangeFSMStateToSearchEnemy(actor))
			return true;
	}
	else
	if (strMessage == "b9q03_helpme" + (g_iBonefire + 1)) {
		Vector vPos, vCurPos, vDiff;
		actor->GetPosition(vPos);
		@GetPosition(vCurPos);
		vDiff = vPos - vCurPos;
		float fDist2 = (vDiff | vDiff);
		if (fDist2 < c_fHelpDist * c_fHelpDist) {
			if (ChangeFSMStateToAttack(actor))
				return true;
		}
	}
	else
	if (strMessage == "player_shot") {
		Vector vPos, vCurPos, vDiff;
		actor->GetPosition(vPos);
		@GetPosition(vCurPos);
		vDiff = vPos - vCurPos;
		float fDist2 = (vDiff | vDiff);
		if (fDist2 < c_fShotKnowDist * c_fShotKnowDist) {
			if (ChangeFSMStateToAttack(actor))
				return true;		
		}
		if (fDist2 < c_fShotDist * c_fShotDist) {
			if (ChangeFSMStateToSearchEnemy(actor))
				return true;
		}
	}	
		
	return false;
}

bool SeeFilter(object actor) {
	if (actor->FuncExist("IsDead", 1) && IsDead(actor)) {
		if (HasProperty(actor, "b9q03_corpse"))
			return false;
			
		actor->SetProperty("b9q03_corpse", 1);
		return ChangeFSMStateToAware(actor);
	}
	else
	if (IsPlayerActor(actor)) {
		return ChangeFSMStateToAttack(actor);
	}
	else
	if (HasProperty(actor, "b9q03")) {
		return ChangeFSMStateToAttack(actor);
	}	
	return false;
}

bool HearFilter(object actor) {
	if (IsPlayerActor(actor)) {
		return ChangeFSMStateToHearEnemy(actor);
	}
	else
	if (HasProperty(actor, "b9q03")) {
		return ChangeFSMStateToHearEnemy(actor);
	}
	return false;
}

bool InitFSM(void) {
	object scene;
	@GetMainOutdoorScene(scene);
	
	Vector vCurPos, vPos, vDir;
	@GetPosition(vCurPos);
	
	bool bFound;
	float fMinDist = 2000 * 2000;
	int iMinIndex = 0;
	g_iBonefire = 1;
	
	while (true) {
		scene->GetLocator("pt_b9q03_bonfire" + g_iBonefire, bFound, vPos, vDir);
		if (!bFound)
			break;
		
		Vector vDiff = vCurPos - vPos;
		float fDist2 = (vDiff | vDiff);
		if (fDist2 < fMinDist) {
			fMinDist = fDist2;
			iMinIndex = g_iBonefire;
		}
		
		g_iBonefire++;
	}
	
	g_iBonefire = iMinIndex - 1;
	
	if (g_iBonefire == -1)
		return false;
		
	@Trace("Bonfire index: "  + (g_iBonefire + 1));
		
	g_iPatrolPointsCount = 0;
	while (true) {
		scene->GetLocator("pt_b9q03_bonfire" + (g_iBonefire + 1) + "_patrol" + (g_iPatrolPointsCount + 1), bFound, vPos, vDir);
		if (!bFound)
			break;
			
		g_iPatrolPointsCount++;
	}		
	
	@Trace("Bonfire pantrol point count: "  + g_iPatrolPointsCount);
	return true;
}

bool ChangeFSMState(int iState) {
	if (iState == g_iState)
		return false;
		
	if (iState == c_iStateWaitForLoad) {
		m_iWaitForLoadPrevState = g_iState;
		@Trace("changing state to c_iStateWaitForLoad");
	}
	else
	if (iState == c_iStateHeatHands) {
		@Trace("changing state to c_iStateHeatHands");
	}
	else 
	if (iState == c_iStateIdle) {
		@Trace("changing state to c_iStateIdle");
	}
	else
	if (iState == c_iStatePatrol) {
		@Trace("changing state to c_iStatePatrol");
	}
	else
		return false;
	
	g_iState = iState;
	return true;
}

bool ChangeFSMStateToAware(object corpse) {
	if (g_iState == c_iStateAware)
		return false;
		
	g_iState = c_iStateAware;
	@Trace("changing state to c_iStateAware");
	g_AwareCorpse = corpse;
	return true;
}

bool ChangeFSMStateToSearchEnemy(object follower) {
	if (g_iState == c_iStateSearchEnemy)
		return false;
		
	g_iState = c_iStateSearchEnemy;
	@Trace("changing state to c_iStateSearchEnemy");
	g_SearchEnemyActor = follower;
	return true;
}

bool ChangeFSMStateToHearEnemy(object enemy) {
	if (g_iState == c_iStateHearEnemy)
		return false;
		
	g_iState = c_iStateHearEnemy;
	@Trace("changing state to c_iStateHearEnemy");
	g_HearEnemy = enemy;
	return true;
}

bool ChangeFSMStateToAttack(object enemy) {
	if (g_iState == c_iStateAttack)
		return false;
		
	g_iState = c_iStateAttack;
	@Trace("changing state to c_iStateAttack");
	g_AttackEnemy = enemy;
	return true;
}

bool IsHandHeatLocked() {
	int iLocked;
	@GetVariable("b9q03HandHeatLock" + (g_iBonefire + 1), iLocked);
	return (iLocked != 0);
}

void LockHandHeat(bool bLock) {
	@SetVariable("b9q03HandHeatLock" + (g_iBonefire + 1), bLock ? 1 : 0);
}

bool IsPatrolLocked() {
	int iLocked;
	@GetVariable("b9q03PatrolLock" + (g_iBonefire + 1), iLocked);
	return (iLocked != 0);
}

void LockPatrol(bool bLock) {
	@SetVariable("b9q03PatrolLock" + (g_iBonefire + 1), bLock ? 1 : 0);
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

void OnDeath(object actor) {
	TDeath{actor};
}

maintask FSM_EnemyPatrol
{
	var Vector vInitialPos, vInitialDir;
	
	bool IsNearInitialPoint(void) {
		Vector vPos;
		@GetPosition(vPos);
		Vector vDiff = vPos - vInitialPos;
		float fDiff2 = vDiff | vDiff;
		return (fDiff2 < 200 * 200);
	}
	
	void init(void) {
		if (!InitFSM()) {
			@Trace("FSM Init failed");
			@RemoveActor(self());
			return;
		}
	
		@GetPosition(vInitialPos);
		@GetDirection(vInitialDir);
		
		g_iState = c_iStateWaitForLoad;
		m_iWaitForLoadPrevState = c_iStateIdle;
		
		while (true) {
			if (c_iStateWaitForLoad == g_iState) {
				TWaitLoading{};
				ChangeFSMState(c_iStateIdle);
			}
			else
			if (c_iStateAttack == g_iState) {
				TAttack{g_AttackEnemy};
				if (c_iStateAttack == g_iState) {
					THunt{1};
					if (c_iStateAttack == g_iState) {
						ChangeFSMState(c_iStateIdle);
					}
				}
			}
			else
			if (c_iStateHearEnemy == g_iState) {
				THunt{1};
				if (c_iStateHearEnemy == g_iState) {
					TFollow{g_HearEnemy, 8};
					if (c_iStateHearEnemy == g_iState) {
						THunt{1};
						if (c_iStateHearEnemy == g_iState) {
							ChangeFSMState(c_iStateIdle);
						}
					}
				}
			}
			else
			if (c_iStateHeatHands == g_iState) {
				LockHandHeat(true);
				TGotoBonfire{};
				if (c_iStateHeatHands == g_iState) {
					TIdle{};
					if (c_iStateHeatHands == g_iState) {
						TGotoPoint{vInitialPos, vInitialDir, false};
						if (c_iStateHeatHands == g_iState) {
							ChangeFSMState(c_iStateIdle);
						}
					}
				}
				LockHandHeat(false);
			}
			else if (c_iStateIdle == g_iState) {
				if (!IsNearInitialPoint())
					TGotoPoint{vInitialPos, vInitialDir, false};
					
				if (c_iStateIdle == g_iState) {
					TIdle{};
					if (c_iStateIdle == g_iState) {
						if (!IsPatrolLocked())
							ChangeFSMState(c_iStatePatrol);
						else
						if (rndbool(0.5)) {
							if (!IsHandHeatLocked()) {
								ChangeFSMState(c_iStateHeatHands);
							}
						}
					}
				}
			}
			else
			if (c_iStatePatrol == g_iState) {
				LockPatrol(true);
				object scene;
				@GetMainOutdoorScene(scene);
				int iStart; 
				@irand(iStart, g_iPatrolPointsCount);
				bool bDir = rndbool(0.5);
				
				for (int i = 0; i < g_iPatrolPointsCount; ++i) {
					bool bFound;
					Vector vPos, vDir;
					int iIndex;
					iIndex = (i + iStart) % g_iPatrolPointsCount;
					if (bDir)
						iIndex = g_iPatrolPointsCount - 1 - iIndex;
					scene->GetLocator("pt_b9q03_bonfire" + (g_iBonefire + 1) + "_patrol" + (iIndex + 1), bFound, vPos, vDir);
					TGotoPoint{vPos, vDir, false};
					if (c_iStatePatrol != g_iState)
						break;
					THunt{1};
					if (c_iStatePatrol != g_iState)
						break;
				}
				if (c_iStatePatrol == g_iState)
					ChangeFSMState(c_iStateIdle);
				
				LockPatrol(false);
			}
			else
			if (c_iStateAware == g_iState) {
				Vector vPos, vDir;
				g_AwareCorpse->GetPosition(vPos);
				g_AwareCorpse->GetDirection(vDir);
				TGotoPoint{vPos, -vDir, true};
				if (c_iStateAware == g_iState) {
					THunt{2};
					if (c_iStateAware == g_iState) {
						TGotoPoint{vInitialPos, vInitialDir, true};
						if (c_iStateAware == g_iState) {
							object scene;
							@GetMainOutdoorScene(scene);
							@BroadcastMessage("b9q03_corpse" + (g_iBonefire + 1), self(), scene);
							TGotoPoint{vPos, vPos, true};
							if (c_iStateAware == g_iState) {
								THunt{3};
								if (c_iStateAware == g_iState) {
									ChangeFSMState(c_iStateIdle);
								}
							}
						}
					}
				}
			}
			else
			if (c_iStateSearchEnemy == g_iState) {
				THunt{1};
				if (c_iStateSearchEnemy == g_iState) {
					TFollow{g_SearchEnemyActor, 8};
					if (c_iStateSearchEnemy == g_iState) {
						THunt{2};
						if (c_iStateSearchEnemy == g_iState) {
							ChangeFSMState(c_iStateIdle);	
						}
					}
				}
			}
			else {
				@Trace("Unknown FSM state");
			}
			@sync();
		}
	}
}

task TAttack : TAttackMeleeBase {
	var object m_Actor;
	void init(object actor) {
		m_Actor = actor;
		@SetTimer(c_iAttackTimer, 1);
		super.init(actor, false, c_fAttackDistance);
		@KillTimer(c_iAttackTimer);
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.1;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
	int GetHitType(void) { return GetNPCHitType(); }
	
	void OnTimer(int id) { 
		if (id == c_iAttackTimer) {
			object scene;
			@GetMainOutdoorScene(scene);
			@BroadcastMessage("b9q03_helpme" + (g_iBonefire + 1), m_Actor, scene);
			@Trace("helpme timer");
		}
	}
	
	void OnSee(object actor) {
		if (IsPlayerActor(actor) && g_AttackEnemy != actor) {
			CancelActivity();
			ChangeFSMStateToAttack(actor);
		}
	}
	
	void OnAttack(object actor) {
		if (IsPlayerActor(actor) && g_AttackEnemy != actor) {
			CancelActivity();
			ChangeFSMStateToAttack(actor);
		}
	}
	
	void OnUnload(void) {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}	
}

task TFollowAttackMelee : TFollowAttackMeleeBase 
{
	var object m_Actor;
	bool init(object actor, float fFollowDist, float fLooseDist, bool bRun, bool bRotate) {
		m_Actor = actor;
		@SetTimer(c_iFollowAttackTimer, 2);
		bool bRet = super.init(actor, fFollowDist, fLooseDist, bRun, bRotate);
		@KillTimer(c_iFollowAttackTimer);
		return bRet;
	}
	
	void OnTimer(int id) { 
		if (id == c_iFollowAttackTimer) {
			object scene;
			@GetMainOutdoorScene(scene);
			@BroadcastMessage("b9q03_helpme" + (g_iBonefire + 1), m_Actor, scene);
			@Trace("helpme timer");
		}
		else 
			super.OnTimer(id);
	}	

	void OnUnload(void) {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}
	
	void OnAttack(object actor) {
		if (IsPlayerActor(actor) && g_AttackEnemy != actor) {
			CancelActivity();
			ChangeFSMStateToAttack(actor);
		}
	}	
}

task TFollow : TFollowBase {
	var bool bInterrupt;
	void init(object actor, float fTime) {
		if (!IsAccessible(actor)) {
			ChangeFSMState(c_iStateIdle);
			return;
		}
		if (fTime > 0) {
			@SetTimer(c_iFollowTimer, fTime);
			super.init(actor, c_fFollowDist, 6000, true, true);
			@KillTimer(c_iFollowTimer);
		}
		else
			super.init(actor, c_fFollowDist, 6000, true, true);
	}
	
	void OnUnload() {
		CancelActivity();
		bInterrupt = true;
		ChangeFSMState(c_iStateWaitForLoad);
	}	
	
	void OnMessage(object actor, string strMessage) {
		if (MessageFilter(actor, strMessage)) {
			CancelActivity();
		}
	}	
	
	void OnSee(object actor) {
		if (SeeFilter(actor)) {
			bInterrupt = true;
			CancelActivity();
		}
	}
	
	void OnHear(object actor) {
		if (HearFilter(actor)) {
			bInterrupt = true;
			CancelActivity();
		}
	}	
	
	void OnAttacked(object actor) {
		disable OnMessage;
		disable OnSee;
		disable OnHear;
	
		CancelActivity();
		bInterrupt = true;
		ChangeFSMStateToAttack(actor);
	}	
	
	void OnTimer(int id) {
		if (id == c_iFollowTimer) {
			CancelActivity();
			bInterrupt = true;
			return;
		}
		super.OnTimer(id);
	}
}

task TIdle : TIdleBase {
	void init(void) {
		super.init();
	}
	
	void OnUnload() {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}	
	
	void OnMessage(object actor, string strMessage) {
		if (MessageFilter(actor, strMessage)) {
			CancelActivity();
		}
	}
	
	void OnSee(object actor) {
		if (SeeFilter(actor)) {
			CancelActivity();
		}
	}
	
	void OnHear(object actor) {
		if (HearFilter(actor)) {
			CancelActivity();
		}
	}
	
	void OnAttacked(object actor) {
		disable OnMessage;
		disable OnSee;
		disable OnHear;
		
		CancelActivity();
		ChangeFSMStateToAttack(actor);
	}	
}

task TGotoPoint : TFollowPointBase {
	bool init(Vector vPos, Vector vDir, bool bRun) { 
		vPos.y += 30;
		return super.init(vPos, vDir, 100, 4000, bRun, true);
	}
	
	void OnUnload() {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}		
	
	void OnMessage(object actor, string strMessage) {
		if (MessageFilter(actor, strMessage))
			CancelActivity();
	}
	
	void OnSee(object actor) {
		if (SeeFilter(actor)) {
			CancelActivity();
		}
	}
	
	void OnHear(object actor) {
		if (HearFilter(actor)) {
			CancelActivity();
		}
	}	
	
	void OnAttacked(object actor) {
		disable OnMessage;
		disable OnSee;
		disable OnHear;
	
		CancelActivity();
		ChangeFSMStateToAttack(actor);
	}	
	
	bool ContinueFollow() { return true; }
}

task TGotoBonfire : TGotoPoint {
	bool init(void) {
		bool bFound;
		object scene;
		@GetMainOutdoorScene(scene);
		Vector vPos, vDir;
		scene->GetLocator("pt_b9q03_bonfire" + (g_iBonefire + 1), bFound, vPos, vDir);
		if (!bFound)
			return false;
		return super.init(vPos, vDir, false);	
	}
	
	void OnMessage(object actor, string strMessage) {
		if (MessageFilter(actor, strMessage))
			CancelActivity();
	}
	
	void OnSee(object actor) {
		if (SeeFilter(actor)) {
			CancelActivity();
		}
	}
	
	void OnHear(object actor) {
		if (HearFilter(actor)) {
			CancelActivity();
		}
	}	
	
	void OnAttacked(object actor) {
		disable OnMessage;
		disable OnSee;
		disable OnHear;
	
		CancelActivity();
		ChangeFSMStateToAttack(actor);
	}	
	
}

task THunt : TAnimatedIdleBase {
	var bool bInterrupt;
	void init(int iCount) {
		for (int i = 0; i < iCount; ++i) {
			super.init("hunt");
			if (bInterrupt)
				break;
		}
	}

	void OnUnload() {
		CancelActivity();
		bInterrupt = true;
		ChangeFSMState(c_iStateWaitForLoad);
	}	
	
	void OnMessage(object actor, string strMessage) {
		if (MessageFilter(actor, strMessage)) {
			CancelActivity();
			bInterrupt = true;
		}
	}
	
	void OnSee(object actor) {
		if (SeeFilter(actor)) {
			CancelActivity();
			bInterrupt = true;
		}
	}
	
	void OnHear(object actor) {
		if (HearFilter(actor)) {
			CancelActivity();
			bInterrupt = true;
		}
	}	
	
	void OnAttacked(object actor) {
		disable OnMessage;
		disable OnSee;
		disable OnHear;
	
		CancelActivity();
		ChangeFSMStateToAttack(actor);
	}	
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		if (c_iStateHeatHands == g_iState)
			LockHandHeat(false);
		if (c_iStatePatrol == g_iState)
			LockPatrol(false);
			
		GenerateActorRandomItem(self(), "coffee", 1, 3);
		GenerateActorRandomItem(self(), "tvirin", 1, 6);
		GenerateActorRandomItem(self(), "silver_ring", 1, 9);
		GenerateActorRandomItem(self(), "gold_ring", 1, 8);
		GenerateActorRandomItem(self(), "bracelet", 1, 6);
		GenerateActorRandomItem(self(), "watch", 1, 9);
		GenerateActorRandomItem(self(), "beads", 1, 9);
		GenerateActorRandomItem(self(), "ear_ring", 1, 9);
		GenerateActorRandomItem(self(), "feromicin", 1, 10);
			
		AddOrgans();
		super.init(actor);
	}
	
	void OnUnload() {
		@RemoveActor(self());
		@Hold();
	}		
}


task TWaitLoading
{
	void init(void) {
		if (g_bCleanup) {
			@RemoveActor(self());
			@Hold();
		};
		
		while (!IsLoaded()) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		if (name == "cleanup") {
			@RemoveActor(self());
			@Hold();
		}
	}	
	
	void OnLoad(void) {
		@StopGroup0();
		@sync();
	}
}