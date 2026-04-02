include std.sci
include soldier_base.sci
include wanderer_base.sci
include retreat.sci

// CONSTANTS
const float c_fRunBrightness = 0.5;
const float c_fDeathRepChange = 0.05;
// CONSTANTS

const int c_iUpdateWalkModeTimer = 110;
const float c_fUpdateWalkModeFreq = 0.3;

void HandleAttack(object actor)
{
	TRetreat{actor};
}

void HandleDeath(object actor)
{
	HandleDeathBase(actor);
}

bool FilterSee(object actor)
{
	if (!IsAccessible(actor))
		return false;
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer;
}

void HandleSee(object actor)
{
	TRetreat{actor};
}

bool FilterHear(object actor)
{
	if (!IsAccessible(actor))
		return false;
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer;
}

void HandleHear(object actor)
{
	TRetreat{actor};
}

maintask TMarauder : TWanderBase
{
	void init(void) {
		for (;;) {
			@SetTimer(c_iUpdateWalkModeTimer, c_fUpdateWalkModeFreq);
			super.init();
		}
	}

	bool GetFollowRunMode(void) {
		float fBrightness;
		@GetBrightness(fBrightness);
		return fBrightness >= c_fRunBrightness;
	}
	
	void OnTimer(int id) {
		if (id != c_iUpdateWalkModeTimer)
			return;
		bool bInWalk;
		@IsInWalkMode(bInWalk);
		if (bInWalk) {
			if (GetFollowRunMode()) {
				@SwitchToRun();
			}
			else {
				@SwitchToWalk();
			}
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

	void OnAttacked(object actor) {
		if (!IsAccessible(actor)) {
			return;
		}
		CancelActivity();
		HandleAttack(actor);
	}

	void OnSee(object actor) {
		if (FilterSee(actor)) {
			CancelActivity();
			HandleSee(actor);
		}
	}

	void OnHear(object actor) {
		if (FilterHear(actor)) {
			CancelActivity();
			HandleHear(actor);
		}
	}

}

task TIdle
{
	void init(void) {}
}

task TRetreat : TRetreatBase
{
}
