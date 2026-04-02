include std.sci
include idle.sci
include dgame.sci
include NPC_Birdmask.sci

maintask TQuest : TIdleBase
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init();
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN4_Danko_BirdmaskHome{actor};
	}
}
