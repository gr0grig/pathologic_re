// @IMPORTS: SetBackground/1,SetOwnerDraw/1,ProcessEvents/0,SendToParent/0,Blit/3,GetTextWidth/3,Print/4,StretchBlit/5,SendMessageToParent/1,ClientToScreen/2,GetWindowSize/2,SetMousePos/2,SendMessage/2,GetCursorPos/2,SetTooltip/2,GetItemImage/2,LoadImage/1,SetTooltip/3
// @STRINGS: W:default|W:/|W:disabled|W:$parent|A:get|W:selected|A:GetItemID|W:l_slot0|W:l_slot|W:r_slot0|W:r_slot
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,object,bool,string,bool,bool,string,string,string,string,int params=0
// @EVENT_15: op=0xf vars=int,int,float
// @EVENT_0: op=0x13 vars=
// @EVENT_2: op=0x3e vars=int,int
// @EVENT_6: op=0x43 vars=int,int
// @EVENT_3: op=0x48 vars=int,int
// @EVENT_9: op=0x5c vars=
// @EVENT_200: op=0xaf vars=int,string,object
// @PE: 0xf,0x3e,0x43,0x48,0x151,0x161

task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int, var_14_float)
{
	SendToParent();
	return 0;
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0; var_17_int = 0;
	var_18_bool = var_2_object == 0; //@nz
	if(var_18_bool != 0) {
		return 6;
	}
	Blit(var_4_string, (int)1, (int)1);
	var_21_bool = 0;
	var_21_bool = 0;
	var_23_bool = var_1_int > (int)1;
	if(var_23_bool != 0) {
		var_24_bool = var_3_bool == 0; //@nz
		if(var_24_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_26_int = var_0_int + "/";
		var_15_string = var_26_int + var_1_int;
		GetTextWidth(var_16_int, "default", var_15_string);
		var_17_int = (int)48 - var_16_int;
		var_30_bool = var_17_int < (int)2;
		if(var_30_bool != 0) {
			var_17_int = 2;
		}
		Print("default", var_17_int, (int)35, var_15_string);
	}
	var_33_bool = var_3_bool;
	if(var_33_bool != 0) {
		StretchBlit("disabled", (int)1, (int)1, (int)50, (int)50);
	}
	return 6;
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	SendMessageToParent((int)0);
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	return 0;
}


task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = var_5_bool == 0; //@nz
	if(var_14_bool != 0) {
		SendMessageToParent((int)-20);
		var_6_bool = true;

	Label_100:
		var_16_bool = (int)0 < var_11_int;
		if(var_16_bool != 0) {
			var_18_string = ""; var_19_int = 0;
			var_13_int = var_19_int;
			func_337(var_18_string, var_19_int);
			SendMessage((int)-5, var_18_string);
			var_31_string = ""; var_32_int = 0;
			var_13_int = var_32_int;
			func_353(var_31_string, var_32_int);
			SendMessage((int)-5, var_31_string);
			var_13_int = var_13_int + (int)1;
			goto Label_100;
		}
		var_5_bool = true;
	}
	return 2;
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_string, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_18_bool = var_12_int == (int)-1;
	if(var_18_bool != 0) {
		var_19_bool = var_14_object != 0; //@nn
		if(var_19_bool != 0) {
			@@var_14_object:get(var_7_string, (int)0);
			@@var_14_object:get(var_8_string, (int)1);
			@@var_14_object:get(var_9_string, (int)2);
			@@var_14_object:get(var_10_string, (int)3);
		}
		return 2;
	}
	var_25_bool = var_12_int == (int)-19;
	if(var_25_bool != 0) {
		@@var_14_object:get(var_11_int, (int)0);
		return 2;
	}
	var_28_bool = var_12_int == (int)-7;
	if(var_28_bool != 0) {
		var_29_bool = var_5_bool;
		if(var_29_bool != 0) {
			func_74();
		}
		return 2;
	}
	var_45_bool = var_12_int == (int)-6;
	if(var_45_bool != 0) {
		var_5_bool = true;
		return 2;
	}
	var_47_bool = var_12_int == (int)-13;
	if(var_47_bool != 0) {
		var_48_bool = var_5_bool;
		if(var_48_bool != 0) {
			var_49_string = "";
			var_49_string = var_7_string;
			func_121(var_16_int, var_49_string);
		}
		return 2;
	}
	var_78_bool = var_12_int == (int)-14;
	if(var_78_bool != 0) {
		var_79_bool = var_5_bool;
		if(var_79_bool != 0) {
			var_80_string = "";
			var_80_string = var_8_string;
			func_121(var_16_int, var_80_string);
		}
		return 2;
	}
	var_82_bool = var_12_int == (int)-15;
	if(var_82_bool != 0) {
		var_83_bool = var_5_bool;
		if(var_83_bool != 0) {
			var_84_string = "";
			var_84_string = var_9_string;
			func_121(var_16_int, var_84_string);
		}
		return 2;
	}
	var_86_bool = var_12_int == (int)-16;
	if(var_86_bool != 0) {
		var_87_bool = var_5_bool;
		if(var_87_bool != 0) {
			var_88_string = "";
			var_88_string = var_10_string;
			func_121(var_16_int, var_88_string);
		}
		return 2;
	}
	var_90_bool = var_12_int == (int)-4;
	if(var_90_bool != 0) {
		var_5_bool = true;
		func_74();
		return 2;
	}
	var_92_bool = var_12_int == (int)-5;
	if(var_92_bool != 0) {
		var_93_bool = var_6_bool;
		if(var_93_bool != 0) {
			var_6_bool = false;
		} else {
			var_5_bool = false;
	}
		var_95_bool = var_12_int < (int)0;
		if(var_95_bool != 0) {
			return 2;
		}
		var_97_int = var_12_int & (int)65536;
		if(var_97_int != 0) {
			@@var_14_object:get(var_0_int, (int)0);
			@@var_14_object:get(var_1_int, (int)1);
			return 2;
		}
		var_101_int = var_12_int & (int)16384;
		if(var_101_int != 0) {
			SetBackground("selected");
		} else {
					SetBackground("default");
		}
		var_104_int = var_12_int & (int)32768;
		if(var_104_int != 0) {
			var_2_object = 0;
			SetTooltip((int)-1, "");
			return 2;
		}
		var_108_int = var_12_int & (int)131072;
		if(var_108_int != 0) {
			var_3_bool = true;
		} else {
				var_3_bool = false;

		}
		var_2_object = var_14_object;
		var_109_object = var_2_object;
		if(var_109_object != 0) {
			@@@var_2_object:GetItemID(var_16_int);
			GetItemImage(var_16_int, var_4_string);
			LoadImage(var_4_string);
			var_110_bool = var_3_bool;
			if(var_110_bool != 0) {
				SetTooltip((int)-1, "");
			} else {
				SetTooltip((int)3, "", var_2_object);
		}
			SetTooltip((int)-1, "");

		}
		goto Label_336;

	Label_336:
		return 2;
	}
	return 2;
	
}


