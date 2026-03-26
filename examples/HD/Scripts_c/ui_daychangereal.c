// @IMPORTS: GetVariable/2,GetWindowSize/2,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,PlaySound/1,DestroyWindow/0,GetStringByID/2,PrintInWidth/10,IsSoundPlaying/2
// @STRINGS: W:c_iWM_RealDayChange|W:d|W:q01|W:b|W:k|W:alive|W:dead|W:default|W:branch
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,bool,bool,float,int,int,int,int params=0
// @EVENT_1: op=0x36 vars=float
// @EVENT_0: op=0x4a vars=
// @PE: 0x36

task_0_event_1(var_0_string, var_1_bool, var_2_bool, var_3_float, var_4_int, var_5_int, var_6_int, var_7_int, var_8_float)
{
	var_9_bool = var_2_bool == 0; //@nz
	if(var_9_bool != 0) {
		var_2_bool = true;
		PlaySound(var_0_string);
		return 0;
	EMIT "GOTO 0x43";
	}
	var_10_bool = 0;
	func_92(var_10_bool);
	if(var_10_bool != 0) {
		return 0;
	}
	var_3_float = var_3_float - var_8_float;
	var_17_bool = var_3_float <= (int)0;
	if(var_17_bool != 0) {
		DestroyWindow();
	}
	return 0;
}


task_0_event_0(var_0_string, var_1_bool, var_2_bool, var_3_float, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_string = ""; var_9_float = 0; var_10_int = 0; var_11_string = ""; var_12_float = 0; var_13_int = 0;
	var_15_bool = var_3_float <= (int)0;
	if(var_15_bool != 0) {
		return 6;
	}
	GetStringByID(var_11_string, var_7_int);
	var_12_float = var_3_float / (float)1.0;
	PrintInWidth(var_13_int, "default", (int)0, (int)0, var_4_int, var_11_string, (float)1.0, (float)1.0, (float)1.0, var_12_float);
	return 6;
}


main(var_0_string, var_1_bool, var_2_bool, var_3_float, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_string = ""; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_int = 0;
	func_104((int)0);
	var_18_int = var_14_int;
	GetVariable("c_iWM_RealDayChange", var_15_int);
	var_15_int = var_15_int + (int)-1;
	var_3_float = 1.0;
	var_25_bool = var_14_int == (int)0;
	if(var_25_bool != 0) {
		var_27_int = "d" + var_15_int;
		var_16_string = var_27_int + "q01";
	} else {
			var_34_bool = var_14_int == (int)1;
			if(var_34_bool != 0) {
				var_36_int = "b" + var_15_int;
				var_16_string = var_36_int + "q01";
				goto Label_31;
			}
			var_39_int = "k" + var_15_int;
			var_16_string = var_39_int + "q01";
	}
Label_31:
	GetVariable(var_16_string, var_17_int);
	var_30_bool = var_17_int == (int)1000;
	if(var_30_bool != 0) {
		var_1_bool = true;
		var_0_string = "alive";
		var_7_int = 351;
	} else {
		var_1_bool = false;
		var_0_string = "dead";
		var_7_int = 350;

	}
	GetWindowSize(var_4_int, var_5_int);
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 10;
	
}


func_104(var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	GetVariable("branch", var_20_int);
	var_20_int = var_18_int;
	return 2;
}


func_92(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	var_13_bool = var_1_bool;
	if(var_13_bool != 0) {
		IsSoundPlaying(var_12_bool, "alive");
	} else {
		IsSoundPlaying(var_12_bool, "dead");
	}
	var_12_bool = var_10_bool;
	return 2;
	
}


