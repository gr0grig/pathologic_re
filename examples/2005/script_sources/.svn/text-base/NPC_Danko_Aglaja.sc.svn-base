include std.sci
include NPC_idle_base.sci
include NPC_Aglaja.sci
include dgame.sci

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
		TDlg_DN12_Danko_AglajaNight{actor};
		return;
	}
	//////////////////////////////////////////////////
	
	if (IsDay(7)) {
		TDlg_DN7_Danko_Aglaja{actor}; 
		return;
	}

	if (IsDay(8)) {
		TDlg_DN8_Danko_Aglaja{actor}; 
		return;
	}

	if (IsDay(9)) {
		TDlg_DN9_Danko_Aglaja{actor}; 
		return;
	}
	
	if (IsDay(10)) {
		TDlg_DN10_Danko_Aglaja{actor}; 
		return;
	}	
	
	if (IsDay(11)) {
		TDlg_DN11_Danko_Aglaja{actor}; 
		return;
	}
}
