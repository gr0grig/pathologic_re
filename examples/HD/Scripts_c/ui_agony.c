// @IMPORTS: SetCursor/1,ShowCursor/0,CaptureKeyboard/0,SetOwnerDraw/1,GetWindowData/1,DestroyWindow/0,CreateStringVector/1,SendMessage/3,SendMessage/2,ProcessEvents/0,CreateObjectVector/1,CreateFloatVector/1,CreateIntVector/1,FindActor/2,HasInvItemProperty/3,GetInvItemProperty/3,Trace/1
// @STRINGS: W:default|W:agony|A:GetProperty|W:$parent|A:add|A:size|A:get|W:player|A:GetItemCount|A:GetItem|W:Agony|A:GetItemCountOfType|W:ok|W:cancel|W:level|W:scrollbar|W:disease|A:HasProperty|A:RemoveItem|W:Do |A:SetProperty|A:set|W:slot0|W:slot|A:GetItemID
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,float,int,int params=0
// @EVENT_101: op=0xaf vars=int
// @EVENT_102: op=0xfd vars=int
// @EVENT_100: op=0x14b vars=int
// @EVENT_15: op=0x14f vars=int,int,float
// @EVENT_200: op=0x1d6 vars=int,string,object
// @PE: 0x14b,0x14f,0x30b

task_0_event_101(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0;
	var_17_bool = var_9_int == (int)267;
	if(var_17_bool != 0) {
		var_8_int = 1;

	Label_181:
		var_19_bool = (int)0 < (int)4;
		if(var_19_bool != 0) {
			var_21_string = ""; var_22_int = 0;
			var_13_int = var_22_int;
			func_779(var_21_string, var_22_int);
			SendMessage((int)-7, var_21_string);
			var_13_int = var_13_int + (int)1;
			goto Label_181;
		}
	}
	var_35_bool = var_9_int == (int)268;
	if(var_35_bool != 0) {
		var_8_int = 0;
		SendMessage((int)-4, "ok");
	}
	var_39_bool = var_9_int == (int)269;
	if(var_39_bool != 0) {
		var_41_bool = var_8_int == (int)1;
		if(var_41_bool != 0) {

		Label_209:
			var_43_bool = (int)0 < (int)4;
			if(var_43_bool != 0) {
				var_45_string = ""; var_46_int = 0;
				var_14_int = var_46_int;
				func_779(var_45_string, var_46_int);
				SendMessage((int)-2, var_45_string);
				var_14_int = var_14_int + (int)1;
				goto Label_209;
			}
		} else {
					SendMessage((int)-4, "ok");
		}
	}
	var_49_bool = var_9_int == (int)270;
	if(var_49_bool != 0) {
		var_51_bool = var_8_int == (int)1;
		if(var_51_bool != 0) {

		Label_234:
			var_53_bool = (int)0 < (int)4;
			if(var_53_bool != 0) {
				var_55_string = ""; var_56_int = 0;
				var_15_int = var_56_int;
				func_779(var_55_string, var_56_int);
				SendMessage((int)-3, var_55_string);
				var_15_int = var_15_int + (int)1;
				goto Label_234;
			}
		} else {
			SendMessage((int)-4, "cancel");

		}
	}
	return 6;
	
}


task_0_event_102(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0;
	var_17_bool = var_9_int == (int)272;
	if(var_17_bool != 0) {
		var_8_int = 1;

	Label_259:
		var_19_bool = (int)0 < (int)4;
		if(var_19_bool != 0) {
			var_21_string = ""; var_22_int = 0;
			var_13_int = var_22_int;
			func_779(var_21_string, var_22_int);
			SendMessage((int)-7, var_21_string);
			var_13_int = var_13_int + (int)1;
			goto Label_259;
		}
	}
	var_35_bool = var_9_int == (int)274;
	if(var_35_bool != 0) {
		var_8_int = 0;
		SendMessage((int)-4, "ok");
	}
	var_39_bool = var_9_int == (int)273;
	if(var_39_bool != 0) {
		var_41_bool = var_8_int == (int)1;
		if(var_41_bool != 0) {

		Label_287:
			var_43_bool = (int)0 < (int)4;
			if(var_43_bool != 0) {
				var_45_string = ""; var_46_int = 0;
				var_14_int = var_46_int;
				func_779(var_45_string, var_46_int);
				SendMessage((int)-2, var_45_string);
				var_14_int = var_14_int + (int)1;
				goto Label_287;
			}
		} else {
					SendMessage((int)-4, "ok");
		}
	}
	var_49_bool = var_9_int == (int)271;
	if(var_49_bool != 0) {
		var_51_bool = var_8_int == (int)1;
		if(var_51_bool != 0) {

		Label_312:
			var_53_bool = (int)0 < (int)4;
			if(var_53_bool != 0) {
				var_55_string = ""; var_56_int = 0;
				var_15_int = var_56_int;
				func_779(var_55_string, var_56_int);
				SendMessage((int)-3, var_55_string);
				var_15_int = var_15_int + (int)1;
				goto Label_312;
			}
		} else {
			SendMessage((int)-4, "cancel");

		}
	}
	return 6;
	
}


