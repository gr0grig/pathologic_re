include std.sci
include NPC_Soldier.sci
include idle.sci
include kgame.sci

maintask TSoldier : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN11_Klara_Soldier{actor};
	}
}

