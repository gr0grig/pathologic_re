// @IMPORTS: GetWindowSize/2,EnableClipping/1,SetOwnerDraw/1,ShowCursor/1,CaptureKeyboard/0,SetNeedUpdate/1,ProcessEvents/0,IsSoundPlaying/2,GetStringByID/2,PlaySound/1,irand/2,GetTextHeightInWidth/4,SendMessageToParent/1,PauseSound/1,PrintInWidth/10,CreateStringVector/1,SendMessage/2
// @STRINGS: W:intro_danko|W:intro_burah|W:intro_klara|W:intro1|W:intro2|W:intro_font|W:ul|W:bl|W:br|W:ur|A:add|A:get|A:size
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=float,float,float,int,int,int,int,int,int,int,string,bool,bool,bool,object params=0
// @EVENT_101: op=0x84 vars=int
// @EVENT_102: op=0xc7 vars=int
// @EVENT_1: op=0x111 vars=float
// @EVENT_200: op=0x151 vars=int,string,object
// @EVENT_0: op=0x175 vars=
// @PE: 0x41,0x84,0xc7,0x151

task_0_event_101(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_int)
{
	var_16_bool = 0;
	var_16_bool = 1;
	var_17_bool = 0;
	var_17_bool = 1;
	var_19_bool = var_15_int == (int)40;
	if(var_19_bool != 1) {
		var_21_bool = var_15_int == (int)268;
		if(var_21_bool != 1) {
			var_17_bool = 0;
		}
	}
	if(var_17_bool != 1) {
		var_23_bool = var_15_int == (int)274;
		if(var_23_bool != 1) {
			var_16_bool = 0;
		}
	}
	if(var_16_bool != 0) {
		var_12_bool = true;
	} else {
		var_24_bool = 0;
		var_24_bool = 1;
		var_25_bool = 0;
		var_25_bool = 1;
		var_27_bool = var_15_int == (int)38;
		if(var_27_bool != 1) {
			var_29_bool = var_15_int == (int)267;
			if(var_29_bool != 1) {
				var_25_bool = 0;
			}
		}
		if(var_25_bool != 1) {
			var_31_bool = var_15_int == (int)272;
			if(var_31_bool != 1) {
				var_24_bool = 0;
			}
		}
		if(var_24_bool != 0) {
			var_13_bool = true;
			goto Label_198;
		}
		var_32_bool = 0;
		var_32_bool = 1;
		var_33_bool = 0;
		var_33_bool = 1;
		var_34_bool = 0;
		var_34_bool = 1;
		var_36_bool = var_15_int == (int)27;
		if(var_36_bool != 1) {
			var_38_bool = var_15_int == (int)32;
			if(var_38_bool != 1) {
				var_34_bool = 0;
			}
		}
		if(var_34_bool != 1) {
			var_40_bool = var_15_int == (int)257;
			if(var_40_bool != 1) {
				var_33_bool = 0;
			}
		}
		if(var_33_bool != 1) {
			var_42_bool = var_15_int == (int)262;
			if(var_42_bool != 1) {
				var_32_bool = 0;
			}
		}
		if(var_32_bool == 0) goto Label_198;
		func_238(var_14_object, var_15_int);
	}
Label_198:
	return 0;
	
}


task_0_event_102(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_int)
{
	var_16_bool = 0;
	var_16_bool = 1;
	var_17_bool = 0;
	var_17_bool = 1;
	var_19_bool = var_15_int == (int)40;
	if(var_19_bool != 1) {
		var_21_bool = var_15_int == (int)268;
		if(var_21_bool != 1) {
			var_17_bool = 0;
		}
	}
	if(var_17_bool != 1) {
		var_23_bool = var_15_int == (int)274;
		if(var_23_bool != 1) {
			var_16_bool = 0;
		}
	}
	if(var_16_bool != 0) {
		var_12_bool = false;
	} else {
		var_24_bool = 0;
		var_24_bool = 1;
		var_25_bool = 0;
		var_25_bool = 1;
		var_27_bool = var_15_int == (int)38;
		if(var_27_bool != 1) {
			var_29_bool = var_15_int == (int)267;
			if(var_29_bool != 1) {
				var_25_bool = 0;
			}
		}
		if(var_25_bool != 1) {
			var_31_bool = var_15_int == (int)272;
			if(var_31_bool != 1) {
				var_24_bool = 0;
			}
		}
		if(var_24_bool == 0) goto Label_237;
		var_13_bool = false;
	}
Label_237:
	return 0;
	
}


