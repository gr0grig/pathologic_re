include std.sci
include idle.sci
include follow.sci
include retreat.sci
include death_base.sci
include NPC_boy.sci
include bgame.sci

const int c_iStateWaitForLoad		= 0;
const int c_iStateWaitForCommand	= 1;
const int c_iStateFollow			= 2;
const int c_iStateIdleAndFollow		= 3;
const int c_iStateRetreatPlayer		= 4;
const int c_iStateBurn				= 5;
const int c_iStateRetreat			= 6;
const int c_iStateRetreatPDamage	= 7;
const int c_iStateGoAway			= 8;

const int c_iCommandWait	= 1;
const int c_iCommandFollow	= 2;
const int c_iCommandBurn	= 3;
const int c_iCommandRetreat	= 4;

const float c_fFollowDist		= 250;
const float c_fPDamageFeelDist2	= 1000 * 1000;

var bool g_bCleanup;

// timers
const int c_iPlayerRetreatTimer = 0;
const int c_iPDamageRetreatTimer = 1;
const int c_iIdleAndFollowTimer = 2;

var int m_iState;
// memory
var object m_RetreatEnemy, m_RetreatPDamageEnemy;
var int m_iWaitForLoadPrevState;

int GetClosestBonfire() {
	object scene;
	@GetScene(scene);

	Vector vCurPos, vPos, vDir;
	@GetPosition(vCurPos);
	
	bool bFound;
	float fMinDist = 3000 * 3000;
	int iBonfire = 1, iMinIndex = -1;
	while (true) {
		scene->GetLocator("pt_b9q03_bonfire" + iBonfire, bFound, vPos, vDir);
		if (!bFound)
			break;
		
		Vector vDiff = vCurPos - vPos;
		float fDist2 = (vDiff | vDiff);
		if (fDist2 < fMinDist) {
			fMinDist = fDist2;
			iMinIndex = iBonfire;
		}
		iBonfire++;
	}

	return iMinIndex;	
}

bool IsBonfireBurned(int iBonfire) {
	int iBurned;
	@GetVariable("b9q03Bonfire" + iBonfire, iBurned);
	return (iBurned != 0);
}

void BonfireBurn(int iBonfire) {
	string strBonfire = iBonfire;
	@TriggerWorld("enable_bonfire", strBonfire);
	TriggerActor("quest_b9_03", "bonfire_burn");
	@SetVariable("b9q03Bonfire" + iBonfire, 1);
}

void OnTrigger(string name) {
	if (name == "cleanup")
		g_bCleanup = true;
}

bool ChangeFSMState(int iState) {
	if (iState == c_iStateWaitForCommand) {
		@Trace("changing state to c_iStateWaitForCommand");
	}
	else
	if (iState == c_iStateFollow) {
		@Trace("changing state to c_iStateFollow");
	}
	else
	if (iState == c_iStateIdleAndFollow) {
		@Trace("changing state to c_iStateIdleAndFollow");
	}
	else
	if (iState == c_iStateRetreatPlayer) {
		@Trace("changing state to c_iStateRetreatPlayer");
	}
	else 
	if (iState == c_iStateBurn) {
		@Trace("changing state to c_iStateBurn");
	}
	else
	if (iState == c_iStateWaitForLoad) {
		m_iWaitForLoadPrevState = m_iState;
		@Trace("changing state to c_iStateWaitForLoad");
	}
	else
	if (iState == c_iStateGoAway) {
		@Trace("changing state to c_iStateGoAway");
	}
	else
		return false;
	
	m_iState = iState;
	return true;
}

void ChangeFSMStateToRetreat(object actor) {
	@Trace("changing state to c_iStateRetreat");
	m_iState = c_iStateRetreat;
	m_RetreatEnemy = actor;
}

