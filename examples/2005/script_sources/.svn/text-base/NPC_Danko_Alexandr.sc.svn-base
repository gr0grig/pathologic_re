include std.sci
include NPC_idle_base.sci
include NPC_Alexandr.sci
include dgame.sci

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
		TDlg_Fl_Danko_Alexandr{actor};
		return;
	}*/
	
	// meeting and first game dialog
	if (!bMeeting) {
		TDlg_Mt_Danko_Alexandr{actor}; bMeeting = true;
	}
	
	///////////////////// nights /////////////////////
	if (IsNight(2)) {
		TDlg_DN2_Danko_AlexandrNight{actor}; // to prevent initiation of quest d2q01
		return;
	}
	
	if (IsDay(1)) {
		TDlg_DN1_Danko_Alexandr{actor};
		return;
	}

	if (IsDay(2)) {
		TDlg_DN2_Danko_Alexandr{actor};
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Alexandr{actor};
		return;
	}

	if (IsDay(4)) {
		TDlg_DN4_Danko_Alexandr{actor};
		return;
	}
	
	if (IsDay(5)) {
		TDlg_DN5_Danko_Alexandr{actor};
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Alexandr{actor};
		return;
	}	

	if (IsDay(7)) {
		TDlg_DN7_Danko_Alexandr{actor};
		return;
	}	
	
	if (IsDay(12)) {
		TDlg_VolonteerSmirennik{actor};
		return;
	}		
	
	TDlg_Gag_Danko_Man{actor};	
}
