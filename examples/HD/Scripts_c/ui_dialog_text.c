// @IMPORTS: GetWindowSize/2,EnableClipping/1,CaptureKeyboard/0,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,GetTextHeightInWidth/4,GetAnswerCount/1,PrintInWidth/9,SelectAnswer/2,CreateStringVector/1,SendMessage/3,GetFontHeight/2,HideCursor/0,GetReplic/1,GetAnswer/2,GetAnswer/3,GetAnswer/4
// @STRINGS: W:p_scrollbar|W:default|A:add|W:history_text|W:Error: missing replic|W:ERROR: missing answer
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,int,int,int params=0
// @EVENT_0: op=0x60 vars=
// @EVENT_8: op=0x9f vars=int,int
// @EVENT_3: op=0xf7 vars=int,int
// @EVENT_15: op=0xfc vars=int,int,float
// @EVENT_200: op=0x106 vars=int,string,object
// @EVENT_101: op=0x135 vars=int
// @EVENT_102: op=0x148 vars=int
// @PE: 0xf7,0x106,0x135,0x148

task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_string = "";
	func_18(var_16_int, var_17_int, var_18_string);
	var_13_int = var_0_int;
	func_354("");
	var_75_string = var_14_string;
	var_79_int = var_5_int - (int)5;
	PrintInWidth(var_2_int, "default", (int)0, var_13_int, var_79_int, var_14_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
	var_13_int = var_13_int + var_2_int;
	var_13_int = var_13_int + (int)10;
	GetAnswerCount(var_15_int);
	
Label_120:
	var_84_bool = (int)0 < var_15_int;
	if(var_84_bool != 0) {
		var_85_string = ""; var_86_int = 0;
		var_17_int = var_86_int;
		func_363(var_85_string, var_86_int);
		var_85_string = var_18_string;
		var_87_bool = var_17_int == var_3_int;
		if(var_87_bool != 0) {
			var_91_int = var_5_int - (int)15;
			var_93_int = var_91_int - (int)5;
			PrintInWidth(var_16_int, "default", (int)15, var_13_int, var_93_int, var_18_string, (float)1.0, (float)1.0, (float)1.0);
		} else {
			var_102_int = var_5_int - (int)15;
			var_104_int = var_102_int - (int)5;
			PrintInWidth(var_16_int, "default", (int)15, var_13_int, var_104_int, var_18_string, (float)0.6980000138282776, (float)0.6589999794960022, (float)0.6470000147819519);
	}
		var_13_int = var_13_int + var_16_int;
		var_13_int = var_13_int + (int)5;
		var_17_int = var_17_int + (int)1;
		goto Label_120;
	}
	return 12;
	
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_string = ""; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0;
	var_21_int = var_0_int + var_2_int;
	var_15_int = var_21_int + (int)10;
	GetAnswerCount(var_16_int);
	var_3_int = -1;
	
Label_167:
	var_23_bool = (int)0 < var_16_int;
	if(var_23_bool != 0) {
		var_24_string = ""; var_25_int = 0;
		var_18_int = var_25_int;
		func_363(var_24_string, var_25_int);
		var_24_string = var_19_string;
		var_30_int = 0; var_31_int = 0;
		var_18_int = var_31_int;
		func_372(var_30_int, var_31_int);
		var_30_int = var_20_int;
		var_38_int = var_5_int - (int)15;
		var_40_int = var_38_int - (int)5;
		GetTextHeightInWidth(var_17_int, "default", var_40_int, var_19_string);
		var_41_bool = 0;
		var_41_bool = 0;
		var_42_bool = var_8_int > var_15_int;
		if(var_42_bool != 0) {
			var_43_int = var_15_int + var_17_int;
			var_44_bool = var_8_int < var_43_int;
			if(var_44_bool != 0) {
				var_41_bool = 1;
			}
		}
		if(var_41_bool != 0) {
			var_3_int = var_18_int;
			var_4_int = var_20_int;
		}
		var_15_int = var_15_int + var_17_int;
		var_15_int = var_15_int + (int)5;
		var_18_int = var_18_int + (int)1;
		goto Label_167;
	}
	return 12;
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	func_204(var_7_int, var_8_int);
	return 0;
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	GetFontHeight(var_12_int, "default");
	var_13_int = var_9_float * var_12_int;
	var_0_int = var_0_int + var_13_int;
	func_18(var_11_int, var_12_int, var_13_int);
	return 4;
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_11_bool = var_8_string == "p_scrollbar";
	if(var_11_bool != 0) {
		var_12_int = -var_1_int;
		var_13_float = var_12_int * var_7_int;
		var_0_int = var_13_float / (int)100;
		func_18(var_7_int, var_8_string, var_9_object);
	}
	return 0;
}


