include std.sci
include disp_idle.sci
include kgame.sci
include NPC_Wasted_Male.sci

maintask TDisp : TDispIdleLookAsync
{
	var bool m_bTalked;
	
	void init(void) {
		m_bTalked = false;
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		if (m_bTalked)
			return;
		CancelActivity();
		TDlg_DN2_Klara_Arfist{actor};
		m_bTalked = true;
	}
}
