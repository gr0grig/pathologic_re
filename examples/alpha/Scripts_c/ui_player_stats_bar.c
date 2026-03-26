// @IMPORTS: EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,GetWindowSize/2,StretchBlit/5,Blit/3
// @STRINGS: W:middle|W:start|W:end
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_200: op=0xa vars=int,string,object
// @EVENT_0: op=0xd vars=
// @PE: 0xa

task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_0_int = var_1_int;
	return 0;
}


task_0_event_0(var_0_int)
{
	var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0;
	GetWindowSize(var_4_int, var_5_int);
	var_7_float = var_4_int * var_0_int;
	var_6_int = var_7_float / (int)100;
	var_10_bool = var_6_int < (int)4;
	if(var_10_bool != 0) {
		return 6;
	}
	var_6_int = var_6_int - (int)4;
	var_13_bool = var_6_int != (int)0;
	if(var_13_bool != 0) {
		StretchBlit("middle", (int)2, (int)0, var_6_int, (int)7);
	}
	Blit("start", (int)0, (int)0);
	var_23_int = (int)2 + var_6_int;
	Blit("end", var_23_int, (int)0);
	return 6;
}


main(var_0_int)
{
	var_0_int = 0;
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


