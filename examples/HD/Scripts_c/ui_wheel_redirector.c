// @IMPORTS: ProcessEvents/0,SendMessageToParent/1
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_15: op=0x3 vars=int,int,float
// @PE: 0x3

task_0_event_15(var_0_int, var_1_int, var_2_float)
{
	SendMessageToParent(var_2_float);
	return 0;
}


main()
{
	ProcessEvents();
	return 0;
}


