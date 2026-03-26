// @IMPORTS: SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,DestroyWindow/0
// @STRINGS: W:default|W:text
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_101: op=0xd vars=int
// @EVENT_102: op=0x1e vars=int
// @EVENT_100: op=0x2f vars=int
// @EVENT_200: op=0x33 vars=int,string,object
// @PE: 0xd,0x1e,0x2f,0x33

task_0_event_101(var_0_int)
{
	var_2_bool = var_0_int == (int)267;
	if(var_2_bool != 0) {
		SendMessage((int)1001, "text");
	} else {
		var_6_bool = var_0_int == (int)268;
		if(var_6_bool == 0) goto Label_29;
		SendMessage((int)1000, "text");
	}
Label_29:
	return 0;
	
}


task_0_event_102(var_0_int)
{
	var_2_bool = var_0_int == (int)272;
	if(var_2_bool != 0) {
		SendMessage((int)1001, "text");
	} else {
		var_6_bool = var_0_int == (int)274;
		if(var_6_bool == 0) goto Label_46;
		SendMessage((int)1000, "text");
	}
Label_46:
	return 0;
	
}


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


