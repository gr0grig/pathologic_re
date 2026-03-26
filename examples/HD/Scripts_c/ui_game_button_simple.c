// @IMPORTS: SetBackground/1,ProcessEvents/0,SendMessageToParent/1
// @STRINGS: W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_2: op=0x6 vars=int,int
// @PE: 0x6

task_0_event_2(var_0_int, var_1_int)
{
	SendMessageToParent((int)0);
	return 0;
}


main()
{
	SetBackground("default");
	ProcessEvents();
	return 0;
}


