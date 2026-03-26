// @IMPORTS: GetStringByID/2,_strupr/1,GetWindowSize/2,GetTextWidth/3,GetFontHeight/2,SetOwnerDraw/1,ProcessEvents/0,Print/7,GetVariable/2
// @STRINGS: W:default|W:player
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0x24 vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	Print("default", var_1_int, var_2_int, var_0_string, (float)1.0, (float)1.0, (float)1.0);
	return 0;
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	var_11_int = 0;
	func_43(var_11_int);
	GetStringByID(var_0_string, var_11_int);
	_strupr(var_0_string);
	GetWindowSize(var_7_int, var_8_int);
	GetTextWidth(var_9_int, "default", var_0_string);
	var_7_int = var_7_int - var_9_int;
	var_21_bool = var_7_int < (int)0;
	if(var_21_bool != 0) {
		var_7_int = 0;
	}
	var_1_int = var_7_int / (int)2;
	GetFontHeight(var_10_int, "default");
	var_24_int = var_8_int - var_10_int;
	var_2_int = var_24_int / (int)2;
	var_27_bool = var_2_int < (int)0;
	if(var_27_bool != 0) {
		var_2_int = 0;
	}
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 8;
}


func_43(var_11_int)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("player", var_13_int);
	var_16_bool = var_13_int == (int)0;
	if(var_16_bool != 0) {
		var_11_int = 200001;
		return 2;
	EMIT "GOTO 0x3a";
	}
	var_18_bool = var_13_int == (int)1;
	if(var_18_bool != 0) {
		var_11_int = 200002;
		return 2;
	}
	var_11_int = 200003;
	return 2;
}


