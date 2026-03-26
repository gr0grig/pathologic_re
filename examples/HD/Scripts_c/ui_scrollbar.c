// @IMPORTS: SetOwnerDraw/1,GetWindowSize/2,ProcessEvents/0,SendToParent/0,Blit/3,SendMessageToParent/1,CaptureMouse/0,ReleaseMouse/0
// @STRINGS: W:slider_pressed|W:slider|W:scroll_button_up|W:scroll_button_down
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool,int,int params=0
// @EVENT_15: op=0x19 vars=int,int,float
// @EVENT_0: op=0x1d vars=
// @EVENT_2: op=0x45 vars=int,int
// @EVENT_3: op=0x83 vars=int,int
// @EVENT_200: op=0x8b vars=int,string,object
// @EVENT_8: op=0xb7 vars=int,int
// @PE: 0x19,0x83,0x8b,0xcf

task_0_event_15(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int, var_7_float)
{
	SendToParent();
	return 0;
}


task_0_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int)
{
	var_5_bool = var_1_bool;
	if(var_5_bool != 0) {
		return 0;
	}
	var_6_bool = var_0_bool;
	if(var_6_bool != 0) {
		var_7_string = "slider_pressed";
		var_8_bool = var_2_bool;
		if(var_8_bool != 0) {
			var_9_int = 0; //@pi
		} else {
				var_13_int = var_3_int;
	}
			var_15_bool = var_2_bool;
			if(var_15_bool != 0) {
				var_16_int = 0; //@pi
			} else {
					var_20_int = var_3_int;
			}
			var_17_bool = var_2_bool;
			if(var_17_bool != 0) {
				var_18_int = var_3_int;
			} else {
				var_19_int = 0; //@pi

			}
			Blit("slider", var_16_int, var_18_int);
	}
	var_10_bool = var_2_bool;
	if(var_10_bool != 0) {
		var_11_int = var_3_int;
	} else {
		var_12_int = 0; //@pi

	}
	Blit(var_7_string, var_9_int, var_11_int);
	goto Label_61;
	
Label_61:
	return 0;
	
}


task_0_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0;
	var_13_bool = var_1_bool;
	if(var_13_bool != 0) {
		return 6;
	}
	var_14_bool = 0; var_15_int = 0; var_16_int = 0;
	var_5_int = var_15_int;
	var_6_int = var_16_int;
	func_207(var_12_int, var_14_bool, var_15_int, var_16_int);
	if(var_14_bool != 0) {
		CaptureMouse();
		var_0_bool = true;
		return 6;
	}
	var_28_bool = var_2_bool;
	if(var_28_bool != 0) {
		var_6_int = var_10_int;
	} else {
				var_5_int = var_10_int;
	}
	var_30_bool = var_10_int < (int)0;
	if(var_30_bool != 0) {
	} else {
			var_52_bool = (int)0 > var_4_int;
			if(var_52_bool == 0) goto Label_96;
			var_10_int = var_4_int;

	}
Label_96:
	var_31_bool = var_10_int > var_3_int;
	if(var_31_bool != 0) {
		var_11_int = var_10_int - var_3_int;
		var_33_float = var_11_int * (int)100;
		var_11_int = var_33_float / var_4_int;
		var_35_bool = var_11_int < (int)27;
		if(var_35_bool != 0) {
			var_3_int = var_10_int;
		} else {
			var_41_float = (int)27 * var_4_int;
			var_43_float = var_41_float / (int)100;
			var_3_int = var_3_int + var_43_float;
	}
		var_12_int = var_3_int - var_10_int;
		var_45_float = var_12_int * (int)100;
		var_12_int = var_45_float / var_4_int;
		var_47_bool = var_12_int < (int)27;
		if(var_47_bool != 0) {
			var_3_int = var_10_int;
			goto Label_127;
		}
		var_49_float = (int)27 * var_4_int;
		var_51_float = var_49_float / (int)100;
		var_3_int = var_3_int - var_51_float;

	}
	goto Label_127;
	
Label_127:
	func_62(var_11_int, var_12_int);
	return 6;
	
}


