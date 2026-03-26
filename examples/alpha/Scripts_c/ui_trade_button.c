// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,SendMessageToParent/1
// @STRINGS: W:default|W:pressed
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_2: op=0x9 vars=int,int
// @EVENT_3: op=0x11 vars=int,int
// @EVENT_10: op=0x16 vars=
// @PE: 0x9,0x11

task_0_event_2(var_0_int, var_1_int)
{
	SetBackground("pressed");
	SendMessageToParent((int)0);
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
	SetOwnerDraw((bool)0);
	ProcessEvents();
	return 0;
}


