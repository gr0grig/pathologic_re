include std.sci
include disp_idle.sci

task TPrisonerBase : TDispIdle
{
	void OnUse(object actor) {
		CancelActivity();
		DoDialog(actor);
	}
	
	// void DoDialog(object actor) = 0

}

