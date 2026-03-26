// @IMPORTS: RemoveRTEnvelope/0,RemoveEnvelope/0,SetDeathState/0,GetProperty/2,LockAnimationEnd/2,Hold/0
// @STRINGS: W:animation|W:all
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x11 vars=

task_0_event_5()
{
	var_0_string = ""; var_1_string = "";
	GetProperty("animation", var_1_string);
	LockAnimationEnd("all", var_1_string);
	return 2;
}


main()
{
	var_0_string = ""; var_1_string = "";
	RemoveRTEnvelope();
	RemoveEnvelope();
	SetDeathState();
	GetProperty("animation", var_1_string);
	LockAnimationEnd("all", var_1_string);
	
Label_13:
	Hold();
	goto Label_13;
}
EMIT "Return(); Pop(2)";


