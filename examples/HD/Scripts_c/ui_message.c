// @IMPORTS: SendMessage/2,ShowCursor/0,SetCursor/1,CaptureKeyboard/0,ProcessEvents/0,DestroyWindow/0,GetGameTime/1
// @STRINGS: W:text|W:default|W:button_day
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_100: op=0x25 vars=int
// @EVENT_101: op=0x29 vars=int
// @EVENT_102: op=0x58 vars=int
// @EVENT_200: op=0x69 vars=int,string,object
// @PE: 0x25,0x29,0x58

task_0_event_100(var_0_int, var_1_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_101(var_0_int, var_1_int)
{
	var_3_bool = var_1_int == (int)266;
	if(var_3_bool != 0) {
		var_5_bool = var_0_int < (int)11;
		if(var_5_bool != 0) {
			var_0_int = var_0_int + (int)1;
		} else {
			var_0_int = 0;
	}
		var_26_bool = var_1_int == (int)265;
		if(var_26_bool != 0) {
			var_28_bool = var_0_int > (int)0;
			if(var_28_bool != 0) {
				var_0_int = var_0_int + (int)-1;
			} else {
				var_0_int = 11;
		}
			var_32_bool = var_1_int == (int)267;
			if(var_32_bool != 0) {
				SendMessage((int)1001, "text");
				goto Label_87;
			}
			var_36_bool = var_1_int == (int)268;
			if(var_36_bool == 0) goto Label_87;
			SendMessage((int)1000, "text");
		}
		var_30_int = 0;
		var_30_int = var_0_int;
		func_126(var_30_int);
		goto Label_87;
	}
	var_7_int = 0;
	var_7_int = var_0_int;
	func_126(var_7_int);
	goto Label_87;
	
Label_87:
	return 0;
	
}


task_0_event_102(var_0_int, var_1_int)
{
	var_3_bool = var_1_int == (int)272;
	if(var_3_bool != 0) {
		SendMessage((int)1001, "text");
	} else {
		var_7_bool = var_1_int == (int)274;
		if(var_7_bool == 0) goto Label_104;
		SendMessage((int)1000, "text");
	}
Label_104:
	return 0;
	
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0;
	var_5_int = 0;
	
Label_107:
	var_7_bool = var_5_int < (int)12;
	if(var_7_bool != 0) {
		var_10_int = var_5_int + (int)1;
		var_11_int = "button_day" + var_10_int;
		var_12_bool = var_2_string == var_11_int;
		if(var_12_bool != 0) {
			var_0_int = var_5_int;
		} else {
			var_5_int = var_5_int + (int)1;
			goto Label_107;
		}
	}
	var_13_int = 0;
	var_13_int = var_0_int;
	func_126(var_13_int);
	return 2;
	
}


main(var_0_int)
{
	var_1_int = 0;
	func_155(var_1_int);
	var_0_int = var_1_int - (int)1;
	var_8_bool = 0;
	var_8_bool = 0;
	var_9_int = 0;
	func_164(var_9_int);
	var_15_bool = var_9_int < (int)7;
	if(var_15_bool != 0) {
		var_17_bool = var_0_int > (int)0;
		if(var_17_bool != 0) {
			var_8_bool = 1;
		}
	}
	if(var_8_bool != 0) {
		var_0_int = var_0_int + (int)-1;
	}
	SendMessage(var_0_int, "text");
	ShowCursor();
	SetCursor("default");
	var_21_int = 0;
	var_21_int = var_0_int;
	func_126(var_21_int);
	CaptureKeyboard();
	ProcessEvents();
	return 0;
}


func_155(var_1_int)
{
	var_2_float = 0; var_3_float = 0;
	GetGameTime(var_3_float);
	var_5_int = 0;
	var_5_int = var_3_float / (int)24;
	var_1_int = (int)1 + var_5_int;
	return 2;
}


func_164(var_9_int)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTime(var_11_float);
	var_12_int = 0;
	var_11_float = var_12_int;
	var_9_int = var_12_int % (int)24;
	return 2;
}


func_126(var_21_int)
{
	var_22_int = 0; var_23_int = 0;
	var_23_int = 0;
	
Label_128:
	var_25_bool = var_23_int < (int)12;
	if(var_25_bool != 0) {
		var_26_bool = var_23_int == var_21_int;
		if(var_26_bool != 0) {
			var_30_int = var_23_int + (int)1;
			var_31_int = "button_day" + var_30_int;
			SendMessage((int)1, var_31_int);
		} else {
			var_36_int = var_23_int + (int)1;
			var_37_int = "button_day" + var_36_int;
			SendMessage((int)0, var_37_int);
	}
		SendMessage(var_21_int, "text");
		var_23_int = var_23_int + (int)1;
		goto Label_128;
	}
	return 2;
	
}


