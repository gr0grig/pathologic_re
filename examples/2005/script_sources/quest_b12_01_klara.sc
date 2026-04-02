include std.sci
include actor_disp_base.sci
include bgame.sci
include NPC_Klara.sci

maintask TKlara : TDispBase
{
	void init(void) {	
		super.init();
	}

	void OnUse(object actor) {
		TDlg_DN12_Burah_KlaraSobor{actor};
	}
}
