// @IMPORTS: GetWindowSize/2,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,GetDiaryRoot/1,GetStringByID/2,GetTextHeightInWidth/4,PrintInWidth/9,SendMessage/2
// @STRINGS: A:ChildCount|A:Child|A:GetCategory|A:GetTextID|W:default|W:scrollbar|W:diary
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,int,int,int,int,int,int params=0
// @EVENT_0: op=0x37 vars=
// @EVENT_200: op=0x70 vars=int,string,object
// @EVENT_15: op=0x9b vars=int,int,float
// @PE: 0x70

task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_bool = 0;
	func_20(var_3_int, var_4_int, var_5_int, var_6_int, (bool)0);
	return 0;
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_11_bool = var_8_string == "scrollbar";
	if(var_11_bool != 0) {
		var_12_int = -var_2_int;
		var_13_float = var_12_int * var_7_int;
		var_1_int = var_13_float / (int)100;
		func_188(var_8_string, var_9_object);
		return 0;
	EMIT "GOTO 0x9a";
	}
	var_22_bool = var_8_string == "diary";
	if(var_22_bool != 0) {
		var_24_bool = var_7_int < (int)1000;
		if(var_24_bool != 0) {
			var_5_int = var_7_int;
			var_1_int = 0;
			var_25_bool = 0;
			func_20(var_6_int, var_7_int, var_8_string, var_9_object, (bool)1);
			func_203(var_8_string, var_9_object);
		} else {
			var_89_bool = var_7_int == (int)1000;
			if(var_89_bool != 0) {
				func_178(var_9_object);
				goto Label_154;
			}
			var_93_bool = var_7_int == (int)1001;
			if(var_93_bool == 0) goto Label_154;
			func_168(var_9_object);
		}
	}
Label_154:
	return 0;
	
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_10_int = 0; var_11_int = 0;
	var_13_float = var_9_float * (int)15;
	var_11_int = var_13_float * (int)2;
	var_1_int = var_1_int + var_11_int;
	func_188(var_10_int, var_11_int);
	func_203(var_10_int, var_11_int);
	return 2;
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_5_int = 0;
	var_1_int = 0;
	GetWindowSize(var_3_int, var_4_int);
	var_7_bool = 0;
	func_20(var_3_int, var_4_int, var_5_int, var_6_int, (bool)1);
	func_203(var_5_int, var_6_int);
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_168(var_1_int)
{
	var_94_int = 0; var_95_int = 0;
	var_95_int = 60;
	var_1_int = var_1_int + var_95_int;
	func_188(var_94_int, var_95_int);
	func_203(var_94_int, var_95_int);
	return 2;
}


func_203(var_1_int, var_2_int)
{
	var_62_bool = var_2_int == (int)0;
	if(var_62_bool != 0) {
		SendMessage((int)16384, "scrollbar");
	} else {
		var_65_int = -var_1_int;
		var_67_float = var_65_int * (int)100;
		var_68_float = var_67_float / var_2_int;
		SendMessage(var_68_float, "scrollbar");
	}
	return 0;
	
}


func_60(var_1_int, var_3_int, var_5_int, var_6_int, var_21_object, var_22_int, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_string = ""; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_object = Obj(); var_39_int = 0;
	@@var_21_object:GetCategory(var_32_int);
	var_40_bool = var_32_int != var_5_int;
	if(var_40_bool != 0) {
		return 16;
	}
	@@var_21_object:GetTextID(var_33_int);
	GetStringByID(var_34_string, var_33_int);
	var_41_bool = var_23_bool;
	if(var_41_bool != 0) {
		var_43_int = var_3_int - var_22_int;
		GetTextHeightInWidth(var_35_int, "default", var_43_int, var_34_string);
	} else {
			var_53_int = var_1_int + var_6_int;
			var_54_int = var_3_int - var_22_int;
			PrintInWidth(var_35_int, "default", var_22_int, var_53_int, var_54_int, var_34_string, (float)1.0, (float)1.0, (float)1.0);
	}
	var_6_int = var_6_int + var_35_int;
	@@var_21_object:ChildCount(var_36_int);
	var_37_int = 0;
	
Label_89:
	var_44_bool = var_37_int < var_36_int;
	if(var_44_bool != 0) {
		@@var_21_object:Child(var_38_object, var_37_int);
		@@var_38_object:GetCategory(var_39_int);
		var_45_bool = var_39_int != var_5_int;
		if(var_45_bool != 0) {
		} else {
			var_6_int = var_6_int + (int)10;
			var_48_object = Obj(); var_49_int = 0; var_50_bool = 0;
			var_38_object = var_48_object;
			var_49_int = var_22_int + (int)20;
			var_23_bool = var_50_bool;
			func_60(var_36_int, var_37_int, var_38_object, var_39_int, var_48_object, var_49_int, var_50_bool);
			var_38_object = 0;
	}
		var_37_int = var_37_int + (int)1;
		goto Label_89;
	}
	return 16;
	
}


func_178(var_1_int)
{
	var_90_int = 0; var_91_int = 0;
	var_91_int = -60;
	var_1_int = var_1_int + var_91_int;
	func_188(var_90_int, var_91_int);
	func_203(var_90_int, var_91_int);
	return 2;
}


func_20(var_2_int, var_4_int, var_5_int, var_6_int, var_7_bool)
{
	var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj();
	GetDiaryRoot(var_13_object);
	@@var_13_object:ChildCount(var_14_int);
	var_16_int = 0;
	
Label_27:
	var_18_bool = var_16_int < var_14_int;
	if(var_18_bool != 0) {
		@@var_13_object:Child(var_17_object, var_16_int);
		@@var_17_object:GetCategory(var_15_int);
		var_19_bool = var_15_int != var_5_int;
		if(var_19_bool != 0) {
		} else {
			var_21_object = Obj(); var_22_int = 0; var_23_bool = 0;
			var_17_object = var_21_object;
			var_7_bool = var_23_bool;
			func_60(var_14_int, var_15_int, var_16_int, var_17_object, var_21_object, (int)0, var_23_bool);
			(int)0 = (int)0 + (int)15;
			var_17_object = 0;
	}
		var_2_int = var_6_int - var_4_int;
		var_60_bool = var_2_int < (int)0;
		if(var_60_bool != 0) {
			var_2_int = 0;
		}
		var_16_int = var_16_int + (int)1;
		goto Label_27;
	}
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_188(var_1_int, var_2_int)
{
	var_16_bool = var_2_int == (int)0;
	if(var_16_bool != 0) {
		var_1_int = 0;
		return 0;
	}
	var_17_int = -var_1_int;
	var_18_bool = var_17_int > var_2_int;
	if(var_18_bool != 0) {
		var_1_int = -var_2_int;
	} else {
		var_20_bool = var_1_int > (int)0;
		if(var_20_bool == 0) goto Label_202;
		var_1_int = 0;
	}
Label_202:
	return 0;
	
}


