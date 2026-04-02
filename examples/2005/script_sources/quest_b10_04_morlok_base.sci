include std.sci
include disp_idle.sci

maintask TGatherer : TDispIdleLookAsync
{
	void init(void) {
		super.init(300, 100);
	}

	void OnUse(object actor) {
		CancelActivity();
		DoDialog(actor);
	}
}
