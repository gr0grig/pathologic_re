include std.sci
include quest_d3_01_patrol_base.sci
include dgame.sci
include NPC_Patrol.sci

maintask TPatrol : TQuestPatrol
{
	var bool m_bHasDialog;
	
	void init(void) {
		m_bHasDialog = true;
		super.init();
	}
	
	bool HasDialog(void) {
		return m_bHasDialog;
	}

	void DoDialog(object actor) {
		TDlg_DN3_Danko_PatrolOblom{actor};
		m_bHasDialog = false;
	}
}
