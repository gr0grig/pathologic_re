include std.sci
include idle.sci
include NPC_Whitemask.sci
include dgame.sci

maintask TMask : TCommonIdle
{
	var bool bTalk;
	void init(void) {
		bTalk = false;
		super.init();
	}

	void OnUse(object actor) {
		if (!bTalk) {
			CancelActivity();
			TDlg_DN1_Danko_WhiteMaskM{actor};
			bTalk = true;
			int iBMask;
			@GetVariable("d1q01bmask", iBMask);
			@SetVariable("d1q01wmask", 1);
			if (iBMask)
				TriggerActor("quest_d1_01", "remove_masks");
		}
	}
}
