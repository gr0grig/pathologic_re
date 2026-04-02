include std.sci
include idle.sci
include game.sci
include volonteers_base.sci
include NPC_Birdmask.sci

maintask TQuest : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init(300, 100);
		}
	}

	void OnUse(object actor) {
		string name;
		@GetProperty("npc", name);
		@Trace(name);
		@Trace(GetNPCIDByName(name));
		if (IsDeadVolonteer(GetNPCIDByName(name))) {
			TDlg_VDankoBirdmaskDead{actor};
		}
		else		
		if (IsOneDayRescueVolonteer(GetNPCIDByName(name))) {
			TDlg_VDankoBirdmaskOneDay{actor};
		}
		else
		if (IsDiseasedVolonteer(GetNPCIDByName(name))) {
			TDlg_VDankoBirdmask{actor};
		}
	}
}
