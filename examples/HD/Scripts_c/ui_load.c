// @IMPORTS: CaptureKeyboard/0,SendMessage/2,Blit/3,SendMessageToParent/2,DeleteGame/1,StopEventProcessing/0,SendMessageToParent/1,CreateSaveEnumerator/1,CreateObjectVector/1,GetWindowSize/2,ClientToScreen/2,EnableClipping/1,SetOwnerDraw/1,CreateWindow/3,ProcessEvents/0,Print/7,StretchBlit/5,GetStringByID/2,format/5,format/7
// @STRINGS: W:load|W:button_text|A:GetFileName|A:add|A:Next|A:IsQuickSave|W:sys_border.xml|A:size|A:get|A:BlitClipped|W:default|A:GetProperty|W:????|W:big|W:button_x_pressed|W:button_x|W:button_pressed|W:button|W:separator|W:shot_black|W:shot_border|W:scrollbar|A:GetGameTime|A:GetSaveTime
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,int,int,int,int,int,int,int,object,object,object params=0
// @EVENT_101: op=0xa vars=int
// @EVENT_102: op=0x1b vars=int
// @EVENT_100: op=0x3e vars=int
// @EVENT_0: op=0x7d vars=
// @EVENT_200: op=0x153 vars=int,string,object
// @EVENT_15: op=0x171 vars=int,int,float
// @EVENT_2: op=0x197 vars=int,int
// @EVENT_3: op=0x1a5 vars=int,int
// @PE: 0xa,0x1b,0x2c,0x31,0x3e,0x86,0x12e,0x153,0x197

task_0_event_101(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_13_bool = var_11_int == (int)267;
	if(var_13_bool != 0) {
		SendMessage((int)1001, "load");
	} else {
		var_17_bool = var_11_int == (int)268;
		if(var_17_bool == 0) goto Label_26;
		SendMessage((int)1000, "load");
	}
Label_26:
	return 0;
	
}


task_0_event_102(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_13_bool = var_11_int == (int)272;
	if(var_13_bool != 0) {
		SendMessage((int)1001, "load");
	} else {
		var_17_bool = var_11_int == (int)274;
		if(var_17_bool == 0) goto Label_43;
		SendMessage((int)1000, "load");
	}
Label_43:
	return 0;
	
}


task_0_event_100(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	var_11_int = 0;
	var_12_int = 0; var_13_int = 0;
	var_13_int = var_1_int;
	func_134(var_12_int, var_13_int);
	var_12_int = var_11_int;
	func_137(var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int);
	return 0;
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_string, var_13_object)
{
	var_15_bool = var_12_string == "scrollbar";
	if(var_15_bool != 0) {
		var_16_int = -var_11_int;
		var_17_int = 0;
		func_550(var_16_int, var_17_int);
		var_21_int = var_17_int - var_5_int;
		var_22_float = var_16_int * var_21_int;
		var_1_int = var_22_float / (int)100;
		func_558(var_12_string, var_13_object);
	} else {
		var_43_bool = var_11_int == (int)1000;
		if(var_43_bool != 0) {
			func_394(var_13_object);
			goto Label_368;
		}
		var_51_bool = var_11_int == (int)1001;
		if(var_51_bool == 0) goto Label_368;
		func_381(var_13_object);
	}
Label_368:
	return 0;
	
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0;
	func_548(var_16_int);
	var_17_float = var_13_float * var_16_int;
	var_15_int = var_17_float / (int)2;
	var_1_int = var_1_int + var_15_int;
	func_558(var_14_int, var_15_int);
	return 2;
}


task_0_event_2(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0;
	var_11_int = var_14_int;
	var_12_int = var_15_int;
	func_470(var_11_int, var_12_int, var_13_int, var_14_int, var_15_int);
	var_2_int = var_13_int;
	var_36_int = 0; var_37_int = 0; var_38_int = 0;
	var_11_int = var_37_int;
	var_12_int = var_38_int;
	func_509(var_11_int, var_12_int, var_36_int, var_37_int, var_38_int);
	var_3_int = var_36_int;
	return 0;
}


