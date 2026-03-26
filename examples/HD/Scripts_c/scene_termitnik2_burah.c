// @IMPORTS: Hold/0
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x4 vars=
// @EVENT_6: op=0x5 vars=

task_0_event_5()
{
	return 0;
}


task_0_event_6()
{
	return 0;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


