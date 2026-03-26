// @IMPORTS: Hold/0,PlayAnimation/0
// @STRINGS: W:play
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x4 vars=string
// @PE: 0x4

task_0_event_26(var_0_string)
{
	var_2_bool = var_0_string == "play";
	if(var_2_bool != 0) {
		EventDisable(26);
		PlayAnimation();
		Hold();
		EventEnable(26);
	}
	return 0;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