task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int)
{
	DestroyWindow();
	return 0;
}


task_0_event_15(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float)
{
	var_13_bool = var_11_float > (int)0;
	if(var_13_bool != 0) {
	} else {
		var_75_bool = (float)1 < (int)0;
		if(var_75_bool == 0) goto Label_345;
		var_11_float = -1;
	}
Label_345:
	var_7_int = var_7_int + var_11_float;
	var_15_bool = var_7_int < (int)0;
	if(var_15_bool != 0) {
		var_7_int = 0;
	}
	func_387(var_10_int, var_11_float);
	func_416(var_8_int, var_9_int, var_10_int, var_11_float);
	return 0;
	
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int, var_10_string, var_11_object)
{
	var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0;
	var_19_bool = var_9_int == (int)-4;
	if(var_19_bool != 0) {
		var_20_string = ""; var_21_int = 0;
		func_779(var_20_string, (int)0);
		var_32_bool = var_10_string == var_20_string;
		if(var_32_bool != 0) {
			var_34_bool = var_7_int > (int)0;
			if(var_34_bool != 0) {
				var_7_int = var_7_int + (int)-1;
				func_416(var_14_int, var_15_int, var_16_int, var_17_int);
				func_387(var_16_int, var_17_int);
			}
		} else {
			var_85_string = ""; var_86_int = 0;
			func_779(var_85_string, (int)3);
			var_87_bool = var_10_string == var_85_string;
			if(var_87_bool == 0) goto Label_512;
			@@@var_0_object:size(var_15_int);
			var_89_int = var_7_int + (int)4;
			var_90_bool = var_89_int <= var_15_int;
			if(var_90_bool == 0) goto Label_512;
			var_7_int = var_7_int + (int)1;
			func_416(var_14_int, var_15_int, var_16_int, var_17_int);
			func_387(var_16_int, var_17_int);
	}
		var_93_bool = var_9_int == (int)-12;
		if(var_93_bool != 0) {
			var_8_int = 0;
			return 6;
		}
		var_95_bool = var_9_int == (int)-8;
		if(var_95_bool != 0) {
			var_8_int = 1;
			return 6;
		}
		var_97_bool = var_9_int < (int)0;
		if(var_97_bool != 0) {
			return 6;
		}
		var_99_bool = var_10_string == "ok";
		if(var_99_bool != 0) {
			func_685(var_17_int);
		} else {
			var_183_bool = var_10_string == "cancel";
			if(var_183_bool != 0) {
				func_707(var_17_int);
				goto Label_591;
			}
			var_196_bool = var_10_string == "scrollbar";
			if(var_196_bool != 0) {
				@@@var_0_object:size(var_16_int);
				var_199_int = var_16_int - (int)4;
				var_200_float = (float)0.009999999776482582 * var_199_int;
				var_201_float = var_200_float * var_9_int;
				var_7_int = var_201_float + (float)0.5;
				var_204_bool = var_7_int < (int)0;
				if(var_204_bool != 0) {
					var_7_int = 0;
				}
				func_387(var_16_int, var_17_int);
				func_416(var_14_int, var_15_int, var_16_int, var_17_int);
				goto Label_591;
			}
			var_205_int = 0; var_206_int = 0; var_207_string = "";
			var_9_int = var_206_int;
			var_10_string = var_207_string;
			func_800(var_206_int, var_207_string);
			var_205_int = var_17_int;
			var_217_bool = var_17_int != (int)-1;
			if(var_217_bool == 0) goto Label_591;
			var_219_bool = var_9_int == (int)0;
			if(var_219_bool != 0) {
				var_220_int = 0;
				var_220_int = var_17_int + var_7_int;
				func_726(var_15_int, var_16_int, var_17_int, var_220_int);
				goto Label_591;
			}
			var_233_bool = var_9_int == (int)1;
			if(var_233_bool == 0) goto Label_591;
			var_234_int = 0;
			var_234_int = var_17_int + var_7_int;
			func_753(var_16_int, var_17_int, var_234_int);
		}
	Label_591:
		return 6;
	}
Label_512:
	SendMessage((int)-4, var_10_string);
	return 6;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_int = 0; var_14_object = Obj(); var_15_string = ""; var_16_string = "";
	SetCursor("default");
	ShowCursor();
	CaptureKeyboard();
	SetOwnerDraw((bool)0);
	GetWindowData(var_5_object);
	var_19_bool = var_5_object == 0; //@nz
	if(var_19_bool != 0) {
		DestroyWindow();
		return 8;
	}
	@@@var_5_object:GetProperty("agony", var_6_float);
	func_113(var_12_string, var_13_int, var_14_object, var_15_string, var_16_string);
	var_8_int = 1;
	var_13_int = 0;
	
Label_26:
	var_63_bool = var_13_int < (int)4;
	if(var_63_bool != 0) {
		CreateStringVector(var_14_object);
		var_65_int = var_13_int - (int)1;
		var_67_bool = var_65_int >= (int)0;
		if(var_67_bool != 0) {
			var_68_string = ""; var_69_int = 0;
			var_69_int = var_13_int - (int)1;
			func_779(var_68_string, var_69_int);
			var_68_string = var_15_string;
		} else {
				var_15_string = "$parent";
	}
			var_93_string = ""; var_94_int = 0;
			func_779(var_93_string, (int)0);
			SendMessage((int)-6, var_93_string);
			func_387(var_15_string, var_16_string);
			func_416(var_13_int, var_14_object, var_15_string, var_16_string);
			func_378();
			ProcessEvents();
			return 8;
	}
	var_82_int = var_13_int + (int)1;
	var_84_bool = var_82_int < (int)4;
	if(var_84_bool != 0) {
		var_85_string = ""; var_86_int = 0;
		var_86_int = var_13_int + (int)1;
		func_779(var_85_string, var_86_int);
		var_85_string = var_16_string;
	} else {
		var_16_string = "$parent";

	}
	@@var_14_object:add(var_15_string);
	@@var_14_object:add(var_16_string);
	var_89_string = ""; var_90_int = 0;
	var_13_int = var_90_int;
	func_779(var_89_string, var_90_int);
	SendMessage((int)-1, var_89_string, var_14_object);
	var_14_object = 0;
	var_13_int = var_13_int + (int)1;
	goto Label_26;
	
}


