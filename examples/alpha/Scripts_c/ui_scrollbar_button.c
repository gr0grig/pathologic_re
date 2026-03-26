// @IMPORTS: SetBackground/1,ProcessEvents/0,SendMessageToParent/1
// @STRINGS: W:default|W:pressed
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_2: op=0x6 vars=int,int
// @EVENT_3: op=0xe vars=int,int
// @EVENT_10: op=0x13 vars=
// @PE: 0x6,0xe

task_0_event_2(var_0_int, var_1_int)
{
	SetBackground("pressed");
	SendMessageToParent((int)-1);
	return 0;
}


task_0_event_3(var_0_int, var_1_int)
{
	SetBackground("default");
	return 0;
}


task_0_event_10()
{
	SetBackground("default");
	return 0;
}


main()
{
	SetBackground("default");
	ProcessEvents();
	return 0;
}


