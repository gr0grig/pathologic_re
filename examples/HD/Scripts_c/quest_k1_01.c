// @IMPORTS: GetMainOutdoorScene/1,GetSceneByName/2,Hold/0,Trace/1,Trigger/2,SetVariable/2,RemoveActor/1,GetVariable/2,FindActor/2,self/1,AddBlankActor/4,AddActor/6,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: W:storojka@door1|W:burah_home@door1|W:cot_katerina@door1|W:cot_alexandr@door1|W:pt_k1q01_birdmask|W:pers_birdmask|W:k1q01_birdmask.xml|W:pt_k1q01_whitemask|W:pers_whitemask|W:k1q01_whitemask.xml|W:pt_k1q01_grabitel1|W:pers_grabitel|W:k1q01_grabitel.xml|W:pt_k1q01_grabitel2|W:storojka|W:pt_k1q01_katerina|W:NPC_Katerina|W:k1q01_katerina.xml|W:remove_whitemask|A:Remove|W:remove_birdmask|W:remove_katerina|W:cleanup|W:init_alexandr|W:cot_anna@door1|W:pt_k1q01_doberman|W:pers_doberman|W:k1q01_doberman.xml|W:pt_k1q01_dohodyaga|W:pers_dohodyaga|W:k1q01_dohodyaga.xml|W:cot_anna|W:pt_k1q01_danko|W:NPC_Bakalavr|W:k1q01_danko.xml|W:pt_k1q01_wastedmale1|W:pers_wasted_male|W:k1q01_statist.xml|W:pt_k1q01_wastedmale2|W:pt_k1q01_woman|W:pers_woman|W:pt_k1q01_agony|W:pers_worker|W:k1q01_agony.xml|W:doberman_dead|W:k1q01DobermanDead|W:cure_worker|W:quest_k1_01_cutscene|W:cutscene_end|W:pt_k1q01_worker|W:k1q01_worker.xml|W:k1q01Healed|W:k1q01|W:fail|W:completed|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|W:reputation|A:add|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,object,object,object,object,object,object,object params=0
// @EVENT_26: op=0x47 vars=string
// @PE: 0x195,0x1f3

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0;
	Trace(var_13_string);
	var_21_bool = var_13_string == "remove_whitemask";
	if(var_21_bool != 0) {
		var_22_object = var_1_object;
		if(var_22_object != 0) {
			@@@var_1_object:Remove();
		}
	} else {
		var_24_bool = var_13_string == "remove_birdmask";
		if(var_24_bool != 0) {
			var_25_object = var_0_object;
			if(var_25_object != 0) {
				@@@var_0_object:Remove();
			}
			goto Label_275;
		}
		var_27_bool = var_13_string == "remove_katerina";
		if(var_27_bool != 0) {
			var_28_object = var_2_object;
			if(var_28_object != 0) {
				Trigger(var_2_object, "cleanup");
			}
			var_30_string = ""; var_31_bool = 0;
			func_482("cot_katerina@door1", (bool)0);
			var_40_string = ""; var_41_bool = 0;
			func_482("cot_alexandr@door1", (bool)0);
			goto Label_275;
		}
		var_43_bool = var_13_string == "init_alexandr";
		if(var_43_bool != 0) {
			var_44_string = ""; var_45_bool = 0;
			func_482("cot_anna@door1", (bool)0);
			GetMainOutdoorScene(var_17_object);
			var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = "";
			var_17_object = var_47_object;
			func_445(var_46_object, var_47_object, "pt_k1q01_doberman", "pers_doberman", "k1q01_doberman.xml");
			var_4_object = var_46_object;
			var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = "";
			var_17_object = var_65_object;
			func_445(var_64_object, var_65_object, "pt_k1q01_dohodyaga", "pers_dohodyaga", "k1q01_dohodyaga.xml");
			var_8_object = var_64_object;
			GetSceneByName(var_17_object, "cot_anna");
			var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = ""; var_74_string = "";
			var_17_object = var_71_object;
			func_427(var_70_object, var_71_object, "pt_k1q01_danko", "NPC_Bakalavr", "k1q01_danko.xml");
			var_3_object = var_70_object;
			var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = "";
			var_17_object = var_89_object;
			func_427(var_88_object, var_89_object, "pt_k1q01_wastedmale1", "pers_wasted_male", "k1q01_statist.xml");
			var_5_object = var_88_object;
			var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = "";
			var_17_object = var_94_object;
			func_427(var_93_object, var_94_object, "pt_k1q01_wastedmale2", "pers_wasted_male", "k1q01_statist.xml");
			var_6_object = var_93_object;
			var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = "";
			var_17_object = var_99_object;
			func_427(var_98_object, var_99_object, "pt_k1q01_woman", "pers_woman", "k1q01_statist.xml");
			var_9_object = var_98_object;
			var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; var_107_string = "";
			var_17_object = var_104_object;
			func_427(var_103_object, var_104_object, "pt_k1q01_agony", "pers_worker", "k1q01_agony.xml");
			var_7_object = var_103_object;
			goto Label_275;
		}
		var_109_bool = var_13_string == "doberman_dead";
		if(var_109_bool != 0) {
			var_110_object = var_4_object;
			if(var_110_object != 0) {
				@@@var_4_object:Remove();
			}
			SetVariable("k1q01DobermanDead", (int)1);
			func_544();
			goto Label_275;
		}
		var_137_bool = var_13_string == "cure_worker";
		if(var_137_bool != 0) {
			RemoveActor(var_7_object);
			var_7_object = 0;
			var_138_object = Obj(); var_139_string = "";
			func_416(var_138_object, "quest_k1_01_cutscene");
			goto Label_275;
		}
		var_147_bool = var_13_string == "cutscene_end";
		if(var_147_bool != 0) {
			GetSceneByName(var_18_object, "cot_anna");
			var_149_object = Obj(); var_150_object = Obj(); var_151_string = ""; var_152_string = ""; var_153_string = "";
			var_18_object = var_150_object;
			func_427(var_149_object, var_150_object, "pt_k1q01_worker", "pers_worker", "k1q01_worker.xml");
			var_10_object = var_149_object;
			SetVariable("k1q01Healed", (int)1);
			func_557();
			var_164_bool = 0; var_165_object = Obj(); var_166_float = 0;
			func_358(Obj());
			var_167_object = var_165_object;
			func_499(var_164_bool, var_165_object, (float)0.25);
			var_206_object = var_4_object;
			if(var_206_object != 0) {
				@@@var_4_object:Remove();
			}
			var_207_object = var_8_object;
			if(var_207_object != 0) {
				@@@var_8_object:Remove();
			}
			goto Label_275;
		}
		var_209_bool = var_13_string == "cleanup";
		if(var_209_bool != 0) {
			GetVariable("k1q01", var_19_int);
			var_212_bool = var_19_int != (int)1000;
			if(var_212_bool != 0) {
				func_276();
			} else {
				func_292(var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_string, var_14_object, var_15_object, var_16_int, Obj(), Obj(), var_19_int);
		}
			var_239_bool = var_13_string == "fail";
			if(var_239_bool != 0) {
				func_276();
				goto Label_275;
			}
			var_241_bool = var_13_string == "completed";
			if(var_241_bool == 0) goto Label_275;
			func_284();
		}
		goto Label_275;
	}
