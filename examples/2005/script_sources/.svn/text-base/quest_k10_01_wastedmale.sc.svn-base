include std.sci
include disp_idle.sci
include kgame.sci
include NPC_wasted_male.sci

maintask TWastedMale : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN10_Klara_WastedMalePrison{actor};
	}
}
