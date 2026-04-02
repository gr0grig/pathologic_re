include std.sci
include NPC_idle_base.sci
include NPC_Katerina.sci
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
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Katerina{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Katerina{actor}; bMeeting = true;
	}
	
	if (IsDay(1)) {
		if (2000 == TDlg_DN1_Klara_Katerina{actor}) {
			@ShowWindow("people.xml", true);
		}
		return;
	}	

	if (IsDay(2)) {
		TDlg_DN2_Klara_Katerina{actor}; 
		return;
	}	

	if (IsDay(3)) {
		TDlg_DN3_Klara_Katerina{actor}; 
		return;
	}	
	
	if (IsDay(4)) {
		TDlg_DN4_Klara_Katerina{actor}; 
		return;
	}	
	
	if (IsDay(5)) {
		TDlg_DN5_Klara_Katerina{actor}; 
		return;
	}	

	if (IsDay(6)) {
		TDlg_DN6_Klara_Katerina{actor}; 
		return;
	}		

	if (IsDay(7)) {
		TDlg_DN7_Klara_Katerina{actor}; 
		return;
	}	
		
	if (IsDay(11)) {
		TDlg_DN11_Klara_Katerina{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Klara_Katerina{actor}; 
		return;
	}			
	
	TDlg_Gag_Klara_Woman{actor};
}