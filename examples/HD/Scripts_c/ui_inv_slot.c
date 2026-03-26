// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,SendMessageToParent/1,Blit/3,Print/4,StretchBlit/5,ClientToScreen/2,GetWindowSize/2,SetMousePos/2,GetCursorPos/2,SetTooltip/2,GetInvItemSprite/2,LoadImage/1,GetInvItemMaxStackSize/2,SetTooltip/3
// @STRINGS: W:default|W:disabled|W:selected|W:$parent|A:get|A:GetItemID|W:slot0|W:slot
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,object,string,bool,bool,bool,string,string params=0
// @EVENT_9: op=0xe vars=
// @EVENT_10: op=0x25 vars=
// @EVENT_0: op=0x26 vars=
// @EVENT_2: op=0x3f vars=int,int
// @EVENT_6: op=0x47 vars=int,int
// @EVENT_3: op=0x4c vars=int,int
// @EVENT_200: op=0x96 vars=int,string,object
// @PE: 0x3f,0x47,0x4c,0x111

task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	var_9_int = 0; var_10_int = 0;
	var_11_bool = var_5_bool == 0; //@nz
	if(var_11_bool != 0) {
		var_6_bool = true;

	Label_19:
		var_13_bool = (int)0 < (int)12;
		if(var_13_bool != 0) {
			var_15_string = ""; var_16_int = 0;
			var_10_int = var_16_int;
			func_273(var_15_string, var_16_int);
			SendMessage((int)-5, var_15_string);
			var_10_int = var_10_int + (int)1;
			goto Label_19;
		}
		var_5_bool = true;
	}
	SendMessageToParent((int)-8);
	return 2;
}


task_0_event_10(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	return 0;
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	var_9_bool = var_2_object == 0; //@nz
	if(var_9_bool != 0) {
		return 0;
	}
	Blit(var_3_string, (int)1, (int)1);
	var_13_bool = var_0_int > (int)1;
	if(var_13_bool != 0) {
		Print("default", (int)2, (int)35, var_0_int);
	}
	var_17_bool = var_4_bool;
	if(var_17_bool != 0) {
		StretchBlit("disabled", (int)1, (int)1, (int)50, (int)50);
	}
	return 0;
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_int)
{
	SetBackground("selected");
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_int)
{
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_int)
{
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_string, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_15_bool = var_9_int == (int)-7;
	if(var_15_bool != 0) {
		var_16_bool = var_5_bool;
		if(var_16_bool != 0) {
			func_78();
		}
		return 2;
	}
	var_32_bool = var_9_int == (int)-6;
	if(var_32_bool != 0) {
		var_5_bool = true;
		return 2;
	}
	var_34_bool = var_9_int == (int)-1;
	if(var_34_bool != 0) {
		var_35_bool = var_11_object != 0; //@nn
		if(var_35_bool != 0) {
			@@var_11_object:get(var_7_string, (int)0);
			@@var_11_object:get(var_8_string, (int)1);
		}
		return 2;
	}
	var_39_bool = var_9_int == (int)-2;
	if(var_39_bool != 0) {
		var_40_bool = var_5_bool;
		if(var_40_bool != 0) {
			var_41_string = "";
			var_41_string = var_7_string;
			func_96(var_13_int, var_41_string);
		}
		return 2;
	}
	var_70_bool = var_9_int == (int)-3;
	if(var_70_bool != 0) {
		var_71_bool = var_5_bool;
		if(var_71_bool != 0) {
			var_72_string = "";
			var_72_string = var_8_string;
			func_96(var_13_int, var_72_string);
		}
		return 2;
	}
	var_74_bool = var_9_int == (int)-4;
	if(var_74_bool != 0) {
		var_5_bool = true;
		func_78();
		return 2;
	}
	var_76_bool = var_9_int == (int)-5;
	if(var_76_bool != 0) {
		var_77_bool = var_6_bool;
		if(var_77_bool != 0) {
			var_6_bool = false;
		} else {
			var_5_bool = false;
	}
		var_79_int = var_9_int & (int)65536;
		if(var_79_int != 0) {
			var_0_int = var_9_int & (int)16383;
			return 2;
		}
		var_82_int = var_9_int & (int)16384;
		if(var_82_int != 0) {
			SetBackground("selected");
		} else {
						SetBackground("default");
		}
		var_85_int = var_9_int & (int)32768;
		if(var_85_int != 0) {
			var_2_object = 0;
			SetTooltip((int)-1, "");
		} else {
			var_89_int = var_9_int & (int)131072;
			if(var_89_int != 0) {
				var_4_bool = true;
			} else {
					var_4_bool = false;

			}
			var_2_object = var_11_object;
			var_90_object = var_2_object;
			if(var_90_object != 0) {
				@@@var_2_object:GetItemID(var_13_int);
				GetInvItemSprite(var_3_string, var_13_int);
				LoadImage(var_3_string);
				GetInvItemMaxStackSize(var_1_int, var_13_int);
				var_91_bool = var_4_bool;
				if(var_91_bool != 0) {
					SetTooltip((int)-1, "");
				} else {
					SetTooltip((int)1, "", var_2_object);
			}
				SetTooltip((int)-1, "");

			}
			goto Label_272;
		}
	Label_272:
		return 2;
	}
	return 2;
	
}


