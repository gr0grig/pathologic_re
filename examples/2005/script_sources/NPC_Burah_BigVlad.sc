include std.sci
include NPC_base.sci
include NPC_BigVlad.sci
include bgame.sci

var bool bMeeting;

maintask TNPC : TNPCBase
{
	void init(void) {
		bMeeting = false;
		super.init();
	}
}

void PerformUse(object actor)
{
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Burah_BigVlad{actor}; 
		bMeeting = true;
	}
	
	///////////////////// nights /////////////////////
	if (IsNight(2)) {
		TDlg_DN2_Burah_BigVladNight{actor};
		return;
	}

	if (IsNight(3)) {
		TDlg_DN3_Burah_BigVladNight{actor};
		return;
	}
	///////////////////// nights /////////////////////
	
	if (IsDay(1)) {
		TDlg_DN1_Burah_BigVlad{actor};
		return;
	}		
	
	if (IsDay(2)) {
		TDlg_DN2_Burah_BigVlad{actor}; 
		return;
	}		
	
	if (IsDay(3)) {
		TDlg_DN3_Burah_BigVlad{actor}; 
		return;
	}	

	if (IsDay(11)) {
		TDlg_DN11_Burah_BigVlad{actor}; 
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};
}