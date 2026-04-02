include std.sci
include actor_disp_base.sci
include bgame.sci
include NPC_Danko.sci

maintask TDanko : TDispBase
{
	void init(void) {
		super.init();
	}

	void OnUse(object actor) {
		TDlg_DN12_Burah_DankoSobor{actor};
	}
}
