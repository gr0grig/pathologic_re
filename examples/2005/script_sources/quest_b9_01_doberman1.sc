include std.sci
include quest_b9_01_doberman_base.sci
include bgame.sci
include NPC_Doberman.sci

void HandleDeath(object actor)
{
	TDeath{actor};
}

maintask TPatrol : TQuestPatrol
{
	void DoDialog(object actor) {
		TDlg_DN9_Burah_Doberman{actor};
	}
}
