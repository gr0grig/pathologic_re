include std.sci
include NPC_base_disp.sci
include NPC_Burah.sci
include kgame.sci

maintask TNPC : TNPCSmartIdleBaseDisp
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	int iDay;
	@GetProperty("day", iDay);
	if (iDay == GetDay()) {
		TDlg_K2System_Burah{actor};
	}
	else {
		TDlg_K2System_BurahLate{actor};
	}
}