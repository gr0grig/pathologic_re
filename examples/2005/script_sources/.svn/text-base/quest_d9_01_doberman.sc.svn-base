include std.sci
include idle.sci
include NPC_doberman.sci
include dgame.sci

maintask TMask : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN9_Danko_Doberman{actor};
	}
}
