// @IMPORTS: GetStringByID/2,GetWindowSize/2,GetTextWidth/3,GetFontHeight/2,SetOwnerDraw/1,ProcessEvents/0,Print/7,GetGameTime/1
// @STRINGS: W: : |W:0|W:default
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0x3a vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	Print("default", var_1_int, var_2_int, var_0_string, (float)1.0, (float)1.0, (float)1.0);
	return 0;
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0;
	var_13_int = 0;
	func_74(var_13_int);
	var_19_int = var_13_int + " : ";
	var_0_string = var_0_string + var_19_int;
	var_20_int = 0;
	func_82(var_20_int);
	var_27_bool = var_20_int < (int)10;
	if(var_27_bool != 0) {
		var_0_string = var_0_string + "0";
	}
	var_29_int = 0;
	func_82(var_29_int);
	var_0_string = var_0_string + var_29_int;
	GetStringByID(var_8_string, (int)200004);
	var_32_int = " " + var_8_string;
	var_34_int = var_32_int + " ";
	var_35_int = 0;
	func_65(var_35_int);
	var_41_int = var_34_int + var_35_int;
	var_0_string = var_0_string + var_41_int;
	GetWindowSize(var_9_int, var_10_int);
	GetTextWidth(var_11_int, "default", var_0_string);
	var_9_int = var_9_int - var_11_int;
	var_44_bool = var_9_int < (int)0;
	if(var_44_bool != 0) {
		var_9_int = 0;
	}
	var_1_int = var_9_int;
	GetFontHeight(var_12_int, "default");
	var_46_int = var_10_int - var_12_int;
	var_2_int = var_46_int / (int)2;
	var_49_bool = var_2_int < (int)0;
	if(var_49_bool != 0) {
		var_2_int = 0;
	}
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 10;
}


func_65(var_35_int)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_39_int = 0;
	var_39_int = var_37_float / (int)24;
	var_35_int = (int)1 + var_39_int;
	return 2;
}


func_74(var_13_int)
{
	var_14_float = 0; var_15_float = 0;
	GetGameTime(var_15_float);
	var_16_int = 0;
	var_15_float = var_16_int;
	var_13_int = var_16_int % (int)24;
	return 2;
}


func_82(var_20_int)
{
	var_21_float = 0; var_22_float = 0;
	GetGameTime(var_22_float);
	var_23_int = 0;
	var_22_float = var_23_int;
	var_24_int = var_22_float - var_23_int;
	var_20_int = var_24_int * (int)60;
	return 2;
}


