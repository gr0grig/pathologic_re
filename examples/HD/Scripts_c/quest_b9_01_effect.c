// @IMPORTS: GetGameTime/1,sync/0,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2
// @STRINGS: W:tiredness|W:b9q01_stop|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x13 vars=string
// @PE: 0x5,0x13,0x50

task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "b9q01_stop";
	if(var_3_bool != 0) {
		func_59(var_1_string);
	}
	return 0;
}


main(var_0_bool)
{
	var_1_float = 0;
	func_27((float)12);
	return 0;
}


func_5(var_13_bool, var_14_float)
{
	var_15_bool = 0; var_16_string = ""; var_17_float = 0; var_18_float = 0; var_19_float = 0;
	var_14_float = var_17_float;
	func_61(var_15_bool, "tiredness", var_17_float, (float)0, (float)1);
	var_31_float = 0;
	var_14_float = var_31_float;
	func_91(var_31_float);
	var_13_bool = 0;
	return 0;
}


func_27(var_1_float)
{
	var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0;
	GetGameTime(var_6_float);
	var_7_float = var_6_float + var_1_float;
	var_6_float = var_8_float;
	
Label_32:
	sync();
	var_10_bool = var_0_bool;
	if(var_10_bool != 0) {
	} else {
		GetGameTime(var_9_float);
		var_11_bool = var_9_float <= var_8_float;
		if(var_11_bool != 0) {
		} else {
			var_12_bool = var_9_float >= var_7_float;
			if(var_12_bool != 0) {
				var_13_bool = 0; var_14_float = 0;
				var_14_float = var_7_float - var_8_float;
				func_5(var_13_bool, var_14_float);
				goto Label_58;
			EMIT "GOTO 0x39";
			}
			var_35_bool = 0; var_36_float = 0;
			var_36_float = var_9_float - var_8_float;
			func_5(var_35_bool, var_36_float);
			if(var_35_bool != 0) {
				goto Label_58;
			}
			var_9_float = var_8_float;
		}
		goto Label_32;
	}
Label_58:
	return 8;
	
}


func_91(var_31_float)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateFloatVector(var_33_object);
	@@var_33_object:add(var_31_float);
	SendWorldWndMessage((int)11, var_33_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_80(var_25_float, var_26_float, var_27_float, var_28_float)
{
	var_29_bool = var_26_float < var_27_float;
	if(var_29_bool != 0) {
		var_27_float = var_25_float;
		return 0;
	}
	var_30_bool = var_26_float > var_28_float;
	if(var_30_bool != 0) {
		var_28_float = var_25_float;
		return 0;
	}
	var_26_float = var_25_float;
	return 0;
}


func_59(var_0_bool)
{
	var_0_bool = true;
	return 0;
}


func_61(var_15_bool, var_16_string, var_17_float, var_18_float, var_19_float)
{
	var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0;
	HasProperty(var_16_string, var_22_bool);
	var_24_bool = var_22_bool == 0; //@nz
	if(var_24_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	GetProperty(var_16_string, var_23_float);
	var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0;
	var_26_float = var_23_float + var_17_float;
	var_18_float = var_27_float;
	var_19_float = var_28_float;
	func_80(var_25_float, var_26_float, var_27_float, var_28_float);
	SetProperty(var_16_string, var_25_float);
	var_15_bool = 1;
	return 4;
}


