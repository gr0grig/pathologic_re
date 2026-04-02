include std.sci
include NPC_idle_base.sci
include NPC_Burah.sci
include kgame.sci

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
	@GetVariable("mt_burah", iMeeting);
	
	if (!iMeeting) {
		TDlg_Mt_Klara_Burah{actor}; 
		@SetVariable("mt_burah", 1);
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Klara_Burah{actor}; 
		return;
	}			

	if (IsDay(2)) {
		TDlg_DN2_Klara_Burah{actor}; 
		return;
	}		
	
	if (IsDay(7)) {
		TDlg_DN7_Klara_Burah{actor}; 
		return;
	}		
	
	if (IsDay(11)) {
		TDlg_DN11_Klara_Burah{actor}; 
		return;
	}		
	
	if (IsDay(12)) {
		TDlg_DN12_Klara_BurahFactory{actor}; 
		return;
	}
	
	TDlg_Gag_Klara_Man{actor};		
}