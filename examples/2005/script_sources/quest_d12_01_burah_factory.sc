include std.sci
include actor_disp_base.sci
include dgame.sci
include NPC_Burah.sci

maintask TBurah : TDispBase
{
	void init(void) {
		super.init();
	}

	void OnUse(object actor) {
		TDlg_DN12_Danko_BurahFactory{actor};
	}
}
