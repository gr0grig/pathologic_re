// @IMPORTS: SetOwnerDraw/1,EnableClipping/1,GetWindowSize/2,CreateObjectVector/1,CreateStringVector/1,CreateIntVector/1,GetMessageCount/1,GetMessage/4,ProcessEvents/0,SendMessage/2,GetTextHeightInWidth/4,PrintInWidth/9
// @STRINGS: A:add|A:get|W:scrollbar|A:size|W:default|W:message
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,int,int,int,object,object,object params=0
// @EVENT_15: op=0x5f vars=int,int,float
// @EVENT_0: op=0x10c vars=
// @EVENT_3: op=0x157 vars=int,int
// @EVENT_8: op=0x16d vars=int,int
// @EVENT_10: op=0x174 vars=
// @EVENT_200: op=0x176 vars=int,string,object
// @PE: 0x16d,0x176

task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_float)
{
	var_13_int = 0; var_14_int = 0;
	var_16_float = var_12_float * (int)5;
	var_14_int = var_16_float * (int)2;
	var_0_int = var_0_int + var_14_int;
	func_128(var_12_float, var_13_int, var_14_int);
	func_149(var_13_int, var_14_int);
	return 2;
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_string = ""; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_string = ""; var_28_int = 0; var_29_int = 0;
	var_20_int = var_0_int;
	@@@var_7_object:get(var_21_object, var_4_int);
	@@@var_8_object:get(var_22_object, var_4_int);
	@@@var_9_object:get(var_23_object, var_4_int);
	@@var_21_object:size(var_24_int);
	var_25_int = 0;
	
Label_279:
	var_30_bool = var_25_int < var_24_int;
	if(var_30_bool != 0) {
		@@var_21_object:get(var_26_string, var_25_int);
		@@var_22_object:get(var_27_string, var_25_int);
		@@var_23_object:get(var_28_int, var_25_int);
		var_31_bool = var_28_int == var_6_int;
		if(var_31_bool != 0) {
			PrintInWidth(var_29_int, "default", (int)0, var_20_int, var_2_int, var_26_string, (float)1.0, (float)1.0, (float)1.0);
		} else {
				PrintInWidth(var_29_int, "default", (int)0, var_20_int, var_2_int, var_26_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
	}
			return 20;
	}
	var_20_int = var_20_int + var_29_int;
	var_37_bool = var_28_int == var_5_int;
	if(var_37_bool != 0) {
		var_20_int = var_20_int + (int)5;
		var_39_bool = var_28_int == var_6_int;
		if(var_39_bool != 0) {
			var_43_int = var_2_int - (int)15;
			PrintInWidth(var_29_int, "default", (int)15, var_20_int, var_43_int, var_27_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
		} else {
			var_52_int = var_2_int - (int)15;
			PrintInWidth(var_29_int, "default", (int)15, var_20_int, var_52_int, var_27_string, (float)0.6980000138282776, (float)0.6589999794960022, (float)0.6470000147819519);
	}
		var_20_int = var_20_int + (int)5;

	}
	var_20_int = var_20_int + var_29_int;
	var_20_int = var_20_int + (int)5;
	goto Label_336;
	
Label_336:
	var_25_int = var_25_int + (int)1;
	goto Label_279;
	
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_int = 0;
	var_11_int = var_15_int;
	func_211(var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_int, var_13_int, var_14_int, var_15_int);
	var_14_int = var_13_int;
	var_52_bool = var_13_int == (int)-1;
	if(var_52_bool != 0) {
		return 2;
	}
	var_53_bool = var_13_int == var_5_int;
	if(var_53_bool != 0) {
		var_5_int = -1;
	} else {
		var_5_int = var_13_int;
	}
	func_128(var_11_int, var_12_int, var_13_int);
	func_149(var_12_int, var_13_int);
	return 2;
	
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int)
{
	var_12_int = 0; var_13_int = 0;
	var_11_int = var_13_int;
	func_211(var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_int, var_13_int);
	var_6_int = var_12_int;
	return 0;
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_6_int = -1;
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_string, var_12_object)
{
	var_14_bool = var_11_string == "scrollbar";
	if(var_14_bool != 0) {
		var_15_int = -var_1_int;
		var_16_float = var_15_int * var_10_int;
		var_0_int = var_16_float / (int)100;
		func_128(var_10_int, var_11_string, var_12_object);
		return 0;
	EMIT "GOTO 0x1a1";
	}
	var_56_bool = var_11_string == "message";
	if(var_56_bool != 0) {
		var_58_int = var_10_int & (int)32768;
		if(var_58_int != 0) {
			var_5_int = var_10_int & (int)32767;
		} else {
			var_61_bool = var_10_int == (int)1000;
			if(var_61_bool != 0) {
				func_118(var_12_object);
				goto Label_417;
			}
			var_74_bool = var_10_int == (int)1001;
			if(var_74_bool != 0) {
				func_108(var_12_object);
				goto Label_417;
			}
			var_4_int = var_10_int;
			func_128(var_10_int, var_11_string, var_12_object);
			func_149(var_11_string, var_12_object);
		}
	}
Label_417:
	return 0;
	
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_string = ""; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_float = 0; var_27_string = ""; var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	SetOwnerDraw((bool)1);
	EnableClipping((bool)1);
	GetWindowSize(var_2_int, var_3_int);
	var_0_int = 0;
	var_4_int = 0;
	var_5_int = -1;
	CreateObjectVector(var_7_object);
	CreateObjectVector(var_8_object);
	CreateObjectVector(var_9_object);
	var_22_int = 0;
	
Label_19:
	var_37_bool = var_22_int < (int)12;
	if(var_37_bool != 0) {
		CreateStringVector(var_23_object);
		@@@var_7_object:add(var_23_object);
		CreateStringVector(var_23_object);
		@@@var_8_object:add(var_23_object);
		CreateIntVector(var_23_object);
		@@@var_9_object:add(var_23_object);
		var_23_object = 0;
		var_22_int = var_22_int + (int)1;
		goto Label_19;
	}
	GetMessageCount(var_24_int);
	var_39_int = var_24_int;
	if(var_39_int != 0) {
		var_25_int = var_24_int - (int)1;

	Label_44:
		var_42_bool = var_25_int >= (int)0;
		if(var_42_bool != 0) {
			GetMessage(var_25_int, var_27_string, var_28_string, var_26_float);
			var_29_int = var_26_float / (int)24;
			var_45_float = var_29_int * (int)24;
			var_30_int = var_26_float - var_45_float;
			var_46_bool = 0;
			var_46_bool = 0;
			var_48_bool = var_30_int < (int)7;
			if(var_48_bool != 0) {
				var_50_bool = var_29_int > (int)0;
				if(var_50_bool != 0) {
					var_46_bool = 1;
				}
			}
			if(var_46_bool != 0) {
				var_29_int = var_29_int + (int)-1;
			}
			@@@var_7_object:get(var_31_object, var_29_int);
			@@@var_8_object:get(var_32_object, var_29_int);
			@@@var_9_object:get(var_33_object, var_29_int);
			@@var_31_object:add(var_27_string);
			@@var_32_object:add(var_28_string);
			@@var_33_object:add(var_25_int);
			var_33_object = 0;
			var_32_object = 0;
			var_31_object = 0;
			var_25_int = var_25_int + (int)-1;
			goto Label_44;
		}
		var_5_int = var_24_int - (int)1;
	}
	func_128(var_31_object, var_32_object, var_33_object);
	func_149(var_32_object, var_33_object);
	ProcessEvents();
	return 24;
}


func_128(var_0_int, var_1_int, var_3_int)
{
	var_54_int = 0;
	func_165(var_28_string, var_29_int, var_30_int, var_31_object, var_32_object, var_33_object, var_54_int);
	var_1_int = var_54_int;
	var_1_int = var_1_int - var_3_int;
	var_86_bool = var_1_int < (int)0;
	if(var_86_bool != 0) {
		var_1_int = 0;
	} else {
		var_87_int = -(int)0;
		var_88_bool = var_87_int > var_1_int;
		if(var_88_bool != 0) {
			var_0_int = -var_1_int;
			goto Label_148;
		}
		var_90_bool = var_0_int > (int)0;
		if(var_90_bool == 0) goto Label_148;
		var_0_int = 0;
	}
Label_148:
	return 0;
	
}


func_165(var_2_int, var_4_int, var_5_int, var_7_object, var_8_object, var_9_object, var_54_int)
{
	var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_int = 0; var_61_string = ""; var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_object = Obj(); var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; var_70_int = 0; var_71_string = ""; var_72_string = ""; var_73_int = 0; var_74_int = 0;
	@@@var_7_object:get(var_66_object, var_4_int);
	@@@var_8_object:get(var_67_object, var_4_int);
	@@@var_9_object:get(var_68_object, var_4_int);
	@@var_66_object:size(var_69_int);
	var_70_int = 0;
	
Label_176:
	var_75_bool = var_70_int < var_69_int;
	if(var_75_bool != 0) {
		@@var_66_object:get(var_71_string, var_70_int);
		@@var_67_object:get(var_72_string, var_70_int);
		@@var_68_object:get(var_73_int, var_70_int);
		GetTextHeightInWidth(var_74_int, "default", var_2_int, var_71_string);
		(int)0 = (int)0 + var_74_int;
		var_77_bool = var_73_int == var_5_int;
		if(var_77_bool != 0) {
			var_65_int = var_65_int + (int)5;
			var_81_int = var_2_int - (int)15;
			GetTextHeightInWidth(var_74_int, "default", var_81_int, var_72_string);
			var_65_int = var_65_int + var_74_int;
			var_65_int = var_65_int + (int)5;
		} else {
			var_65_int = var_65_int + (int)5;
	}
		var_65_int = var_54_int;
		var_70_int = var_70_int + (int)1;
		goto Label_176;
	}
	return 20;
	
}
EMIT "Stack[-7] = 0";
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


func_108(var_0_int)
{
	var_75_int = 0; var_76_int = 0;
	var_76_int = 20;
	var_0_int = var_0_int + var_76_int;
	func_128(var_12_object, var_75_int, var_76_int);
	func_149(var_75_int, var_76_int);
	return 2;
}


func_211(var_0_int, var_2_int, var_4_int, var_5_int, var_7_object, var_8_object, var_9_object, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_string = ""; var_33_string = ""; var_34_int = 0; var_35_int = 0;
	var_25_int = var_0_int;
	@@@var_7_object:get(var_26_object, var_4_int);
	@@@var_8_object:get(var_27_object, var_4_int);
	@@@var_9_object:get(var_28_object, var_4_int);
	@@var_26_object:size(var_29_int);
	var_30_int = 0;
	
Label_222:
	var_36_bool = var_30_int < var_29_int;
	if(var_36_bool != 0) {
		var_25_int = var_31_int;
		@@var_26_object:get(var_32_string, var_30_int);
		@@var_27_object:get(var_33_string, var_30_int);
		@@var_28_object:get(var_34_int, var_30_int);
		GetTextHeightInWidth(var_35_int, "default", var_2_int, var_32_string);
		var_25_int = var_25_int + var_35_int;
		var_38_bool = var_34_int == var_5_int;
		if(var_38_bool != 0) {
			var_25_int = var_25_int + (int)5;
			var_42_int = var_2_int - (int)15;
			GetTextHeightInWidth(var_35_int, "default", var_42_int, var_33_string);
			var_25_int = var_25_int + var_35_int;
			var_25_int = var_25_int + (int)5;
		} else {
			var_25_int = var_25_int + (int)5;
	}
		return 22;
	}
	var_44_bool = 0;
	var_44_bool = 0;
	var_45_bool = var_13_int > var_31_int;
	if(var_45_bool != 0) {
		var_46_bool = var_13_int < var_25_int;
		if(var_46_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		var_34_int = (int)-1;
		var_30_int = var_30_int + (int)1;
		goto Label_222;
	}
	return 22;
	
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";


func_149(var_0_int, var_1_int)
{
	var_92_bool = var_1_int == (int)0;
	if(var_92_bool != 0) {
		SendMessage((int)16384, "scrollbar");
	} else {
		var_95_int = -var_0_int;
		var_97_float = var_95_int * (int)100;
		var_98_float = var_97_float / var_1_int;
		SendMessage(var_98_float, "scrollbar");
	}
	return 0;
	
}


func_118(var_0_int)
{
	var_62_int = 0; var_63_int = 0;
	var_63_int = -20;
	var_0_int = var_0_int + var_63_int;
	func_128(var_12_object, var_62_int, var_63_int);
	func_149(var_62_int, var_63_int);
	return 2;
}


