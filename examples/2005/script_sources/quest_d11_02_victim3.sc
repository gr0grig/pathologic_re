include std.sci
include quest_d11_02_victim_base.sci
include dgame.sci
include NPC_Unosha.sci

maintask TVictim : TVictimBase
{
	void DoDialog(object actor) {
		TDlg_DN11_Danko_SavedUnosha1{actor};
	}
}
