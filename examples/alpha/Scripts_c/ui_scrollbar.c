// @IMPORTS: SetOwnerDraw/1,GetWindowSize/2,Trace/1,ProcessEvents/0,Blit/3,SendMessageToParent/1,CaptureMouse/0,ReleaseMouse/0
// @STRINGS: W:iMouseMax |W:slider_pressed|W:slider|W:scroll_button_up|W:scroll up |W:scroll_button_down|W:scroll down 
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,int,int params=0
// @EVENT_0: op=0x12 vars=
// @EVENT_2: op=0x28 vars=int,int
// @EVENT_3: op=0x62 vars=int,int
// @EVENT_200: op=0x6a vars=int,string,object
// @EVENT_8: op=0x9e vars=int,int
// @PE: 0x62,0x6a,0xb2

task_0_event_0(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_bool = var_1_bool;
	if(var_4_bool != 0) {
		return 0;
	}
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		Blit("slider_pressed", (int)0, var_2_int);
	} else {
		Blit("slider", (int)0, var_2_int);
	}
	return 0;
	
}


task_0_event_2(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0;
	var_12_bool = var_1_bool;
	if(var_12_bool != 0) {
		return 6;
	}
	var_13_bool = 0; var_14_int = 0; var_15_int = 0;
	var_4_int = var_14_int;
	var_5_int = var_15_int;
	func_178(var_13_bool, var_14_int, var_15_int);
	if(var_13_bool != 0) {
		CaptureMouse();
		var_0_bool = true;
		return 6;
	}
	var_5_int = var_9_int;
	var_22_bool = var_9_int < (int)0;
	if(var_22_bool != 0) {
	} else {
			var_44_bool = (int)0 > var_3_int;
			if(var_44_bool == 0) goto Label_63;
			var_9_int = var_3_int;
	}
Label_63:
	var_23_bool = var_9_int > var_2_int;
	if(var_23_bool != 0) {
		var_10_int = var_9_int - var_2_int;
		var_25_float = var_10_int * (int)100;
		var_10_int = var_25_float / var_3_int;
		var_27_bool = var_10_int < (int)27;
		if(var_27_bool != 0) {
			var_2_int = var_9_int;
		} else {
			var_33_float = (int)27 * var_3_int;
			var_35_float = var_33_float / (int)100;
			var_2_int = var_2_int + var_35_float;
	}
		var_11_int = var_2_int - var_9_int;
		var_37_float = var_11_int * (int)100;
		var_11_int = var_37_float / var_3_int;
		var_39_bool = var_11_int < (int)27;
		if(var_39_bool != 0) {
			var_2_int = var_9_int;
			goto Label_94;
		}
		var_41_float = (int)27 * var_3_int;
		var_43_float = var_41_float / (int)100;
		var_2_int = var_2_int - var_43_float;

	}
	goto Label_94;
	
Label_94:
	func_33(var_10_int, var_11_int);
	return 6;
	
}


task_0_event_3(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_bool = var_1_bool;
	if(var_6_bool != 0) {
		return 0;
	}
	var_0_bool = false;
	ReleaseMouse();
	return 0;
}


task_0_event_200(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_string, var_6_object)
{
	var_8_bool = var_5_string == "scroll_button_up";
	if(var_8_bool != 0) {
		var_10_float = (int)27 * var_3_int;
		var_12_float = var_10_float / (int)100;
		var_2_int = var_2_int - var_12_float;
		var_14_bool = var_2_int < (int)0;
		if(var_14_bool != 0) {
			var_2_int = 0;
		}
		var_16_int = "scroll up " + var_2_int;
		Trace(var_16_int);
		func_33(var_5_string, var_6_object);
	} else {
		var_22_bool = var_5_string == "scroll_button_down";
		if(var_22_bool != 0) {
			var_2_int = var_2_int + (int)10;
			var_24_bool = var_2_int > var_3_int;
			if(var_24_bool != 0) {
				var_2_int = var_3_int;
			}
			var_26_int = "scroll down " + var_2_int;
			var_28_int = var_26_int + " ";
			var_29_int = var_28_int + var_3_int;
			Trace(var_29_int);
			func_33(var_5_string, var_6_object);
			goto Label_157;
		}
		var_31_int = (int)16384 & var_4_int;
		if(var_31_int != 0) {
			var_1_bool = true;
		} else {
			var_1_bool = false;
		}
		var_33_int = (int)16383 & var_4_int;
		var_34_float = var_33_int * var_3_int;
		var_2_int = var_34_float / (int)100;
	}
Label_157:
	return 0;
	
}


task_0_event_8(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0;
	var_8_bool = var_1_bool;
	if(var_8_bool != 0) {
		return 2;
	}
	var_9_bool = var_0_bool;
	if(var_9_bool != 0) {
		var_5_int = var_7_int;
		var_11_bool = var_7_int < (int)0;
		if(var_11_bool != 0) {
		} else {
			var_16_bool = (int)0 > var_3_int;
			if(var_16_bool == 0) goto Label_173;
			var_7_int = var_3_int;
		}
	Label_173:
		var_2_int = var_7_int;
		func_33(var_6_int, var_7_int);
	}
	return 2;
	
}


main(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0;
	var_0_bool = false;
	var_1_bool = false;
	var_2_int = 0;
	SetOwnerDraw((bool)1);
	GetWindowSize(var_6_int, var_7_int);
	var_3_int = var_7_int - (int)14;
	var_11_int = "iMouseMax " + var_3_int;
	Trace(var_11_int);
	ProcessEvents();
	return 4;
}


func_33(var_2_int, var_3_int)
{
	var_12_int = 0; var_13_int = 0;
	var_15_float = var_2_int * (int)100;
	var_13_int = var_15_float / var_3_int;
	SendMessageToParent(var_13_int);
	return 2;
}


func_178(var_2_int, var_13_bool, var_15_int)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_15_int >= var_2_int;
	if(var_17_bool != 0) {
		var_19_int = var_2_int + (int)14;
		var_20_bool = var_15_int <= var_19_int;
		if(var_20_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_13_bool = 1;
		return 0;
	}
	var_13_bool = 0;
	return 0;
}