main(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_2_object = 0;
	var_0_int = 0;
	var_1_int = 1;
	var_3_bool = false;
	var_5_bool = false;
	var_11_int = 0;
	SetBackground("default");
	SetOwnerDraw((bool)1);
	ProcessEvents();
	return 0;
}


func_337(var_18_string, var_19_int)
{
	var_21_int = var_19_int + (int)1;
	var_23_bool = var_21_int < (int)10;
	if(var_23_bool != 0) {
		var_26_int = var_19_int + (int)1;
		var_18_string = "l_slot0" + var_26_int;
		return 0;
	}
	var_29_int = var_19_int + (int)1;
	var_18_string = "l_slot" + var_29_int;
	return 0;
}


func_74()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0;
	var_34_int = 0;
	var_35_int = 0;
	var_36_int = 0;
	var_37_int = 0;
	ClientToScreen(var_34_int, var_35_int);
	GetWindowSize(var_36_int, var_37_int);
	var_39_float = var_36_int / (int)2;
	var_40_int = var_34_int + var_39_float;
	var_42_float = var_37_int / (int)2;
	var_43_int = var_35_int + var_42_float;
	SetMousePos(var_40_int, var_43_int);
	return 8;
}


func_353(var_31_string, var_32_int)
{
	var_34_int = var_32_int + (int)1;
	var_36_bool = var_34_int < (int)10;
	if(var_36_bool != 0) {
		var_39_int = var_32_int + (int)1;
		var_31_string = "r_slot0" + var_39_int;
		return 0;
	}
	var_42_int = var_32_int + (int)1;
	var_31_string = "r_slot" + var_42_int;
	return 0;
}


func_121(var_5_bool, var_49_string)
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0;
	var_63_bool = var_49_string != "";
	if(var_63_bool != 0) {
		var_56_int = 0;
		var_57_int = 0;
		var_58_int = 0;
		var_59_int = 0;
		ClientToScreen(var_56_int, var_57_int);
		GetWindowSize(var_58_int, var_59_int);
		var_60_int = 0;
		var_61_int = 0;
		GetCursorPos(var_60_int, var_61_int);
		var_64_bool = 0;
		var_64_bool = 0;
		var_65_bool = 0;
		var_65_bool = 0;
		var_66_bool = 0;
		var_66_bool = 0;
		var_67_bool = var_60_int > var_56_int;
		if(var_67_bool != 0) {
			var_68_bool = var_61_int > var_57_int;
			if(var_68_bool != 0) {
				var_66_bool = 1;
			}
		}
		if(var_66_bool != 0) {
			var_69_int = var_56_int + var_58_int;
			var_70_bool = var_60_int < var_69_int;
			if(var_70_bool != 0) {
				var_65_bool = 1;
			}
		}
		if(var_65_bool != 0) {
			var_71_int = var_57_int + var_59_int;
			var_72_bool = var_61_int < var_71_int;
			if(var_72_bool != 0) {
				var_64_bool = 1;
			}
		}
		if(var_64_bool != 0) {
			var_5_bool = false;
			var_74_bool = var_49_string == "$parent";
			if(var_74_bool != 0) {
				SendMessageToParent((int)-4);
			} else {
				SendMessage((int)-4, var_49_string);
		}
			func_74();
		}
		goto Label_174;
	}
Label_174:
	return 12;
	
}


