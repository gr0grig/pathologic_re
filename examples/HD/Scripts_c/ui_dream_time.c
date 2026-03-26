// @IMPORTS: GetWindowSize/2,GetFontHeight/2,SetNeedUpdate/1,SetOwnerDraw/1,ProcessEvents/0,GetStringByID/2,Print/7,GetGameTime/1
// @STRINGS: W:default|W: : |W:0
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_1: op=0x17 vars=float
// @EVENT_0: op=0x36 vars=

task_0_event_1(var_0_string, var_1_int, var_2_int, var_3_float)
{
	var_4_string = ""; var_5_string = "";
	var_6_int = 0;
	func_70(var_6_int);
	var_0_string = var_6_int + " : ";
	var_12_int = 0;
	func_78(var_12_int);
	var_19_bool = var_12_int < (int)10;
	if(var_19_bool != 0) {
		var_0_string = var_0_string + "0";
	}
	var_21_int = 0;
	func_78(var_21_int);
	var_0_string = var_0_string + var_21_int;
	GetStringByID(var_5_string, (int)4);
	var_24_int = " " + var_5_string;
	var_26_int = var_24_int + " ";
	var_27_int = 0;
	func_61(var_27_int);
	var_33_int = var_26_int + var_27_int;
	var_0_string = var_0_string + var_33_int;
	return 2;
}


task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	Print("default", var_1_int, var_2_int, var_0_string, (float)1.0, (float)1.0, (float)1.0);
	return 0;
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0;
	GetWindowSize(var_6_int, var_7_int);
	var_1_int = 20;
	GetFontHeight(var_8_int, "default");
	var_10_int = var_7_int - var_8_int;
	var_2_int = var_10_int / (int)2;
	var_13_bool = var_2_int < (int)0;
	if(var_13_bool != 0) {
		var_2_int = 0;
	}
	SetNeedUpdate((bool)1);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 6;
}


func_78(var_12_int)
{
	var_13_float = 0; var_14_float = 0;
	GetGameTime(var_14_float);
	var_15_int = 0;
	var_14_float = var_15_int;
	var_16_int = var_14_float - var_15_int;
	var_12_int = var_16_int * (int)60;
	return 2;
}


func_61(var_27_int)
{
	var_28_float = 0; var_29_float = 0;
	GetGameTime(var_29_float);
	var_31_int = 0;
	var_31_int = var_29_float / (int)24;
	var_27_int = (int)1 + var_31_int;
	return 2;
}


func_70(var_6_int)
{
	var_7_float = 0; var_8_float = 0;
	GetGameTime(var_8_float);
	var_9_int = 0;
	var_8_float = var_9_int;
	var_6_int = var_9_int % (int)24;
	return 2;
}


