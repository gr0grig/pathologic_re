include std.sci
include NPC_idle_base.sci
include NPC_Andrei.sci
include dgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Danko_Andrei{actor};
		return;
	}*/
	
	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_andrei", iMeeting);
	
	if (!iMeeting) {
		TDlg_Mt_Danko_Andrei{actor}; 
		@SetVariable("mt_andrei", 1);
	}
	
	///////////////////// nights /////////////////////
	if (IsNight(2)) {
		TDlg_DN2_Danko_AndreiNight{actor}; // to prevent movement of quest d2q02, but danko can start quest at Eva.
		return;
	}
	
	if (IsDay(2)) {
		TDlg_DN2_Danko_Andrei{actor}; 
		return;
	}
	
	if (IsDay(3)) {
		TDlg_DN3_Danko_Andrei{actor}; 
		return;
	}	
	
	if (IsDay(6)) {
		TDlg_DN6_Danko_Andrei{actor}; 
		return;
	}

	if (IsDay(10)) {
		TDlg_DN10_Danko_Andrei{actor}; 
		return;
	}
	
	if (IsDay(11)) {
		TDlg_DN11_Danko_Andrei{actor}; 
		return;
	}
	
	if (IsDay(12)) {
		TDlg_Vol_DN12_Danko_Andrei{actor}; 
		return;
	}
	
	TDlg_Gag_Danko_Man{actor};	
}