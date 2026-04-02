include std.sci
include disp_idle.sci
include kgame.sci
include NPC_dohodyaga.sci

maintask TProrok : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN5_Klara_Kabatchik{actor};
	}
}
