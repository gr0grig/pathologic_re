include std.sci
include NPC_Base_Walk_disp.sci
include dgame.sci
include NPC_gorbun.sci

maintask TGorbun : TNPCBaseWalk
{
}

void PerformUse(object actor) {
	TDlg_DN5_Danko_Gorbun{actor};
}
