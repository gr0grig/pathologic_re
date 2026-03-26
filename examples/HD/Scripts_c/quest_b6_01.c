// @IMPORTS: Hold/0,GetVariable/2,Trace/1,GetSceneByName/2,GetGameTime/1,SetTimeEvent/2,Trigger/2,SetVariable/2,irand/2,AddActor/6,GetMainOutdoorScene/1,RemoveActor/1,self/1,CreateObjectVector/1,AddBlankActor/4,AddMessage/4,SendWorldWndMessage/1
// @STRINGS: W:b6q01KlaraVisit|W:place_klara|W:storojka|W:pt_b6q01_klara|W:NPC_Klara|W:b6q01_klara.xml|W:remove_klara|W:cleanup|W:cutscene|W:cs_burah_danko_microscope|W:cutscene_end|W:b6q01MicroscopeCS|W:init_termitnik|W:termitnik2|W:pt_b6q01_mat|W:NPC_Mat|W:b6q01_mat.xml|W:pt_b6q01_agony|A:GetLocator|W:pers_worker|W:agony1_man.xml|W:pers_morlok|W:agony1_morlok.xml|W:pers_woman|W:agony1_woman.xml|W:pt_b6q01_butcher1|W:pers_butcher|W:b6q01_butcher.xml|A:add|W:pt_b6q01_butcher2|W:pt_b6q01_butcher3|W:clean_termitnik|W:init_altar|W:pt_b6q01_morlok1|W:b6q01_morlok1.xml|W:pt_b6q01_morlok2|W:b6q01_morlok2.xml|W:pt_b6q01_bull|W:pers_bull|W:b6q01_bull.xml|W:sacrifice|A:GetActor|A:Remove|W:quest_b6_01_cutscene|W:sacrifice_end|W:b6q01|W:fail|W:completed|W:.bin|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get
// @GLOBALS: 0:object:Bull
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object params=0
// @EVENT_9: op=0xc vars=int,float
// @EVENT_26: op=0x17 vars=string
// @PE: 0x1ac