task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_9_bool = var_7_int == (int)267;
	if(var_9_bool != 0) {
		HideCursor();
		func_274(var_7_int);
	} else {
		var_20_bool = var_7_int == (int)268;
		if(var_20_bool == 0) goto Label_327;
		HideCursor();
		func_292(var_7_int);
	}
Label_327:
	return 0;
	
}


task_0_event_102(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_9_bool = var_7_int == (int)272;
	if(var_9_bool != 0) {
		HideCursor();
		func_274(var_7_int);
	} else {
		var_20_bool = var_7_int == (int)274;
		if(var_20_bool != 0) {
			HideCursor();
			func_292(var_7_int);
			goto Label_353;
		}
		var_30_bool = var_7_int == (int)256;
		if(var_30_bool == 0) goto Label_353;
		func_204(var_6_int, var_7_int);
	}
Label_353:
	return 0;
	
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_3_int = -1;
	var_0_int = 0;
	GetWindowSize(var_5_int, var_6_int);
	EnableClipping((bool)1);
	CaptureKeyboard();
	SetOwnerDraw((bool)1);
	func_18(var_4_int, var_5_int, var_6_int);
	ProcessEvents();
	return 0;
}


func_354(var_24_string)
{
	var_25_string = ""; var_26_string = "";
	GetReplic(var_26_string);
	var_28_bool = var_26_string == "";
	if(var_28_bool != 0) {
		var_26_string = "Error: missing replic";
	}
	var_26_string = var_24_string;
	return 2;
}


func_292(var_3_int)
{
	var_21_int = 0; var_22_int = 0;
	GetAnswerCount(var_22_int);
	var_24_bool = var_3_int == (int)-1;
	if(var_24_bool != 0) {
		var_3_int = 0;
	} else {
		var_26_int = var_22_int - (int)1;
		var_27_bool = var_3_int < var_26_int;
		if(var_27_bool != 0) {
			var_3_int = var_3_int + (int)1;
			goto Label_308;
		}
		var_3_int = 0;
	}
Label_308:
	return 2;
	
}


func_363(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	GetAnswer(var_38_int, var_40_string);
	var_42_bool = var_40_string == "";
	if(var_42_bool != 0) {
		var_40_string = "ERROR: missing answer";
	}
	var_40_string = var_37_string;
	return 2;
}


func_204(var_0_int, var_3_int)
{
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_string = ""; var_35_object = Obj(); var_36_string = ""; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_object = Obj();
	var_42_bool = var_3_int == (int)-1;
	if(var_42_bool != 0) {
		return 10;
	}
	func_354("");
	var_43_string = var_36_string;
	var_48_string = ""; var_49_int = 0;
	var_49_int = var_3_int;
	func_363(var_48_string, var_49_int);
	var_48_string = var_39_string;
	var_54_int = 0; var_55_int = 0;
	var_55_int = var_3_int;
	func_372(var_54_int, var_55_int);
	var_54_int = var_37_int;
	var_60_int = 0; var_61_int = 0;
	var_61_int = var_3_int;
	func_377(var_60_int, var_61_int);
	var_60_int = var_38_int;
	SelectAnswer(var_37_int, var_38_int);
	CreateStringVector(var_40_object);
	@@var_40_object:add(var_36_string);
	@@var_40_object:add(var_39_string);
	var_3_int = -1;
	SendMessage((int)0, "history_text", var_40_object);
	var_0_int = 0;
	func_18(var_38_int, var_39_string, var_40_object);
	return 10;
}
EMIT "Stack[-1] = 0";


