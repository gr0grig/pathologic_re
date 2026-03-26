// @IMPORTS: CaptureKeyboard/0,SendMessage/2,ShowCursor/0,SetCursor/1,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,GetPlayer/1,CreateFloatVector/1,SendWorldWndMessage/2,BeginPlayerUpdate/0,GetPlayerHealth/1,DestroyWindow/0,GetPlayerImmunity/1,GetPlayerHunger/1,GetPlayerTiredness/1,GetPlayerDisease/1,GetGameTimeScale/1,AdvanceGameTime/1
// @STRINGS: W:dream_progress|W:health_text|W:immunity_text|W:hunger_text|W:tiredness_text|W:infection_text|W:default|W:sleeping|A:SetProperty|A:add|W:health|W:immunity|W:hunger|W:tiredness|W:infection|W:dream_button|W:button_plus|W:button_minus
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,float,float params=0
// @EVENT_14: op=0x32 vars=
// @EVENT_1: op=0x8e vars=float
// @EVENT_100: op=0xb3 vars=int
// @EVENT_200: op=0xbc vars=int,string,object
// @PE: 0xb3

task_0_event_14(var_0_bool, var_1_float, var_2_float)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj();
	GetPlayer(var_5_object);
	@@var_5_object:SetProperty("sleeping", (bool)0);
	CreateFloatVector(var_6_object);
	@@var_6_object:add((int)0);
	SendWorldWndMessage((int)11, var_6_object);
	SendWorldWndMessage((int)12, var_6_object);
	SendWorldWndMessage((int)13, var_6_object);
	SendWorldWndMessage((int)14, var_6_object);
	SendWorldWndMessage((int)15, var_6_object);
	SendWorldWndMessage((int)16, var_6_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


task_0_event_1(var_0_bool, var_1_float, var_2_float, var_3_float)
{
	var_4_float = 0; var_5_int = 0; var_6_float = 0; var_7_int = 0;
	var_8_bool = var_0_bool == 0; //@nz
	if(var_8_bool != 0) {
		return 4;
	}
	GetGameTimeScale(var_6_float);
	var_9_float = var_3_float * var_6_float;
	var_11_float = var_9_float * (float)200.0;
	AdvanceGameTime(var_11_float);
	func_96();
	var_1_float = var_1_float + var_3_float;
	var_32_float = (float)200.0 * var_1_float;
	var_33_float = var_32_float * var_6_float;
	var_34_bool = var_33_float > var_2_float;
	if(var_34_bool != 0) {
		func_95();
		DestroyWindow();
	}
	var_37_float = (float)200.0 * var_1_float;
	var_38_float = var_37_float * var_6_float;
	var_39_int = var_2_float - var_38_float;
	var_40_float = (int)100 * var_39_int;
	var_7_int = var_40_float / (float)6.0;
	SendMessage(var_7_int, "dream_progress");
	return 4;
}


task_0_event_100(var_0_bool, var_1_float, var_2_float, var_3_int)
{
	var_4_bool = var_0_bool;
	if(var_4_bool != 0) {
		func_95();
	}
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_bool, var_1_float, var_2_float, var_3_int, var_4_string, var_5_object)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0;
	var_11_bool = var_4_string == "dream_button";
	if(var_11_bool != 0) {
		var_12_bool = var_0_bool;
		if(var_12_bool != 0) {
			func_95();
			DestroyWindow();
		} else {
			var_0_bool = true;
			func_83(var_9_int);
	}
		var_18_bool = var_4_string == "button_plus";
		if(var_18_bool != 0) {
			var_19_bool = var_0_bool;
			if(var_19_bool != 0) {
				return 4;
			}
			var_2_float = var_2_float + (int)1;
			var_22_bool = var_2_float > (float)6.0;
			if(var_22_bool != 0) {
			} else {
				var_8_int = (float)6.0 / (int)1;
				var_2_float = var_8_int * (int)1;
		}
			var_31_bool = var_4_string == "button_minus";
			if(var_31_bool == 0) goto Label_254;
			var_32_bool = var_0_bool;
			if(var_32_bool != 0) {
				return 4;
			}
			var_2_float = var_2_float - (int)1;
			var_35_bool = var_2_float < (int)1;
			if(var_35_bool != 0) {
			} else {
				var_9_int = (float)1 / (int)1;
				var_2_float = var_9_int * (int)1;
			}
			var_37_float = (int)100 * var_2_float;
			var_39_float = var_37_float / (float)6.0;
			SendMessage(var_39_float, "dream_progress");
		}
		var_24_float = (int)100 * var_2_float;
		var_26_float = var_24_float / (float)6.0;
		SendMessage(var_26_float, "dream_progress");
		goto Label_254;
	}
	goto Label_254;
	
Label_254:
	return 4;
	
}


main(var_0_bool, var_1_float, var_2_float)
{
	CaptureKeyboard();
	var_0_bool = false;
	func_96();
	var_23_float = (int)100 * (float)6.0;
	var_25_float = var_23_float / (float)6.0;
	SendMessage(var_25_float, "dream_progress");
	SendMessage((int)701, "health_text");
	SendMessage((int)702, "immunity_text");
	SendMessage((int)703, "hunger_text");
	SendMessage((int)704, "tiredness_text");
	SendMessage((int)705, "infection_text");
	ShowCursor();
	SetCursor("default");
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	CaptureKeyboard();
	ProcessEvents();
	return 0;
}


func_96()
{
	var_3_float = 0; var_4_float = 0;
	GetPlayerHealth(var_4_float);
	var_6_float = (int)100 * var_4_float;
	SendMessage(var_6_float, "health");
	var_9_bool = var_4_float <= (int)0;
	if(var_9_bool != 0) {
		func_95();
		DestroyWindow();
		return 2;
	}
	GetPlayerImmunity(var_4_float);
	var_11_float = (int)100 * var_4_float;
	SendMessage(var_11_float, "immunity");
	GetPlayerHunger(var_4_float);
	var_14_float = (int)100 * var_4_float;
	SendMessage(var_14_float, "hunger");
	GetPlayerTiredness(var_4_float);
	var_17_float = (int)100 * var_4_float;
	SendMessage(var_17_float, "tiredness");
	GetPlayerDisease(var_4_float);
	var_20_float = (int)100 * var_4_float;
	SendMessage(var_20_float, "infection");
	return 2;
}


func_83(var_1_float)
{
	var_13_object = Obj(); var_14_object = Obj();
	GetPlayer(var_14_object);
	@@var_14_object:SetProperty("sleeping", (bool)1);
	BeginPlayerUpdate();
	var_1_float = 0;
	return 2;
}
EMIT "Stack[-1] = 0";


func_95()
{
	return 0;
}


