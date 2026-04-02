include std.sci
include idle.sci
include dgame.sci
include NPC_Birdmask.sci

maintask TQuest : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(1);
			super.init(300, 100);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN4_Danko_TheaterGuard{actor};
	}
}