task_0_event_3(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj();
	var_18_bool = var_2_int != (int)-1;
	if(var_18_bool != 0) {
		var_19_int = 0; var_20_int = 0; var_21_int = 0;
		var_11_int = var_20_int;
		var_12_int = var_21_int;
		func_470(var_15_object, var_16_object, var_19_int, var_20_int, var_21_int);
		var_2_int = var_19_int;
		var_43_bool = var_2_int != (int)-1;
		if(var_43_bool != 0) {
			@@@var_9_object:get(var_15_object, var_2_int);
			var_44_object = Obj();
			var_15_object = var_44_object;
			func_49(var_44_object);
			var_15_object = 0;
		}
	} else {
		var_46_bool = 0;
		var_46_bool = 0;
		var_47_bool = var_0_bool;
		if(var_47_bool != 0) {
			var_49_bool = var_3_int != (int)-1;
			if(var_49_bool != 0) {
				var_46_bool = 1;
			}
		}
		if(var_46_bool == 0) goto Label_469;
		var_50_int = 0; var_51_int = 0; var_52_int = 0;
		var_11_int = var_51_int;
		var_12_int = var_52_int;
		func_509(var_15_object, var_16_object, var_50_int, var_51_int, var_52_int);
		var_3_int = var_50_int;
		var_74_bool = var_3_int != (int)-1;
		if(var_74_bool == 0) goto Label_469;
		@@@var_9_object:get(var_16_object, var_3_int);
		var_75_object = var_16_object;
		if(var_75_object != 0) {
			var_76_object = Obj();
			var_16_object = var_76_object;
			func_54(var_76_object);
		}
		var_16_object = 0;
	}
Label_469:
	return 4;
	
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	CaptureKeyboard();
	
Label_2:
	if((bool)1 != 0) {
		var_12_bool = 0;
		func_67(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, (bool)0);
		goto Label_2;
	}
	return 0;
}


