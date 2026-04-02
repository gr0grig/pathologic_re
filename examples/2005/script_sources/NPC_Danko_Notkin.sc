include std.sci
include NPC_idle_base.sci
include dgame.sci
include NPC_Notkin.sci

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
		TDlg_Fl_Danko_Notkin{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Notkin{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Notkin{actor};
		return;
	}	
	
	if (IsDay(4)) {
		TDlg_DN4_Danko_Notkin{actor};
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}		
	
	TDlg_Gag_Danko_Man{actor};	
}