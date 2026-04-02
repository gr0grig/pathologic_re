include std.sci
include wanderer_base.sci
include follow.sci
include fog_hunter_attack.sci

const int c_iAASResetTimer = 20;
const int c_fIdleJumpDistance = 1000;

property int Region;

bool FilterSee(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer && IsAccessible(actor);
}

bool FilterHear(object actor)
{
	bool bPlayer;
	@IsPlayerActor(actor, bPlayer);
	return bPlayer && IsAccessible(actor);
}

void HandleSee(object actor)
{
	TFogAttack{actor};
}

void HandleHear(object actor)
{
	TFogAttack{actor};
}

void HandleTimer(int id)
{
	if (id == c_iAASResetTimer) {
		@ResetAAS();
	}
}

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
		@Trace("fog hunter inited");
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
	
	void OnHear(object actor) {
		if (FilterHear(actor)) {
			CancelActivity();
			HandleHear(actor);
		}
	}
}

task TFollowerFog : TFollowBase
{
	void init(void) {
		@Trace("fog hunter following");
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
	
	void OnHear(object actor) {
		if (FilterHear(actor)) {
			CancelActivity();
			HandleHear(actor);
		}
	}	

	bool ContinueFollow(object actor) {
		return IsAttractive(actor);
	}
}

// shows fog for a small period of time
// during this time fog doesn't react to player activity
// so "RUN RUN RUN!"
task TIdle
{
	void init(void) {
		@Trace("fog hunter idling");
		float fWaitTime;
		@rand(fWaitTime, 2);
		@FogLinear(1, 1);
		@Sleep(1);
		@Sleep(fWaitTime);
		
		// sudden jump with dissapearing
		Vector vCurPos, vDestPosition;
		@GetPosition(vCurPos);
		bool bFound;
		@GetRandomPFPointInCircle(vDestPosition, vCurPos, c_fIdleJumpDistance, bFound);
		@FogLinear(0, 0.5);
		if (bFound) {
			@MovePoint(vDestPosition, 500);
		}
		@Sleep(1);
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
