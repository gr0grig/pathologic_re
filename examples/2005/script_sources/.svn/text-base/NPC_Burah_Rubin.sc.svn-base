include std.sci
include NPC_idle_base.sci
include NPC_Rubin.sci
include bgame.sci

maintask TNPC : TNPCSmartIdleBase
{
	void init(void) {
		super.init();
	}
}

void PerformUse(object actor)
{
	int i12;
	@GetVariable("d12_rubin", i12);
	
	if (IsDay(12) && (!i12)) {
		TDlg_VolonteerSmirennik{actor};
		@SetVariable("d12_rubin", 1);
		return;
	}	
	
	TDlg_Gag_Burah_Man{actor};
}