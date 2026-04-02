include std.sci
include NPC_idle_base.sci
include NPC_Starshina.sci
include bgame.sci

maintask TNPC : TNPCSmartIdleBase
{
}

void PerformUse(object actor)
{
	///////////////////// nights /////////////////////
	if (IsNight(9)) {
		TDlg_DN9_Burah_StarshinaNight{actor};
		return;
	}

	if (IsNight(10)) {
		TDlg_DN10_Burah_StarshinaNight{actor};
		return;
	}
	
	if (IsNight(11)) {
		TDlg_DN11_Burah_StarshinaNight{actor};
		return;
	}
	///////////////////// nights /////////////////////
		
	if (IsDay(7)) {
		TDlg_DN7_Burah_Starshina{actor}; 
		return;
	}

	if (IsDay(8)) {
		TDlg_DN8_Burah_Starshina{actor}; 
		return;
	}

	if (IsDay(9)) {
		TDlg_DN9_Burah_Starshina{actor}; 
		return;
	}

	if (IsDay(10)) {
		TDlg_DN10_Burah_Starshina{actor}; 
		return;
	}

	if (IsDay(11)) {
		TDlg_DN11_Burah_Starshina{actor}; 
		return;
	}
	
	TDlg_Gag_Burah_Man{actor};
}
