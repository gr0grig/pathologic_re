// @IMPORTS: GetWindowSize/2,IsImageLoaded/2,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,StretchBlit/6,SendMessage/2,rand/1
// @STRINGS: W:intro
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=float,float,float,int,int,int,int,bool params=0
// @EVENT_0: op=0x1b vars=
// @EVENT_200: op=0x24 vars=int,string,object
// @EVENT_1: op=0x2c vars=float
// @PE: 0x24,0x2c

task_0_event_0(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool)
{
	var_8_bool = var_7_bool == 0; //@nz
	if(var_8_bool != 0) {
		var_10_int = var_3_int + (int)1;
		StretchBlit(var_10_int, (int)0, (int)0, var_5_int, var_6_int, var_2_float);
	}
	return 0;
}


task_0_event_200(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_string, var_10_object)
{
	var_12_bool = var_9_string == "intro";
	if(var_12_bool != 0) {
		func_75(var_5_int, var_6_int, var_7_bool, var_8_int, var_9_string, var_10_object);
	}
	return 0;
}


task_0_event_1(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_float)
{
	var_9_bool = var_7_bool;
	if(var_9_bool != 0) {
		return 0;
	}
	var_0_float = var_0_float - var_8_float;
	var_11_bool = var_0_float > (int)0;
	if(var_11_bool != 0) {
		return 0;
	}
	var_1_float = var_1_float - var_8_float;
	var_13_bool = var_1_float < (int)0;
	if(var_13_bool != 0) {
		var_2_float = (int)1 + var_1_float;
		var_16_bool = var_1_float < (int)-1;
		if(var_16_bool != 0) {
			SendMessage((int)0, "intro");
			var_7_bool = true;
			return 0;
		}
	} else {
		var_2_float = -var_0_float;
	}
	var_20_bool = var_2_float > (int)1;
	if(var_20_bool != 0) {
		var_2_float = 1;
	}
	return 0;
	
}


main(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	GetWindowSize(var_5_int, var_6_int);
	var_7_bool = true;
	var_4_int = 0;
	var_3_int = 0;
	
Label_6:
	if((bool)1 != 0) {
		var_12_int = var_4_int + (int)1;
		IsImageLoaded(var_9_bool, var_12_int);
		var_13_bool = var_9_bool == 0; //@nz
		if(var_13_bool != 0) {
		} else {
			var_4_int = var_4_int + (int)1;
			goto Label_6;
		}
	}
	SetOwnerDraw((bool)1);
	SetNeedUpdate((bool)1);
	ProcessEvents();
	return 2;
	
}


func_75(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_7_bool)
{
	var_7_bool = false;
	var_0_float = 1;
	rand(var_1_float);
	var_15_float = var_1_float * (int)3;
	var_1_float = (int)6 + var_15_float;
	var_2_float = 0;
	var_3_int = var_3_int + (int)1;
	var_3_int = var_3_int % var_4_int;
	return 0;
}


