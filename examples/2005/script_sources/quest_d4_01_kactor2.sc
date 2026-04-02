include std.sci
include quest_d4_01_kactor_base.sci
include dgame.sci
include NPC_Wasted_Male.sci

const int c_iIndex = 2;

maintask TKeyActor2 : TKeyActorBase
{
	int DoDialog(object actor) {
		return TDlg_DN4_Danko_WastedMale{actor};
	}
}

task TPlayerTalk : TPlayerTalkBase
{
	void DoDialog(object actor) {
		TDlg_DN4_Danko_WastedMale{actor};
	}
}
