include std.sci
include idle_logic.sci


task TIdleBase
{
	void init(void) {
		@WaitForAnimEnd();

		if (!IsLoaded())
			return;

		// calculate number of animations
		int nAnims = GetIdleAnimationCount();

		for (int n = 0; n < 5 && IsLoaded(); ++n) {
			if (!nAnims) {
				bool bSuccess;
				@Sleep(3, bSuccess);
				if (!bSuccess) break;
			}
			else {
				int nAnimation;
				@irand(nAnimation, nAnims);
				int iAction;
				@irand(iAction, 5);
				if (iAction != 0)
					nAnimation = 0;
				
				@PlayAnimation("all", GetIdleAnimation(nAnimation));
				bool bSuccess;
				@WaitForAnimEnd(bSuccess);
				if (!bSuccess) break;
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

task TNPCIdleBase : TIdleBase
{
	void init(void) {
		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		for (;;) {
			//@lshBeginTrackCamera();			
			super.init();
		}
	}
	
	void OnUnload() {
		//@lshEndTrackCamera();
		CancelActivity();
		TWaitForLoad{};
	}
	
	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {
			disable OnUse;
			CancelActivity();
			RotateToActor(actor);
			enable OnUse;
			PerformUse(actor);
		}
	}
}

const int c_iTalkTimer = 10;
const float c_fTalkDistance = 300;

task TNPCSmartIdleBase : TIdleBase {
	var Vector vInitDir;
	void init(void) {
		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		
		OnLoad();
		
		@GetDirection(vInitDir);
		
		for (;;) {
			super.init();
		}
	}
	
	bool RotateToPlayer(void) {
		object player;
		@FindActor(player, "player");
		if (!player)
			return false;
		return RotateToActor(player);
	}
	
	void RestoreDirection(void) {
		@RotateAsync(vInitDir.x, vInitDir.z);
	}
	
	bool IsPlayerNear(void) {
		object player;
		@FindActor(player, "player");
		if (!player)
			return false;
		
		if (GetActorDistanceSqr(player) > c_fTalkDistance * c_fTalkDistance)
			return false;
			
		bool bCanSee;
		@CanSee(bCanSee, player);
		
		return bCanSee;
	}
	
	void InitSpeechTimer(void) {
		float fWaitTime;
		@rand(fWaitTime, 8, 16);
		@SetTimer(c_iTalkTimer, fWaitTime);
	}
	
	void KillSpeechTimer(void) {
		@KillTimer(c_iTalkTimer);
	}
	
	void OnTimer(int id) {
		if (id == c_iTalkTimer) {
			KillSpeechTimer();
			if (IsLoaded() && IsPlayerNear()) {
				if (RotateToPlayer())
					StartCommonSpeech(self());
			}
			else {
				RestoreDirection();
				InitSpeechTimer();
			}
		}
	}
	
	void OnUnload(void) {
		CancelActivity();
		KillSpeechTimer();
		
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		
		@Hold();
	}
	
	void OnLoad(void) {
		@StopGroup0();
		KillSpeechTimer();
		PlayHeadAnimation("Neutral");
		InitSpeechTimer();
	}
	
	void OnLSHAnimationEnd(bool bSpeech) {
		if (bSpeech) {
			InitSpeechTimer();
		}
		else {
			PlayHeadAnimation("Neutral");
		}
	}
	
	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {
			disable OnUse;
			CancelActivity();
			RotateToActor(actor);
			enable OnUse;
			PerformUse(actor);
			PlayHeadAnimation("Neutral");
			KillSpeechTimer();
			InitSpeechTimer();
		}
	}
}