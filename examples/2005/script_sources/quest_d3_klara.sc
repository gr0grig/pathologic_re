include std.sci
include actor_disp_base.sci
include dgame.sci
include NPC_Klara.sci

maintask TKlara : TDispBase
{
	void OnUse(object actor) {
		TDlg_DN3_Danko_KlaraKaterina{actor};
	}
}
