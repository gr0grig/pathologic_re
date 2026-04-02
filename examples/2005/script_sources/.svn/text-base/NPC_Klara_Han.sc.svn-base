include std.sci
include NPC_idle_base.sci
include NPC_Han.sci
include kgame.sci

var bool bMeeting;

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		bMeeting = false;
		super.init();
	}
}

void PerformUse(object actor)
{
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Han{actor}; bMeeting = true;
	}
	
	if (IsDay(9)) {
		TDlg_DN9_Klara_Han{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};			
}