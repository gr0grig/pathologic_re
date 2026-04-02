include std.sci
include disp_idle.sci
include kgame.sci
include NPC_Officer.sci

maintask TOfficer : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN11_Klara_KabakSoldier{actor}; 
	}
}