Label_275:
	return 6;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	var_15_string = ""; var_16_bool = 0;
	func_482("storojka@door1", (bool)0);
	var_25_string = ""; var_26_bool = 0;
	func_482("burah_home@door1", (bool)0);
	var_27_string = ""; var_28_bool = 0;
	func_482("cot_katerina@door1", (bool)1);
	var_29_string = ""; var_30_bool = 0;
	func_482("cot_alexandr@door1", (bool)1);
	GetMainOutdoorScene(var_14_object);
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = "";
	var_14_object = var_32_object;
	func_463(var_31_object, var_32_object, "pt_k1q01_birdmask", "pers_birdmask", "k1q01_birdmask.xml");
	var_0_object = var_31_object;
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = "";
	var_14_object = var_51_object;
	func_463(var_50_object, var_51_object, "pt_k1q01_whitemask", "pers_whitemask", "k1q01_whitemask.xml");
	var_1_object = var_50_object;
	var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = ""; var_59_string = "";
	var_14_object = var_56_object;
	func_445(var_55_object, var_56_object, "pt_k1q01_grabitel1", "pers_grabitel", "k1q01_grabitel.xml");
	var_11_object = var_55_object;
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = "";
	var_14_object = var_74_object;
	func_445(var_73_object, var_74_object, "pt_k1q01_grabitel2", "pers_grabitel", "k1q01_grabitel.xml");
	var_12_object = var_73_object;
	GetSceneByName(var_14_object, "storojka");
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = "";
	var_14_object = var_80_object;
	func_427(var_79_object, var_80_object, "pt_k1q01_katerina", "NPC_Katerina", "k1q01_katerina.xml");
	var_2_object = var_79_object;
	
