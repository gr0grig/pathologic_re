// @IMPORTS: Hold/0,Trace/1,GetGameTime/1,rand/3,SetTimeEvent/2,GetSceneByName/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,AddMessage/4,SetVariable/2
// @STRINGS: W:init|W:to late for k2system quest|W:remove_danko|W:inited|A:SetProperty|W:remove_burah|W:id = |W:, fTime = |W:, GetDay() = |W:K2System wrong danko scene: |W:K2System wrong burah scene: |W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:k2system_burah_day|W:k2system_danko_day|W:house5_unoin_solidl|W:r4_house4_02_i2|W:dt_house1_union2_01r|W:dt_house_1_03|W:r5_House6_01|W:dt_house2_01|W:house7_02|W:lc_house3_05
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_9: op=0x5d vars=int,float
// @PE: 0xd4,0xdd,0xe6,0xef,0xf8,0x101,0x10a,0x113,0x181,0x186,0x18b,0x1a5,0x1bf,0x1f8

task_0_event_26(var_0_int, var_1_string)
{
	var_2_int = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_object = Obj(); var_13_object = Obj();
	Trace(var_1_string);
	var_15_bool = var_1_string == "init";
	if(var_15_bool != 0) {
		func_204((int)0);
		var_16_int = var_8_int;
		var_22_bool = var_8_int > (int)22;
		if(var_22_bool != 0) {
			Trace("to late for k2system quest");
			return 12;
		}
		var_9_float = 0;
		var_24_int = 0;
		func_204(var_24_int);
		var_26_bool = var_24_int < (int)7;
		if(var_26_bool != 0) {
			var_28_int = 0;
			func_204(var_28_int);
			var_9_float = (int)7 - var_28_int;
		}
		GetGameTime(var_10_float);
		rand(var_11_float, (float)0.30000001192092896, (int)1);
		var_32_int = var_10_float + var_11_float;
		var_33_int = var_32_int + var_9_float;
		SetTimeEvent((int)0, var_33_int);
		rand(var_11_float, (float)0.30000001192092896, (int)1);
		var_37_int = var_10_float + var_11_float;
		var_38_int = var_37_int + var_9_float;
		SetTimeEvent((int)1, var_38_int);
		var_39_int = 0;
		func_195(var_39_int);
		var_0_int = var_39_int;
	} else {
		var_46_bool = var_1_string == "remove_danko";
		if(var_46_bool != 0) {
			var_47_string = ""; var_48_int = 0;
			var_48_int = var_0_int;
			func_421(var_47_string, var_48_int);
			GetSceneByName(var_12_object, var_47_string);
			var_57_object = var_12_object;
			if(var_57_object != 0) {
				@@var_12_object:SetProperty("inited", (int)0);
			}
			var_12_object = 0;
			goto Label_92;
		}
		var_61_bool = var_1_string == "remove_burah";
		if(var_61_bool == 0) goto Label_92;
		var_62_string = ""; var_63_int = 0;
		var_63_int = var_0_int;
		func_395(var_62_string, var_63_int);
		GetSceneByName(var_13_object, var_62_string);
		var_72_object = var_13_object;
		if(var_72_object != 0) {
			@@var_13_object:SetProperty("inited", (int)0);
		}
		var_13_object = 0;
	}
Label_92:
	return 12;
	
}