task_0_event_1(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_float)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_11_bool == 0; //@nz
	if(var_18_bool != 0) {
		return 2;
	}
	var_1_float = var_1_float + var_15_float;
	var_17_float = 16.0;
	var_20_bool = (int)1 == var_7_int;
	if(var_20_bool != 0) {
		var_17_float = 16.0;
	} else {
		var_67_bool = (int)2 == var_7_int;
		if(var_67_bool != 0) {
			var_17_float = 16.0;
			goto Label_293;
		}
		var_69_bool = (int)3 == var_7_int;
		if(var_69_bool == 0) goto Label_293;
	}
Label_293:
	var_21_bool = var_13_bool;
	if(var_21_bool != 0) {
		(float)11.0 = (float)11.0 * (float)4.0;
	}
	var_23_bool = var_12_bool;
	if(var_23_bool != 0) {
		var_17_float = var_17_float / (float)4.0;
	}
	var_25_float = var_15_float * var_17_float;
	var_2_float = var_2_float + var_25_float;
	var_26_bool = 0;
	var_27_int = var_4_int + var_5_int;
	var_28_bool = var_2_float > var_27_int;
	if(var_28_bool != 0) {
		var_29_bool = 0;
		func_31((bool)0, var_29_bool);
		var_46_bool = var_29_bool == 0; //@nz
		if(var_46_bool != 0) {
			var_26_bool = 1;
		}
	}
	if(var_26_bool != 0) {
		func_238(var_16_float, var_17_float);
	}
	var_60_bool = 0;
	var_61_bool = var_2_float > var_5_int;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_31((bool)0, var_62_bool);
		var_63_bool = var_62_bool == 0; //@nz
		if(var_63_bool != 0) {
			var_60_bool = 1;
		}
	}
	if(var_60_bool != 0) {
		var_0_float = var_0_float + var_15_float;
		var_65_bool = var_0_float > (int)1;
		if(var_65_bool != 0) {
			func_238(var_16_float, var_17_float);
		}
	}
	return 2;
	
}


task_0_event_200(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_int, var_16_string, var_17_object)
{
	var_18_bool = 0;
	var_18_bool = 1;
	var_19_bool = 0;
	var_19_bool = 1;
	var_20_bool = 0;
	var_20_bool = 1;
	var_22_bool = var_16_string == "ul";
	if(var_22_bool != 1) {
		var_24_bool = var_16_string == "bl";
		if(var_24_bool != 1) {
			var_20_bool = 0;
		}
	}
	if(var_20_bool != 1) {
		var_26_bool = var_16_string == "br";
		if(var_26_bool != 1) {
			var_19_bool = 0;
		}
	}
	if(var_19_bool != 1) {
		var_28_bool = var_16_string == "ur";
		if(var_28_bool != 1) {
			var_18_bool = 0;
		}
	}
	if(var_18_bool != 0) {
		func_440(var_16_string, var_17_object);
		return 0;
	}
	var_36_bool = var_11_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_37_int = 0;
		var_15_int = var_37_int;
		func_65(var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_int, var_16_string, var_17_object, var_37_int);
	}
	return 0;
}


task_0_event_0(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_float = 0; var_17_int = 0; var_18_int = 0; var_19_float = 0; var_20_int = 0;
	var_21_bool = var_11_bool == 0; //@nz
	if(var_21_bool != 0) {
		return 6;
	}
	var_18_int = var_2_float;
	var_19_float = var_2_float - var_18_int;
	var_24_int = var_6_int + (int)4;
	var_25_int = var_4_int - var_18_int;
	var_27_float = var_6_int * (int)2;
	var_28_int = var_3_int - var_27_float;
	var_30_int = var_28_int - (int)8;
	var_35_int = (int)1 - var_19_float;
	PrintInWidth(var_20_int, "intro_font", var_24_int, var_25_int, var_30_int, var_10_string, (float)0.24313725531101227, (float)0.12156862765550613, (float)0.11764705926179886, var_35_int);
	var_38_int = var_6_int + (int)4;
	var_39_int = var_4_int - var_18_int;
	var_41_int = var_39_int - (int)1;
	var_43_float = var_6_int * (int)2;
	var_44_int = var_3_int - var_43_float;
	var_46_int = var_44_int - (int)8;
	PrintInWidth(var_20_int, "intro_font", var_38_int, var_41_int, var_46_int, var_10_string, (float)0.24313725531101227, (float)0.12156862765550613, (float)0.11764705926179886, var_19_float);
	return 6;
}


