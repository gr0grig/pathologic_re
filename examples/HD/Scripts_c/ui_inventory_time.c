// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,GetStringByID/2,GetWindowSize/2,GetFontHeight/2,GetTextWidth/3,Print/7,GetGameTime/1
// @STRINGS: W:default|W: : |W:0|W:, 
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0x9 vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0;
	var_13_int = 0;
	func_69(var_13_int);
	var_0_string = var_13_int + " : ";
	var_19_int = 0;
	func_77(var_19_int);
	var_26_bool = var_19_int < (int)10;
	if(var_26_bool != 0) {
		var_0_string = var_0_string + "0";
	}
	var_28_int = 0;
	func_77(var_28_int);
	var_0_string = var_0_string + var_28_int;
	GetStringByID(var_8_string, (int)4);
	var_31_int = ", " + var_8_string;
	var_33_int = var_31_int + " ";
	var_34_int = 0;
	func_60(var_34_int);
	var_40_int = var_33_int + var_34_int;
	var_0_string = var_0_string + var_40_int;
	GetWindowSize(var_9_int, var_10_int);
	GetFontHeight(var_11_int, "default");
	var_42_int = var_10_int - var_11_int;
	var_2_int = var_42_int / (int)2;
	GetTextWidth(var_12_int, "default", var_0_string);
	var_45_int = var_9_int - var_12_int;
	var_1_int = var_45_int / (int)2;
	Print("default", var_1_int, var_2_int, var_0_string, (float)1.0, (float)1.0, (float)1.0);
	return 10;
}


main(var_0_string, var_1_int, var_2_int)
{
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_77(var_19_int)
{
	var_20_float = 0; var_21_float = 0;
	GetGameTime(var_21_float);
	var_22_int = 0;
	var_21_float = var_22_int;
	var_23_int = var_21_float - var_22_int;
	var_19_int = var_23_int * (int)60;
	return 2;
}


func_69(var_13_int)
{
	var_14_float = 0; var_15_float = 0;
	GetGameTime(var_15_float);
	var_16_int = 0;
	var_15_float = var_16_int;
	var_13_int = var_16_int % (int)24;
	return 2;
}


func_60(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_int = 0;
	var_38_int = var_36_float / (int)24;
	var_34_int = (int)1 + var_38_int;
	return 2;
}


