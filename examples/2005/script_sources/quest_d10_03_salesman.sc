include std.sci
include disp_idle.sci
include dgame.sci
include NPC_Salesman.sci

maintask TSalesman : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN10_Danko_Salesman{actor};
	}
}
