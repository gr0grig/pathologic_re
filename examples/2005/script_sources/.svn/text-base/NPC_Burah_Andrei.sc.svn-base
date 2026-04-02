include std.sci
include NPC_idle_base.sci
include NPC_Andrei.sci
include bgame.sci
include item_base.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
/*	if (!IsActiveDialogState()) {
		TDlg_Fl_Burah_Andrei{actor};
		return;
	}*/
	
	int iPrevDay;
	@GetVariable("tr_andrei", iPrevDay);
	
	if (iPrevDay != GetDay()) {
		GenerateBurahAndreiTradeItems();
		@SetVariable("tr_andrei", GetDay());
	}		
	
	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_andrei", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Burah_Andrei{actor};
		@SetVariable("mt_andrei", 1);
	}
	
	if (IsDay(2)) {
		if (1000 == TDlg_DN2_Burah_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}	
	
	if (IsDay(5)) {
		if (1000 == TDlg_DN5_Burah_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}		
	
	if (IsDay(3) || IsDay(4) || IsDay(6) || IsDay(7) || IsDay(8) || IsDay(9) || IsDay(10) || IsDay(11)) {
		if (1000 == TDlg_Burah_Andrei_Trade{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}	
	
	int i12;
	@GetVariable("d12_andrei", i12);
	
	if (IsDay(12) && (!i12)) {
		TDlg_VolonteerUtopist{actor};
		@SetVariable("d12_andrei", 1);
		return;
	}
	
	TDlg_Gag_Burah_Man{actor};	
}