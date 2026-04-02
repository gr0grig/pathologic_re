include std.sci
include NPC_Base_Stand.sci
include NPC_Viktor.sci
include kgame.sci

var bool bMeeting;

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
		TDlg_Mt_Klara_Viktor{actor}; bMeeting = true;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Klara_Viktor{actor}; 
		return;
	}		

	if (IsDay(9)) {
		TDlg_DN9_Klara_Viktor{actor}; 
		return;
	}		
	
	if (IsDay(10)) {
		TDlg_DN10_Klara_Viktor{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_VolonteerUtopist{actor};
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};		
	
}
