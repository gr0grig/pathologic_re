include std.sci
include NPC_idle_base.sci
include NPC_Aglaja.sci
include kgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	///////////////////// nights /////////////////////
	if (IsNight(12)) {
		TDlg_DN12_Klara_AglajaNight{actor};
		return;
	}
	
	/////////////////////////////////////////////////
	if (IsDay(7)) {
		TDlg_DN7_Klara_Aglaja{actor}; 
		return;
	}	
	
	if (IsDay(8)) {
		TDlg_DN8_Klara_Aglaja{actor}; 
		return;
	}		

	if (IsDay(9)) {
		TDlg_DN9_Klara_Aglaja{actor}; 
		return;
	}		

	if (IsDay(10)) {
		TDlg_DN10_Klara_Aglaja{actor}; 
		return;
	}	
		
	if (IsDay(11)) {
		TDlg_DN11_Klara_Aglaja{actor}; 
		return;
	}	
	
	TDlg_Gag_Klara_Woman{actor};
}
