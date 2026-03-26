// @IMPORTS: GetStringByID/2,GetWindowSize/2,GetFontHeight/2,SetOwnerDraw/1,ProcessEvents/0,Print/7,GetGameTime/1
// @STRINGS: W: : |W:0|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0x32 vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	Print("default", var_1_int, var_2_int, var_0_string, (float)1.0, (float)1.0, (float)1.0);
	return 0;
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	var_11_int = 0;
	func_66(var_11_int);
	var_17_int = var_11_int + " : ";
	var_0_string = var_0_string + var_17_int;
	var_18_int = 0;
	func_74(var_18_int);
	var_25_bool = var_18_int < (int)10;
	if(var_25_bool != 0) {
		var_0_string = var_0_string + "0";
	}
	var_27_int = 0;
	func_74(var_27_int);
	var_0_string = var_0_string + var_27_int;
	GetStringByID(var_7_string, (int)4);
	var_30_int = " " + var_7_string;
	var_32_int = var_30_int + " ";
	var_33_int = 0;
	func_57(var_33_int);
	var_39_int = var_32_int + var_33_int;
	var_0_string = var_0_string + var_39_int;
	GetWindowSize(var_8_int, var_9_int);
	var_1_int = 20;
	GetFontHeight(var_10_int, "default");
	var_41_int = var_9_int - var_10_int;
	var_2_int = var_41_int / (int)2;
	var_44_bool = var_2_int < (int)0;
	if(var_44_bool != 0) {
		var_2_int = 0;
	}
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 8;
}


func_57(var_33_int)
{
	var_34_float = 0; var_35_float = 0;
	GetGameTime(var_35_float);
	var_37_int = 0;
	var_37_int = var_35_float / (int)24;
	var_33_int = (int)1 + var_37_int;
	return 2;
}


func_66(var_11_int)
{
	var_12_float = 0; var_13_float = 0;
	GetGameTime(var_13_float);
	var_14_int = 0;
	var_13_float = var_14_int;
	var_11_int = var_14_int % (int)24;
	return 2;
}


func_74(var_18_int)
{
	var_19_float = 0; var_20_float = 0;
	GetGameTime(var_20_float);
	var_21_int = 0;
	var_20_float = var_21_int;
	var_22_int = var_20_float - var_21_int;
	var_18_int = var_22_int * (int)60;
	return 2;
}


