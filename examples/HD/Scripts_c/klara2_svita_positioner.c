// @IMPORTS: SetTimeEvent/2,CreateObjectVector/1,Hold/0,Trace/1,TriggerWorld/1,GetMainOutdoorScene/1,rand/1,AddActor/6,Trigger/2,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,SetVariable/2
// @STRINGS: W:place_svita|W:wonder|W:lightning|W:bad_wonder|W:pt_k2system|W:_albinos|W:pers_rat|W:k2system_rat.xml|W:_patrol|W:pers_rat_big|W:k2system_rat_big.xml|W:_nude|W:_dohodyaga1|W:_dohodyaga2|W:pers_albinos|W:_albinos.xml|A:add|W:pers_patrool|W:_patrol.xml|W:pers_nudegirl|W:_nude.xml|W:pers_dohodyaga|W:_dohodyaga1.xml|W:_dohodyaga2.xml|A:clear|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get|A:Remove|A:GetActor|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:K2SystemSvitaRemoved
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int params=0
// @EVENT_26: op=0x17 vars=string
// @EVENT_9: op=0xa5 vars=int,float
// @PE: 0xa5,0x1c3,0x1ce

task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_object = Obj();
	Trace(var_2_string);
	var_8_bool = var_2_string == "place_svita";
	if(var_8_bool != 0) {
		var_9_int = 0;
		func_375((int)0);
		var_10_int = var_9_int;
		func_172(var_5_int, var_6_object, var_9_int);
	} else {
		var_120_bool = var_2_string == "wonder";
		if(var_120_bool != 0) {
			TriggerWorld("lightning");
			func_276(var_6_object);
			func_282(var_6_object);
			var_138_bool = var_1_int != (int)-1;
			if(var_138_bool != 0) {
				var_139_int = 0; var_140_bool = 0;
				var_139_int = var_1_int;
				func_451(var_139_int, (bool)1);
				func_384();
			}
			goto Label_164;
		}
		var_170_bool = var_2_string == "bad_wonder";
		if(var_170_bool == 0) goto Label_164;
		func_375((int)0);
		var_171_int = var_5_int;
		GetMainOutdoorScene(var_6_object);
		var_172_object = Obj(); var_173_object = Obj(); var_174_string = ""; var_175_string = ""; var_176_string = "";
		var_6_object = var_173_object;
		var_178_int = 0; var_179_int = 0;
		var_5_int = var_179_int;
		func_462(var_178_int, var_179_int);
		var_180_int = "pt_k2system" + var_178_int;
		var_174_string = var_180_int + "_albinos";
		func_294(var_172_object, var_173_object, var_174_string, "pers_rat", "k2system_rat.xml");
		var_195_bool = 0; var_196_float = 0;
		func_289(var_195_bool, (float)0.5);
		if(var_195_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj(); var_201_string = ""; var_202_string = ""; var_203_string = "";
			var_6_object = var_200_object;
			var_205_int = 0; var_206_int = 0;
			var_5_int = var_206_int;
			func_462(var_205_int, var_206_int);
			var_207_int = "pt_k2system" + var_205_int;
			var_201_string = var_207_int + "_patrol";
			func_294(var_199_object, var_200_object, var_201_string, "pers_rat_big", "k2system_rat_big.xml");
		}
		var_209_bool = 0; var_210_float = 0;
		func_289(var_209_bool, (float)0.5);
		if(var_209_bool != 0) {
			var_211_object = Obj(); var_212_object = Obj(); var_213_string = ""; var_214_string = ""; var_215_string = "";
			var_6_object = var_212_object;
			var_217_int = 0; var_218_int = 0;
			var_5_int = var_218_int;
			func_462(var_217_int, var_218_int);
			var_219_int = "pt_k2system" + var_217_int;
			var_213_string = var_219_int + "_nude";
			func_294(var_211_object, var_212_object, var_213_string, "pers_rat", "k2system_rat.xml");
		}
		var_221_bool = 0; var_222_float = 0;
		func_289(var_221_bool, (float)0.5);
		if(var_221_bool != 0) {
			var_223_object = Obj(); var_224_object = Obj(); var_225_string = ""; var_226_string = ""; var_227_string = "";
			var_6_object = var_224_object;
			var_229_int = 0; var_230_int = 0;
			var_5_int = var_230_int;
			func_462(var_229_int, var_230_int);
			var_231_int = "pt_k2system" + var_229_int;
			var_225_string = var_231_int + "_dohodyaga1";
			func_294(var_223_object, var_224_object, var_225_string, "pers_rat_big", "k2system_rat_big.xml");
		}
		var_233_bool = 0; var_234_float = 0;
		func_289(var_233_bool, (float)0.5);
		if(var_233_bool != 0) {
			var_235_object = Obj(); var_236_object = Obj(); var_237_string = ""; var_238_string = ""; var_239_string = "";
			var_6_object = var_236_object;
			var_241_int = 0; var_242_int = 0;
			var_5_int = var_242_int;
			func_462(var_241_int, var_242_int);
			var_243_int = "pt_k2system" + var_241_int;
			var_237_string = var_243_int + "_dohodyaga2";
			func_294(var_235_object, var_236_object, var_237_string, "pers_rat", "k2system_rat.xml");
		}
		func_397();
		var_6_object = 0;
	}
