// @IMPORTS: CaptureKeyboard/0,SendMessage/2,ShowCursor/0,SetCursor/1,SetOwnerDraw/1,SetNeedUpdate/1,ProcessEvents/0,GetPlayer/1,BeginPlayerUpdate/0,GetGameTimeScale/1,AdvanceGameTime/1,GetPlayerHealth/1,DestroyWindow/0,GetPlayerImmunity/1,GetPlayerHunger/1,GetPlayerTiredness/1,GetPlayerDisease/1
// @STRINGS: W:dream_progress|W:default|W:sleeping|A:SetProperty|W:health|W:immunity|W:hunger|W:tiredness|W:infection|W:dream_button|W:button_plus|W:button_minus
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,float,float params=0
// @EVENT_14: op=0x1e vars=
// @EVENT_1: op=0x6a vars=float
// @EVENT_100: op=0x8a vars=int
// @EVENT_200: op=0x93 vars=int,string,object
// @PE: 0x8a

task_0_event_14(var_0_bool, var_1_float, var_2_float)
{
	var_3_object = Obj(); var_4_object = Obj();
	GetPlayer(var_4_object);
	@@var_4_object:SetProperty("sleeping", (bool)0);
	return 2;
}
EMIT "Stack[-1] = 0";


task_0_event_1(var_0_bool, var_1_float, var_2_float, var_3_float)
{
	var_4_float = 0; var_5_int = 0; var_6_float = 0; var_7_int = 0;
	var_8_bool = var_0_bool == 0; //@nz
	if(var_8_bool != 0) {
		return 4;
	}
	func_60();
	var_1_float = var_1_float + var_3_float;
	GetGameTimeScale(var_6_float);
	var_34_float = (float)200.0 * var_1_float;
	var_35_float = var_34_float * var_6_float;
	var_36_bool = var_35_float > var_2_float;
	if(var_36_bool != 0) {
		func_51(var_7_int);
		DestroyWindow();
	}
	var_39_float = (float)200.0 * var_1_float;
	var_40_float = var_39_float * var_6_float;
	var_41_int = var_2_float - var_40_float;
	var_42_float = (int)100 * var_41_int;
	var_7_int = var_42_float / (float)6.0;
	SendMessage(var_7_int, "dream_progress");
	return 4;
}


task_0_event_100(var_0_bool, var_1_float, var_2_float, var_3_int)
{
	var_4_bool = var_0_bool;
	if(var_4_bool != 0) {
		func_51(var_3_int);
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
			func_51(var_9_int);
			DestroyWindow();
		} else {
			var_0_bool = true;
			func_39(var_9_int);
	}
		var_23_bool = var_4_string == "button_plus";
		if(var_23_bool != 0) {
			var_24_bool = var_0_bool;
			if(var_24_bool != 0) {
				return 4;
			}
			var_2_float = var_2_float + (int)1;
			var_27_bool = var_2_float > (float)6.0;
			if(var_27_bool != 0) {
			} else {
				var_8_int = (float)6.0 / (int)1;
				var_2_float = var_8_int * (int)1;
		}
			var_36_bool = var_4_string == "button_minus";
			if(var_36_bool == 0) goto Label_213;
			var_37_bool = var_0_bool;
			if(var_37_bool != 0) {
				return 4;
			}
			var_2_float = var_2_float - (int)1;
			var_40_bool = var_2_float < (int)1;
			if(var_40_bool != 0) {
			} else {
				var_9_int = (float)1 / (int)1;
				var_2_float = var_9_int * (int)1;
			}
			var_42_float = (int)100 * var_2_float;
			var_44_float = var_42_float / (float)6.0;
			SendMessage(var_44_float, "dream_progress");
		}
		var_29_float = (int)100 * var_2_float;
		var_31_float = var_29_float / (float)6.0;
		SendMessage(var_31_float, "dream_progress");
		goto Label_213;
	}
	goto Label_213;
	
Label_213:
	return 4;
	
}


main(var_0_bool, var_1_float, var_2_float)
{
	CaptureKeyboard();
	var_0_bool = false;
	func_60();
	var_28_float = (int)100 * (float)6.0;
	var_30_float = var_28_float / (float)6.0;
	SendMessage(var_30_float, "dream_progress");
	ShowCursor();
	SetCursor("default");
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)1);
	CaptureKeyboard();
	ProcessEvents();
	return 0;
}


func_51(var_1_float)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTimeScale(var_11_float);
	var_12_float = var_1_float * var_11_float;
	var_14_float = var_12_float * (float)200.0;
	AdvanceGameTime(var_14_float);
	return 2;
}


func_60()
{
	var_3_float = 0; var_4_float = 0;
	GetPlayerHealth(var_4_float);
	var_6_float = (int)100 * var_4_float;
	SendMessage(var_6_float, "health");
	var_9_bool = var_4_float <= (int)0;
	if(var_9_bool != 0) {
		func_51(var_4_float);
		DestroyWindow();
		return 2;
	}
	GetPlayerImmunity(var_4_float);
	var_16_float = (int)100 * var_4_float;
	SendMessage(var_16_float, "immunity");
	GetPlayerHunger(var_4_float);
	var_19_float = (int)100 * var_4_float;
	SendMessage(var_19_float, "hunger");
	GetPlayerTiredness(var_4_float);
	var_22_float = (int)100 * var_4_float;
	SendMessage(var_22_float, "tiredness");
	GetPlayerDisease(var_4_float);
	var_25_float = (int)100 * var_4_float;
	SendMessage(var_25_float, "infection");
	return 2;
}


func_39(var_1_float)
{
	var_18_object = Obj(); var_19_object = Obj();
	GetPlayer(var_19_object);
	@@var_19_object:SetProperty("sleeping", (bool)1);
	BeginPlayerUpdate();
	var_1_float = 0;
	return 2;
}
EMIT "Stack[-1] = 0";


