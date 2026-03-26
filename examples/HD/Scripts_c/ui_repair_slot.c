// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,Blit/3,Print/4,SendMessage/2,SendMessageToParent/1,ClientToScreen/2,GetWindowSize/2,SetMousePos/2,GetCursorPos/2,SetTooltip/2,GetStringByID/2,GetInvItemSprite/2,LoadImage/1,GetInvItemMaxStackSize/2,SetTooltip/3
// @STRINGS: W:default|W:$parent|W:selected|A:get|A:GetItemID|W:slot0|W:slot
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,object,string,bool,bool,string,string params=0
// @EVENT_0: op=0xd vars=
// @EVENT_9: op=0x1d vars=
// @EVENT_2: op=0x7c vars=int,int
// @EVENT_6: op=0x87 vars=int,int
// @EVENT_3: op=0x8f vars=int,int
// @EVENT_200: op=0x91 vars=int,string,object
// @PE: 0x7c,0x87,0x8f,0x104

task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_bool = var_2_object == 0; //@nz
	if(var_8_bool != 0) {
		return 0;
	}
	Blit(var_3_string, (int)1, (int)1);
	var_12_bool = var_0_int > (int)1;
	if(var_12_bool != 0) {
		Print("default", (int)2, (int)35, var_0_int);
	}
	return 0;
}


task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = var_4_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_5_bool = true;

	Label_34:
		var_12_bool = (int)0 < (int)4;
		if(var_12_bool != 0) {
			var_14_string = ""; var_15_int = 0;
			var_9_int = var_15_int;
			func_260(var_14_string, var_15_int);
			SendMessage((int)-5, var_14_string);
			var_9_int = var_9_int + (int)1;
			goto Label_34;
		}
		var_4_bool = true;
	}
	SendMessageToParent((int)-9);
	return 2;
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	var_10_bool = var_2_object == 0; //@nz
	if(var_10_bool != 0) {
		return 0;
	}
	SetBackground("selected");
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	var_10_bool = var_2_object == 0; //@nz
	if(var_10_bool != 0) {
		return 0;
	}
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	return 0;
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_string, var_10_object)
{
	var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0;
	var_18_bool = var_8_int == (int)-7;
	if(var_18_bool != 0) {
		var_19_bool = var_4_bool;
		if(var_19_bool != 0) {
			func_52();
		}
		return 6;
	}
	var_35_bool = var_8_int == (int)-6;
	if(var_35_bool != 0) {
		var_4_bool = true;
		return 6;
	}
	var_37_bool = var_8_int == (int)-1;
	if(var_37_bool != 0) {
		var_38_bool = var_10_object != 0; //@nn
		if(var_38_bool != 0) {
			@@var_10_object:get(var_6_string, (int)0);
			@@var_10_object:get(var_7_string, (int)1);
		}
		return 6;
	}
	var_42_bool = var_8_int == (int)-2;
	if(var_42_bool != 0) {
		var_43_bool = var_4_bool;
		if(var_43_bool != 0) {
			var_44_string = "";
			var_44_string = var_6_string;
			func_70(var_16_int, var_44_string);
		}
		return 6;
	}
	var_73_bool = var_8_int == (int)-3;
	if(var_73_bool != 0) {
		var_74_bool = var_4_bool;
		if(var_74_bool != 0) {
			var_75_string = "";
			var_75_string = var_7_string;
			func_70(var_16_int, var_75_string);
		}
		return 6;
	}
	var_77_bool = var_8_int == (int)-4;
	if(var_77_bool != 0) {
		var_4_bool = true;
		func_52();
		return 6;
	}
	var_79_bool = var_8_int == (int)-5;
	if(var_79_bool != 0) {
		var_80_bool = var_5_bool;
		if(var_80_bool != 0) {
			var_5_bool = false;
		} else {
			var_4_bool = false;
	}
		var_82_int = var_8_int & (int)65536;
		if(var_82_int != 0) {
			var_0_int = var_8_int & (int)16383;
			return 6;
		}
		var_85_int = var_8_int & (int)16384;
		if(var_85_int != 0) {
			SetBackground("selected");
		} else {
				SetBackground("default");
		}
		var_88_int = var_8_int & (int)32768;
		if(var_88_int != 0) {
			var_2_object = 0;
			SetTooltip((int)-1, "");
		} else {
			var_14_int = var_8_int & (int)16383;
			GetStringByID(var_15_string, (int)1007);
			var_15_string = var_15_string + var_14_int;
			var_2_object = var_10_object;
			var_93_object = var_2_object;
			if(var_93_object != 0) {
				@@@var_2_object:GetItemID(var_16_int);
				GetInvItemSprite(var_3_string, var_16_int);
				LoadImage(var_3_string);
				GetInvItemMaxStackSize(var_1_int, var_16_int);
				SetTooltip((int)1, var_15_string, var_2_object);
				goto Label_259;
			}
			SetTooltip((int)-1, "");

		}
	Label_259:
		return 6;
	}
	return 6;
	
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


func_260(var_14_string, var_15_int)
{
	var_17_int = var_15_int + (int)1;
	var_19_bool = var_17_int < (int)10;
	if(var_19_bool != 0) {
		var_22_int = var_15_int + (int)1;
		var_14_string = "slot0" + var_22_int;
		return 0;
	}
	var_25_int = var_15_int + (int)1;
	var_14_string = "slot" + var_25_int;
	return 0;
}


func_70(var_4_bool, var_44_string)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0;
	var_58_bool = var_44_string != "";
	if(var_58_bool != 0) {
		var_51_int = 0;
		var_52_int = 0;
		var_53_int = 0;
		var_54_int = 0;
		ClientToScreen(var_51_int, var_52_int);
		GetWindowSize(var_53_int, var_54_int);
		var_55_int = 0;
		var_56_int = 0;
		GetCursorPos(var_55_int, var_56_int);
		var_59_bool = 0;
		var_59_bool = 0;
		var_60_bool = 0;
		var_60_bool = 0;
		var_61_bool = 0;
		var_61_bool = 0;
		var_62_bool = var_55_int > var_51_int;
		if(var_62_bool != 0) {
			var_63_bool = var_56_int > var_52_int;
			if(var_63_bool != 0) {
				var_61_bool = 1;
			}
		}
		if(var_61_bool != 0) {
			var_64_int = var_51_int + var_53_int;
			var_65_bool = var_55_int < var_64_int;
			if(var_65_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool != 0) {
			var_66_int = var_52_int + var_54_int;
			var_67_bool = var_56_int < var_66_int;
			if(var_67_bool != 0) {
				var_59_bool = 1;
			}
		}
		if(var_59_bool != 0) {
			var_4_bool = false;
			var_69_bool = var_44_string == "$parent";
			if(var_69_bool != 0) {
				SendMessageToParent((int)-4);
			} else {
				SendMessage((int)-4, var_44_string);
		}
			func_52();
		}
		goto Label_123;
	}
Label_123:
	return 12;
	
}


func_52()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0;
	var_24_int = 0;
	var_25_int = 0;
	var_26_int = 0;
	var_27_int = 0;
	ClientToScreen(var_24_int, var_25_int);
	GetWindowSize(var_26_int, var_27_int);
	var_29_float = var_26_int / (int)2;
	var_30_int = var_24_int + var_29_float;
	var_32_float = var_27_int / (int)2;
	var_33_int = var_25_int + var_32_float;
	SetMousePos(var_30_int, var_33_int);
	return 8;
}


