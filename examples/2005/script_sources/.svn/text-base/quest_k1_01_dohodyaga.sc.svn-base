include std.sci
include idle.sci
include kgame.sci
include NPC_Dohodyaga.sci

maintask TQuest : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init(300, 100);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN1_Klara_Dohodyaga{actor};
	}
}
