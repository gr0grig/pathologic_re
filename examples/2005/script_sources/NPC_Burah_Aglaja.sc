include std.sci
include NPC_idle_base.sci
include NPC_Aglaja.sci
include bgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_aglaja", iMeeting);
	if (!iMeeting) {
		TDlg_Mt_Burah_Aglaja{actor};
		@SetVariable("mt_aglaja", 1);
	}

	///////////////////// nights /////////////////////
	if (IsNight(8)) {
		TDlg_DN8_Burah_AglajaNight{actor};
		return;
	}

	if (IsNight(12)) {
		TDlg_DN12_Burah_AglajaNight{actor};
		return;
	}
	///////////////////// nights /////////////////////
		
	if (IsDay(7)) {
		TDlg_DN7_Burah_Aglaja{actor}; 
		return;
	}	

	if (IsDay(8)) {
		TDlg_DN8_Burah_Aglaja{actor}; 
		return;
	}	

	if (IsDay(9)) {
		TDlg_DN9_Burah_Aglaja{actor}; 
		return;
	}	

	if (IsDay(11)) {
		TDlg_DN11_Burah_Aglaja{actor}; 
		return;
	}	
}
