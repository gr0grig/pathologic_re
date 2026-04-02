include std.sci
include NPC_idle_base.sci
include NPC_Starshina.sci
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
		TDlg_Fl_Burah_Starshina{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Klara_Starshina{actor}; bMeeting = true;
	}
	
	if (IsDay(8)) {
		TDlg_DN8_Klara_Starshina{actor};
		return;
	}		
	
	if (IsDay(11)) {
		TDlg_DN11_Klara_Starshina{actor};
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Klara_Starshina{actor}; 
		return;
	}
}
