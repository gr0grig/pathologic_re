include std.sci
include disp_idle.sci
include NPC_Worker.sci
include bgame.sci

maintask TWorker : TDispIdleLookAsync
{
	void init(void) {
		float fTime;
		@GetGameTime(fTime);
		if (fTime >= 24) {
			OnTrigger("cleanup");
		}
		else {
			@SetTimeEvent(0, 24);
		}
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		// TODO
	}

	void OnGameTime(int id, float fTime) {
		OnTrigger("cleanup");
	}
}
