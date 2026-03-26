// @IMPORTS: GetSelectedMessage/1,GetMessage/4,SendMessage/2,ShowCursor/0,SetCursor/1,CaptureKeyboard/0,ProcessEvents/0,DestroyWindow/0
// @STRINGS: W:text|W:default|W:button_day
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_100: op=0x1e vars=int
// @EVENT_200: op=0x22 vars=int,string,object
// @PE: 0x1e

task_0_event_100(var_0_int, var_1_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0;
	var_5_int = 0;
	
Label_36:
	var_7_bool = var_5_int < (int)12;
	if(var_7_bool != 0) {
		var_10_int = var_5_int + (int)1;
		var_11_int = "button_day" + var_10_int;
		var_12_bool = var_2_string == var_11_int;
		if(var_12_bool != 0) {
			var_0_int = var_5_int;
		} else {
			var_5_int = var_5_int + (int)1;
			goto Label_36;
		}
	}
	var_13_int = 0;
	var_13_int = var_0_int;
	func_55(var_13_int);
	return 2;
	
}


main(var_0_int)
{
	var_1_int = 0; var_2_float = 0; var_3_string = ""; var_4_string = ""; var_5_int = 0; var_6_float = 0; var_7_string = ""; var_8_string = "";
	var_0_int = 0;
	GetSelectedMessage(var_5_int);
	var_10_bool = var_5_int != (int)-1;
	if(var_10_bool != 0) {
		GetMessage(var_5_int, var_7_string, var_8_string, var_6_float);
		var_0_int = var_6_float / (float)24.0;
		var_13_int = var_5_int | (int)32768;
		SendMessage(var_13_int, "text");
	}
	ShowCursor();
	SetCursor("default");
	var_16_int = 0;
	var_16_int = var_0_int;
	func_55(var_16_int);
	CaptureKeyboard();
	ProcessEvents();
	return 8;
}


func_55(var_16_int)
{
	var_17_int = 0; var_18_int = 0;
	var_18_int = 0;
	
Label_57:
	var_20_bool = var_18_int < (int)12;
	if(var_20_bool != 0) {
		var_21_bool = var_18_int == var_16_int;
		if(var_21_bool != 0) {
			var_25_int = var_18_int + (int)1;
			var_26_int = "button_day" + var_25_int;
			SendMessage((int)1, var_26_int);
		} else {
			var_31_int = var_18_int + (int)1;
			var_32_int = "button_day" + var_31_int;
			SendMessage((int)0, var_32_int);
	}
		SendMessage(var_16_int, "text");
		var_18_int = var_18_int + (int)1;
		goto Label_57;
	}
	return 2;
	
}


