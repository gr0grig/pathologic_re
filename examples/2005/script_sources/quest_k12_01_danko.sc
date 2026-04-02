include std.sci
include actor_disp_base.sci
include kgame.sci
include NPC_Danko.sci

maintask TDanko : TDispBase
{
	void init(void) {
		super.init();
	}

	void OnUse(object actor) {
		TDlg_DN12_Klara_DankoSobor{actor};
	}
}
