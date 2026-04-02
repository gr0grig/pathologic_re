include std.sci
include disp_idle.sci
include NPC_doberman.sci
include bgame.sci

maintask TMask : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN3_Danko_Doberman{actor};
	}
}
