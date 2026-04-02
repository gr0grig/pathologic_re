include std.sci
include disp_idle.sci
include kgame.sci
include NPC_Britva.sci

maintask TBritva : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN4_Klara_Britva{actor};
	}
}