task_0_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_bool = var_1_bool;
	if(var_7_bool != 0) {
		return 0;
	}
	var_0_bool = false;
	ReleaseMouse();
	return 0;
}


task_0_event_200(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_string, var_7_object)
{
	var_9_bool = var_6_string == "scroll_button_up";
	if(var_9_bool != 0) {
		var_11_float = (int)27 * var_4_int;
		var_13_float = var_11_float / (int)100;
		var_3_int = var_3_int - var_13_float;
		var_15_bool = var_3_int < (int)0;
		if(var_15_bool != 0) {
		}
		func_62(var_6_string, var_7_object);
	} else {
		var_21_bool = var_6_string == "scroll_button_down";
		if(var_21_bool != 0) {
			var_23_float = (int)27 * var_4_int;
			var_25_float = var_23_float / (int)100;
			(int)0 = (int)0 + var_25_float;
			var_26_bool = var_3_int > var_4_int;
			if(var_26_bool != 0) {
				var_3_int = var_4_int;
			}
			func_62(var_6_string, var_7_object);
			goto Label_182;
		}
		var_28_int = (int)16384 & var_5_int;
		if(var_28_int != 0) {
			var_1_bool = true;
		} else {
			var_1_bool = false;
		}
		var_30_int = (int)16383 & var_5_int;
		var_31_float = var_30_int * var_4_int;
		var_3_int = var_31_float / (int)100;
	}
Label_182:
	return 0;
	
}


task_0_event_8(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_int = 0;
	var_9_bool = var_1_bool;
	if(var_9_bool != 0) {
		return 2;
	}
	var_10_bool = var_0_bool;
	if(var_10_bool != 0) {
		var_11_bool = var_2_bool;
		if(var_11_bool != 0) {
			var_6_int = var_8_int;
		} else {
				var_5_int = var_8_int;
		}
		var_13_bool = var_8_int < (int)0;
		if(var_13_bool != 0) {
		} else {
			var_18_bool = (int)0 > var_4_int;
			if(var_18_bool == 0) goto Label_202;
			var_8_int = var_4_int;

		}
	Label_202:
		var_3_int = var_8_int;
		func_62(var_7_int, var_8_int);
	}
	return 2;
	
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int)
{
	var_5_bool = 0;
	func_5(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, (bool)1);
	return 0;
}


func_5(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_bool)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0;
	var_2_bool = var_5_bool;
	var_0_bool = false;
	var_1_bool = false;
	var_3_int = 0;
	SetOwnerDraw((bool)1);
	GetWindowSize(var_8_int, var_9_int);
	var_11_bool = var_2_bool;
	if(var_11_bool != 0) {
		var_4_int = var_9_int - (int)14;
	} else {
		var_4_int = var_8_int - (int)14;
	}
	ProcessEvents();
	return 4;
	
}


func_62(var_3_int, var_4_int)
{
	var_14_int = 0; var_15_int = 0;
	var_17_float = var_3_int * (int)100;
	var_15_int = var_17_float / var_4_int;
	SendMessageToParent(var_15_int);
	return 2;
}


func_207(var_3_int, var_14_bool, var_15_int, var_16_int)
{
	var_17_bool = var_2_bool;
	if(var_17_bool != 0) {
		var_18_bool = 0;
		var_18_bool = 0;
		var_19_bool = var_16_int >= var_3_int;
		if(var_19_bool != 0) {
			var_21_int = var_3_int + (int)14;
			var_22_bool = var_16_int <= var_21_int;
			if(var_22_bool != 0) {
				var_18_bool = 1;
			}
		}
		if(var_18_bool != 0) {
			var_14_bool = 1;
			return 0;
		}
		var_14_bool = 0;
		return 0;
	}
	var_23_bool = 0;
	var_23_bool = 0;
	var_24_bool = var_15_int >= var_3_int;
	if(var_24_bool != 0) {
		var_26_int = var_3_int + (int)14;
		var_27_bool = var_15_int <= var_26_int;
		if(var_27_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		var_14_bool = 1;
		return 0;
	}
	var_14_bool = 0;
	return 0;
}