func_416(var_0_object, var_3_object, var_4_object, var_7_int)
{
	var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_object = Obj(); var_122_int = 0; var_123_int = 0;
	@@@var_0_object:size(var_119_int);
	var_120_int = var_7_int;
	
Label_420:
	var_125_int = (int)4 + var_7_int;
	var_126_bool = var_120_int < var_125_int;
	if(var_126_bool != 0) {
		var_127_bool = var_120_int < var_119_int;
		if(var_127_bool != 0) {
			@@@var_0_object:get(var_121_object, var_120_int);
			@@@var_3_object:get(var_122_int, var_120_int);
			@@@var_4_object:get(var_123_int, var_120_int);
			var_128_int = var_122_int;
			if(var_128_int != 0) {
				var_130_string = ""; var_131_int = 0;
				var_131_int = var_120_int - var_7_int;
				func_779(var_130_string, var_131_int);
				SendMessage((int)16384, var_130_string, var_121_object);
			} else {
				var_138_string = ""; var_139_int = 0;
				var_139_int = var_120_int - var_7_int;
				func_779(var_138_string, var_139_int);
				SendMessage((int)0, var_138_string, var_121_object);
		}
			var_141_string = ""; var_142_int = 0;
			var_142_int = var_120_int - var_7_int;
			func_779(var_141_string, var_142_int);
			SendMessage((int)32768, var_141_string);
	}
		var_133_int = var_122_int | (int)65536;
		var_134_string = ""; var_135_int = 0;
		var_135_int = var_120_int - var_7_int;
		func_779(var_134_string, var_135_int);
		SendMessage(var_133_int, var_134_string);
		var_121_object = 0;
		goto Label_466;
		var_120_int = var_120_int + (int)1;
		goto Label_420;
	}
	return 10;
	
}


