include std.sci
include kgame.sci
include NPC_LittleGirl.sci
include disp_idle.sci

maintask TLittleGirl : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN9_Klara_Littlegirl{actor};
	}
}
