include std.sci
include actor_disp_base.sci
include dgame.sci
include NPC_Nude.sci

maintask TNudeGirl : TDispBase
{
	void OnUse(object actor) {
		TDlg_DN11_Danko_Nude{actor};
	}
}
