include std.sci
include idle.sci
include dgame.sci
include NPC_Birdmask.sci

maintask TQuest : TIdleBase
{
	var bool m_bTalked;
	
	void init(void) {
		m_bTalked = false;
		for (;;) {
			@Sleep(3);
			super.init();
		}
	}

	void OnUse(object actor) {
		if (!m_bTalked) {
			m_bTalked = true;
			CancelActivity();
			TDlg_DN4_Danko_BirdMask{actor};
			TriggerActor("quest_d4_01", "birdmask_done");
		}
	}
}
