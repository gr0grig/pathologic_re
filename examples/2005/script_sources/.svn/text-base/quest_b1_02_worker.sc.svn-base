include std.sci
include disp_idle.sci
include NPC_Worker.sci
include bgame.sci

maintask TWorker : TDispIdle
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
		super.init();
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN1_Burah_Worker{actor};
	}

	void OnGameTime(int id, float fTime) {
		OnTrigger("cleanup");
	}
}
