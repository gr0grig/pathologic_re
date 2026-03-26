// @IMPORTS: GetTextWidth/3,GetMouseSensivity/1,GetGamepadSensivity/1,GetGamepadUISensivity/1,SetOwnerDraw/1,ProcessEvents/0,Print/4,GetStringByID/2
// @STRINGS: W:default|A:get
// @RUN_OP: 0x32
// @RUN_TASK: 0
// @TASK_0: vars=string,string,string,int,int,int params=0
// @EVENT_0: op=0x3b vars=
// @EVENT_200: op=0x7e vars=int,string,object

task_0_event_0(var_0_string, var_1_string, var_2_string, var_3_int, var_4_int, var_5_int)
{
	var_9_string = ""; var_10_int = 0;
	func_156(var_9_string, (int)101);
	Print("default", (int)15, (int)12, var_9_string);
	Print("default", var_3_int, (int)12, var_0_string);
	var_18_string = ""; var_19_int = 0;
	func_156(var_18_string, (int)120);
	Print("default", (int)15, (int)64, var_18_string);
	Print("default", var_4_int, (int)64, var_1_string);
	var_25_string = ""; var_26_int = 0;
	func_156(var_25_string, (int)121);
	Print("default", (int)15, (int)112, var_25_string);
	Print("default", var_5_int, (int)112, var_2_string);
	var_32_string = ""; var_33_int = 0;
	func_156(var_32_string, (int)100);
	Print("default", (int)15, (int)164, var_32_string);
	var_37_string = ""; var_38_int = 0;
	func_156(var_37_string, (int)122);
	Print("default", (int)15, (int)186, var_37_string);
	var_42_string = ""; var_43_int = 0;
	func_156(var_42_string, (int)123);
	Print("default", (int)15, (int)210, var_42_string);
	return 0;
}


task_0_event_200(var_0_string, var_1_string, var_2_string, var_3_int, var_4_int, var_5_int, var_6_int, var_7_string, var_8_object)
{
	var_9_float = 0; var_10_float = 0;
	var_11_bool = var_8_object != 0; //@nn
	if(var_11_bool != 0) {
		@@var_8_object:get(var_10_float, (int)0);
		var_14_bool = var_6_int == (int)109;
		if(var_14_bool != 0) {
			var_15_float = 0;
			var_10_float = var_15_float;
			func_0(var_9_float, var_10_float, var_15_float);
		} else {
			var_23_bool = var_6_int == (int)110;
			if(var_23_bool != 0) {
				var_24_float = 0;
				var_10_float = var_24_float;
				func_10(var_9_float, var_10_float, var_24_float);
				goto Label_155;
			}
			var_32_bool = var_6_int == (int)111;
			if(var_32_bool == 0) goto Label_155;
			var_33_float = 0;
			var_10_float = var_33_float;
			func_20(var_9_float, var_10_float, var_33_float);
		}
	}
Label_155:
	return 2;
	
}


main(var_0_string, var_1_string, var_2_string, var_3_int, var_4_int, var_5_int)
{
	SetOwnerDraw((bool)1);
	func_30();
	ProcessEvents();
	return 0;
}


func_0(var_0_string, var_3_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0;
	var_0_string = var_13_float;
	GetTextWidth(var_15_int, "default", var_0_string);
	var_19_float = var_15_int / (int)2;
	var_3_int = (int)305 - var_19_float;
	return 2;
}


func_10(var_1_string, var_4_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0;
	var_1_string = var_20_float;
	GetTextWidth(var_22_int, "default", var_1_string);
	var_26_float = var_22_int / (int)2;
	var_4_int = (int)305 - var_26_float;
	return 2;
}


func_20(var_2_string, var_5_int, var_27_float)
{
	var_28_int = 0; var_29_int = 0;
	var_2_string = var_27_float;
	GetTextWidth(var_29_int, "default", var_2_string);
	var_33_float = var_29_int / (int)2;
	var_5_int = (int)305 - var_33_float;
	return 2;
}


func_156(var_9_string, var_10_int)
{
	var_11_string = ""; var_12_string = "";
	GetStringByID(var_12_string, var_10_int);
	var_12_string = var_9_string;
	return 2;
}


func_30()
{
	var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0;
	GetMouseSensivity(var_10_float);
	GetGamepadSensivity(var_11_float);
	GetGamepadUISensivity(var_12_float);
	var_13_float = 0;
	var_10_float = var_13_float;
	func_0(var_11_float, var_12_float, var_13_float);
	var_20_float = 0;
	var_11_float = var_20_float;
	func_10(var_11_float, var_12_float, var_20_float);
	var_27_float = 0;
	var_12_float = var_27_float;
	func_20(var_11_float, var_12_float, var_27_float);
	return 6;
}