func_800(var_205_int, var_207_string)
{
	var_208_int = 0; var_209_int = 0;
	
Label_802:
	var_211_bool = (int)0 < (int)4;
	if(var_211_bool != 0) {
		var_212_string = ""; var_213_int = 0;
		var_209_int = var_213_int;
		func_779(var_212_string, var_213_int);
		var_214_bool = var_207_string == var_212_string;
		if(var_214_bool != 0) {
			var_209_int = var_205_int;
			var_209_int = var_209_int + (int)1;
			goto Label_802;
		}
		return 2;
	}
	var_205_int = -1;
	return 2;
}


func_387(var_0_object, var_7_int)
{
	var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0;
	@@@var_0_object:size(var_97_int);
	var_100_bool = var_97_int <= (int)4;
	if(var_100_bool != 0) {
		SendMessage((int)16384, "scrollbar");
		var_7_int = 0;
	} else {
		var_104_int = var_7_int + (int)4;
		var_105_bool = var_104_int > var_97_int;
		if(var_105_bool == 0) goto Label_415;
		var_107_int = var_7_int + (int)4;
		var_108_int = var_107_int - var_97_int;
		var_7_int = var_7_int - var_108_int;
		var_110_float = var_7_int * (int)100;
		var_112_int = var_97_int - (int)4;
		var_98_int = var_110_float / var_112_int;
		SendMessage(var_98_int, "scrollbar");
	}
Label_415:
	return 4;
	
}


func_707(var_3_object)
{
	var_184_int = 0; var_185_int = 0; var_186_int = 0; var_187_int = 0;
	@@@var_3_object:size(var_186_int);
	var_187_int = 0;
	
Label_711:
	var_188_bool = var_187_int < var_186_int;
	if(var_188_bool != 0) {
		@@@var_3_object:set(var_187_int, (int)0);
		var_187_int = var_187_int + (int)1;
		goto Label_711;
	}
	func_416(var_184_int, var_185_int, var_186_int, var_187_int);
	func_378();
	return 4;
}


func_357(var_0_object, var_1_object, var_3_object, var_6_float, var_144_float)
{
	var_145_float = 0; var_146_int = 0; var_147_int = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0; var_151_float = 0; var_152_int = 0; var_153_int = 0; var_154_object = Obj(); var_155_float = 0; var_156_int = 0;
	var_151_float = var_6_float;
	@@@var_0_object:size(var_152_int);
	var_153_int = 0;
	
Label_362:
	var_157_bool = var_153_int < var_152_int;
	if(var_157_bool != 0) {
		@@@var_0_object:get(var_154_object, var_153_int);
		@@@var_1_object:get(var_155_float, var_153_int);
		@@@var_3_object:get(var_156_int, var_153_int);
		var_158_float = var_156_int * var_155_float;
		var_151_float = var_151_float - var_158_float;
		var_154_object = 0;
		var_153_int = var_153_int + (int)1;
		goto Label_362;
	}
	var_151_float = var_144_float;
	return 12;
}


func_91(var_0_object, var_47_bool, var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_object = Obj(); var_52_int = 0; var_53_int = 0; var_54_object = Obj();
	@@@var_0_object:size(var_52_int);
	var_53_int = 0;
	
Label_95:
	var_55_bool = var_53_int < var_52_int;
	if(var_55_bool != 0) {
		@@@var_0_object:get(var_54_object, var_53_int);
		var_56_int = 0; var_57_object = Obj();
		var_54_object = var_57_object;
		func_795(var_56_int, var_57_object);
		var_58_bool = var_56_int == var_48_int;
		if(var_58_bool != 0) {
			var_47_bool = 1;
			var_54_object = 0;
			var_53_int = var_53_int + (int)1;
			goto Label_95;
		}
		return 6;
	}
	var_47_bool = 0;
	return 6;
}