func_509(var_1_int, var_9_object, var_50_int, var_51_int, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0;
	var_62_bool = var_51_int < (int)248;
	if(var_62_bool != 0) {
		var_50_int = -1;
		return 8;
	}
	var_64_bool = var_51_int > (int)268;
	if(var_64_bool != 0) {
		var_50_int = -1;
		return 8;
	}
	var_57_int = var_52_int - var_1_int;
	func_548((int)0);
	var_65_int = var_58_int;
	var_59_int = var_57_int / var_58_int;
	var_66_float = var_59_int * var_58_int;
	var_57_int = var_57_int - var_66_float;
	@@@var_9_object:size(var_60_int);
	var_67_bool = var_60_int <= var_59_int;
	if(var_67_bool != 0) {
		return 8;
	}
	var_68_bool = 0;
	var_68_bool = 0;
	var_70_bool = var_57_int >= (int)68;
	if(var_70_bool != 0) {
		var_72_bool = var_57_int <= (int)91;
		if(var_72_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		var_59_int = (int)-1;
		return 8;
	}
	var_50_int = -1;
	return 8;
}


func_67(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0;
	var_2_int = -1;
	var_3_int = -1;
	var_0_bool = var_12_bool;
	CreateSaveEnumerator(var_8_object);
	var_19_bool = var_8_object == 0; //@nz
	if(var_19_bool != 0) {
		return 6;
	}
	CreateObjectVector(var_9_object);
	var_20_bool = var_12_bool;
	if(var_20_bool != 0) {
		@@@var_9_object:add(Obj());
		var_16_object = 0;
	}
Label_84:
	if((int)1 != 0) {
		@@@var_8_object:Next(var_17_object);
		var_22_bool = var_17_object == 0; //@nz
		if(var_22_bool != 0) {
		} else {
			var_48_bool = var_12_bool;
			if(var_48_bool != 0) {
				@@var_17_object:IsQuickSave(var_18_bool);
				var_49_bool = var_18_bool;
				if(var_49_bool != 0) {
					goto Label_84;
				}
			}
			@@@var_9_object:add(var_17_object);
			var_17_object = 0;
			goto Label_84;
		}
	}
	GetWindowSize(var_4_int, var_5_int);
	ClientToScreen((int)0, (int)0);
	var_1_int = 0;
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	CreateWindow("sys_border.xml", (bool)0, var_10_object);
	func_558(var_17_object, var_18_bool);
	ProcessEvents();
	return 6;
	
}


func_548(var_32_int)
{
	var_32_int = 121;
	return 0;
}


func_134(var_12_int, var_13_int)
{
	var_13_int = var_12_int;
	return 0;
}


func_550(var_9_object, var_29_int)
{
	var_30_int = 0; var_31_int = 0;
	@@@var_9_object:size(var_31_int);
	var_32_int = 0;
	func_548(var_32_int);
	var_29_int = var_31_int * var_32_int;
	return 2;
}


func_137(var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_9_object, var_11_int)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_string = "";
	@@@var_9_object:size(var_24_int);
	var_25_int = 0;
	
Label_141:
	var_34_bool = var_25_int < var_24_int;
	if(var_34_bool != 0) {
		@@@var_9_object:get(var_26_object, var_25_int);
		var_27_int = 0;
		var_11_int = var_28_int;
		ClientToScreen(var_27_int, var_28_int);
		var_35_object = var_26_object;
		if(var_35_object != 0) {
			@@var_26_object:BlitClipped(var_27_int, var_28_int, var_6_int, var_7_int, var_4_int, var_5_int);
			var_36_int = 0; var_37_int = 0; var_38_bool = 0;
			var_11_int = var_37_int;
			func_302((int)0, var_37_int, (bool)0);
			@@var_26_object:IsQuickSave(var_29_bool);
			var_63_bool = var_29_bool;
			if(var_63_bool != 0) {
				var_67_int = (int)7 + var_11_int;
				var_68_string = ""; var_69_int = 0;
				func_592(var_68_string, (int)17);
				Print("default", (int)129, var_67_int, var_68_string, (float)0.5568627715110779, (float)0.5568627715110779, (float)0.5568627715110779);
			} else {
							@@var_26_object:GetProperty((int)0, var_31_bool, var_32_int);
							var_165_bool = var_31_bool;
							if(var_165_bool != 0) {
								var_166_string = ""; var_167_int = 0;
								var_167_int = (int)500 + var_32_int;
								func_592(var_166_string, var_167_int);
								var_166_string = var_30_string;
							} else {
								var_30_string = "????";
		}
							var_176_int = 0; var_177_int = 0; var_178_bool = 0;
							var_11_int = var_177_int;
							func_302((int)0, var_177_int, (bool)1);
							var_182_int = (int)47 + var_11_int;
							var_183_string = ""; var_184_int = 0;
							func_592(var_183_string, (int)32);
							Print("default", (int)129, var_182_int, var_183_string, (float)0.5568627715110779, (float)0.5568627715110779, (float)0.5568627715110779);
	}
						return 20;
					}
					var_172_int = (int)7 + var_11_int;
					Print("default", (int)129, var_172_int, var_30_string, (float)0.5568627715110779, (float)0.5568627715110779, (float)0.5568627715110779);
	}
	var_75_string = ""; var_76_object = Obj();
	var_26_object = var_76_object;
	func_597(var_75_string, var_76_object);
	var_75_string = var_33_string;
	var_102_int = (int)28 + var_11_int;
	Print("big", (int)129, var_102_int, var_33_string, (float)1.0, (float)1.0, (float)1.0);
	var_106_string = ""; var_107_object = Obj();
	var_26_object = var_107_object;
	func_621(var_106_string, var_107_object);
	var_106_string = var_33_string;
	var_128_int = (int)47 + var_11_int;
	Print("default", (int)129, var_128_int, var_33_string, (float)0.5568627715110779, (float)0.5568627715110779, (float)0.5568627715110779);
	var_132_bool = var_0_bool;
	if(var_132_bool != 0) {
		var_133_bool = var_3_int == var_25_int;
		if(var_133_bool != 0) {
			var_137_int = (int)68 + var_11_int;
			Blit("button_x_pressed", (int)248, var_137_int);
		} else {
				var_163_int = (int)68 + var_11_int;
				Blit("button_x", (int)248, var_163_int);

		}
	}
	goto Label_264;
	
Label_264:
	var_138_bool = var_2_int == var_25_int;
	if(var_138_bool != 0) {
		var_142_int = (int)67 + var_11_int;
		Blit("button_pressed", (int)129, var_142_int);
	} else {
		var_159_int = (int)67 + var_11_int;
		Blit("button", (int)129, var_159_int);

	}
	var_143_object = Obj(); var_144_int = 0; var_145_int = 0;
	var_26_object = var_143_object;
	var_145_int = (int)67 + var_11_int;
	func_44((int)129, var_145_int);
	var_11_int = var_11_int + (int)90;
	var_152_int = var_11_int + (int)15;
	StretchBlit("separator", (int)0, var_152_int, var_4_int, (int)1);
	var_11_int = var_11_int + (int)31;
	var_26_object = 0;
	var_25_int = var_25_int + (int)1;
	goto Label_141;
	
}


func_394(var_1_int)
{
	var_44_int = 0; var_45_int = 0;
	var_47_int = 0;
	func_548(var_47_int);
	var_48_float = (int)-2 * var_47_int;
	var_45_int = var_48_float / (int)2;
	var_1_int = var_1_int + var_45_int;
	func_558(var_44_int, var_45_int);
	return 2;
}


func_44(var_144_int, var_145_int)
{
	Blit("button_text", var_144_int, var_145_int);
	return 0;
}


func_621(var_106_string, var_107_object)
{
	var_108_string = ""; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; var_113_int = 0; var_114_string = ""; var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0;
	@@var_107_object:GetSaveTime(var_115_int, var_116_int, var_117_int, var_119_int, var_118_int);
	var_120_string = ""; var_121_int = 0;
	func_592(var_120_string, (int)19);
	var_122_string = ""; var_123_int = 0;
	var_123_int = (int)20 + var_119_int;
	func_592(var_122_string, var_123_int);
	format(var_114_string, var_120_string, var_118_int, var_122_string, var_117_int, var_116_int, var_115_int);
	var_114_string = var_106_string;
	return 12;
}


