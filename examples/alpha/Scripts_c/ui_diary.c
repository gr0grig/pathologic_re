// @IMPORTS: GetDiarySelectedSection/1,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,ProcessEvents/0,SetDiarySelectedSection/1,DestroyWindow/0,SendMessage/2
// @STRINGS: W:default|W:button_mission|W:button_daytasks|W:button_othertasks|W:text
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_100: op=0x13 vars=int
// @EVENT_200: op=0x19 vars=int,string,object
// @PE: 0x13,0x19,0x2d

task_0_event_100(var_0_int, var_1_int)
{
	SetDiarySelectedSection(var_0_int);
	DestroyWindow();
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_5_bool = var_2_string == "button_mission";
	if(var_5_bool != 0) {
		var_0_int = 0;
	} else {
		var_27_bool = var_2_string == "button_daytasks";
		if(var_27_bool != 0) {
			var_0_int = 1;
			goto Label_40;
		}
		var_29_bool = var_2_string == "button_othertasks";
		if(var_29_bool == 0) goto Label_40;
		var_0_int = 2;
	}
Label_40:
	var_6_int = 0;
	var_6_int = var_0_int;
	func_45(var_6_int);
	return 0;
	
}


main(var_0_int)
{
	GetDiarySelectedSection(var_0_int);
	SetCursor("default");
	ShowCursor();
	var_2_int = 0;
	var_2_int = var_0_int;
	func_45(var_2_int);
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	ProcessEvents();
	return 0;
}


func_45(var_2_int)
{
	var_4_bool = var_2_int != (int)0;
	if(var_4_bool != 0) {
		SendMessage((int)0, "button_mission");
	} else {
				SendMessage((int)1, "button_mission");
	}
	var_8_bool = var_2_int != (int)1;
	if(var_8_bool != 0) {
		SendMessage((int)0, "button_daytasks");
	} else {
			SendMessage((int)1, "button_daytasks");

	}
	var_12_bool = var_2_int != (int)2;
	if(var_12_bool != 0) {
		SendMessage((int)0, "button_othertasks");
	} else {
		SendMessage((int)1, "button_othertasks");

	}
	SendMessage(var_2_int, "text");
	return 0;
	
}


