include std.sci
include quest_d5_01_patrol_base.sci
include dgame.sci
include NPC_Patrol.sci

void HandleDeath(object actor)
{
	bool bAdded;
	@AddItem(bAdded, "revolver_ammo", 0, 2);
	@AddItem(bAdded, "alpha_pills", 0, 2);
	TDeath{actor};
}

maintask TPatrol : TQuestPatrol
{
	void DoDialog(object actor) {
		TDlg_DN5_Danko_Patrol{actor};
	}
}
