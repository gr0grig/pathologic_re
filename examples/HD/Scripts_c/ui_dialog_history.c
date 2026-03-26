// @IMPORTS: GetWindowSize/2,CreateStringVector/1,GetConversation/1,UITrace/1,_strupr/1,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,GetTextHeightInWidth/4,PrintInWidth/9,Print/7,GetFontHeight/2
// @STRINGS: W:null conversation|A:GetNPCName|A:GetPlayerName|W:h_scrollbar|A:size|A:get|W:default|W:dialog_text|A:add
// @GLOBALS: 0:int:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,int,int,int,int,int,int,int,object,object,string,string params=0
// @EVENT_0: op=0x85 vars=
// @EVENT_200: op=0xba vars=int,string,object
// @EVENT_15: op=0xd4 vars=int,int,float

task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0;
	var_18_int = var_1_int;
	@@@var_8_object:size(var_19_int);
	var_20_int = 0;
	
Label_138:
	var_24_bool = var_20_int < var_19_int;
	if(var_24_bool != 0) {
		@@@var_8_object:get(var_21_string, var_20_int);
		@@@var_9_object:get(var_22_string, var_20_int);
		var_26_int = GlobalVars[0];
		var_27_int = GlobalVars[0];
		var_28_int = var_6_int - var_27_int;
		PrintInWidth(var_23_int, "default", var_26_int, var_18_int, var_28_int, var_21_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
		Print("default", (int)0, var_18_int, var_10_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
		var_18_int = var_18_int + var_23_int;
		var_18_int = var_18_int + (int)10;
		var_39_int = GlobalVars[0];
		var_40_int = GlobalVars[0];
		var_41_int = var_6_int - var_40_int;
		PrintInWidth(var_23_int, "default", var_39_int, var_18_int, var_41_int, var_22_string, (float)0.6980000138282776, (float)0.6589999794960022, (float)0.6470000147819519);
		Print("default", (int)0, var_18_int, var_11_string, (float)0.6980000138282776, (float)0.6589999794960022, (float)0.6470000147819519);
		var_18_int = var_18_int + var_23_int;
		var_18_int = var_18_int + (int)10;
		var_20_int = var_20_int + (int)1;
		goto Label_138;
	}
	return 12;
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string, var_12_int, var_13_string, var_14_object)
{
	var_15_string = ""; var_16_string = ""; var_17_string = ""; var_18_string = "";
	var_20_bool = var_13_string == "h_scrollbar";
	if(var_20_bool != 0) {
		var_21_int = -var_2_int;
		var_22_float = var_21_int * var_12_int;
		var_1_int = var_22_float / (int)100;
	} else {
		var_25_bool = var_13_string == "dialog_text";
		if(var_25_bool == 0) goto Label_211;
		@@var_14_object:get(var_17_string, (int)0);
		@@var_14_object:get(var_18_string, (int)1);
		@@@var_8_object:add(var_17_string);
		@@@var_9_object:add(var_18_string);
		func_43(var_16_string, var_17_string, var_18_string);
	}
Label_211:
	return 4;
	
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string, var_12_int, var_13_int, var_14_float)
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0;
	GetFontHeight(var_17_int, "default");
	var_18_int = var_14_float * var_17_int;
	var_1_int = var_1_int + var_18_int;
	func_63(var_16_int, var_17_int, var_18_int);
	return 4;
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj();
	var_4_int = -1;
	var_1_int = 0;
	GetWindowSize(var_6_int, var_7_int);
	var_14_int = GlobalVars[0];
	var_14_int = var_6_int / (float)4.800000190734863;
	GlobalVars[0] = var_14_int;
	CreateStringVector(var_8_object);
	CreateStringVector(var_9_object);
	GetConversation(var_13_object);
	var_16_bool = var_13_object == 0; //@ne
	if(var_16_bool != 0) {
		UITrace("null conversation");
		return 2;
	}
	@@var_13_object:GetNPCName(var_10_string);
	_strupr(var_10_string);
	@@var_13_object:GetPlayerName(var_11_string);
	_strupr(var_11_string);
	func_43(var_11_string, var_12_object, var_13_object);
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	var_0_bool = false;
	ProcessEvents();
	return 2;
}
EMIT "Stack[-1] = 0";


func_97(var_6_int, var_8_object, var_9_object, var_18_int)
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; var_24_string = ""; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_string = ""; var_30_string = "";
	@@@var_8_object:size(var_25_int);
	var_28_int = 0;
	
Label_102:
	var_31_bool = var_28_int < var_25_int;
	if(var_31_bool != 0) {
		@@@var_8_object:get(var_29_string, var_28_int);
		@@@var_9_object:get(var_30_string, var_28_int);
		var_33_int = GlobalVars[0];
		var_34_int = var_6_int - var_33_int;
		GetTextHeightInWidth(var_26_int, "default", var_34_int, var_29_string);
		(int)0 = (int)0 + var_26_int;
		var_27_int = var_27_int + (int)10;
		var_37_int = GlobalVars[0];
		var_38_int = var_6_int - var_37_int;
		GetTextHeightInWidth(var_26_int, "default", var_38_int, var_30_string);
		var_27_int = var_27_int + var_26_int;
		var_40_int = var_25_int - (int)1;
		var_41_bool = var_28_int != var_40_int;
		if(var_41_bool != 0) {
			var_27_int = var_27_int + (int)10;
		}
		var_28_int = var_28_int + (int)1;
		goto Label_102;
	}
	var_27_int = var_18_int;
	return 12;
}


func_43(var_1_int, var_2_int, var_7_int)
{
	var_18_int = 0;
	func_97(var_11_string, var_12_object, var_13_object, var_18_int);
	var_2_int = var_18_int;
	var_2_int = var_2_int - var_7_int;
	var_45_bool = var_2_int < (int)0;
	if(var_45_bool != 0) {
		var_2_int = 0;
		SendMessage((int)16484, "h_scrollbar");
	} else {
		SendMessage((int)100, "h_scrollbar");
	}
	var_1_int = -var_2_int;
	return 0;
	
}


func_63(var_1_int, var_2_int, var_7_int)
{
	var_20_int = 0;
	func_97(var_16_int, var_17_int, var_18_int, var_20_int);
	var_2_int = var_20_int;
	var_2_int = var_2_int - var_7_int;
	var_47_bool = var_2_int < (int)0;
	if(var_47_bool != 0) {
		var_2_int = 0;
	}
	var_48_int = -var_1_int;
	var_49_bool = var_48_int > var_2_int;
	if(var_49_bool != 0) {
		var_1_int = -var_2_int;
	} else {
			var_60_bool = var_1_int > (int)0;
			if(var_60_bool == 0) goto Label_81;
			var_1_int = 0;
	}
Label_81:
	var_51_bool = var_2_int == (int)0;
	if(var_51_bool != 0) {
		SendMessage((int)16384, "h_scrollbar");
	} else {
		var_54_int = -var_1_int;
		var_56_float = var_54_int * (int)100;
		var_57_float = var_56_float / var_2_int;
		SendMessage(var_57_float, "h_scrollbar");

	}
	return 0;
	
}


