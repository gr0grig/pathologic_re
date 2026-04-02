include std.sci
include actor_disp_base.sci
include dgame.sci
include NPC_PetrBirdmask.sci

maintask TDisp : TDispBase
{
	void OnUse(object actor) {
		TDlg_DN10_Danko_Petr{actor};
	}
}
