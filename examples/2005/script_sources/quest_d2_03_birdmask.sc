include std.sci
include actor_disp_base.sci
include dgame.sci
include NPC_Birdmask.sci

maintask TDisp : TDispBase
{
	var bool m_bTalked;
	
	void init(void) {
		m_bTalked = false;
		super.init();
	}
	
	void OnUse(object actor) {
		if (m_bTalked)
			return;
		int iQuestState;
		@GetVariable("d2q03", iQuestState);
		if (iQuestState != c_iQuestFailed) {
			TDlg_DN2_Danko_BirdMask{actor};
			m_bTalked = true;
		}
	}
}
