// @IMPORTS: GetStringByID/2,GetWindowSize/2,GetFontHeight/2,SetOwnerDraw/1,ProcessEvents/0,Print/7,GetVariable/2
// @STRINGS: W:default|W:branch
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int params=0
// @EVENT_0: op=0x2d vars=

task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	Print("default", var_1_int, var_2_int, var_0_string, (float)0.6549019813537598, (float)0.6549019813537598, (float)0.6549019813537598);
	return 0;
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	var_11_int = 0;
	func_52(var_11_int);
	var_16_bool = var_11_int == (int)1;
	if(var_16_bool != 0) {
		var_7_int = 713;
	} else {
		var_23_int = 0;
		func_52(var_23_int);
		var_25_bool = var_23_int == (int)0;
		if(var_25_bool != 0) {
			var_7_int = 714;
			goto Label_24;
		}
		var_26_int = 0;
		func_52(var_26_int);
		var_28_bool = var_26_int == (int)2;
		if(var_28_bool == 0) goto Label_24;
		var_7_int = 715;
	}
Label_24:
	GetStringByID(var_0_string, var_7_int);
	GetWindowSize(var_8_int, var_9_int);
	var_1_int = 2;
	GetFontHeight(var_10_int, "default");
	var_18_int = var_9_int - var_10_int;
	var_2_int = var_18_int / (int)2;
	var_21_bool = var_2_int < (int)0;
	if(var_21_bool != 0) {
		var_2_int = 0;
	}
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 8;
	
}


func_52(var_11_int)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("branch", var_13_int);
	var_13_int = var_11_int;
	return 2;
}


