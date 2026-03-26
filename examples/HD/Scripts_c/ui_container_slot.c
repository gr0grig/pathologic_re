// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,SendMessageToParent/1,ClientToScreen/2,GetWindowSize/2,SetMousePos/2,GetCursorPos/2,SendToParent/0,Blit/3,Print/4,SetTooltip/2,GetInvItemSprite/2,LoadImage/1,GetInvItemMaxStackSize/2,SetTooltip/3
// @STRINGS: W:default|W:$parent|A:get|A:GetItemID|W:cslot0|W:cslot
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,object,string,bool,bool,string,string params=0
// @EVENT_9: op=0xd vars=
// @EVENT_15: op=0x6c vars=int,int,float
// @EVENT_0: op=0x70 vars=
// @EVENT_2: op=0x80 vars=int,int
// @EVENT_200: op=0x87 vars=int,string,object
// @PE: 0x6c,0x80,0xeb

task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = var_4_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_5_bool = true;

	Label_18:
		var_12_bool = (int)0 < (int)4;
		if(var_12_bool != 0) {
			var_14_string = ""; var_15_int = 0;
			var_9_int = var_15_int;
			func_235(var_14_string, var_15_int);
			SendMessage((int)-5, var_14_string);
			var_9_int = var_9_int + (int)1;
			goto Label_18;
		}
		var_4_bool = true;
	}
	SendMessageToParent((int)-9);
	return 2;
}


task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int, var_10_float)
{
	SendToParent();
	return 0;
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_bool = var_2_object == 0; //@nz
	if(var_8_bool != 0) {
		return 0;
	}
	Blit(var_3_string, (int)1, (int)1);
	var_12_bool = var_1_int > (int)1;
	if(var_12_bool != 0) {
		Print("default", (int)2, (int)35, var_0_int);
	}
	return 0;
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	var_10_object = var_2_object;
	if(var_10_object != 0) {
		SendMessageToParent((int)0);
	}
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_string, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_14_bool = var_8_int == (int)-7;
	if(var_14_bool != 0) {
		var_15_bool = var_4_bool;
		if(var_15_bool != 0) {
			func_36();
		}
		return 2;
	}
	var_31_bool = var_8_int == (int)-6;
	if(var_31_bool != 0) {
		var_4_bool = true;
		return 2;
	}
	var_33_bool = var_8_int == (int)-1;
	if(var_33_bool != 0) {
		var_34_bool = var_10_object != 0; //@nn
		if(var_34_bool != 0) {
			@@var_10_object:get(var_6_string, (int)0);
			@@var_10_object:get(var_7_string, (int)1);
		}
		return 2;
	}
	var_38_bool = var_8_int == (int)-2;
	if(var_38_bool != 0) {
		var_39_bool = var_4_bool;
		if(var_39_bool != 0) {
			var_40_string = "";
			var_40_string = var_6_string;
			func_54(var_12_int, var_40_string);
		}
		return 2;
	}
	var_69_bool = var_8_int == (int)-3;
	if(var_69_bool != 0) {
		var_70_bool = var_4_bool;
		if(var_70_bool != 0) {
			var_71_string = "";
			var_71_string = var_7_string;
			func_54(var_12_int, var_71_string);
		}
		return 2;
	}
	var_73_bool = var_8_int == (int)-4;
	if(var_73_bool != 0) {
		var_4_bool = true;
		func_36();
		return 2;
	}
	var_75_bool = var_8_int == (int)-5;
	if(var_75_bool != 0) {
		var_76_bool = var_5_bool;
		if(var_76_bool != 0) {
			var_5_bool = false;
		} else {
			var_4_bool = false;
	}
		var_78_int = var_8_int & (int)65536;
		if(var_78_int != 0) {
			var_0_int = var_8_int & (int)16383;
			return 2;
		}
		var_81_int = var_8_int & (int)32768;
		if(var_81_int != 0) {
			var_2_object = 0;
			SetTooltip((int)-1, "");
		} else {
			var_2_object = var_10_object;
			var_84_object = var_2_object;
			if(var_84_object != 0) {
				@@@var_2_object:GetItemID(var_12_int);
				GetInvItemSprite(var_3_string, var_12_int);
				LoadImage(var_3_string);
				GetInvItemMaxStackSize(var_1_int, var_12_int);
				SetTooltip((int)1, "", var_2_object);
				goto Label_234;
			}
			SetTooltip((int)-1, "");
		}
	Label_234:
		return 2;
	}
	return 2;
	
}


main(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_2_object = 0;
	var_0_int = 1;
	var_4_bool = false;
	var_5_bool = false;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_235(var_14_string, var_15_int)
{
	var_17_int = var_15_int + (int)1;
	var_19_bool = var_17_int < (int)10;
	if(var_19_bool != 0) {
		var_22_int = var_15_int + (int)1;
		var_14_string = "cslot0" + var_22_int;
		return 0;
	}
	var_25_int = var_15_int + (int)1;
	var_14_string = "cslot" + var_25_int;
	return 0;
}


func_36()
{
	var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0;
	var_20_int = 0;
	var_21_int = 0;
	var_22_int = 0;
	var_23_int = 0;
	ClientToScreen(var_20_int, var_21_int);
	GetWindowSize(var_22_int, var_23_int);
	var_25_float = var_22_int / (int)2;
	var_26_int = var_20_int + var_25_float;
	var_28_float = var_23_int / (int)2;
	var_29_int = var_21_int + var_28_float;
	SetMousePos(var_26_int, var_29_int);
	return 8;
}


func_54(var_4_bool, var_40_string)
{
	var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0;
	var_54_bool = var_40_string != "";
	if(var_54_bool != 0) {
		var_47_int = 0;
		var_48_int = 0;
		var_49_int = 0;
		var_50_int = 0;
		ClientToScreen(var_47_int, var_48_int);
		GetWindowSize(var_49_int, var_50_int);
		var_51_int = 0;
		var_52_int = 0;
		GetCursorPos(var_51_int, var_52_int);
		var_55_bool = 0;
		var_55_bool = 0;
		var_56_bool = 0;
		var_56_bool = 0;
		var_57_bool = 0;
		var_57_bool = 0;
		var_58_bool = var_51_int > var_47_int;
		if(var_58_bool != 0) {
			var_59_bool = var_52_int > var_48_int;
			if(var_59_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool != 0) {
			var_60_int = var_47_int + var_49_int;
			var_61_bool = var_51_int < var_60_int;
			if(var_61_bool != 0) {
				var_56_bool = 1;
			}
		}
		if(var_56_bool != 0) {
			var_62_int = var_48_int + var_50_int;
			var_63_bool = var_52_int < var_62_int;
			if(var_63_bool != 0) {
				var_55_bool = 1;
			}
		}
		if(var_55_bool != 0) {
			var_4_bool = false;
			var_65_bool = var_40_string == "$parent";
			if(var_65_bool != 0) {
				SendMessageToParent((int)-4);
			} else {
				SendMessage((int)-4, var_40_string);
		}
			func_36();
		}
		goto Label_107;
	}
Label_107:
	return 12;
	
}