task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("b6q01KlaraVisit", var_9_int);
	var_11_bool = var_9_int == 0; //@nz
	if(var_11_bool != 0) {
		var_12_int = 0; var_13_float = 0;
		var_7_float = var_13_float;
		func_428(var_12_int, var_13_float);
	}
	return 2;
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_string = ""; var_15_string = ""; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; var_22_object = Obj(); var_23_float = 0; var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_string = ""; var_31_int = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0;
	Trace(var_6_string);
	var_38_bool = var_6_string == "place_klara";
	if(var_38_bool != 0) {
		GetSceneByName(var_22_object, "storojka");
		var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = "";
		var_22_object = var_41_object;
		func_354(var_40_object, var_41_object, "pt_b6q01_klara", "NPC_Klara", "b6q01_klara.xml");
		var_0_object = var_40_object;
		GetGameTime(var_23_float);
		var_23_float = var_23_float + (float)0.4000000059604645;
		SetTimeEvent((int)0, var_23_float);
		var_22_object = 0;
	} else {
		var_61_bool = var_6_string == "remove_klara";
		if(var_61_bool != 0) {
			Trigger(var_0_object, "cleanup");
			goto Label_273;
		}
		var_64_bool = var_6_string == "cutscene";
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_string = "";
			func_343(var_65_object, "cs_burah_danko_microscope");
			goto Label_273;
		}
		var_74_bool = var_6_string == "cutscene_end";
		if(var_74_bool != 0) {
			SetVariable("b6q01MicroscopeCS", (int)1);
			goto Label_273;
		}
		var_78_bool = var_6_string == "init_termitnik";
		if(var_78_bool != 0) {
			GetSceneByName(var_24_object, "termitnik2");
			var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = "";
			var_24_object = var_81_object;
			func_354(var_80_object, var_81_object, "pt_b6q01_mat", "NPC_Mat", "b6q01_mat.xml");
			var_1_object = var_80_object;
			var_25_int = 1;

		Label_87:
			var_86_int = "pt_b6q01_agony" + var_25_int;
			@@var_24_object:GetLocator(var_86_int, var_26_bool, var_27_cvector, var_28_cvector);
			var_87_bool = var_26_bool == 0; //@nz
			if(var_87_bool != 0) {
			} else {
				irand(var_31_int, (int)3);
				var_105_bool = var_31_int == (int)0;
				if(var_105_bool != 0) {
					var_29_string = "pers_worker";
					var_30_string = "agony1_man.xml";
				} else {
					var_108_bool = var_31_int == (int)1;
					if(var_108_bool != 0) {
						var_29_string = "pers_morlok";
						var_30_string = "agony1_morlok.xml";
						goto Label_111;
					}
					var_29_string = "pers_woman";
					var_30_string = "agony1_woman.xml";
		}
				var_110_bool = var_6_string == "clean_termitnik";
				if(var_110_bool != 0) {
					Trigger(var_1_object, "cleanup");
					var_112_object = Obj(); var_113_string = "";
					var_112_object = var_2_object;
					func_409(var_112_object, "cleanup");
					var_124_object = Obj(); var_125_string = "";
					var_124_object = var_3_object;
					func_409(var_124_object, "cleanup");
					goto Label_273;
				}
				var_127_bool = var_6_string == "init_altar";
				if(var_127_bool != 0) {
					GetMainOutdoorScene(var_33_object);
					var_128_object = Obj(); var_129_object = Obj(); var_130_string = ""; var_131_string = ""; var_132_string = "";
					var_33_object = var_129_object;
					func_372(var_128_object, var_129_object, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
					var_4_object = var_128_object;
					var_146_object = Obj(); var_147_object = Obj(); var_148_string = ""; var_149_string = ""; var_150_string = "";
					var_33_object = var_147_object;
					func_372(var_146_object, var_147_object, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
					var_5_object = var_146_object;
					var_151_object = GlobalVars[0];
					var_152_object = Obj(); var_153_object = Obj(); var_154_string = ""; var_155_string = ""; var_156_string = "";
					var_33_object = var_153_object;
					func_354(var_152_object, var_153_object, "pt_b6q01_bull", "pers_bull", "b6q01_bull.xml");
					var_152_object = var_151_object;
					GlobalVars[0] = var_151_object;
					goto Label_273;
				}
				var_158_bool = var_6_string == "sacrifice";
				if(var_158_bool != 0) {
					var_159_object = GlobalVars[0];
					RemoveActor(var_159_object);
					@@@var_4_object:GetActor(var_34_object);
					RemoveActor(var_34_object);
					@@@var_4_object:Remove();
					@@@var_5_object:GetActor(var_34_object);
					RemoveActor(var_34_object);
					@@@var_5_object:Remove();
					var_160_object = Obj(); var_161_string = "";
					func_343(var_160_object, "quest_b6_01_cutscene");
					goto Label_273;
				}
				var_163_bool = var_6_string == "sacrifice_end";
				if(var_163_bool != 0) {
					GetMainOutdoorScene(var_35_object);
					var_164_object = Obj(); var_165_object = Obj(); var_166_string = ""; var_167_string = ""; var_168_string = "";
					var_35_object = var_165_object;
					func_390(var_164_object, var_165_object, "pt_b6q01_morlok1", "pers_morlok", "b6q01_morlok1.xml");
					var_4_object = var_164_object;
					var_183_object = Obj(); var_184_object = Obj(); var_185_string = ""; var_186_string = ""; var_187_string = "";
					var_35_object = var_184_object;
					func_390(var_183_object, var_184_object, "pt_b6q01_morlok2", "pers_morlok", "b6q01_morlok2.xml");
					var_5_object = var_183_object;
					goto Label_273;
				}
				var_189_bool = var_6_string == "cleanup";
				if(var_189_bool != 0) {
					GetVariable("b6q01", var_36_int);
					var_192_bool = var_36_int != (int)1000;
					if(var_192_bool != 0) {
						func_274();
					} else {
						func_290(var_31_int, var_32_object, Obj(), Obj(), Obj(), var_36_int);
				}
					var_212_bool = var_6_string == "fail";
					if(var_212_bool != 0) {
						func_274();
						goto Label_273;
					}
					var_214_bool = var_6_string == "completed";
					if(var_214_bool == 0) goto Label_273;
					func_282();
				}
				goto Label_273;
			}
		Label_111:
			AddActor(var_32_object, var_29_string, var_24_object, var_27_cvector, var_28_cvector, var_30_string);
			var_32_object = 0;
			var_25_int = var_25_int + (int)1;
			goto Label_87;
		}
		var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = "";
		var_24_object = var_89_object;
		func_354(var_88_object, var_89_object, "pt_b6q01_butcher1", "pers_butcher", "b6q01_butcher.xml");
		@@@var_3_object:add(var_88_object);
		var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = "";
		var_24_object = var_94_object;
		func_354(var_93_object, var_94_object, "pt_b6q01_butcher2", "pers_butcher", "b6q01_butcher.xml");
		@@@var_3_object:add(var_93_object);
		var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = "";
		var_24_object = var_99_object;
		func_354(var_98_object, var_99_object, "pt_b6q01_butcher3", "pers_butcher", "b6q01_butcher.xml");
		@@@var_3_object:add(var_98_object);
		var_24_object = 0;
		goto Label_273;
	}
Label_273:
	return 30;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_object = Obj();
	func_337(var_6_object);
	var_2_object = var_6_object;
	var_9_object = Obj();
	func_337(var_9_object);
	var_3_object = var_9_object;
	
Label_8:
	Hold();
	goto Label_8;
}
EMIT "Return(); Pop(0)";


