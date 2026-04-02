include std.sci
include idle.sci
include kgame.sci
include NPC_Woman.sci

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
		TDlg_DN5_Klara_SoborCitizen{actor};
	}
}
