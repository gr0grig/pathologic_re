include std.sci
include quest_d10_01_soldier_base.sci
include dgame.sci
include NPC_Officer.sci

maintask TSoldier : TQuestSoldierBase
{
	void DoDialog(object actor) {
		CancelActivity();
		TDlg_DN10_Danko_MSoldier{actor};
	}
}
