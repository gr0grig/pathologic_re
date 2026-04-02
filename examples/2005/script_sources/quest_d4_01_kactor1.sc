include std.sci
include quest_d4_01_kactor_base.sci
include dgame.sci
include NPC_WhiteMask.sci

const int c_iIndex = 1;

maintask TKeyActor1 : TKeyActorBase
{
	int DoDialog(object actor) {
		return TDlg_DN4_Danko_WhiteMask{actor};
	}
}

task TPlayerTalk : TPlayerTalkBase
{
	void DoDialog(object actor) {
		TDlg_DN4_Danko_WhiteMask{actor};
	}
}
