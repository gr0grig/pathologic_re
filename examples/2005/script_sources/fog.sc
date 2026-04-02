include std.sci
include wanderer_base.sci
include follow.sci
include fog_attack.sci

const int c_iAASResetTimer = 20;

property int Region;

bool FilterSee(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer && IsAccessible(actor);
}

void HandleSee(object actor)
{
	TFogAttack{actor};
}

void HandleTimer(int id)
{
	if (id == c_iAASResetTimer) {
		@ResetAAS();
	}
}

void HandleHear(object actor) {}
void HandleAttacked(object actor) {}

bool IsAttractive(object actor)
{
	if (!IsAccessible(actor))
		return false;
	object scene;
	@GetActiveScene(scene);
	if (scene != null && scene->FuncExist("GetCurrentRegion", 1)) {	
		int iCurRegion;
		scene->GetCurrentRegion(iCurRegion);
		return iCurRegion == Region && GetActorDistanceSqr(actor) < 2000 * 2000;
	}
	return false;
}

void OnDeath(object actor) {}

maintask TFog
{
	void init(void) {
		@PutOnGrid();
		@SetTimer(c_iAASResetTimer, 1);
		for (;;) {
			TWanderFog{};
			TFollowerFog{};
		}
	}
}

task TWanderFog : TWanderBase
{
	void OnTimer(int id) {
		HandleTimer(id);
		
		if (id == c_iAASResetTimer) {
			if (IsAttractive(GetPlayerActor())) {
				CancelActivity();
			}
		}
	}
	
	void OnSee(object actor) {
		if (FilterSee(actor)) {
			CancelActivity();
			HandleSee(actor);
		}
	}
}

task TFollowerFog : TFollowBase
{
	void init(void) {
		object player = GetPlayerActor();
		if (!IsAttractive(player))
			return;
		super.init(player, 100, 0, false, false);
	}

	void OnTimer(int id) {
		HandleTimer(id);
		
		super.OnTimer(id);

		if (id == c_iAASResetTimer) {
			if (!IsAttractive(GetPlayerActor())) {
				CancelActivity();
			}
		}
	}
	
	void OnSee(object actor) {
		if (FilterSee(actor)) {
			CancelActivity();
			HandleSee(actor);
		}
	}

	bool ContinueFollow(object actor) {
		return IsAttractive(actor);
	}
}

task TIdle
{
	void init(void) {
		float fWaitTime;
		@rand(fWaitTime, 30);
		@Sleep(fWaitTime);
	}
	
	void OnSee(object actor) {
		if (FilterSee(actor)) {
			HandleSee(actor);
		}
	}

	void OnTimer(int id) {
		HandleTimer(id);
	}
}

task TDeath
{
	void init(void) {
		@RemoveActor(self());
		for (;;) {
			@Hold();
		}
	}
}