Label_66:
	Hold();
	goto Label_66;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_583(var_118_bool, var_119_object, var_120_int)
{
	var_121_object = Obj(); var_122_object = Obj(); var_123_int = 0; var_124_object = Obj(); var_125_object = Obj(); var_126_int = 0;
	func_570(Obj());
	var_127_object = var_124_object;
	@@var_124_object:Find(var_120_int, var_125_object);
	var_132_bool = var_125_object == 0; //@nz
	if(var_132_bool != 0) {
		var_134_int = "Can't find diary parent with id: " + var_120_int;
		Trace(var_134_int);
		var_118_bool = 0;
		return 6;
	}
	@@var_125_object:AddChild(var_119_object);
	SendWorldWndMessage((int)7);
	@@var_119_object:GetCategory(var_126_int);
	SetDiarySection(var_126_int);
	var_118_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_399(var_235_object)
{
	var_236_object = Obj(); var_237_object = Obj();
	self(var_237_object);
	var_237_object = var_235_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_463(var_31_object, var_32_object, var_33_string, var_34_string, var_35_string)
{
	var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj();
	@@var_32_object:GetLocator(var_33_string, var_40_bool, var_41_cvector, var_42_cvector);
	var_44_bool = var_40_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_46_int = "Locator " + var_33_string;
		var_48_int = var_46_int + " doesn't exist";
		Trace(var_48_int);
	} else {
		@@var_32_object:AddStationaryActor(Obj(), var_41_cvector, var_42_cvector, var_34_string, var_35_string, (bool)1);
	}
	var_43_object = var_31_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_276()
{
	SetVariable("k1q01", (int)-1);
	func_292(var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_string, var_14_object, var_15_object, var_16_int, var_17_object, var_18_object, var_19_int);
	return 0;
}


func_405(var_197_float, var_198_float, var_199_float, var_200_float)
{
	var_201_bool = var_198_float < var_199_float;
	if(var_201_bool != 0) {
		var_199_float = var_197_float;
		return 0;
	}
	var_202_bool = var_198_float > var_200_float;
	if(var_202_bool != 0) {
		var_200_float = var_197_float;
		return 0;
	}
	var_198_float = var_197_float;
	return 0;
}


func_534(var_175_float)
{
	var_176_object = Obj(); var_177_object = Obj();
	CreateFloatVector(var_177_object);
	@@var_177_object:add(var_175_float);
	SendWorldWndMessage((int)16, var_177_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_284()
{
	SetVariable("k1q01", (int)1000);
	func_292(var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_string, var_14_object, var_15_object, var_16_int, var_17_object, var_18_object, var_19_int);
	return 0;
}


func_544()
{
	var_113_object = Obj(); var_114_object = Obj();
	CreateDiaryEntry(var_114_object, (int)325, (int)1, (int)524741);
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0;
	var_114_object = var_119_object;
	func_583(var_118_bool, var_119_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_416(var_138_object, var_139_string)
{
	var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); var_143_object = Obj();
	GetMainOutdoorScene(var_142_object);
	var_145_int = var_139_string + ".bin";
	AddBlankActor(var_143_object, var_142_object, var_139_string, var_145_int);
	var_143_object = var_138_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_482(var_15_string, var_16_bool)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, var_15_string);
	var_19_bool = var_18_object == 0; //@nz
	if(var_19_bool != 0) {
		var_21_int = "Door " + var_15_string;
		var_23_int = var_21_int + " not found";
		Trace(var_23_int);
	} else {
		@@var_18_object:SetProperty("locked", var_16_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_292(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object)
{
	EventDisable(26);
	var_215_object = var_1_object;
	if(var_215_object != 0) {
		@@@var_1_object:Remove();
	}
	var_216_object = var_0_object;
	if(var_216_object != 0) {
		@@@var_0_object:Remove();
	}
	var_217_object = var_11_object;
	if(var_217_object != 0) {
		@@@var_11_object:Remove();
	}
	var_218_object = var_12_object;
	if(var_218_object != 0) {
		@@@var_12_object:Remove();
	}
	var_219_object = var_4_object;
	if(var_219_object != 0) {
		@@@var_4_object:Remove();
	}
	var_220_object = var_8_object;
	if(var_220_object != 0) {
		@@@var_8_object:Remove();
	}
	var_221_object = var_2_object;
	if(var_221_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	var_223_object = var_3_object;
	if(var_223_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_225_object = var_5_object;
	if(var_225_object != 0) {
		Trigger(var_5_object, "cleanup");
	}
	var_227_object = var_6_object;
	if(var_227_object != 0) {
		Trigger(var_6_object, "cleanup");
	}
	var_229_object = var_9_object;
	if(var_229_object != 0) {
		Trigger(var_9_object, "cleanup");
	}
	var_231_object = var_10_object;
	if(var_231_object != 0) {
		Trigger(var_10_object, "cleanup");
	}
	var_233_string = ""; var_234_bool = 0;
	func_482("cot_katerina@door1", (bool)0);
	var_235_object = Obj();
	func_399(var_235_object);
	RemoveActor(var_235_object);
	return 0;
}


func_358(var_167_object)
{
	var_168_object = Obj(); var_169_object = Obj();
	FindActor(var_169_object, "player");
	var_169_object = var_167_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_427(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string)
{
	var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj();
	@@var_80_object:GetLocator(var_81_string, var_88_bool, var_89_cvector, var_90_cvector);
	var_92_bool = var_88_bool == 0; //@nz
	if(var_92_bool != 0) {
		var_94_int = "Locator " + var_81_string;
		var_96_int = var_94_int + " doesn't exist";
		Trace(var_96_int);
	} else {
		AddActor(Obj(), var_82_string, var_80_object, var_89_cvector, var_90_cvector, var_83_string);
	}
	var_91_object = var_79_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_557()
{
	var_156_object = Obj(); var_157_object = Obj();
	CreateDiaryEntry(var_157_object, (int)323, (int)1, (int)524739);
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0;
	var_157_object = var_162_object;
	func_583(var_161_bool, var_162_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_365(var_187_bool, var_188_object, var_189_string)
{
	var_190_bool = 0; var_191_bool = 0;
	var_194_bool = IsFuncExist(var_188_object, "HasProperty", (int)2);
	var_195_bool = var_194_bool == 0; //@nz
	if(var_195_bool != 0) {
		var_187_bool = 0;
		return 2;
	}
	@@var_188_object:HasProperty(var_189_string, var_191_bool);
	var_191_bool = var_187_bool;
	return 2;
}


func_499(var_164_bool, var_165_object, var_166_float)
{
	var_171_bool = var_165_object == 0; //@nz
	if(var_171_bool != 0) {
		var_164_bool = 0;
		return 0;
	}
	var_173_bool = var_166_float > (int)0;
	if(var_173_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_204_bool = var_166_float < (int)0;
		if(var_204_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_520;
		}
		var_164_bool = 0;
		return 0;
	}
Label_520:
	var_175_float = 0;
	var_166_float = var_175_float;
	func_534(var_175_float);
	var_179_bool = 0; var_180_object = Obj(); var_181_string = ""; var_182_float = 0; var_183_float = 0; var_184_float = 0;
	var_165_object = var_180_object;
	var_166_float = var_182_float;
	func_377(var_179_bool, var_180_object, "reputation", var_182_float, (float)0, (float)1);
	var_164_bool = 1;
	return 0;
	
}


func_377(var_179_bool, var_180_object, var_181_string, var_182_float, var_183_float, var_184_float)
{
	var_185_float = 0; var_186_float = 0;
	var_187_bool = 0; var_188_object = Obj(); var_189_string = "";
	var_180_object = var_188_object;
	var_181_string = var_189_string;
	func_365(var_187_bool, var_188_object, var_189_string);
	var_196_bool = var_187_bool == 0; //@nz
	if(var_196_bool != 0) {
		var_179_bool = 0;
		return 2;
	}
	@@var_180_object:GetProperty(var_181_string, var_186_float);
	var_197_float = 0; var_198_float = 0; var_199_float = 0; var_200_float = 0;
	var_198_float = var_186_float + var_182_float;
	var_183_float = var_199_float;
	var_184_float = var_200_float;
	func_405(var_197_float, var_198_float, var_199_float, var_200_float);
	@@var_180_object:SetProperty(var_181_string, var_197_float);
	var_179_bool = 1;
	return 2;
}


func_570(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj();
	GetDiaryRoot(var_129_object);
	var_130_bool = var_129_object == 0; //@nz
	if(var_130_bool != 0) {
		Trace("Can't retrieve diary root");
		var_127_object = 0;
		return 2;
	}
	var_129_object = var_127_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_445(var_55_object, var_56_object, var_57_string, var_58_string, var_59_string)
{
	var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	@@var_56_object:GetLocator(var_57_string, var_64_bool, var_65_cvector, var_66_cvector);
	var_68_bool = var_64_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_70_int = "Locator " + var_57_string;
		var_72_int = var_70_int + " doesn't exist";
		Trace(var_72_int);
	} else {
		@@var_56_object:AddStationaryActor(Obj(), var_65_cvector, var_66_cvector, var_58_string, var_59_string);
	}
	var_67_object = var_55_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


