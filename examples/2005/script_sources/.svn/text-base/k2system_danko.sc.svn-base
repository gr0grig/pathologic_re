include std.sci
include NPC_base_disp.sci
include NPC_Danko.sci
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
		TDlg_K2System_Danko{actor};
	}
	else {
		TDlg_K2System_DankoLate{actor};
	}
}