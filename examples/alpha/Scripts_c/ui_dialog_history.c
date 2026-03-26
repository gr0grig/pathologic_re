// @IMPORTS: CreateStringVector/1,GetConversation/1,UITrace/1,_strupr/1,GetWindowSize/2,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,GetTextHeightInWidth/4,PrintInWidth/9,Print/7,GetReplic/1,GetAnswer/4,SelectAnswer/2
// @STRINGS: W:null conversation|A:GetNPCName|A:GetPlayerName|W:h_scrollbar|A:size|A:get|W:default|W:dialog_text|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,int,int,int,int,int,int,int,object,object,string,string params=0
// @EVENT_0: op=0x5f vars=
// @EVENT_200: op=0x94 vars=int,string,object

task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0;
	var_18_int = var_1_int;
	@@@var_8_object:size(var_19_int);
	var_20_int = 0;
	
Label_100:
	var_24_bool = var_20_int < var_19_int;
	if(var_24_bool != 0) {
		@@@var_8_object:get(var_21_string, var_20_int);
		@@@var_9_object:get(var_22_string, var_20_int);
		var_28_int = var_6_int - (int)159;
		PrintInWidth(var_23_int, "default", (int)159, var_18_int, var_28_int, var_21_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
		Print("default", (int)0, var_18_int, var_10_string, (float)0.8040000200271606, (float)0.8040000200271606, (float)0.8040000200271606);
		var_18_int = var_18_int + var_23_int;
		var_18_int = var_18_int + (int)10;
		var_41_int = var_6_int - (int)159;
		PrintInWidth(var_23_int, "default", (int)159, var_18_int, var_41_int, var_22_string, (float)0.6980000138282776, (float)0.6589999794960022, (float)0.6470000147819519);
		Print("default", (int)0, var_18_int, var_11_string, (float)0.6980000138282776, (float)0.6589999794960022, (float)0.6470000147819519);
		var_18_int = var_18_int + var_23_int;
		var_18_int = var_18_int + (int)10;
		var_20_int = var_20_int + (int)1;
		goto Label_100;
	}
	return 12;
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string, var_12_int, var_13_string, var_14_object)
{
	var_15_int = 0; var_16_int = 0; var_17_string = ""; var_18_string = ""; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = "";
	var_24_bool = var_13_string == "h_scrollbar";
	if(var_24_bool != 0) {
		var_25_int = -var_2_int;
		var_26_float = var_25_int * var_12_int;
		var_1_int = var_26_float / (int)100;
	} else {
		var_29_bool = var_13_string == "dialog_text";
		if(var_29_bool == 0) goto Label_173;
		GetReplic(var_21_string);
		GetAnswer(var_12_int, var_22_string, var_19_int, var_20_int);
		@@@var_8_object:add(var_21_string);
		@@@var_9_object:add(var_22_string);
		func_39(var_20_int, var_21_string, var_22_string);
		SelectAnswer(var_19_int, var_20_int);
	}
Label_173:
	return 8;
	
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj();
	var_4_int = -1;
	var_1_int = 0;
	CreateStringVector(var_8_object);
	CreateStringVector(var_9_object);
	GetConversation(var_13_object);
	var_14_bool = var_13_object == 0; //@ne
	if(var_14_bool != 0) {
		UITrace("null conversation");
		return 2;
	}
	@@var_13_object:GetNPCName(var_10_string);
	_strupr(var_10_string);
	@@var_13_object:GetPlayerName(var_11_string);
	_strupr(var_11_string);
	GetWindowSize(var_6_int, var_7_int);
	func_39(var_11_string, var_12_object, var_13_object);
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	var_0_bool = false;
	ProcessEvents();
	return 2;
}
EMIT "Stack[-1] = 0";


func_59(var_6_int, var_8_object, var_9_object, var_16_int)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_string = ""; var_28_string = "";
	@@@var_8_object:size(var_23_int);
	var_26_int = 0;
	
Label_64:
	var_29_bool = var_26_int < var_23_int;
	if(var_29_bool != 0) {
		@@@var_8_object:get(var_27_string, var_26_int);
		@@@var_9_object:get(var_28_string, var_26_int);
		var_32_int = var_6_int - (int)159;
		GetTextHeightInWidth(var_24_int, "default", var_32_int, var_27_string);
		(int)0 = (int)0 + var_24_int;
		var_25_int = var_25_int + (int)10;
		var_36_int = var_6_int - (int)159;
		GetTextHeightInWidth(var_24_int, "default", var_36_int, var_28_string);
		var_25_int = var_25_int + var_24_int;
		var_38_int = var_23_int - (int)1;
		var_39_bool = var_26_int != var_38_int;
		if(var_39_bool != 0) {
			var_25_int = var_25_int + (int)10;
		}
		var_26_int = var_26_int + (int)1;
		goto Label_64;
	}
	var_25_int = var_16_int;
	return 12;
}


func_39(var_1_int, var_2_int, var_7_int)
{
	var_16_int = 0;
	func_59(var_11_string, var_12_object, var_13_object, var_16_int);
	var_2_int = var_16_int;
	var_2_int = var_2_int - var_7_int;
	var_43_bool = var_2_int < (int)0;
	if(var_43_bool != 0) {
		var_2_int = 0;
		SendMessage((int)16484, "h_scrollbar");
	} else {
		SendMessage((int)100, "h_scrollbar");
	}
	var_1_int = -var_2_int;
	return 0;
	
}


