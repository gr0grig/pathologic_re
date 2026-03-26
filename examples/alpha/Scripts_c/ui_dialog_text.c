// @IMPORTS: GetWindowSize/2,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,GetReplic/1,GetTextHeightInWidth/4,GetAnswerCount/1,GetAnswer/2,PrintInWidth/9,GetAnswer/3
// @STRINGS: W:p_scrollbar|W:default|W:history_text
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,int,int,int params=0
// @EVENT_0: op=0x49 vars=
// @EVENT_8: op=0x7d vars=int,int
// @EVENT_3: op=0x9e vars=int,int
// @EVENT_200: op=0xab vars=int,string,object
// @PE: 0x9e,0xab

task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_string = "";
	func_16(var_16_int, var_17_int, var_18_string);
	var_13_int = var_0_int;
	GetReplic(var_14_string);
	PrintInWidth(var_2_int, "default", (int)0, var_13_int, var_5_int, var_14_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
	var_13_int = var_13_int + var_2_int;
	var_13_int = var_13_int + (int)15;
	GetAnswerCount(var_15_int);
	var_17_int = 0;
	
Label_93:
	var_60_bool = var_17_int < var_15_int;
	if(var_60_bool != 0) {
		GetAnswer(var_17_int, var_18_string);
		var_61_bool = var_17_int == var_3_int;
		if(var_61_bool != 0) {
			var_65_int = var_5_int - (int)15;
			PrintInWidth(var_16_int, "default", (int)15, var_13_int, var_65_int, var_18_string, (float)1.0, (float)1.0, (float)1.0);
		} else {
			var_74_int = var_5_int - (int)15;
			PrintInWidth(var_16_int, "default", (int)15, var_13_int, var_74_int, var_18_string, (float)0.6980000138282776, (float)0.6589999794960022, (float)0.6470000147819519);
	}
		var_13_int = var_13_int + var_16_int;
		var_13_int = var_13_int + (int)10;
		var_17_int = var_17_int + (int)1;
		goto Label_93;
	}
	return 12;
	
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_string = ""; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0;
	var_21_int = var_0_int + var_2_int;
	var_15_int = var_21_int + (int)15;
	GetAnswerCount(var_16_int);
	var_3_int = -1;
	var_18_int = 0;
	
Label_133:
	var_23_bool = var_18_int < var_16_int;
	if(var_23_bool != 0) {
		GetAnswer(var_18_int, var_19_string, var_20_int);
		GetTextHeightInWidth(var_17_int, "default", var_5_int, var_19_string);
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = var_8_int > var_15_int;
		if(var_26_bool != 0) {
			var_27_int = var_15_int + var_17_int;
			var_28_bool = var_8_int < var_27_int;
			if(var_28_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_3_int = var_18_int;
			var_4_int = var_20_int;
		}
		var_15_int = var_15_int + var_17_int;
		var_15_int = var_15_int + (int)10;
		var_18_int = var_18_int + (int)1;
		goto Label_133;
	}
	return 12;
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_10_bool = var_3_int == (int)-1;
	if(var_10_bool != 0) {
		return 0;
	}
	SendMessage(var_3_int, "history_text");
	var_0_int = 0;
	func_16(var_6_int, var_7_int, var_8_int);
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_11_bool = var_8_string == "p_scrollbar";
	if(var_11_bool != 0) {
		var_12_int = -var_1_int;
		var_13_float = var_12_int * var_7_int;
		var_0_int = var_13_float / (int)100;
		func_16(var_7_int, var_8_string, var_9_object);
	}
	return 0;
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_3_int = -1;
	var_0_int = 0;
	GetWindowSize(var_5_int, var_6_int);
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	func_16(var_4_int, var_5_int, var_6_int);
	ProcessEvents();
	return 0;
}


func_16(var_0_int, var_1_int, var_6_int)
{
	var_9_int = 0;
	func_38(var_6_int, var_9_int);
	var_1_int = var_9_int;
	var_1_int = var_1_int - var_6_int;
	var_36_bool = var_1_int < (int)0;
	if(var_36_bool != 0) {
		SendMessage((int)16384, "p_scrollbar");
	} else {
		var_39_int = -var_0_int;
		var_41_float = var_39_int * (int)100;
		var_42_float = var_41_float / (int)0;
		SendMessage(var_42_float, "p_scrollbar");
	}
	return 0;
	
}


func_38(var_5_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = "";
	GetReplic(var_19_string);
	GetTextHeightInWidth(var_17_int, "default", var_5_int, var_19_string);
	var_17_int = var_18_int;
	var_18_int = var_18_int + (int)15;
	GetAnswerCount(var_20_int);
	var_22_int = 0;
	
Label_50:
	var_26_bool = var_22_int < var_20_int;
	if(var_26_bool != 0) {
		var_28_bool = var_22_int == (int)0;
		if(var_28_bool != 0) {
			var_18_int = var_18_int + (int)15;
		} else {
			var_18_int = var_18_int + (int)10;
	}
		var_18_int = var_9_int;
		GetAnswer(var_22_int, var_23_string);
		var_32_int = var_5_int - (int)15;
		GetTextHeightInWidth(var_17_int, "default", var_32_int, var_23_string);
		var_18_int = var_18_int + var_17_int;
		var_22_int = var_22_int + (int)1;
		goto Label_50;
	}
	return 14;
	
}


