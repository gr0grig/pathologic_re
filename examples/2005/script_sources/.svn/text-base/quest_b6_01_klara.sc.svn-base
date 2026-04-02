include std.sci
include NPC_base_disp.sci
include bgame.sci
include NPC_Klara.sci

maintask TDisp : TNPCSmartIdleBaseDisp
{
	void init(void) {
		@SetVariable("b6q01KlaraLaska", 1);
		super.init();
	}
	void PerformUse(object actor) {
		TDlg_DN6_Burah_Klara{actor}; 
	}
	
	void OnDispose(void) {
		@SetVariable("b6q01KlaraLaska", 0);
	}
}