task_0_event_9(var_0_int, var_1_int, var_2_float)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj();
	var_7_string = "id = ";
	var_8_int = var_7_string + var_1_int;
	var_9_string = ", fTime = ";
	var_10_int = var_8_int + var_9_string;
	var_11_int = var_10_int + var_2_float;
	var_12_string = ", GetDay() = ";
	var_13_int = var_11_int + var_12_string;
	var_14_int = 0;
	func_195(var_14_int);
	var_20_int = var_13_int + var_14_int;
	Trace(var_20_int);
	var_21_bool = 0;
	var_21_bool = 0;
	var_23_bool = var_1_int == (int)0;
	if(var_23_bool != 0) {
		var_24_int = 0;
		func_195(var_24_int);
		var_25_bool = var_0_int == var_24_int;
		if(var_25_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_26_int = 0; var_27_float = 0;
		var_26_int = var_0_int;
		var_2_float = var_27_float;
		func_504(var_26_int, var_27_float);
		var_94_string = ""; var_95_int = 0;
		var_95_int = var_0_int;
		func_421(var_94_string, var_95_int);
		GetSceneByName(var_5_object, var_94_string);
		var_104_bool = var_5_object == 0; //@nz
		if(var_104_bool != 0) {
			var_106_string = ""; var_107_int = 0;
			var_107_int = var_0_int;
			func_421(var_106_string, var_107_int);
			var_108_int = "K2System wrong danko scene: " + var_106_string;
			Trace(var_108_int);
		} else {
			@@var_5_object:SetProperty("inited", (int)1);
			var_111_int = 0;
			var_111_int = var_0_int;
			func_390(var_111_int);
	}
		var_113_bool = 0;
		var_113_bool = 0;
		var_115_bool = var_1_int == (int)1;
		if(var_115_bool != 0) {
			var_116_int = 0;
			func_195(var_116_int);
			var_117_bool = var_0_int == var_116_int;
			if(var_117_bool != 0) {
				var_113_bool = 1;
			}
		}
		if(var_113_bool == 0) goto Label_194;
		var_118_int = 0; var_119_float = 0;
		var_118_int = var_0_int;
		var_2_float = var_119_float;
		func_447(var_118_int, var_119_float);
		var_168_string = ""; var_169_int = 0;
		var_169_int = var_0_int;
		func_395(var_168_string, var_169_int);
		GetSceneByName(var_6_object, var_168_string);
		var_178_bool = var_6_object == 0; //@nz
		if(var_178_bool != 0) {
			var_180_string = ""; var_181_int = 0;
			var_181_int = var_0_int;
			func_395(var_180_string, var_181_int);
			var_182_int = "K2System wrong burah scene: " + var_180_string;
			Trace(var_182_int);
		} else {
			@@var_6_object:SetProperty("inited", (int)1);
			var_185_int = 0;
			var_185_int = var_0_int;
			func_385(var_185_int);
		}
		var_6_object = 0;
	}
	var_5_object = 0;
	goto Label_194;
	
Label_194:
	return 4;
	
}