void ChangeFSMStateToRetreatPDamage(object actor) {
	@Trace("changing state to c_iStateRetreatPDamage");
	m_iState = c_iStateRetreatPDamage;
	m_RetreatPDamageEnemy = actor;
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

bool DoDialog(object actor) {
	int iRet = TDlg_DN9_Burah_BoyFollower{actor}; 
	if (iRet == c_iCommandFollow)
		ChangeFSMState(c_iStateFollow);
	else
	if (iRet == c_iCommandWait)
		ChangeFSMState(c_iStateWaitForCommand);
	else
	if (iRet == c_iCommandBurn) {
		ChangeFSMState(c_iStateBurn);
	}
	else
	if (iRet == c_iCommandRetreat) {
		ChangeFSMState(c_iStateGoAway);
	}
	else
		return false;
	return true;
}

void OnDeath(object actor) {
	AddDiaryEntry_b9q03FollowerDeadFailed();
	TriggerActor("quest_b9_03", "fail");
	TDeath{actor};
}

bool IsPlayerNear(object actor) {
	object player;
	@FindActor(player, "player");
	if (!IsAccessible(player))
		return false;
	
	Vector vPos1, vPos2;
	actor->GetPosition(vPos1);
	player->GetPosition(vPos2);
	
	Vector vDiff = vPos1 - vPos2;
	float fDist2 = (vDiff | vDiff);
	return (fDist2 < c_fFollowDist * c_fFollowDist * 1.1 * 1.1);
}

maintask Follower 
{
	void init(void) {
		m_iState = c_iStateWaitForLoad;
		m_iWaitForLoadPrevState = c_iStateWaitForCommand;
		
		while (true) {
			if (c_iStateWaitForLoad == m_iState) {
				TWaitLoading{};
				if (!ChangeFSMState(m_iWaitForLoadPrevState)) {
					ChangeFSMState(c_iStateFollow);
				}
			}
			else
			if (c_iStateWaitForCommand == m_iState) {
				TFacePlayer{};
				if (c_iStateWaitForCommand == m_iState)
					TIdleWaitCommand{};
			}
			else if (c_iStateFollow == m_iState) {
				TFollow{};
			}
			else if (c_iStateIdleAndFollow == m_iState) {
				TFacePlayer{};
				if (c_iStateIdleAndFollow == m_iState) {
					TIdleAndFollow{};
				}
			}
			else if (c_iStateGoAway == m_iState) {
				TRetreat{};
			}
			else if (c_iStateRetreatPlayer == m_iState) {
				TRetreatPlayer{};
			}
			else if (c_iStateBurn == m_iState) {
				if (!TBurnFollow{}) {
					if (c_iStateBurn == m_iState) {
						THunt{};
						if (c_iStateBurn == m_iState) {
							ChangeFSMState(c_iStateWaitForCommand);
						}
					}
				}
				if (c_iStateBurn == m_iState) {
					THunt{};
					if (c_iStateBurn == m_iState)
						ChangeFSMState(c_iStateFollow);
				}
			}
			else if (c_iStateRetreat == m_iState) {
				TRetreatEnemy{m_RetreatEnemy};
			}
			else if (c_iStateRetreatPDamage == m_iState) {
				TRetreatePDamage{m_RetreatPDamageEnemy};
				if (c_iStateRetreatPDamage == m_iState) {
					if (!IsAccessible(m_RetreatPDamageEnemy) || GetActorDistanceSqr(m_RetreatPDamageEnemy) > c_fPDamageFeelDist2) {
						if (IsAccessible(m_RetreatPDamageEnemy)) {
							TFaceActor{m_RetreatPDamageEnemy};
							if (c_iStateRetreatPDamage == m_iState) {
								THunt{};
								if (c_iStateRetreatPDamage == m_iState) {
									ChangeFSMState(c_iStateWaitForCommand);
								}
							}
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

task TFacePlayer {
	void init(void) {
		object player;
		@FindActor(player, "player");
		if (!player)
			return;
		RotateToActor(player);
	}
	
	void OnUse(object actor) {
		// check how to stop RotateToActor
		DoDialog(actor);
	}
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			// check how to stop RotateToActor
			ChangeFSMState(c_iStateRetreatPlayer);
		}
		else {
			// check how to stop RotateToActor
			ChangeFSMStateToRetreat(actor);
		}
	}	
	
	void OnPlayerDamage(object player, object actor, bool bEnemy) {	
		if (!IsAccessible(actor) || GetActorDistanceSqr(actor) > c_fPDamageFeelDist2)
			return;
		// check how to stop RotateToActor
		ChangeFSMStateToRetreatPDamage(actor);
	}
	
	void OnUnload() {
		@Stop();
		@StopGroup0();
		ChangeFSMState(c_iStateWaitForLoad);
	}
}

task TFaceActor {
	void init(object actor) {
		if (!actor)
			return;
		RotateToActor(actor);
	}
	
	void OnUse(object actor) {
		// check how to stop RotateToActor
		DoDialog(actor);
	}
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			// check how to stop RotateToActor
			ChangeFSMState(c_iStateRetreatPlayer);
		}
		else {
			// check how to stop RotateToActor
			ChangeFSMStateToRetreat(actor);
		}
	}	
	
	void OnPlayerDamage(object player, object actor, bool bEnemy) {	
		if (!IsAccessible(actor) || GetActorDistanceSqr(actor) > c_fPDamageFeelDist2)
			return;
		// check how to stop RotateToActor
		ChangeFSMStateToRetreatPDamage(actor);
	}
	
	void OnUnload() {
		@Stop();
		@StopGroup0();
		ChangeFSMState(c_iStateWaitForLoad);
	}	
}

task TRetreatEnemy : TRetreatBase
{
	void init(object actor) {
		if (!IsAccessible(actor)) {
			ChangeFSMState(c_iStateWaitForCommand);
			return;
		}
		super.init(actor);
	}
	
	void OnUnload() {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}	
}


task TRetreat : TRetreatBase
{
	var bool bInterrupt;
	void init(void) {
		while (true) {
			object player;
			@FindActor(player, "player");
			if (!IsAccessible(player)) {
				@Sleep(3);
				if (bInterrupt)
					break;
				else
					continue;
			}
			super.init(player);
			if (bInterrupt)
				break;
		}
	}
	
	void OnUnload() {
		@StopGroup0();
		bInterrupt = true;
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}		
}


task TRetreatPlayer : TRetreatBase
{
	var bool bPlayerAttackedAgain;
	void init(void) {
		object player;
		@FindActor(player, "player");
		if (!IsAccessible(player)) {
			ChangeFSMState(c_iStateWaitForCommand);
			return;
		}
		@SetTimer(c_iPlayerRetreatTimer, 5);
		super.init(player);
		@KillTimer(c_iPlayerRetreatTimer);
	}
	
	void OnTimer(int id) {
		if (id == c_iPlayerRetreatTimer) {
			if (!bPlayerAttackedAgain) {
				CancelActivity();
				ChangeFSMState(c_iStateWaitForCommand);
			}
			else
				bPlayerAttackedAgain = false;
				
			return;
		}
		super.OnTimer(id);
	}
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			bPlayerAttackedAgain = true;
		}
		else {
			CancelActivity();
			ChangeFSMStateToRetreat(actor);		
		}
	}
	
	void OnUnload() {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}		
}

task TRetreatePDamage : TRetreatBase
{
	void init(object actor) {
		@SetTimer(c_iPDamageRetreatTimer, 3);
		super.init(actor);
		@KillTimer(c_iPDamageRetreatTimer);
	}
	
	void OnTimer(int id) {
		if (id == c_iPDamageRetreatTimer) {
			CancelActivity();
			ChangeFSMState(c_iStateWaitForCommand);
			return;
		}
		super.OnTimer(id);
	}
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			CancelActivity();
			ChangeFSMState(c_iStateRetreatPlayer);
		}
		else {
			CancelActivity();
			ChangeFSMStateToRetreat(actor);		
		}
	}
	
	void OnUnload() {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}		
}

