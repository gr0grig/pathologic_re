include std.sci
include NPC_idle_base.sci
include NPC_Petr.sci
include dgame.sci

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
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Danko_Petr{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Petr{actor}; bMeeting = true;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Danko_Petr{actor}; 
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Petr{actor}; 
		return;
	}	
	
	if (IsDay(7)) {
		TDlg_DN7_Danko_Petr{actor};
		return;
	}	
	
	if (IsDay(11)) {
		TDlg_DN11_Danko_Petr{actor};
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Danko_Petr{actor};
		return;
	}		
	
	TDlg_Gag_Danko_Man{actor};	
}