main(var_0_int)
{
	var_0_int = -1;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_385(var_185_int)
{
	SetVariable("k2system_burah_day", var_185_int);
	return 0;
}


func_257(var_61_int, var_62_float)
{
	var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_float = 0;
	var_62_float = var_66_float;
	func_377(var_63_int, (int)539101, (int)539100, var_66_float);
	var_63_int = var_61_int;
	return 0;
}


func_195(var_14_int)
{
	var_15_float = 0; var_16_float = 0;
	GetGameTime(var_16_float);
	var_18_int = 0;
	var_18_int = var_16_float / (int)24;
	var_14_int = (int)1 + var_18_int;
	return 2;
}


func_323()
{
	var_53_object = Obj(); var_54_object = Obj();
	CreateDiaryEntry(var_54_object, (int)758, (int)2, (int)539743);
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0;
	var_54_object = var_59_object;
	func_349(var_58_bool, var_59_object, (int)757);
	return 2;
}
EMIT "Stack[-1] = 0";


func_390(var_111_int)
{
	SetVariable("k2system_danko_day", var_111_int);
	return 0;
}


func_266(var_146_int, var_147_float)
{
	var_148_int = 0; var_149_int = 0; var_150_int = 0; var_151_float = 0;
	var_147_float = var_151_float;
	func_377(var_148_int, (int)539087, (int)539086, var_151_float);
	var_148_int = var_146_int;
	return 0;
}


func_395(var_168_string, var_169_int)
{
	var_171_bool = var_169_int == (int)8;
	if(var_171_bool != 0) {
		var_168_string = "house5_unoin_solidl";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_173_bool = var_169_int == (int)9;
	if(var_173_bool != 0) {
		var_168_string = "r4_house4_02_i2";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_175_bool = var_169_int == (int)10;
	if(var_175_bool != 0) {
		var_168_string = "dt_house1_union2_01r";
		return 0;
	EMIT "GOTO 0x1a3";
	}
	var_177_bool = var_169_int == (int)11;
	if(var_177_bool != 0) {
		var_168_string = "dt_house_1_03";
		return 0;
	}
	var_168_string = "";
	return 0;
}


func_204(var_16_int)
{
	var_17_float = 0; var_18_float = 0;
	GetGameTime(var_18_float);
	var_19_int = 0;
	var_18_float = var_19_int;
	var_16_int = var_19_int % (int)24;
	return 2;
}


func_336(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj();
	GetDiaryRoot(var_46_object);
	var_47_bool = var_46_object == 0; //@nz
	if(var_47_bool != 0) {
		Trace("Can't retrieve diary root");
		var_44_object = 0;
		return 2;
	}
	var_46_object = var_44_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_275(var_72_int, var_73_float)
{
	var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_float = 0;
	var_73_float = var_77_float;
	func_377(var_74_int, (int)539095, (int)539094, var_77_float);
	var_74_int = var_72_int;
	return 0;
}


func_212(var_154_int, var_155_float)
{
	var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_float = 0;
	var_155_float = var_159_float;
	func_377(var_156_int, (int)539089, (int)539088, var_159_float);
	var_156_int = var_154_int;
	return 0;
}


func_284()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)751, (int)2, (int)539736);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_349(var_127_bool, var_128_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_221(var_80_int, var_81_float)
{
	var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_float = 0;
	var_81_float = var_85_float;
	func_377(var_82_int, (int)539097, (int)539096, var_85_float);
	var_82_int = var_80_int;
	return 0;
}


func_349(var_35_bool, var_36_object, var_37_int)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0;
	func_336(Obj());
	var_44_object = var_41_object;
	@@var_41_object:Find(var_37_int, var_42_object);
	var_49_bool = var_42_object == 0; //@nz
	if(var_49_bool != 0) {
		var_51_int = "Can't find diary parent with id: " + var_37_int;
		Trace(var_51_int);
		var_35_bool = 0;
		return 6;
	}
	@@var_42_object:AddChild(var_36_object);
	SendWorldWndMessage((int)7);
	@@var_36_object:GetCategory(var_43_int);
	SetDiarySection(var_43_int);
	var_35_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_421(var_94_string, var_95_int)
{
	var_97_bool = var_95_int == (int)8;
	if(var_97_bool != 0) {
		var_94_string = "r5_House6_01";
		return 0;
	EMIT "GOTO 0x1bd";
	}
	var_99_bool = var_95_int == (int)9;
	if(var_99_bool != 0) {
		var_94_string = "dt_house2_01";
		return 0;
	EMIT "GOTO 0x1bd";
	}
	var_101_bool = var_95_int == (int)10;
	if(var_101_bool != 0) {
		var_94_string = "house7_02";
		return 0;
	EMIT "GOTO 0x1bd";
	}
	var_103_bool = var_95_int == (int)11;
	if(var_103_bool != 0) {
		var_94_string = "lc_house3_05";
		return 0;
	}
	var_94_string = "";
	return 0;
}


func_230(var_162_int, var_163_float)
{
	var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_float = 0;
	var_163_float = var_167_float;
	func_377(var_164_int, (int)539091, (int)539090, var_167_float);
	var_164_int = var_162_int;
	return 0;
}


func_504(var_26_int, var_27_float)
{
	var_29_bool = var_26_int == (int)8;
	if(var_29_bool != 0) {
		func_310();
		func_323();
		var_61_int = 0; var_62_float = 0;
		var_27_float = var_62_float;
		func_257(var_61_int, var_62_float);
	} else {
		var_71_bool = var_26_int == (int)9;
		if(var_71_bool != 0) {
			func_310();
			func_323();
			var_72_int = 0; var_73_float = 0;
			var_27_float = var_73_float;
			func_275(var_72_int, var_73_float);
			goto Label_560;
		}
		var_79_bool = var_26_int == (int)10;
		if(var_79_bool != 0) {
			func_310();
			func_323();
			var_80_int = 0; var_81_float = 0;
			var_27_float = var_81_float;
			func_221(var_80_int, var_81_float);
			goto Label_560;
		}
		var_87_bool = var_26_int == (int)11;
		if(var_87_bool == 0) goto Label_560;
		func_310();
		func_323();
		var_88_int = 0; var_89_float = 0;
		var_27_float = var_89_float;
		func_239(var_88_int, var_89_float);
	}
Label_560:
	return 0;
	
}


func_297()
{
	var_130_object = Obj(); var_131_object = Obj();
	CreateDiaryEntry(var_131_object, (int)752, (int)2, (int)539737);
	var_135_bool = 0; var_136_object = Obj(); var_137_int = 0;
	var_131_object = var_136_object;
	func_349(var_135_bool, var_136_object, (int)751);
	return 2;
}
EMIT "Stack[-1] = 0";


func_239(var_88_int, var_89_float)
{
	var_90_int = 0; var_91_int = 0; var_92_int = 0; var_93_float = 0;
	var_89_float = var_93_float;
	func_377(var_90_int, (int)539099, (int)539098, var_93_float);
	var_90_int = var_88_int;
	return 0;
}


func_310()
{
	var_30_object = Obj(); var_31_object = Obj();
	CreateDiaryEntry(var_31_object, (int)757, (int)2, (int)539742);
	var_35_bool = 0; var_36_object = Obj(); var_37_int = 0;
	var_31_object = var_36_object;
	func_349(var_35_bool, var_36_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_248(var_138_int, var_139_float)
{
	var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_float = 0;
	var_139_float = var_143_float;
	func_377(var_140_int, (int)539085, (int)539084, var_143_float);
	var_140_int = var_138_int;
	return 0;
}


func_377(var_63_int, var_64_int, var_65_int, var_66_float)
{
	var_67_int = 0; var_68_int = 0;
	AddMessage(var_64_int, var_65_int, var_66_float, var_68_int);
	SendWorldWndMessage((int)6);
	var_68_int = var_63_int;
	return 2;
}


func_447(var_118_int, var_119_float)
{
	var_121_bool = var_118_int == (int)8;
	if(var_121_bool != 0) {
		func_284();
		func_297();
		var_138_int = 0; var_139_float = 0;
		var_119_float = var_139_float;
		func_248(var_138_int, var_139_float);
	} else {
		var_145_bool = var_118_int == (int)9;
		if(var_145_bool != 0) {
			func_284();
			func_297();
			var_146_int = 0; var_147_float = 0;
			var_119_float = var_147_float;
			func_266(var_146_int, var_147_float);
			goto Label_503;
		}
		var_153_bool = var_118_int == (int)10;
		if(var_153_bool != 0) {
			func_284();
			func_297();
			var_154_int = 0; var_155_float = 0;
			var_119_float = var_155_float;
			func_212(var_154_int, var_155_float);
			goto Label_503;
		}
		var_161_bool = var_118_int == (int)11;
		if(var_161_bool == 0) goto Label_503;
		func_284();
		func_297();
		var_162_int = 0; var_163_float = 0;
		var_119_float = var_163_float;
		func_230(var_162_int, var_163_float);
	}
Label_503:
	return 0;
	
}