Label_164:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	var_4_bool = var_2_int == var_1_int;
	if(var_4_bool != 0) {
		func_282(var_3_float);
	}
	return 0;
}


main(var_0_object, var_1_int)
{
	var_2_int = 0; var_3_int = 0;
	var_1_int = -1;
	var_3_int = 0;
	
Label_3:
	var_5_bool = var_3_int < (int)6;
	if(var_5_bool != 0) {
		var_7_int = (int)6 + var_3_int;
		var_9_int = var_3_int + (int)6;
		var_11_float = var_9_int * (int)24;
		SetTimeEvent(var_7_int, var_11_float);
		var_3_int = var_3_int + (int)1;
		goto Label_3;
	}
	CreateObjectVector(var_0_object);
	
Label_19:
	Hold();
	goto Label_19;
}
EMIT "Return(); Pop(2)";


func_384()
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateDiaryEntry(var_147_object, (int)727, (int)2, (int)539106);
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0;
	var_147_object = var_152_object;
	func_423(var_151_bool, var_152_object, (int)723);
	return 2;
}
EMIT "Stack[-1] = 0";


func_289(var_195_bool, var_196_float)
{
	var_197_float = 0; var_198_float = 0;
	rand(var_198_float);
	var_195_bool = var_198_float < var_196_float;
	return 2;
}


func_451(var_139_int, var_140_bool)
{
	var_142_int = "K2SystemSvitaRemoved" + var_139_int;
	var_143_bool = var_140_bool;
	if(var_143_bool != 0) {
		var_144_int = 1;
	} else {
		var_145_int = 0; //@pi
	}
	SetVariable(var_142_int, var_144_int);
	return 0;
	
}