task TIdleWaitCommand : TIdleBaseLookAsync {
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		DoDialog(actor);
	}
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			CancelActivity();
			ChangeFSMState(c_iStateRetreatPlayer);
		}
		else {
			CancelActivity();
			ChangeFSMStateToRetreat(actor);		
		}
	}
	
	void OnPlayerDamage(object player, object actor, bool bEnemy) {	
		if (!IsAccessible(actor) || GetActorDistanceSqr(actor) > c_fPDamageFeelDist2)
			return;
		CancelActivity();
		ChangeFSMStateToRetreatPDamage(actor);
	}
	
	void OnUnload() {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}		
}

task TIdleAndFollow {
	var bool bInterrupt;
	void init(void) {
		@SetTimer(c_iIdleAndFollowTimer, 1);
		object player;
		@FindActor(player, "player");
		float fTime;
		@rand(fTime, 4);
		
		if (fTime > 1) {
			HeadLook(player);
			@Sleep(fTime + 2);
			@UnlookAsync("head");
		}
		else
			@Sleep(fTime + 2);
		
		if (!bInterrupt)
			ChangeFSMState(c_iStateFollow);
			
		@KillTimer(c_iIdleAndFollowTimer);
	}
	
	void CancelActivity() {
		@StopGroup0();
	}
	
	void OnTimer(int id) {
		if (id != c_iIdleAndFollowTimer)
			return;
			
		if (!IsPlayerNear(self())) {
			CancelActivity();
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		bInterrupt = DoDialog(actor);
	}	
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			CancelActivity();
			ChangeFSMState(c_iStateRetreatPlayer);
			bInterrupt = true;
		}
		else {
			CancelActivity();
			bInterrupt = true;
			ChangeFSMStateToRetreat(actor);
		}
	}	
	
	void OnPlayerDamage(object player, object actor, bool bEnemy) {	
		if (!IsAccessible(actor) || GetActorDistanceSqr(actor) > c_fPDamageFeelDist2)
			return;
		CancelActivity();
		bInterrupt = true;
		ChangeFSMStateToRetreatPDamage(actor);
	}
	
	void OnUnload() {
		CancelActivity();
		bInterrupt = true;
		ChangeFSMState(c_iStateWaitForLoad);
	}		
}

