// @IMPORTS: GetWindowSize/2,GetStringByID/2,SetOwnerDraw/1,ProcessEvents/0,PrintInWidth/9
// @STRINGS: W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0xb vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0;
	PrintInWidth(var_4_int, "default", (int)0, (int)-1, var_1_int, var_0_string, (float)0.37254902720451355, (float)0.37254902720451355, (float)0.37254902720451355);
	return 2;
}


main(var_0_string, var_1_int, var_2_int)
{
	GetWindowSize(var_1_int, var_2_int);
	GetStringByID(var_0_string, (int)725);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