main(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_object)
{
	var_11_bool = false;
	var_12_bool = false;
	var_13_bool = false;
	var_2_float = 0;
	var_6_int = 0;
	var_1_float = 0;
	GetWindowSize(var_3_int, var_4_int);
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	ShowCursor((bool)0);
	CaptureKeyboard();
	SetNeedUpdate((bool)1);
	func_412(var_13_bool, var_14_object);
	func_440(var_13_bool, var_14_object);
	ProcessEvents();
	return 0;
}


func_65(var_3_int, var_5_int, var_6_int, var_7_int, var_8_int, var_10_string, var_11_bool, var_37_int)
{
	var_7_int = var_37_int;
	var_39_bool = var_7_int == (int)1;
	if(var_39_bool != 0) {
		GetStringByID(var_10_string, (int)204);
		PlaySound("intro_danko");
	} else {
		var_49_bool = var_7_int == (int)2;
		if(var_49_bool != 0) {
			GetStringByID(var_10_string, (int)207);
			PlaySound("intro_burah");
			goto Label_122;
		}
		var_53_bool = var_7_int == (int)3;
		if(var_53_bool != 0) {
			GetStringByID(var_10_string, (int)210);
			PlaySound("intro_klara");
			goto Label_122;
		}
		var_57_bool = var_7_int == (int)0;
		if(var_57_bool != 0) {
			irand(var_8_int, (int)2);
			var_59_int = var_8_int;
			if(var_59_int != 0) {
				GetStringByID(var_10_string, (int)211);
				PlaySound("intro1");
			} else {
				GetStringByID(var_10_string, (int)212);
				PlaySound("intro2");
		}
			GetStringByID(var_10_string, (int)600);
		}
		goto Label_122;
	}
Label_122:
	var_44_float = var_6_int * (int)2;
	var_45_int = var_3_int - var_44_float;
	var_47_int = var_45_int - (int)8;
	GetTextHeightInWidth(var_5_int, "intro_font", var_47_int, var_10_string);
	var_11_bool = true;
	return 0;
	
}


func_238(var_7_int, var_11_bool)
{
	SendMessageToParent((int)0);
	var_11_bool = false;
	var_49_bool = var_7_int == (int)1;
	if(var_49_bool != 0) {
		PauseSound("intro_danko");
	} else {
		var_52_bool = var_7_int == (int)2;
		if(var_52_bool != 0) {
			PauseSound("intro_burah");
			goto Label_272;
		}
		var_55_bool = var_7_int == (int)3;
		if(var_55_bool != 0) {
			PauseSound("intro_klara");
			goto Label_272;
		}
		var_57_int = var_8_int;
		if(var_57_int != 0) {
			PauseSound("intro1");
			goto Label_272;
		}
		PauseSound("intro2");
	}
Label_272:
	return 0;
	
}


func_440(var_9_int, var_14_object)
{
	var_27_string = ""; var_28_int = 0; var_29_string = ""; var_30_int = 0;
	@@@var_14_object:get(var_29_string, var_9_int);
	SendMessage((int)0, var_29_string);
	var_9_int = var_9_int + (int)1;
	@@@var_14_object:size(var_30_int);
	var_33_bool = var_9_int >= var_30_int;
	if(var_33_bool != 0) {
		var_9_int = var_9_int - var_30_int;
	}
	return 4;
}


func_412(var_9_int, var_14_object)
{
	var_9_int = 0;
	CreateStringVector(var_14_object);
	@@@var_14_object:add("ul");
	@@@var_14_object:add("ur");
	@@@var_14_object:add("br");
	@@@var_14_object:add("ul");
	@@@var_14_object:add("br");
	@@@var_14_object:add("ul");
	@@@var_14_object:add("bl");
	@@@var_14_object:add("ul");
	return 0;
}


func_31(var_7_int, var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0;
	var_33_bool = var_7_int == (int)1;
	if(var_33_bool != 0) {
		IsSoundPlaying(var_31_bool, "intro_danko");
	} else {
				var_44_bool = var_7_int == (int)2;
				if(var_44_bool == 0) goto Label_45;
				IsSoundPlaying(var_31_bool, "intro_burah");
	}
Label_45:
	var_36_bool = var_7_int == (int)3;
	if(var_36_bool != 0) {
		IsSoundPlaying(var_31_bool, "intro_klara");
	}
	var_39_bool = var_7_int == (int)0;
	if(var_39_bool != 0) {
		var_40_int = var_8_int;
		if(var_40_int != 0) {
			IsSoundPlaying(var_31_bool, "intro1");
		} else {
			IsSoundPlaying(var_31_bool, "intro2");

		}
	}
	var_31_bool = var_29_bool;
	return 2;
	
}


