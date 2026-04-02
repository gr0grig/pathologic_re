include std.sci
include idle.sci
include NPC_Birdmask.sci
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
			TDlg_DN1_Danko_BirdMaskM{actor};
			bTalk = true;
			int iWMask;
			@GetVariable("d1q01wmask", iWMask);
			@SetVariable("d1q01bmask", 1);
			if (iWMask)
				TriggerActor("quest_d1_01", "remove_masks");
		}
	}
}
