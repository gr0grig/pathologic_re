include std.sci
include idle_logic.sci

const int c_iLookTimerID = 10;
const float c_fLookTimerElapse = 1;

task TIdleBase
{
	void init(void) {
		@WaitForAnimEnd();

		if (!IsLoaded())
			return;

		// calculate number of animations
		int nAnims = GetIdleAnimationCount();

		for (int n = 0; n < 5 && IsLoaded(); ++n) {
			int iAction;
			@irand(iAction, 3);
			if (iAction == 0) {
				if (nAnims) {
					int nAnimation;
					@irand(nAnimation, nAnims);
					@PlayAnimation("all", GetIdleAnimation(nAnimation));
					bool bSuccess;
					@WaitForAnimEnd(bSuccess);
					if (!bSuccess) break;
				}
			}
			else if (iAction == 1) {
				float fWaitTime;
				@rand(fWaitTime, 4);
				bool bSuccess;
				@Sleep(fWaitTime + 1, bSuccess);
				if (!bSuccess) break;
			}
			else {
				if (n) {
					break;
				}
			}
			
			if (!ContinueIdle())
				break;
				
			@ResetAAS();
		}
		@ResetAAS();
	}
	
	bool ContinueIdle(void) { return true; }

	void CancelActivity(void) {
		@StopAnimation();
		@StopGroup0();
	}

}

task TIdleBaseLookAsync : TIdleBase {
	var int m_fNoticeDist, m_fNoticeDistIncrease;
	var bool m_bLooking, m_bCancelExit;
	var object player;
	
	void init(float fNoticeDist, float fNoticeDistIncrease) {
		if (!IsLoaded())
			return;
			
		@FindActor(player, "player");
		m_bLooking = false;
		m_bCancelExit = false;
		m_fNoticeDist = fNoticeDist;
		m_fNoticeDistIncrease = fNoticeDistIncrease;
		
		@SetTimer(c_iLookTimerID, c_fLookTimerElapse);
		super.init();
		if (!m_bCancelExit) {
			@KillTimer(c_iLookTimerID);
			/*if (m_bLooking) {
				if (IsLoaded())
					@UnlookAsync("head");
			}*/			
		}
	}
	
	bool CheckDistance(void)
	{
		if (player == null)
			return false;
		float fDist = sqrt(GetActorDistanceSqr(player));
		if (m_bLooking)
			fDist -= m_fNoticeDistIncrease;
		return fDist < m_fNoticeDist;
	}	
	
	void OnTimer(int id) {
		if (id == c_iLookTimerID) {
			if (CheckDistance()) {
				if (!m_bLooking) {
					HeadLook(player);
					m_bLooking = true;
				}
			}
			else {
				if (m_bLooking) {
					@UnlookAsync("head");
					m_bLooking = false;
				}
			}
		}
	}	

	void CancelActivity(void) {	
		super.CancelActivity();
		@KillTimer(c_iLookTimerID);
		if (m_bLooking) {
			@UnlookAsync("head");
			m_bLooking = false;
		}
		m_bCancelExit = true;
	}		
}

task TSpecialIdleBase
{
	void init(string idle) {
		@WaitForAnimEnd();

		if (!IsLoaded())
			return;
			
		bool bExist;
		@HasAnimation(bExist, "all", idle);
		if (!bExist)
			return;

		for (int n = 0; n < 5 && IsLoaded(); ++n) {
			int iAction;
			@irand(iAction, 3);
			if (iAction == 0) {
				@PlayAnimation("all", idle);
				bool bSuccess;
				@WaitForAnimEnd(bSuccess);
				if (!bSuccess) break;
			}
			else if (iAction == 1) {
				float fWaitTime;
				@rand(fWaitTime, 4);
				bool bSuccess;
				@Sleep(fWaitTime + 1, bSuccess);
				if (!bSuccess) break;
			}
			else {
				if (n) {
					break;
				}
			}
			
			if (!ContinueIdle())
				break;
		}
	}
	
	bool ContinueIdle(void) { return true; }

	void CancelActivity(void) {
		@StopAnimation();
		@StopGroup0();
	}

}

task TAnimatedIdleBase
{
	void init(string animation) {
		@WaitForAnimEnd();

		if (!IsLoaded())
			return;
			
		bool bExist;
		@HasAnimation(bExist, "all", animation);
		if (!bExist)
			return;

		@PlayAnimation("all", animation);
		bool bSuccess;
		@WaitForAnimEnd(bSuccess);
	}

	void CancelActivity(void) {
		@StopAnimation();
		@StopGroup0();
	}
}

task TCommonIdle : TIdleBase
{
	void init(void) {
		for (;;) {
			super.init();
			@Sleep(3);
		}
	}
}
