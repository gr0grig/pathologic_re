include std.sci
include NPC_idle_base.sci
include NPC_Georg.sci
include bgame.sci

var bool bMeeting, bUtopist;

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		bMeeting = false;
		super.init();
	}
}

void PerformUse(object actor)
{
	if (!bMeeting) {
		TDlg_Mt_Burah_Georg{actor}; 
		bMeeting = true;
	}
	
	if (IsDay(8)) {
		TDlg_DN8_Burah_Georg{actor}; 
		return;
	}
	
	if (IsDay(12) && (!bUtopist)) {
		TDlg_VolonteerUtopist{actor};
		bUtopist = true;
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};
}