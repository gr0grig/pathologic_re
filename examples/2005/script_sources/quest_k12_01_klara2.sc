include std.sci
include actor_disp_base.sci
include kgame.sci
include NPC_Klara.sci

maintask TKapella : TDispBase
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		TDlg_DN12_Klara_Klara2Sobor{actor};
	}
}
