// @IMPORTS: SetCursor/1,SetOwnerDraw/1,SetNeedUpdate/1,CaptureKeyboard/0,ShowCursor/0,GetChooseItems/1,ProcessEvents/0,SendMessage/3,SendMessage/2,DestroyWindow/0,GetReturnValue/1
// @STRINGS: W:default|A:size|A:get|W:cslot0|A:clear|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_14: op=0x3b vars=
// @EVENT_100: op=0x3c vars=int
// @EVENT_200: op=0x40 vars=int,string,object
// @PE: 0x3c

task_0_event_14(var_0_object)
{
	return 0;
}


task_0_event_100(var_0_object, var_1_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_object, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_object = Obj();
	var_7_int = 0;
	
Label_66:
	var_11_bool = var_7_int < (int)4;
	if(var_11_bool != 0) {
		var_14_int = var_7_int + (int)1;
		var_15_int = "cslot0" + var_14_int;
		var_16_bool = var_2_string == var_15_int;
		if(var_16_bool != 0) {
			@@@var_0_object:size(var_8_int);
			var_17_bool = var_7_int < var_8_int;
			if(var_17_bool != 0) {
				GetReturnValue(var_9_object);
				@@var_9_object:clear();
				@@var_9_object:add(var_7_int);
				DestroyWindow();
				var_9_object = 0;
			}
		}
		var_7_int = var_7_int + (int)1;
		goto Label_66;
	}
	return 6;
}


main(var_0_object)
{
	SetCursor("default");
	SetOwnerDraw((bool)0);
	SetNeedUpdate((bool)0);
	CaptureKeyboard();
	ShowCursor();
	GetChooseItems(var_0_object);
	func_21(var_0_object);
	ProcessEvents();
	return 0;
}


func_21(var_0_object)
{
	var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0;
	@@@var_0_object:size(var_8_int);
	var_9_int = 0;
	
Label_25:
	var_12_bool = var_9_int < var_8_int;
	if(var_12_bool != 0) {
		var_14_bool = var_9_int >= (int)4;
		if(var_14_bool != 0) {
		} else {
			@@@var_0_object:get(var_10_object, var_9_int);
			var_26_int = var_9_int + (int)1;
			var_27_int = "cslot0" + var_26_int;
			SendMessage((int)0, var_27_int, var_10_object);
			var_10_object = 0;
			var_9_int = var_9_int + (int)1;
			goto Label_25;
		}
	}
	var_8_int = var_11_int;
	
Label_45:
	var_16_bool = var_11_int < (int)4;
	if(var_16_bool != 0) {
		var_20_int = var_11_int + (int)1;
		var_21_int = "cslot0" + var_20_int;
		SendMessage((int)32768, var_21_int);
		var_11_int = var_11_int + (int)1;
		goto Label_45;
	}
	return 8;
	
}


