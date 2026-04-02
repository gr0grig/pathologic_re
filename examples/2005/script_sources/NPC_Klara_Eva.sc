include std.sci
include NPC_idle_base.sci
include NPC_Eva.sci
include kgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	int iMeeting;
	@GetVariable("mt_eva", iMeeting);

	if (!iMeeting) {
		TDlg_Mt_Klara_Eva{actor}; 
		@SetVariable("mt_eva", 1);
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Klara_Eva{actor}; 
		return;
	}				
	
	if (IsDay(6)) {
		TDlg_DN6_Klara_Eva{actor}; 
		return;
	}		

	if (IsDay(11)) {
		TDlg_DN11_Klara_Eva{actor}; 
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerUtopist{actor};
		return;
	}			
	
	TDlg_Gag_Klara_Woman{actor};
}
