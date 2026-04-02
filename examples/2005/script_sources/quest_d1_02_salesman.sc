include std.sci
include NPC_Salesman.sci
include disp_idle.sci
include dgame.sci

maintask TSalesman : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN1_Danko_SalesmanLaska{actor};
	}
}