func_354(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string)
{
	var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj();
	@@var_41_object:GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector);
	var_53_bool = var_49_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_55_int = "Locator " + var_42_string;
		var_57_int = var_55_int + " doesn't exist";
		Trace(var_57_int);
	} else {
		AddActor(Obj(), var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string);
	}
	var_52_object = var_40_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_290(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	EventDisable(9);
	var_195_object = Obj(); var_196_string = "";
	var_195_object = var_2_object;
	func_409(var_195_object, "cleanup");
	var_197_object = Obj(); var_198_string = "";
	var_197_object = var_3_object;
	func_409(var_197_object, "cleanup");
	var_199_object = var_1_object;
	if(var_199_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_201_object = var_4_object;
	if(var_201_object != 0) {
		@@@var_4_object:Remove();
	}
	var_202_object = var_5_object;
	if(var_202_object != 0) {
		@@@var_5_object:Remove();
	}
	var_203_object = GlobalVars[0];
	if(var_203_object != 0) {
		var_204_object = GlobalVars[0];
		Trigger(var_204_object, "cleanup");
	}
	var_206_object = var_0_object;
	if(var_206_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_208_object = Obj();
	func_331(var_208_object);
	RemoveActor(var_208_object);
	return 0;
}


func_390(var_164_object, var_165_object, var_166_string, var_167_string, var_168_string)
{
	var_169_bool = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_object = Obj(); var_173_bool = 0; var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_object = Obj();
	@@var_165_object:GetLocator(var_166_string, var_173_bool, var_174_cvector, var_175_cvector);
	var_177_bool = var_173_bool == 0; //@nz
	if(var_177_bool != 0) {
		var_179_int = "Locator " + var_166_string;
		var_181_int = var_179_int + " doesn't exist";
		Trace(var_181_int);
	} else {
		@@var_165_object:AddStationaryActor(Obj(), var_174_cvector, var_175_cvector, var_167_string, var_168_string, (bool)1);
	}
	var_176_object = var_164_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_331(var_208_object)
{
	var_209_object = Obj(); var_210_object = Obj();
	self(var_210_object);
	var_210_object = var_208_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_428(var_12_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_float = 0;
	var_13_float = var_17_float;
	func_437(var_14_int, (int)525670, (int)525669, var_17_float);
	var_14_int = var_12_int;
	return 0;
}


func_337(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_274()
{
	SetVariable("b6q01", (int)-1);
	func_290(var_31_int, var_32_object, var_33_object, var_34_object, var_35_object, var_36_int);
	return 0;
}


func_372(var_128_object, var_129_object, var_130_string, var_131_string, var_132_string)
{
	var_133_bool = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_object = Obj(); var_137_bool = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_object = Obj();
	@@var_129_object:GetLocator(var_130_string, var_137_bool, var_138_cvector, var_139_cvector);
	var_141_bool = var_137_bool == 0; //@nz
	if(var_141_bool != 0) {
		var_143_int = "Locator " + var_130_string;
		var_145_int = var_143_int + " doesn't exist";
		Trace(var_145_int);
	} else {
		@@var_129_object:AddStationaryActor(Obj(), var_138_cvector, var_139_cvector, var_131_string, var_132_string);
	}
	var_140_object = var_128_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_437(var_14_int, var_15_int, var_16_int, var_17_float)
{
	var_18_int = 0; var_19_int = 0;
	AddMessage(var_15_int, var_16_int, var_17_float, var_19_int);
	SendWorldWndMessage((int)6);
	var_19_int = var_14_int;
	return 2;
}


func_343(var_65_object, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj();
	GetMainOutdoorScene(var_69_object);
	var_72_int = var_66_string + ".bin";
	AddBlankActor(var_70_object, var_69_object, var_66_string, var_72_int);
	var_70_object = var_65_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_409(var_112_object, var_113_string)
{
	var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_int = 0; var_119_object = Obj();
	var_120_object = var_112_object;
	if(var_120_object != 0) {
		@@var_112_object:size(var_117_int);
		var_118_int = 0;

	Label_415:
		var_121_bool = var_118_int < var_117_int;
		if(var_121_bool != 0) {
			@@var_112_object:get(var_119_object, var_118_int);
			var_122_object = var_119_object;
			if(var_122_object != 0) {
				Trigger(var_119_object, var_113_string);
			}
			var_119_object = 0;
			var_118_int = var_118_int + (int)1;
			goto Label_415;
		}
	}
	return 6;
}


func_282()
{
	SetVariable("b6q01", (int)1000);
	func_290(var_31_int, var_32_object, var_33_object, var_34_object, var_35_object, var_36_int);
	return 0;
}


