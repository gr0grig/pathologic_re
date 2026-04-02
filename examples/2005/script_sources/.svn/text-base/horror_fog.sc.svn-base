include std.sci
include follow.sci
include fog_attack.sci

const int c_iRemoveTimer = 10;

void OnDeath(object actor) {}

void OnTimer(int id)
{
	if (id == c_iRemoveTimer) {
		@KillTimer(c_iRemoveTimer);

		@SetVisirVisibility(false);
		@FogLinear(0, 2);
		@Sleep(2);

		@RemoveActor(self());
		@Hold();
	}
}

void OnUnload(void) {
	@RemoveActor(self());
	@Hold();
}

maintask TFog
{
	void init(void) {
		@PutOnGrid();
		@FogLinear(1, 1);

		@SetTimer(c_iRemoveTimer, 30);

		object player;
		@FindActor(player, "player");
		while (!TFollow{player}) {
			@Sleep(0.5);
		}
		TFogAttack{player};
		@RemoveActor(self());
	}
}

task TFollow : TFollowBase
{
	bool init(object player) {
		return super.init(player, 150, 0, false, false);
	}

	void OnTimer(int id) {
		super.OnTimer(id);
		global.OnTimer(id);
	}
}