main(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	var_2_object = 0;
	var_0_int = 1;
	var_5_bool = false;
	var_6_bool = false;
	var_4_bool = false;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_96(var_5_bool, var_41_string)
{
	var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0;
	var_55_bool = var_41_string != "";
	if(var_55_bool != 0) {
		var_48_int = 0;
		var_49_int = 0;
		var_50_int = 0;
		var_51_int = 0;
		ClientToScreen(var_48_int, var_49_int);
		GetWindowSize(var_50_int, var_51_int);
		var_52_int = 0;
		var_53_int = 0;
		GetCursorPos(var_52_int, var_53_int);
		var_56_bool = 0;
		var_56_bool = 0;
		var_57_bool = 0;
		var_57_bool = 0;
		var_58_bool = 0;
		var_58_bool = 0;
		var_59_bool = var_52_int > var_48_int;
		if(var_59_bool != 0) {
			var_60_bool = var_53_int > var_49_int;
			if(var_60_bool != 0) {
				var_58_bool = 1;
			}
		}
		if(var_58_bool != 0) {
			var_61_int = var_48_int + var_50_int;
			var_62_bool = var_52_int < var_61_int;
			if(var_62_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool != 0) {
			var_63_int = var_49_int + var_51_int;
			var_64_bool = var_53_int < var_63_int;
			if(var_64_bool != 0) {
				var_56_bool = 1;
			}
		}
		if(var_56_bool != 0) {
			var_5_bool = false;
			var_66_bool = var_41_string == "$parent";
			if(var_66_bool != 0) {
				SendMessageToParent((int)-4);
			} else {
				SendMessage((int)-4, var_41_string);
		}
			func_78();
		}
		goto Label_149;
	}
Label_149:
	return 12;
	
}


func_273(var_15_string, var_16_int)
{
	var_18_int = var_16_int + (int)1;
	var_20_bool = var_18_int < (int)10;
	if(var_20_bool != 0) {
		var_23_int = var_16_int + (int)1;
		var_15_string = "slot0" + var_23_int;
		return 0;
	}
	var_26_int = var_16_int + (int)1;
	var_15_string = "slot" + var_26_int;
	return 0;
}


func_78()
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0;
	var_21_int = 0;
	var_22_int = 0;
	var_23_int = 0;
	var_24_int = 0;
	ClientToScreen(var_21_int, var_22_int);
	GetWindowSize(var_23_int, var_24_int);
	var_26_float = var_23_int / (int)2;
	var_27_int = var_21_int + var_26_float;
	var_29_float = var_24_int / (int)2;
	var_30_int = var_22_int + var_29_float;
	SetMousePos(var_27_int, var_30_int);
	return 8;
}


