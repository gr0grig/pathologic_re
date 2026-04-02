include std.sci

const int c_iStopHuntTimer = 100;
const int c_iResetAASTimer = 61;

task TNoiseHuntBase
{
	var object m_pActor;

	void init(object actor) {
		PlayAttackMusic(m_pActor);
		m_pActor = actor;
		@Face(m_pActor);
		@SetTimer(c_iStopHuntTimer, c_iHuntTime);
		while (m_pActor != null) {
			bool bSuccess;
			int iWaitTime;
			@irand(iWaitTime, 5);
			@Sleep(iWaitTime + 5, bSuccess);
			PlayAttackMusic(m_pActor);
			if (DoHunt())
				break;
		}
		CancelActivity();
	}

	void OnHear(object actor) {
		if (actor == m_pActor && FilterHearNormal(actor)) {
			@Face(m_pActor);
			@SetTimer(c_iStopHuntTimer, c_iHuntTime);
		}
	}
	
	void OnStopHear(object actor) {
		if (actor == m_pActor) {
			@StopAsync();
			@KillTimer(c_iStopHuntTimer);
		}
	}

	void CancelActivity(void) {
		@Stop();
		@StopGroup0();
		@StopAsync();
		@KillTimer(c_iStopHuntTimer);
		m_pActor = null;
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	// bool DoHunt(void) = 0;

}

task TNoiseFollowBase
{
	var Vector m_vHuntPoint;
	var object m_Prey;
	var object m_Path;

	void init(object actor, bool bRun) {
		if (!IsAccessible(m_Prey))
			return;
		m_Prey = actor;
		PlayAttackMusic(m_Prey);
		
		m_Prey->GetPFPosition(m_vHuntPoint);
		@SetTimer(c_iResetAASTimer, 0.5);
		
		do {
			@FindPathTo(m_Path, m_vHuntPoint);
			if (m_Path == null) {
				@Trace("Can't find path to noise source");
				break;
			}
			
			bool bSuccess;
			@FollowPath(m_Path, bRun, bSuccess);
			if (!bSuccess) {
				if (m_Path == null)
					break;
			}
			else {
				@KillTimer(c_iResetAASTimer);
				m_Prey = THunt{m_Prey};
				@SetTimer(c_iResetAASTimer, 0.5);
				if (!IsAccessible(m_Prey))
					break;
				m_Prey->GetPFPosition(m_vHuntPoint);
			}
		} while (m_Path != null);
		@KillTimer(c_iResetAASTimer);
	}

	void OnTimer(int id) {
		if (id == c_iResetAASTimer) {
			if (!FilterPrey(m_Prey)) {
				@Stop();
				m_Path = null;
			}
			@ResetAAS();
		}
	}

	void OnHear(object actor) {
		if (!actor)
			return;
		if (actor == m_Prey) {
			if (!FilterPrey(m_Prey)) {
				CancelActivity();
				m_Path = null;
				return;
			}
		}
		else if (FilterNewPrey(actor, m_Prey)) {
			m_Prey = actor;
		}
		
		m_Prey->GetPFPosition(m_vHuntPoint);
		@Trace("new hunt point");

		@Stop();
	}
	
	void OnActorStuck(void) {
		@Stop();
	}
	
	void CancelActivity(void) {
		@KillTimer(c_iResetAASTimer);
		@Stop();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	// return true if hunter should make actor a new prey
	// bool FilterNewPrey(object OldPrey, object NewPrey) = 0;
	
	// return true if object is of interest
	// bool FilterPrey(object prey) = 0;

}
