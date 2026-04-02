include std.sci

var bool g_bToBeRemoved;

const float c_fAgonyThreshold = 0.001;

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

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

void OnTrigger(string name)
{
	if (name == "cleanup") {
		g_bToBeRemoved = true;
		bool bLoaded;
		@IsLoaded(bLoaded);
		if (!bLoaded)
			@RemoveActor(self());
	}
}

void OnUnload(void)
{
	if (g_bToBeRemoved)
		@RemoveActor(self());
}

task TAgonyBase
{
	var int m_iState;	// <0 - dead, 0 - agony, >0 - sleep

	void init(void) {
		m_iState = 0;

		@RemoveEnvelope();
		@SetRTEnvelope(50, 40);
		
		if (!IsLoaded()) {
			TWaitForLoad{};
		}

		for (;;) {
			bool bSuccess;
			@Is3DSoundLoaded(bSuccess, "agony");
			if (bSuccess && rndbool(1.0 / 3.0))
				@PlayGlobalSound("agony", [0, 40, 0]);
			@PlayAnimation("all", "agony");
			@WaitForAnimEnd(bSuccess);
			if (m_iState > 0) {
				if (bSuccess) {
					@PlayGlobalSound("sleep", [0, 40, 0]);
					@PlayAnimation("all", "agony_sleep");
					@WaitForAnimEnd();
					@LockAnimationEnd("all", "agony_sleep");
				}
				@SetDeathState();
				AgonyStopped();
				break;
			}
			else if (m_iState < 0)
				break;
		}
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		bool bDead;
		@IsDead(bDead);
		if (bDead) {
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive)			
				@Barter(actor);
		}
		else {
			float fAgony;
			@GetProperty("agony", fAgony);
			if (fAgony == 0) 
				return;
				
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive) {
				@ShowWindow("agony.xml", true, false, self());
				
				float fAgony;
				@GetProperty("agony", fAgony);
				if (fAgony < c_fAgonyThreshold) {
					PlayerModReputation(actor, 0.2);
				}
				
			}
		}
	}
	
	void OnDeath(object actor) {
		if (m_iState)
			return;
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			bool bDead;
			@IsDead(bDead);
			if (!bDead) {
				@SetDeathState();
				m_iState = -1;
				PlayerModReputation(actor, -0.3);
				@PlayGlobalSound("death", [0, 40, 0]);
				@PlayAnimation("all", "agony_die");
				@WaitForAnimEnd();
				@LockAnimationEnd("all", "agony_die");
			}
		}
	}

	void OnUnload(void) {
		global.OnUnload();

		CancelActivity();
		if (m_iState) {
			@RemoveActor(self());
		}
		TWaitForLoad{};
	}

	void OnPropertyChange(object actor, string strProp)
	{
		if (strProp == "agony") {
			float fAgony;
			@GetProperty("agony", fAgony);
			if (fAgony < c_fAgonyThreshold) {
				m_iState = 1;
			}
		}
		global.OnPropertyChange(actor, strProp);
	}

	void CancelActivity(void) {
		@StopAnimation();
	}

	// void AgonyStopped(void) = 0;
}
