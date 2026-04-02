include std.sci
include NPC_Birdmask.sci
include idle.sci
include kgame.sci

maintask TBirdmask : TIdleBaseLookAsync
{
	var bool bTalk;
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		if (bTalk)
			return;
		CancelActivity();
		TDlg_DN1_Klara_Birdmask{actor};
		bTalk = true;
	}
}