func_18(var_0_int, var_1_int, var_6_int)
{
	var_9_int = 0;
	func_52(var_6_int, var_9_int);
	var_1_int = var_9_int;
	var_1_int = var_1_int - var_6_int;
	var_51_bool = var_1_int < (int)0;
	if(var_51_bool != 0) {
		var_1_int = 0;
	}
	var_52_int = -var_0_int;
	var_53_bool = var_52_int > var_1_int;
	if(var_53_bool != 0) {
		var_0_int = -var_1_int;
	} else {
			var_64_bool = var_0_int > (int)0;
			if(var_64_bool == 0) goto Label_36;
			var_0_int = 0;
	}
Label_36:
	var_55_bool = var_1_int == (int)0;
	if(var_55_bool != 0) {
		SendMessage((int)16384, "p_scrollbar");
	} else {
		var_58_int = -var_0_int;
		var_60_float = var_58_int * (int)100;
		var_61_float = var_60_float / var_1_int;
		SendMessage(var_61_float, "p_scrollbar");

	}
	return 0;
	
}


func_274(var_3_int)
{
	var_10_int = 0; var_11_int = 0;
	GetAnswerCount(var_11_int);
	var_13_bool = var_3_int == (int)-1;
	if(var_13_bool != 0) {
		var_3_int = var_11_int - (int)1;
	} else {
		var_16_bool = var_3_int > (int)0;
		if(var_16_bool != 0) {
			var_3_int = var_3_int + (int)-1;
			goto Label_291;
		}
		var_3_int = var_11_int - (int)1;
	}
Label_291:
	return 2;
	
}


func_372(var_54_int, var_55_int)
{
	var_56_int = 0; var_57_string = ""; var_58_int = 0; var_59_string = "";
	GetAnswer(var_55_int, var_59_string, var_58_int);
	var_58_int = var_54_int;
	return 4;
}


func_52(var_5_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = "";
	func_354("");
	var_24_string = var_19_string;
	var_31_int = var_5_int - (int)5;
	GetTextHeightInWidth(var_17_int, "default", var_31_int, var_19_string);
	var_17_int = var_18_int;
	var_18_int = var_18_int + (int)10;
	GetAnswerCount(var_20_int);
	var_22_int = 0;
	
Label_68:
	var_33_bool = var_22_int < var_20_int;
	if(var_33_bool != 0) {
		var_35_bool = var_22_int == (int)0;
		if(var_35_bool != 0) {
			var_18_int = var_18_int + (int)10;
		} else {
			var_18_int = var_18_int + (int)5;
	}
		var_18_int = var_9_int;
		var_37_string = ""; var_38_int = 0;
		var_22_int = var_38_int;
		func_363(var_37_string, var_38_int);
		var_37_string = var_23_string;
		var_45_int = var_5_int - (int)15;
		var_47_int = var_45_int - (int)5;
		GetTextHeightInWidth(var_17_int, "default", var_47_int, var_23_string);
		var_18_int = var_18_int + var_17_int;
		var_22_int = var_22_int + (int)1;
		goto Label_68;
	}
	return 14;
	
}


func_377(var_60_int, var_61_int)
{
	var_62_int = 0; var_63_int = 0; var_64_string = ""; var_65_int = 0; var_66_int = 0; var_67_string = "";
	GetAnswer(var_61_int, var_67_string, var_65_int, var_66_int);
	var_66_int = var_60_int;
	return 6;
}


