include std.sci
include NPC_idle_base.sci
include NPC_Kapella.sci
include bgame.sci

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
		TDlg_Fl_Burah_Kapella{actor};
		return;
	}*/

	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_Kapella{actor}; 
		bMeeting = true;
	}

	if (IsDay(1)) {
		if (2000 == TDlg_DN1_Burah_Kapella{actor}) {
			@ShowWindow("people.xml", true);
		}
		return;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Burah_Kapella{actor}; 
		return;
	}
			
	if (IsDay(3)) {
		TDlg_DN3_Burah_Kapella{actor}; 
		return;
	}

	if (IsDay(8)) {
		TDlg_DN8_Burah_Kapella{actor}; 
		return;
	}	
	
	if (IsDay(9)) {
		TDlg_DN9_Burah_Kapella{actor}; 
		return;
	}
	
	if (IsDay(10)) {
		TDlg_DN10_Burah_Kapella{actor}; 
		return;
	}	
	
	if (IsDay(11)) {
		TDlg_DN11_Burah_Kapella{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Burah_Kapella{actor}; 
		return;
	}		
	
	TDlg_Gag_Burah_Woman{actor};	
}