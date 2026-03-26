// @IMPORTS: GetWindowSize/2,SetOwnerDraw/1,ProcessEvents/0,PrintInWidth/9,GetStringByID/2
// @STRINGS: W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,string,int,int params=0
// @EVENT_0: op=0x9 vars=
// @EVENT_200: op=0x15 vars=int,string,object
// @PE: 0x15

task_0_event_0(var_0_bool, var_1_string, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_int = 0;
	var_6_bool = var_0_bool;
	if(var_6_bool != 0) {
		PrintInWidth(var_5_int, "default", (int)0, (int)0, var_2_int, var_1_string, (float)1.0, (float)1.0, (float)1.0);
	}
	return 2;
}


task_0_event_200(var_0_bool, var_1_string, var_2_int, var_3_int, var_4_int, var_5_string, var_6_object)
{
	var_8_bool = var_4_int != (int)-1;
	if(var_8_bool != 0) {
		GetStringByID(var_1_string, var_4_int);
		var_0_bool = true;
	} else {
		var_0_bool = false;
	}
	return 0;
	
}


main(var_0_bool, var_1_string, var_2_int, var_3_int)
{
	var_0_bool = false;
	GetWindowSize(var_2_int, var_3_int);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


