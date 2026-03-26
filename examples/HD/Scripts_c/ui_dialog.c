// @IMPORTS: ShowCursor/0,SetCursor/1,ProcessEvents/0
// @STRINGS: W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	ShowCursor();
	SetCursor("default");
	ProcessEvents();
	return 0;
}