task TBurnFollow : TFollowPointBase {
	bool init(void) { 
		int iBonfire = GetClosestBonfire();
		if (iBonfire == -1 || IsBonfireBurned(iBonfire)) {
			ChangeFSMState(c_iStateWaitForCommand);
			return false;
		}
		
		Vector vPos, vDir;
		bool bFound;
		object scene;
		@GetScene(scene);
		scene->GetLocator("pt_b9q03_bonfire" + iBonfire, bFound, vPos, vDir);
		vPos.y += 50;
		bool bRet =  super.init(vPos, vDir, 100, 3000, false, true);
		if (bRet) {
			BonfireBurn(iBonfire);
		}
		return bRet;
	}
	
	void OnUse(object actor) {
		CancelActivity();
		DoDialog(actor);
	}	
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			CancelActivity();
			ChangeFSMState(c_iStateRetreatPlayer);
		}
		else {
			CancelActivity();
			ChangeFSMStateToRetreat(actor);
		}
	}	
	
	void OnPlayerDamage(object player, object actor, bool bEnemy) {	
		if (!IsAccessible(actor) || GetActorDistanceSqr(actor) > c_fPDamageFeelDist2)
			return;
		CancelActivity();
		ChangeFSMStateToRetreatPDamage(actor);
	}
	
	void OnUnload() {
		CancelActivity();
		ChangeFSMState(c_iStateWaitForLoad);
	}		
	
	bool ContinueFollow() { return true; }
}

task THunt : TAnimatedIdleBase {
	var bool bInterrupt;
	void init(void) {
		super.init("hunt");
	}
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			CancelActivity();
			ChangeFSMState(c_iStateRetreatPlayer);
		}
		else {
			CancelActivity();
			ChangeFSMStateToRetreat(actor);		
		}
	}
	
	void OnPlayerDamage(object player, object actor, bool bEnemy) {	
		if (!IsAccessible(actor) || GetActorDistanceSqr(actor) > c_fPDamageFeelDist2)
			return;
		CancelActivity();
		ChangeFSMStateToRetreatPDamage(actor);
	}
	
	void OnUnload() {
		CancelActivity();
		bInterrupt = true;
		ChangeFSMState(c_iStateWaitForLoad);
	}		
	
}

task TFollow : TFollowBase {
	var bool bInterrupt;
	void init(void) {
		object player;
		@FindActor(player, "player");
		if (!IsAccessible(player)) {
			ChangeFSMState(c_iStateWaitForCommand);
			return;
		}
		if (super.init(player, c_fFollowDist, 6000, true, true)) {
			if (!bInterrupt)
				ChangeFSMState(c_iStateIdleAndFollow);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		bInterrupt = DoDialog(actor);
	}	
	
	void OnAttacked(object actor) {
		if (IsPlayerActor(actor)) {
			CancelActivity();
			ChangeFSMState(c_iStateRetreatPlayer);
		}
		else {
			CancelActivity();
			ChangeFSMStateToRetreat(actor);		
		}
	}	
	
	void OnPlayerDamage(object player, object actor, bool bEnemy) {	
		if (!IsAccessible(actor) || GetActorDistanceSqr(actor) > c_fPDamageFeelDist2)
			return;
		CancelActivity();
		ChangeFSMStateToRetreatPDamage(actor);
	}
	
	void OnUnload() {
		CancelActivity();
		bInterrupt = true;
		ChangeFSMState(c_iStateWaitForLoad);
	}		
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
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