// @IMPORTS: EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,GetWindowSize/2,Blit/3,BlitClipped/7
// @STRINGS: W:r1|W:r2|W:r3|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_200: op=0xa vars=int,string,object
// @EVENT_0: op=0x15 vars=
// @PE: 0xa

task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_0_int = var_1_int;
	var_5_bool = var_0_int > (int)100;
	if(var_5_bool != 0) {
		var_0_int = 100;
	}
	var_7_bool = var_0_int < (int)0;
	if(var_7_bool != 0) {
		var_0_int = 0;
	}
	return 0;
}


task_0_event_0(var_0_int)
{
	var_1_string = ""; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_string = ""; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	var_12_bool = var_0_int <= (int)33;
	if(var_12_bool != 0) {
		var_6_string = "r1";
	} else {
		var_26_bool = var_0_int <= (int)66;
		if(var_26_bool != 0) {
			var_6_string = "r2";
			goto Label_33;
		}
		var_6_string = "r3";
	}
Label_33:
	GetWindowSize(var_7_int, var_8_int);
	var_9_int = var_0_int + (int)2;
	var_15_bool = var_9_int > (int)100;
	if(var_15_bool != 0) {
		var_9_int = 100;
	}
	var_16_float = var_7_int * var_0_int;
	var_10_int = var_16_float / (int)100;
	Blit("default", (int)0, (int)0);
	BlitClipped(var_6_string, (int)0, (int)0, (int)0, (int)0, var_10_int, var_8_int);
	return 10;
	
}


main(var_0_int)
{
	var_0_int = 0;
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


