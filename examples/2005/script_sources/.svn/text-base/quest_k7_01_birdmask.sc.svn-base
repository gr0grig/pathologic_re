include std.sci
include NPC_Birdmask.sci
include idle.sci
include kgame.sci

maintask TBirdmask : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN7_Klara_Birdmask{actor};
	}
}
