include std.sci
include NPC_idle_base.sci
include NPC_Mishka.sci
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
		TDlg_Fl_Danko_Mishka{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Mishka{actor}; bMeeting = true;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Mishka{actor}; 
		return;
	}
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Mishka{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerTermit{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Woman{actor};		
}