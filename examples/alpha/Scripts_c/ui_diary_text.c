// @IMPORTS: GetWindowSize/2,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,GetDiaryRoot/1,GetStringByID/2,PrintInWidth/9
// @STRINGS: A:ChildCount|A:Child|A:GetCategory|A:GetTextID|W:default|W:scrollbar
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,int,int,int,int,int,int params=0
// @EVENT_0: op=0xd vars=
// @EVENT_200: op=0x56 vars=int,string,object
// @PE: 0x56

task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj();
	GetDiaryRoot(var_11_object);
	@@var_11_object:ChildCount(var_12_int);
	var_13_int = 0;
	
Label_20:
	var_15_bool = var_13_int < var_12_int;
	if(var_15_bool != 0) {
		@@var_11_object:Child(var_14_object, var_13_int);
		var_16_object = Obj(); var_17_int = 0;
		var_14_object = var_16_object;
		func_42(var_11_object, var_12_int, var_13_int, var_14_object, var_16_object, (int)0);
		(int)0 = (int)0 + (int)15;
		var_14_object = 0;
		var_13_int = var_13_int + (int)1;
		goto Label_20;
	}
	var_2_int = var_6_int - var_4_int;
	var_51_bool = var_2_int < (int)0;
	if(var_51_bool != 0) {
		var_2_int = 0;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_11_bool = var_8_string == "scrollbar";
	if(var_11_bool != 0) {
		var_12_int = -var_2_int;
		var_13_float = var_12_int * var_7_int;
		var_1_int = var_13_float / (int)100;
		return 0;
	}
	var_5_int = var_7_int;
	return 0;
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_5_int = 0;
	var_1_int = 0;
	GetWindowSize(var_3_int, var_4_int);
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_42(var_1_int, var_3_int, var_5_int, var_6_int, var_16_object, var_17_int)
{
	var_18_int = 0; var_19_int = 0; var_20_string = ""; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_int = 0;
	@@var_16_object:GetCategory(var_26_int);
	var_34_bool = var_26_int != var_5_int;
	if(var_34_bool != 0) {
		return 16;
	}
	@@var_16_object:GetTextID(var_27_int);
	GetStringByID(var_28_string, var_27_int);
	var_36_int = var_1_int + var_6_int;
	var_37_int = var_3_int + var_17_int;
	PrintInWidth(var_29_int, "default", var_17_int, var_36_int, var_37_int, var_28_string, (float)1.0, (float)1.0, (float)1.0);
	var_6_int = var_6_int + var_29_int;
	@@var_16_object:ChildCount(var_30_int);
	var_31_int = 0;
	
Label_64:
	var_41_bool = var_31_int < var_30_int;
	if(var_41_bool != 0) {
		@@var_16_object:Child(var_32_object, var_31_int);
		@@var_32_object:GetCategory(var_33_int);
		var_42_bool = var_33_int != var_5_int;
		if(var_42_bool != 0) {
		} else {
			var_6_int = var_6_int + (int)10;
			var_45_object = Obj(); var_46_int = 0;
			var_32_object = var_45_object;
			var_46_int = var_17_int + (int)20;
			func_42(var_30_int, var_31_int, var_32_object, var_33_int, var_45_object, var_46_int);
			var_32_object = 0;
	}
		var_31_int = var_31_int + (int)1;
		goto Label_64;
	}
	return 16;
	
}


