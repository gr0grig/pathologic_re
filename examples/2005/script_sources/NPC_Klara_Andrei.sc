include std.sci
include NPC_idle_base.sci
include NPC_Andrei.sci
include kgame.sci
include item_base.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	int iPrevDay;
	@GetVariable("tr_andrei", iPrevDay);
	
	if (iPrevDay != GetDay()) {
		GenerateKlaraAndreiTradeItems();
		@SetVariable("tr_andrei", GetDay());
	}	

	// meeting and first game dialog
	int iMeeting;
	@GetVariable("mt_andrei", iMeeting);
	
	// meeting and first game dialog
	if (!iMeeting) {
		TDlg_Mt_Klara_Andrei{actor};
		@SetVariable("mt_andrei", 1);
	}
	
	if (IsDay(2)) {
		if (1000 == TDlg_DN2_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			

	if (IsDay(3)) {
		if (1000 == TDlg_DN3_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			

	if (IsDay(4)) {
		if (1000 == TDlg_DN4_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			

	if (IsDay(5)) {
		if (1000 == TDlg_DN5_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			
		
	if (IsDay(6)) {
		if (1000 == TDlg_DN6_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			

	if (IsDay(7)) {
		if (1000 == TDlg_DN7_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			

	if (IsDay(8)) {
		if (1000 == TDlg_DN8_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			

	if (IsDay(9)) {
		if (1000 == TDlg_DN9_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			

	if (IsDay(10)) {
		if (1000 == TDlg_DN10_Klara_Andrei{actor}) {
			if (!SetTradeCamera(actor))
				return;
			TTrade{actor};
			UnsetTradeCamera(actor);
		}
		return;
	}			
	
	// TESTME, only up to 10 day		
	
	if (IsDay(12)) {
		TDlg_VolonteerUtopist{actor};
		return;
	}	
	
	TDlg_Gag_Klara_Man{actor};		
}