func_294(var_172_object, var_173_object, var_174_string, var_175_string, var_176_string)
{
	var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_bool = 0; var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_object = Obj();
	@@var_173_object:GetLocator(var_174_string, var_186_bool, var_187_cvector, var_188_cvector);
	var_190_bool = var_186_bool == 0; //@nz
	if(var_190_bool != 0) {
		var_192_int = "Locator " + var_174_string;
		var_194_int = var_192_int + " doesn't exist";
		Trace(var_194_int);
	} else {
		AddActor(Obj(), var_175_string, var_173_object, var_187_cvector, var_188_cvector, var_176_string);
	}
	var_189_object = var_172_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_423(var_151_bool, var_152_object, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; var_157_object = Obj(); var_158_object = Obj(); var_159_int = 0;
	func_410(Obj());
	var_160_object = var_157_object;
	@@var_157_object:Find(var_153_int, var_158_object);
	var_165_bool = var_158_object == 0; //@nz
	if(var_165_bool != 0) {
		var_167_int = "Can't find diary parent with id: " + var_153_int;
		Trace(var_167_int);
		var_151_bool = 0;
		return 6;
	}
	@@var_158_object:AddChild(var_152_object);
	SendWorldWndMessage((int)7);
	@@var_152_object:GetCategory(var_159_int);
	SetDiarySection(var_159_int);
	var_151_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_330(var_5_object)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_object = Obj();
	var_12_object = var_5_object;
	if(var_12_object != 0) {
		@@var_5_object:size(var_9_int);
		var_10_int = 0;

	Label_336:
		var_13_bool = var_10_int < var_9_int;
		if(var_13_bool != 0) {
			@@var_5_object:get(var_11_object, var_10_int);
			var_14_object = var_11_object;
			if(var_14_object != 0) {
				@@var_11_object:Remove();
			}
			var_11_object = 0;
			var_10_int = var_10_int + (int)1;
			goto Label_336;
		}
		@@var_5_object:clear();
	}
	return 6;
}


func_172(var_0_object, var_1_int, var_9_int)
{
	var_16_object = Obj(); var_17_object = Obj();
	GetMainOutdoorScene(var_17_object);
	func_282(var_17_object);
	var_1_int = var_9_int;
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = "";
	var_17_object = var_30_object;
	var_35_int = 0; var_36_int = 0;
	var_9_int = var_36_int;
	func_462(var_35_int, var_36_int);
	var_49_int = "pt_k2system" + var_35_int;
	var_31_string = var_49_int + "_albinos";
	var_52_int = "k2system" + var_9_int;
	var_33_string = var_52_int + "_albinos.xml";
	func_312(var_29_object, var_30_object, var_31_string, "pers_albinos", var_33_string);
	@@@var_0_object:add(var_29_object);
	var_67_object = Obj(); var_68_object = Obj(); var_69_string = ""; var_70_string = ""; var_71_string = "";
	var_17_object = var_68_object;
	var_73_int = 0; var_74_int = 0;
	var_9_int = var_74_int;
	func_462(var_73_int, var_74_int);
	var_75_int = "pt_k2system" + var_73_int;
	var_69_string = var_75_int + "_patrol";
	var_78_int = "k2system" + var_9_int;
	var_71_string = var_78_int + "_patrol.xml";
	func_312(var_67_object, var_68_object, var_69_string, "pers_patrool", var_71_string);
	@@@var_0_object:add(var_67_object);
	var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = "";
	var_17_object = var_81_object;
	var_86_int = 0; var_87_int = 0;
	var_9_int = var_87_int;
	func_462(var_86_int, var_87_int);
	var_88_int = "pt_k2system" + var_86_int;
	var_82_string = var_88_int + "_nude";
	var_91_int = "k2system" + var_9_int;
	var_84_string = var_91_int + "_nude.xml";
	func_312(var_80_object, var_81_object, var_82_string, "pers_nudegirl", var_84_string);
	@@@var_0_object:add(var_80_object);
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = "";
	var_17_object = var_94_object;
	var_99_int = 0; var_100_int = 0;
	var_9_int = var_100_int;
	func_462(var_99_int, var_100_int);
	var_101_int = "pt_k2system" + var_99_int;
	var_95_string = var_101_int + "_dohodyaga1";
	var_104_int = "k2system" + var_9_int;
	var_97_string = var_104_int + "_dohodyaga1.xml";
	func_312(var_93_object, var_94_object, var_95_string, "pers_dohodyaga", var_97_string);
	@@@var_0_object:add(var_93_object);
	var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = "";
	var_17_object = var_107_object;
	var_112_int = 0; var_113_int = 0;
	var_9_int = var_113_int;
	func_462(var_112_int, var_113_int);
	var_114_int = "pt_k2system" + var_112_int;
	var_108_string = var_114_int + "_dohodyaga2";
	var_117_int = "k2system" + var_9_int;
	var_110_string = var_117_int + "_dohodyaga2.xml";
	func_312(var_106_object, var_107_object, var_108_string, "pers_dohodyaga", var_110_string);
	@@@var_0_object:add(var_106_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_397()
{
	var_245_object = Obj(); var_246_object = Obj();
	CreateDiaryEntry(var_246_object, (int)728, (int)2, (int)539107);
	var_250_bool = 0; var_251_object = Obj(); var_252_int = 0;
	var_246_object = var_251_object;
	func_423(var_250_bool, var_251_object, (int)723);
	return 2;
}
EMIT "Stack[-1] = 0";


func_462(var_35_int, var_36_int)
{
	var_38_bool = var_36_int == (int)6;
	if(var_38_bool != 0) {
		var_35_int = 7;
		return 0;
	}
	var_40_bool = var_36_int == (int)7;
	if(var_40_bool != 0) {
		var_35_int = 11;
		return 0;
	}
	var_42_bool = var_36_int == (int)8;
	if(var_42_bool != 0) {
		var_35_int = 6;
		return 0;
	}
	var_44_bool = var_36_int == (int)9;
	if(var_44_bool != 0) {
		var_35_int = 9;
		return 0;
	}
	var_46_bool = var_36_int == (int)10;
	if(var_46_bool != 0) {
		var_35_int = 10;
		return 0;
	}
	var_48_bool = var_36_int == (int)11;
	if(var_48_bool != 0) {
		var_35_int = 8;
		return 0;
	}
	var_36_int = var_35_int;
	return 0;
}


func_410(var_160_object)
{
	var_161_object = Obj(); var_162_object = Obj();
	GetDiaryRoot(var_162_object);
	var_163_bool = var_162_object == 0; //@nz
	if(var_163_bool != 0) {
		Trace("Can't retrieve diary root");
		var_160_object = 0;
		return 2;
	}
	var_162_object = var_160_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_276(var_0_object)
{
	var_122_object = Obj(); var_123_string = "";
	var_122_object = var_0_object;
	func_351(var_122_object, "wonder");
	return 0;
}


func_375(var_10_int)
{
	var_11_float = 0; var_12_float = 0;
	GetGameTime(var_12_float);
	var_14_int = 0;
	var_14_int = var_12_float / (int)24;
	var_10_int = (int)1 + var_14_int;
	return 2;
}


func_312(var_29_object, var_30_object, var_31_string, var_32_string, var_33_string)
{
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj(); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj();
	@@var_30_object:GetLocator(var_31_string, var_58_bool, var_59_cvector, var_60_cvector);
	var_62_bool = var_58_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_64_int = "Locator " + var_31_string;
		var_66_int = var_64_int + " doesn't exist";
		Trace(var_66_int);
	} else {
		@@var_30_object:AddStationaryActor(Obj(), var_59_cvector, var_60_cvector, var_32_string, var_33_string);
	}
	var_61_object = var_29_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_282(var_0_object)
{
	var_5_object = Obj();
	var_5_object = var_0_object;
	func_330(var_5_object);
	@@@var_0_object:clear();
	return 0;
}


func_351(var_122_object, var_123_string)
{
	var_124_int = 0; var_125_int = 0; var_126_object = Obj(); var_127_object = Obj(); var_128_int = 0; var_129_int = 0; var_130_object = Obj(); var_131_object = Obj();
	var_132_object = var_122_object;
	if(var_132_object != 0) {
		@@var_122_object:size(var_128_int);
		var_129_int = 0;

	Label_357:
		var_133_bool = var_129_int < var_128_int;
		if(var_133_bool != 0) {
			@@var_122_object:get(var_130_object, var_129_int);
			var_134_object = var_130_object;
			if(var_134_object != 0) {
				@@var_130_object:GetActor(var_131_object);
				var_135_object = var_131_object;
				if(var_135_object != 0) {
					Trigger(var_131_object, var_123_string);
				}
				var_131_object = 0;
			}
			var_130_object = 0;
			var_129_int = var_129_int + (int)1;
			goto Label_357;
		}
	}
	return 8;
}


