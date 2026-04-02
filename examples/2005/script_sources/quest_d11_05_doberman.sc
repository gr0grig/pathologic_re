include std.sci
include idle.sci
include NPC_doberman.sci
include dgame.sci

maintask TDoberman : TIdleBaseLookAsync
{
	void init(void) {
		while (true) {
			super.init(300, 100);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN11_Danko_Doberman{actor};
	}
}
