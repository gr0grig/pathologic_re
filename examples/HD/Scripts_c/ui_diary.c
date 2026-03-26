// @IMPORTS: GetDiarySelectedSection/1,SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,ProcessEvents/0,SetDiarySelectedSection/1,DestroyWindow/0,SendMessage/2
// @STRINGS: W:default|W:text|W:button_mission|W:button_daytasks|W:button_othertasks
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_100: op=0x13 vars=int
// @EVENT_101: op=0x19 vars=int
// @EVENT_102: op=0x66 vars=int
// @EVENT_200: op=0x77 vars=int,string,object
// @PE: 0x13,0x19,0x66,0x77,0x93

task_0_event_100(var_0_int, var_1_int)
{
	SetDiarySelectedSection(var_0_int);
	DestroyWindow();
	return 0;
}


task_0_event_101(var_0_int, var_1_int)
{
	var_3_bool = var_1_int == (int)266;
	if(var_3_bool != 0) {
		var_5_bool = var_0_int == (int)0;
		if(var_5_bool != 0) {
			var_0_int = 1;
			var_6_int = 0;
			var_6_int = var_0_int;
			func_147(var_6_int);
		} else {
			var_27_bool = var_0_int == (int)1;
			if(var_27_bool != 0) {
				var_0_int = 2;
				var_28_int = 0;
				var_28_int = var_0_int;
				func_147(var_28_int);
				goto Label_55;
			}
			var_30_bool = var_0_int == (int)2;
			if(var_30_bool == 0) goto Label_55;
			var_0_int = 0;
			var_31_int = 0;
			var_31_int = var_0_int;
			func_147(var_31_int);
	}
		var_33_bool = var_1_int == (int)265;
		if(var_33_bool != 0) {
			var_35_bool = var_0_int == (int)0;
			if(var_35_bool != 0) {
				var_0_int = 2;
				var_36_int = 0;
				var_36_int = var_0_int;
				func_147(var_36_int);
			} else {
				var_38_bool = var_0_int == (int)1;
				if(var_38_bool != 0) {
					var_0_int = 0;
					var_39_int = 0;
					var_39_int = var_0_int;
					func_147(var_39_int);
					goto Label_85;
				}
				var_41_bool = var_0_int == (int)2;
				if(var_41_bool == 0) goto Label_85;
				var_42_int = 0;
				var_42_int = (int)1;
				func_147(var_42_int);
		}
			var_44_bool = var_1_int == (int)267;
			if(var_44_bool != 0) {
				SendMessage((int)1001, "text");
				goto Label_101;
			}
			var_48_bool = var_1_int == (int)268;
			if(var_48_bool == 0) goto Label_101;
			SendMessage((int)1000, "text");
		}
	Label_85:
		goto Label_101;
	}
Label_55:
	goto Label_101;
	
Label_101:
	return 0;
	
}


task_0_event_102(var_0_int, var_1_int)
{
	var_3_bool = var_1_int == (int)272;
	if(var_3_bool != 0) {
		SendMessage((int)1001, "text");
	} else {
		var_7_bool = var_1_int == (int)274;
		if(var_7_bool == 0) goto Label_118;
		SendMessage((int)1000, "text");
	}
Label_118:
	return 0;
	
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_5_bool = var_2_string == "button_mission";
	if(var_5_bool != 0) {
		var_6_int = 0;
		var_6_int = (int)0;
		func_147(var_6_int);
	} else {
		var_27_bool = var_2_string == "button_daytasks";
		if(var_27_bool != 0) {
			var_28_int = 0;
			var_28_int = (int)1;
			func_147(var_28_int);
			goto Label_146;
		}
		var_30_bool = var_2_string == "button_othertasks";
		if(var_30_bool == 0) goto Label_146;
		var_31_int = 0;
		var_31_int = (int)2;
		func_147(var_31_int);
	}
Label_146:
	return 0;
	
}


main(var_0_int)
{
	GetDiarySelectedSection(var_0_int);
	SetCursor("default");
	ShowCursor();
	var_2_int = 0;
	var_2_int = var_0_int;
	func_147(var_2_int);
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	ProcessEvents();
	return 0;
}


func_147(var_2_int)
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


