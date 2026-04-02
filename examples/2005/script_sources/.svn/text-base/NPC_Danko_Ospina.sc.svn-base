include std.sci
include NPC_idle_base.sci
include NPC_Ospina.sci
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
		TDlg_Fl_Danko_Ospina{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Ospina{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_Ospina{actor}; 
		return;
	}

	if (IsDay(3)) {
		TDlg_DN3_Danko_Ospina{actor}; 
		return;
	}

	if (IsDay(4)) {
		TDlg_DN4_Danko_Ospina{actor}; 
		return;
	}

	if (IsDay(6)) {
		TDlg_DN6_Danko_Ospina{actor}; 
		return;
	}
	
	if (IsDay(8)) {
		TDlg_DN8_Danko_Ospina{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerSmirennik{actor}; 
		return;
	}	
	
	TDlg_Gag_Danko_Woman{actor};	
}