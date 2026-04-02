include std.sci
include idle.sci
include follow.sci
include wanderer_base.sci

const int c_iFollowTimer = 10;

var int g_iRegion;

void OnDeath(object actor) {}

task TKeyActorBase : TIdleBase
{
	void init(void) {
		g_iRegion = GetActorRegion();
		for (;;) {
			@Sleep(3);
			super.init();
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		int iRet = DoDialog(actor);
		if (iRet == 0) {
			TriggerActor("quest_d4_01", "key" + c_iIndex + "_done");
			TRegionFollow{actor};
			TPlayerFollow{actor};
			TPlayerTalk{actor};
			TWander{};
		}
		else if (iRet == 1) {
			TriggerActor("quest_d4_01", "key" + c_iIndex + "_done");
			TWander{};
		}
	}
}

task TRegionFollow : TFollowBase
{
	void init(object actor) {
		@SetTimer(c_iFollowTimer, 1);
		for (;;) {
			super.init(actor, 250, 3000, true, true);
			if (GetActorRegion() != g_iRegion)
				break;
			@Sleep(1);
			if (GetActorRegion() != g_iRegion)
				break;
		}
		@KillTimer(c_iFollowTimer);
	}
	
	void OnTimer(int id) {
		if (id == c_iFollowTimer) {
			if (GetActorRegion() != g_iRegion) {
				CancelActivity();
			}
		}
	}

	// int DoDialog(object actor) = 0
}

task TPlayerFollow : TFollowBase
{
	void init(object actor) {
		while (!super.init(actor, 250, 3000, true, true)) {
			@Sleep(1);
		}
	}
}

task TWander : TWanderBase
{
	void init(void) {
		for (;;) {
			super.init();
			@Sleep(1);
		}
	}
}

task TIdle : TIdleBase
{
}

task TPlayerTalkBase
{
	void init(object actor) {
		for (;;) {
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive)
				break;
		}
		DoDialog(actor);
		@Hold();
	}
	
	// void DoDialog(object actor) = 0
}
