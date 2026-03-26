// @IMPORTS: RemoveRTEnvelope/0,RemoveEnvelope/0,SetDeathState/0,GetProperty/2,LockAnimationEnd/2,Hold/0
// @STRINGS: W:animation|W:all
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

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


