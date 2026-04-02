include std.sci
include idle.sci
include NPC_Birdmask.sci
include kgame.sci

maintask TMask : TIdleBaseLookAsync
{
	void init(void) {
		while (true) {
			super.init(300, 100);
			@Sleep(1);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN12_Klara_BirdmaskT{actor};
	}
}
