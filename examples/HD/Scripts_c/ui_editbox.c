// @IMPORTS: GetWindowSize/2,SetBackground/1,SetNeedUpdate/1,SetOwnerDraw/1,EnableClipping/0,ProcessEvents/0,_strlen/2,_strsub/4,_strsub/3,GetTextWidth/4,Print/4,Blit/3,CreateStringVector/1,SendMessageToParent/2,CaptureKeyboard/0,FontHasCharacterGlyph/3
// @STRINGS: W:default|W:text_cursor|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=string,int,int,int,int,float,bool params=0
// @EVENT_0: op=0x4b vars=
// @EVENT_1: op=0x6d vars=float
// @EVENT_100: op=0x77 vars=int
// @EVENT_101: op=0x8d vars=int
// @EVENT_2: op=0xb1 vars=int,int
// @PE: 0x6d,0x8d,0xb1

task_0_event_0(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	GetTextWidth(var_9_int, "default", var_0_string, var_1_int);
	var_13_int = var_2_int - (int)1;
	var_14_bool = var_9_int > var_13_int;
	if(var_14_bool != 0) {
		var_15_int = var_9_int - var_2_int;
		var_10_int = var_15_int + (int)1;
	} else {
		var_10_int = 0;
	}
	var_18_int = -var_10_int;
	Print("default", var_18_int, (int)0, var_0_string);
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_float = sin(var_5_float);
	var_23_bool = var_21_float > (float)0.5;
	if(var_23_bool != 0) {
		var_24_bool = var_6_bool;
		if(var_24_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_26_int = var_9_int - var_10_int;
		Blit("text_cursor", var_26_int, (int)0);
	}
	return 4;
	
}


task_0_event_1(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_float)
{
	var_9_float = var_7_float * (float)3.1414999961853027;
	var_5_float = var_5_float + var_9_float;
	var_11_bool = var_5_float > (float)3.1414999961853027;
	if(var_11_bool != 0) {
		var_5_float = var_5_float - (float)3.1414999961853027;
	}
	return 0;
}


task_0_event_100(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_int)
{
	var_8_object = Obj(); var_9_object = Obj();
	var_11_bool = var_7_int == (int)8;
	if(var_11_bool != 0) {
		return 2;
	}
	var_13_bool = var_7_int == (int)13;
	if(var_13_bool != 0) {
		CreateStringVector(var_9_object);
		@@var_9_object:add(var_0_string);
		SendMessageToParent((int)0, var_9_object);
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_15_int = 0;
	var_7_int = var_15_int;
	func_41(var_8_object, var_9_object, var_15_int);
	return 2;
}


task_0_event_101(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)37;
	if(var_9_bool != 0) {
		func_25(var_7_int);
	} else {
		var_14_bool = var_7_int == (int)39;
		if(var_14_bool != 0) {
			func_32(var_6_bool, var_7_int);
			goto Label_176;
		}
		var_20_bool = var_7_int == (int)35;
		if(var_20_bool != 0) {
			func_20(var_6_bool, var_7_int);
			goto Label_176;
		}
		var_22_bool = var_7_int == (int)36;
		if(var_22_bool != 0) {
			func_23(var_7_int);
			goto Label_176;
		}
		var_24_bool = var_7_int == (int)8;
		if(var_24_bool == 0) goto Label_176;
		func_59(var_6_bool, var_7_int);
	}
Label_176:
	return 0;
	
}


task_0_event_2(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_int, var_8_int)
{
	var_9_bool = var_6_bool == 0; //@nz
	if(var_9_bool != 0) {
		CaptureKeyboard();
	}
	var_6_bool = true;
	return 0;
}


main(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool)
{
	GetWindowSize(var_2_int, var_3_int);
	var_6_bool = false;
	func_20(var_5_float, var_6_bool);
	SetBackground("default");
	SetNeedUpdate((bool)1);
	SetOwnerDraw((bool)1);
	EnableClipping();
	ProcessEvents();
	return 0;
}


func_32(var_0_string, var_1_int)
{
	var_15_int = 0; var_16_int = 0;
	var_1_int = var_1_int + (int)1;
	_strlen(var_16_int, var_0_string);
	var_18_bool = var_1_int > var_16_int;
	if(var_18_bool != 0) {
		var_1_int = var_16_int;
	}
	return 2;
}


func_41(var_0_string, var_1_int, var_15_int)
{
	var_16_string = ""; var_17_string = ""; var_18_string = ""; var_19_string = ""; var_20_string = ""; var_21_string = "";
	var_22_bool = 0; var_23_int = 0;
	var_15_int = var_23_int;
	func_184(var_22_bool, var_23_int);
	if(var_22_bool != 0) {
		return 6;
	}
	var_19_string = NEW1(var_15_int);
	_strsub(var_20_string, var_0_string, (int)0, var_1_int);
	_strsub(var_21_string, var_0_string, var_1_int);
	var_20_string = var_20_string + var_19_string;
	var_0_string = var_20_string + var_21_string;
	var_1_int = var_1_int + (int)1;
	return 6;
}


func_20(var_0_string, var_1_int)
{
	_strlen(var_1_int, var_0_string);
	return 0;
}


func_23(var_1_int)
{
	var_1_int = 0;
	return 0;
}


func_184(var_22_bool, var_23_int)
{
	var_24_bool = 0; var_25_bool = 0;
	FontHasCharacterGlyph(var_25_bool, "default", var_23_int);
	var_22_bool = !var_25_bool;
	return 2;
}


func_25(var_1_int)
{
	var_1_int = var_1_int + (int)-1;
	var_12_bool = var_1_int < (int)0;
	if(var_12_bool != 0) {
		var_1_int = 0;
	}
	return 0;
}


func_59(var_0_string, var_1_int)
{
	var_25_string = ""; var_26_string = ""; var_27_string = ""; var_28_string = "";
	var_30_bool = var_1_int == (int)0;
	if(var_30_bool != 0) {
		return 4;
	}
	var_33_int = var_1_int - (int)1;
	_strsub(var_27_string, var_0_string, (int)0, var_33_int);
	_strsub(var_28_string, var_0_string, var_1_int);
	var_0_string = var_27_string + var_28_string;
	var_1_int = var_1_int + (int)-1;
	return 4;
}


