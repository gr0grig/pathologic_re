include std.sci
include NPC_idle_base.sci
include NPC_Danko.sci
include bgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	int iMeeting;
	@GetVariable("mt_danko", iMeeting);

	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Burah_Danko{actor}; 
		@SetVariable("mt_danko", 1);
	}
	
	///////////////////// nights /////////////////////
	if (IsNight(4)) {
		TDlg_DN4_Burah_DankoNight{actor};
		return;
	}

	if (IsNight(5)) {
		TDlg_DN5_Burah_DankoNight{actor};
		return;
	}
	
	if (IsNight(6)) {
		TDlg_DN6_Burah_DankoNight{actor};
		return;
	}

	if (IsNight(7)) {
		TDlg_DN7_Burah_DankoNight{actor};
		return;
	}

	if (IsNight(10)) {
		TDlg_DN10_Burah_DankoNight{actor};
		return;
	}
	///////////////////// nights /////////////////////
	
	if (IsDay(1)) {
		TDlg_DN1_Burah_Danko{actor}; 
		return;
	}	
	
	if (IsDay(2)) {
		TDlg_DN2_Burah_Danko{actor}; 
		return;
	}		
	
	if (IsDay(3)) {
		TDlg_DN3_Burah_Danko{actor}; 
		return;
	}	

	if (IsDay(4)) {
		TDlg_DN4_Burah_Danko{actor}; 
		return;
	}	

	if (IsDay(5)) {
		TDlg_DN5_Burah_Danko{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Burah_Danko{actor}; 
		return;
	}	
	
	if (IsDay(7)) {
		TDlg_DN7_Burah_Danko{actor}; 
		return;
	}	

	if (IsDay(8)) {
		TDlg_DN8_Burah_Danko{actor}; 
		return;
	}	

	if (IsDay(10)) {
		TDlg_DN10_Burah_Danko{actor}; 
		return;
	}	

	if (IsDay(11)) {
		TDlg_DN11_Burah_Danko{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_DN12_Burah_Danko{actor}; 
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};
}