func_558(var_1_int, var_5_int)
{
	var_27_int = 0; var_28_int = 0;
	var_29_int = 0;
	func_550(var_28_int, var_29_int);
	var_28_int = var_29_int - var_5_int;
	var_34_bool = var_28_int < (int)0;
	if(var_34_bool != 0) {
		var_28_int = 0;
	}
	var_35_int = -var_1_int;
	var_36_bool = var_35_int > var_28_int;
	if(var_36_bool != 0) {
		var_1_int = -var_28_int;
	} else {
			var_47_bool = var_1_int > (int)0;
			if(var_47_bool == 0) goto Label_576;
			var_1_int = 0;
	}
Label_576:
	var_38_bool = var_28_int == (int)0;
	if(var_38_bool != 0) {
		SendMessage((int)16384, "scrollbar");
	} else {
		var_41_int = -var_1_int;
		var_43_float = var_41_int * (int)100;
		var_44_float = var_43_float / var_28_int;
		SendMessage(var_44_float, "scrollbar");

	}
	return 2;
	
}


func_302(var_36_int, var_37_int, var_38_bool)
{
	var_39_bool = var_38_bool;
	if(var_39_bool != 0) {
		StretchBlit("shot_black", var_36_int, var_37_int, (int)120, (int)90);
	}
	StretchBlit("shot_border", var_36_int, var_37_int, (int)120, (int)1);
	var_48_int = var_37_int + (int)90;
	var_50_int = var_48_int - (int)1;
	StretchBlit("shot_border", var_36_int, var_50_int, (int)120, (int)1);
	StretchBlit("shot_border", var_36_int, var_37_int, (int)1, (int)90);
	var_58_int = var_36_int + (int)120;
	var_60_int = var_58_int - (int)1;
	StretchBlit("shot_border", var_60_int, var_37_int, (int)1, (int)90);
	return 0;
}


func_592(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = "";
	GetStringByID(var_71_string, var_69_int);
	var_71_string = var_68_string;
	return 2;
}


func_49(var_44_object)
{
	SendMessageToParent((int)0, var_44_object);
	return 0;
}


func_597(var_75_string, var_76_object)
{
	var_77_string = ""; var_78_float = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_string = ""; var_83_float = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0;
	@@var_76_object:GetGameTime(var_83_float);
	var_84_int = var_83_float / (int)24;
	var_89_float = var_84_int * (int)24;
	var_85_int = var_83_float - var_89_float;
	var_91_float = var_84_int * (int)24;
	var_92_int = var_83_float - var_91_float;
	var_93_int = var_92_int - var_85_int;
	var_86_int = var_93_int * (int)60;
	var_95_string = ""; var_96_int = 0;
	func_592(var_95_string, (int)18);
	var_98_int = var_84_int + (int)1;
	format(var_82_string, var_95_string, var_98_int, var_85_int, var_86_int);
	var_82_string = var_75_string;
	return 10;
}


func_470(var_1_int, var_9_object, var_19_int, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0;
	var_31_bool = var_20_int < (int)129;
	if(var_31_bool != 0) {
		var_19_int = -1;
		return 8;
	}
	var_33_bool = var_20_int > (int)233;
	if(var_33_bool != 0) {
		var_19_int = -1;
		return 8;
	}
	var_26_int = var_21_int - var_1_int;
	func_548((int)0);
	var_34_int = var_27_int;
	var_28_int = var_26_int / var_27_int;
	var_35_float = var_28_int * var_27_int;
	var_26_int = var_26_int - var_35_float;
	@@@var_9_object:size(var_29_int);
	var_36_bool = var_29_int <= var_28_int;
	if(var_36_bool != 0) {
		return 8;
	}
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_26_int >= (int)67;
	if(var_39_bool != 0) {
		var_41_bool = var_26_int <= (int)91;
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_28_int = (int)-1;
		return 8;
	}
	var_19_int = -1;
	return 8;
}


func_54(var_76_object)
{
	var_77_string = ""; var_78_string = "";
	@@var_76_object:GetFileName(var_78_string);
	DeleteGame(var_78_string);
	StopEventProcessing();
	return 2;
}


func_381(var_1_int)
{
	var_52_int = 0; var_53_int = 0;
	var_55_int = 0;
	func_548(var_55_int);
	var_56_float = (int)2 * var_55_int;
	var_53_int = var_56_float / (int)2;
	var_1_int = var_1_int + var_53_int;
	func_558(var_52_int, var_53_int);
	return 2;
}


