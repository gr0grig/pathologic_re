include std.sci
include actor_disp_base.sci
include dgame.sci
include NPC_LittleGirl.sci

maintask TLittleGirl : TDispBase
{
	var bool m_bHasDialog;

	void init(void) {
		m_bHasDialog = true;
		super.init();
	}

	void OnUse(object actor) {
		if (m_bHasDialog) {
			if (TDlg_DN11_Danko_Uprava_LittleGirl{actor} == 1000) {
				m_bHasDialog = false;
			}
		}
	}
}