func_779(var_68_string, var_69_int)
{
	var_72_int = var_69_int + (int)1;
	var_74_bool = var_72_int < (int)10;
	if(var_74_bool != 0) {
		var_77_int = var_69_int + (int)1;
		var_68_string = "slot0" + var_77_int;
		return 0;
	}
	var_80_int = var_69_int + (int)1;
	var_68_string = "slot" + var_80_int;
	return 0;
}


func_685(var_5_object)
{
	var_100_float = 0; var_101_float = 0;
	func_357(var_16_int, var_17_int, var_100_float, var_101_float, (float)0);
	var_102_float = var_101_float;
	var_119_bool = var_101_float < (float)0.0010000000474974513;
	if(var_119_bool != 0) {
		var_101_float = 0;
	}
	var_121_int = "Do " + var_101_float;
	Trace(var_121_int);
	@@@var_5_object:SetProperty("agony", var_101_float);
	func_654(var_100_float, var_101_float);
	DestroyWindow();
	return 2;
}


func_654(var_0_object, var_3_object)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_object = Obj(); var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_object = Obj(); var_132_int = 0;
	@@@var_3_object:size(var_128_int);
	var_129_int = 0;
	
Label_658:
	var_133_bool = var_129_int < var_128_int;
	if(var_133_bool != 0) {
		@@@var_3_object:get(var_130_int, var_129_int);
		var_134_int = var_130_int;
		if(var_134_int != 0) {
			@@@var_0_object:get(var_131_object, var_129_int);
			var_132_int = 0;

		Label_667:
			var_135_bool = var_132_int < var_130_int;
			if(var_135_bool != 0) {
				var_136_int = 0;
				var_137_int = 0; var_138_object = Obj();
				var_131_object = var_138_object;
				func_795(var_137_int, var_138_object);
				var_137_int = var_136_int;
				func_592(var_132_int, var_136_int);
				var_132_int = var_132_int + (int)1;
				goto Label_667;
			}
			var_131_object = 0;
		}
		var_129_int = var_129_int + (int)1;
		goto Label_658;
	}
	return 10;
}


func_592(var_2_object, var_136_int)
{
	var_141_int = 0; var_142_int = 0; var_143_float = 0; var_144_int = 0; var_145_object = Obj(); var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_int = 0; var_150_int = 0; var_151_float = 0; var_152_int = 0; var_153_object = Obj(); var_154_int = 0; var_155_bool = 0; var_156_float = 0;
	@@@var_2_object:GetItemCount(var_149_int, (int)2);
	var_150_int = -1;
	var_152_int = 0;
	
Label_598:
	var_158_bool = var_152_int < var_149_int;
	if(var_158_bool != 0) {
		@@@var_2_object:GetItem(var_153_object, var_152_int, (int)2);
		var_160_int = 0; var_161_object = Obj();
		var_153_object = var_161_object;
		func_795(var_160_int, var_161_object);
		var_160_int = var_154_int;
		var_162_bool = var_154_int == var_136_int;
		if(var_162_bool != 0) {
			@@var_153_object:HasProperty(var_155_bool, "disease");
			var_164_bool = var_155_bool == 0; //@nz
			if(var_164_bool != 0) {
				var_165_bool = 0;
				var_165_bool = 1;
				var_167_bool = var_150_int == (int)-1;
				if(var_167_bool != 1) {
					var_169_bool = var_151_float > (int)0;
					if(var_169_bool != 1) {
						var_165_bool = 0;
					}
				}
				if(var_165_bool != 0) {
					var_152_int = var_150_int;
					var_151_float = 0;
				}
			} else {
				@@var_153_object:GetProperty(var_156_float, "disease");
				var_172_bool = 0;
				var_172_bool = 1;
				var_174_bool = var_150_int == (int)-1;
				if(var_174_bool != 1) {
					var_175_bool = var_156_float < var_151_float;
					if(var_175_bool != 1) {
						var_172_bool = 0;
					}
				}
				if(var_172_bool == 0) goto Label_642;
				var_152_int = var_150_int;
				var_156_float = var_151_float;
	}
			var_177_bool = var_150_int != (int)-1;
			if(var_177_bool != 0) {
				@@@var_2_object:RemoveItem(var_150_int, (int)1, (int)2);
			}
			return 16;
		}
	}
Label_642:
	var_153_object = 0;
	var_152_int = var_152_int + (int)1;
	goto Label_598;
	
}


