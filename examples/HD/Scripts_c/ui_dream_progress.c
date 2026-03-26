// @IMPORTS: GetWindowSize/2,SetOwnerDraw/1,ProcessEvents/0,StretchBlit/5,Print/7
// @STRINGS: W:white|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int params=0
// @EVENT_200: op=0x9 vars=int,string,object
// @EVENT_0: op=0xc vars=
// @PE: 0x9

task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_string, var_5_object)
{
	var_0_int = var_3_int;
	return 0;
}


task_0_event_0(var_0_int, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0;
	var_9_bool = var_0_int == 0; //@nz
	if(var_9_bool != 0) {
		return 6;
	}
	var_10_float = var_1_int * var_0_int;
	var_6_int = var_10_float / (int)100;
	var_13_bool = var_6_int != (int)0;
	if(var_13_bool != 0) {
		StretchBlit("white", (int)0, (int)0, var_6_int, var_2_int);
	}
	var_19_int = var_0_int + (int)1;
	var_20_float = (float)6.0 * var_19_int;
	var_7_int = var_20_float / (float)100.0;
	var_22_int = var_7_int;
	if(var_22_int != 0) {
		var_24_int = var_7_int - (int)1;
		var_25_float = var_24_int * var_1_int;
		var_8_int = var_25_float / (float)6.0;
		var_29_int = var_8_int + (int)5;
		Print("default", var_29_int, (int)5, var_7_int, (int)0, (int)0, (int)0);
	}
	return 6;
}


main(var_0_int, var_1_int, var_2_int)
{
	var_0_int = 0;
	GetWindowSize(var_1_int, var_2_int);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


