include std.sci
include wanderer_base.sci
include follow.sci
include death_base.sci
include retreat.sci

const int c_iRetreatStopTimer = 110;
const int c_iAttackFollowTimer = 111;

var float g_fHealth;

bool IsEnemy(object actor)
{
	if (!IsAccessible(actor))
		return false;
	return IsPlayerActor(actor);
}

bool FilterSeeNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleSeeNormal(object actor)
{
	TAttack{actor};
	@ResetAAS();
}

void HandleAttack(object actor)
{
	TAttack{actor};
	@ResetAAS();
}

void HandleDeath(object actor)
{
	TDeath{};
}

bool FilterPropertyChange(object actor, string strProp)
{
	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		bool bReduced = (fHealth < g_fHealth);
		g_fHealth = fHealth;
		if (bReduced && IsAccessible(actor))
			return true;
	}
	return false;
}

void HandlePropertyChange(object actor, string strProp)
{
	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth <= 0) {
			@SignalDeath(actor);
		}
		if (fHealth < g_fHealth && IsAccessible(actor)) {
			TRetreat{actor};
		}
	}
}

void OnDeath(object actor)
{
	HandleDeath(actor);
}

maintask TRat : TWanderBase
{
	void init(void) {
		bool bHas;
		@HasProperty("health", bHas);
		if (bHas) {
			float fHealth;
			@GetProperty("health", fHealth);
			g_fHealth = fHealth;
		}

		for (;;) {
			super.init();
		}
	}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnPropertyChange(object actor, string strProp) {
		if (FilterPropertyChange(actor, strProp)) {
			CancelActivity();
		}
		HandlePropertyChange(actor, strProp);
	}

	void OnAttacked(object actor) {
		if (!IsAccessible(actor)) {
			return;
		}
		CancelActivity();
		HandleAttack(actor);
	}

	void OnUse(object actor) {
		HandleUse(actor);
	}

	void OnMessage(object actor, string strMessage) {
		if (strMessage == "player_shot") {
			CancelActivity();
			TRetreat{actor};
		}
	}
}

task TIdle
{
	void init(void) {}
}

task TDeath : TDeathHoldBase
{
	void init(void) {
		@Speak("death");
		super.init("die");
	}
}

task TAttack
{
	var object m_Victim;
	
	void init(object actor) {
		m_Victim = actor;
		
		float fAttackDistance;
		@GetAttackDistance(fAttackDistance);
		
		float fFollowDist = fAttackDistance + 10;
		
		@Face(m_Victim);
		
		bool bSuccess;

		while (IsEnemy(m_Victim)) {
			Vector vVictimPos, vPos;
			m_Victim->GetPosition(vVictimPos);
			@GetPosition(vPos);
			Vector vDist = vVictimPos - vPos;
			float fDist2 = (vDist | vDist);

			if (fDist2 < fFollowDist * fFollowDist) {
				int iAttackType;
				@irand(iAttackType, 2);
				@Speak("attack" + (iAttackType + 1));

				@SetAttackState(true);
				BroadcastBattle();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd(bSuccess);
				if (!bSuccess) {
					@SetAttackState(false);
					break;
				}
				
				if (IsAccessible(m_Victim)) {
					object victim;
					@GetVictim(fAttackDistance, victim);
					@ReportAttack(m_Victim);
					if (victim == m_Victim) {
						RatDamage(m_Victim);
					}
				}
				@SetAttackState(false);
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd(bSuccess);
				if (!bSuccess)
					break;
			}
			else {
				@StopAsync();
				if (!TAttackFollow{m_Victim, fFollowDist})
					break;
				@Face(m_Victim);
			}
		}
		
		@StopAsync();
	}

	void OnPropertyChange(object actor, string strProp) {
		if (FilterPropertyChange(actor, strProp)) {
			CancelActivity();
		}
		HandlePropertyChange(actor, strProp);
	}

	void CancelActivity(void) {
		@Stop();
		@StopAnimation();
		@StopAsync();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnMessage(object actor, string strMessage) {
		if (strMessage == "player_shot") {
			CancelActivity();
			TRetreat{actor};
		}
	}
}

task TAttackFollow : TFollowBase
{
	bool init(object actor, float fFollowDist) {
		BeginTimer();
		bool bResult = super.init(actor, fFollowDist * 0.9, 5000, true, true);
		EndTimer();
		return bResult;
	}
	
	void BeginTimer(void) {
		float fTime;
		@rand(fTime, 10);
		@SetTimer(c_iAttackFollowTimer, fTime + 10);
	}
	
	void EndTimer(void) {
		@KillTimer(c_iAttackFollowTimer);
	}

	void OnPropertyChange(object actor, string strProp) {
		if (FilterPropertyChange(actor, strProp)) {
			CancelActivity();
		}
		HandlePropertyChange(actor, strProp);
	}
	
	void CancelActivity(void) {
		EndTimer();

		super.CancelActivity();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	void OnTimer(int id) {
		if (id == c_iAttackFollowTimer) {
			@Speak("run");
			BeginTimer();
		}
		else {
			super.OnTimer(id);
		}
	}

	void OnMessage(object actor, string strMessage) {
		if (strMessage == "player_shot") {
			CancelActivity();
			TRetreat{actor};
		}
	}
}

task TRetreat : TRetreatBase
{
	var object m_Actor;
	
	void init(object actor) {
		m_Actor = actor;
		
		@Speak("retreat");
		
		@SetTimer(c_iRetreatStopTimer, 1);
		super.init(actor);
		@KillTimer(c_iRetreatStopTimer);
	}
	
	void OnTimer(int id) {
		if (id == c_iRetreatStopTimer) {
			if (!IsAccessible(m_Actor)) {
				CancelActivity();
			}
			else {
				Vector vCurPos, vActorPos;
				@GetPosition(vCurPos);
				m_Actor->GetPosition(vActorPos);
				if (VectorDistSqr(vCurPos, vActorPos) >= c_fRetreatStopDist * c_fRetreatStopDist) {
					CancelActivity();
				}
			}
		}
		else {
			super.OnTimer(id);
		}
	}
	
	void OnPropertyChange(object actor, string strProp) {
		if (FilterPropertyChange(actor, strProp)) {
			CancelActivity();
		}
		HandlePropertyChange(actor, strProp);
	}

	void CancelActivity(void) {
		@KillTimer(c_iRetreatStopTimer);
		
		super.CancelActivity();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnUse(object actor) {
		HandleUse(actor);
	}
}