func_113(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_int = 0;
	CreateObjectVector(var_0_object);
	CreateFloatVector(var_1_object);
	CreateIntVector(var_3_object);
	CreateIntVector(var_4_object);
	FindActor(var_2_object, "player");
	var_36_bool = var_2_object == 0; //@nz
	if(var_36_bool != 0) {
		DestroyWindow();
		return 14;
	}
	@@@var_2_object:GetItemCount(var_28_int, (int)2);
	var_29_int = 0;
	
Label_134:
	var_38_bool = var_29_int < var_28_int;
	if(var_38_bool != 0) {
		@@@var_2_object:GetItem(var_30_object, var_29_int, (int)2);
		var_40_int = 0; var_41_object = Obj();
		var_30_object = var_41_object;
		func_795(var_40_int, var_41_object);
		var_40_int = var_31_int;
		HasInvItemProperty(var_32_bool, var_31_int, "Agony");
		var_45_bool = var_32_bool == 0; //@nz
		if(var_45_bool != 0) {
		} else {
			var_47_bool = 0; var_48_int = 0;
			var_31_int = var_48_int;
			func_91(var_34_int, var_47_bool, var_48_int);
			if(var_47_bool != 0) {
				goto Label_171;
			}
			GetInvItemProperty(var_33_float, var_31_int, "Agony");
			@@@var_2_object:GetItemCountOfType(var_34_int, var_31_int);
			@@@var_0_object:add(var_30_object);
			@@@var_1_object:add(var_33_float);
			@@@var_4_object:add(var_34_int);
			@@@var_3_object:add((int)0);
			var_30_object = 0;
	}
		var_29_int = var_29_int + (int)1;
		goto Label_134;
	}
	return 14;
	
}


func_753(var_0_object, var_3_object, var_234_int)
{
	var_235_int = 0; var_236_object = Obj(); var_237_int = 0; var_238_int = 0; var_239_object = Obj(); var_240_int = 0;
	@@@var_3_object:size(var_238_int);
	var_241_bool = var_234_int >= var_238_int;
	if(var_241_bool != 0) {
		return 6;
	}
	@@@var_0_object:get(var_239_object, var_234_int);
	@@@var_3_object:get(var_240_int, var_234_int);
	var_243_bool = var_240_int == (int)0;
	if(var_243_bool != 0) {
		return 6;
	}
	var_240_int = var_240_int - (int)1;
	@@@var_3_object:set(var_234_int, var_240_int);
	func_416(var_237_int, var_238_int, var_239_object, var_240_int);
	func_378();
	return 6;
}
EMIT "Stack[-2] = 0";


func_726(var_0_object, var_3_object, var_4_object, var_220_int)
{
	var_221_int = 0; var_222_object = Obj(); var_223_int = 0; var_224_int = 0; var_225_int = 0; var_226_object = Obj(); var_227_int = 0; var_228_int = 0;
	@@@var_3_object:size(var_225_int);
	var_229_bool = var_220_int >= var_225_int;
	if(var_229_bool != 0) {
		return 8;
	}
	@@@var_0_object:get(var_226_object, var_220_int);
	@@@var_4_object:get(var_227_int, var_220_int);
	@@@var_3_object:get(var_228_int, var_220_int);
	var_230_bool = var_227_int <= var_228_int;
	if(var_230_bool != 0) {
		return 8;
	}
	var_228_int = var_228_int + (int)1;
	@@@var_3_object:set(var_220_int, var_228_int);
	func_416(var_225_int, var_226_object, var_227_int, var_228_int);
	func_378();
	return 8;
}
EMIT "Stack[-3] = 0";


func_378()
{
	var_143_int = 100;
	var_144_float = 0;
	func_357(var_14_object, var_15_string, var_16_string, var_143_int, var_144_float);
	var_160_float = var_143_int * var_144_float;
	SendMessage(var_160_float, "level");
	return 0;
}


func_795(var_40_int, var_41_object)
{
	var_42_int = 0; var_43_int = 0;
	@@var_41_object:GetItemID(var_43_int);
	var_43_int = var_40_int;
	return 2;
}


