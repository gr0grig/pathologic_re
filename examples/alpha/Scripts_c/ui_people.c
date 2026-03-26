// @IMPORTS: SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,ProcessEvents/0,DestroyWindow/0
// @STRINGS: W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_100: op=0xd vars=int
// @EVENT_200: op=0x11 vars=int,string,object
// @PE: 0xd,0x11

task_0_event_100(var_0_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	return 0;
}


main()
{
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	ProcessEvents();
	return 0;
}


