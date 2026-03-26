// @IMPORTS: DisableUpdate/0,Hold/0,SetVisibility/1,StopGroup0/0
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x5 vars=

task_0_event_5()
{
	SetVisibility((bool)1);
	StopGroup0();
	return 0;
}


main()
{
	DisableUpdate();
	Hold();
	return 0;
}


