include std.sci
include NPC_Base_Stand.sci
include NPC_Viktor.sci
include bgame.sci

var bool bMeeting, bUtopist;

maintask TNPC : TNPCBaseStand
{
	void init(void) {
		bMeeting = true;
		super.init();
	}

	void OnTrigger(string name) {
		if (name == "icot_viktor_NPC_Trigger") {
			StandTriggered();
		}
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		//TDlg_Fl_Burah_Viktor{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Viktor{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(6)) {
		TDlg_DN6_Burah_Viktor{actor}; 
		return;
	}		
	
	if (IsDay(7)) {
		TDlg_DN7_Burah_Viktor{actor}; 
		return;
	}		
	
	if (IsDay(12) && (!bUtopist)) {
		TDlg_VolonteerUtopist{actor};
		bUtopist = true;
		return;
	}
	
	TDlg_Gag_Burah_Man{actor};	
}
