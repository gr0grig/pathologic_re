// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,Trigger/2,GetMainOutdoorScene/1,GetGameTime/1,SetTimeEvent/2,SetVariable/2,FindActor/2,GetVariable/2,RemoveActor/1,self/1,CreateObjectVector/1,AddBlankActor/4,AddActor/6,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,AddMessage/4
// @STRINGS: W:cot_alexandr@door1|W:vera_kabak|W:shouse1_kabak|W:pt_b5q01_vera|W:pers_nudegirl|W:b5q01_vera1.xml|W:vera_stvorki|W:cleanup|W:b5q01_vera2.xml|W:vera_retreat|A:GetActor|W:place_butchers|W:pt_b5q01_butcher1|W:pers_butcher|W:b5q01_butcher.xml|A:add|W:pt_b5q01_butcher2|W:pt_b5q01_butcher3|W:pt_b5q01_nudegirl|W:b5q01_gwife.xml|W:butcher_attack|A:size|A:get|A:Remove|W:gwife_dead|W:b5q01WifeDead|W:player|W:b5q01|W:cutscene|W:cs_burah_danko_microscope|W:cutscene_end|W:b5q01MicroscopeCS|W:fail|W:completed|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|W:reputation|A:clear
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_9: op=0xd vars=int,float
// @EVENT_26: op=0x13 vars=string
// @PE: 0xd,0x12a,0x17b,0x1bd

task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_int, var_5_float)
{
	var_6_int = 0; var_7_float = 0;
	var_5_float = var_7_float;
	func_445(var_6_int, var_7_float);
	return 0;
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_float = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_float = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0;
	Trace(var_4_string);
	var_30_bool = var_4_string == "vera_kabak";
	if(var_30_bool != 0) {
		GetSceneByName(var_17_object, "shouse1_kabak");
		var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = "";
		var_17_object = var_33_object;
		func_326(var_32_object, var_33_object, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera1.xml");
		var_0_object = var_32_object;
		var_17_object = 0;
	} else {
		var_51_bool = var_4_string == "vera_stvorki";
		if(var_51_bool != 0) {
			Trigger(var_0_object, "cleanup");
			GetMainOutdoorScene(var_18_object);
			var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = "";
			var_18_object = var_54_object;
			func_344(var_53_object, var_54_object, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera2.xml");
			var_1_object = var_53_object;
			GetGameTime(var_19_float);
			var_19_float = var_19_float + (int)1;
			SetTimeEvent((int)0, var_19_float);
			var_18_object = 0;
			goto Label_217;
		}
		var_74_bool = var_4_string == "vera_retreat";
		if(var_74_bool != 0) {
			@@@var_1_object:GetActor(var_20_object);
			Trigger(var_20_object, "retreat");
			var_20_object = 0;
			goto Label_217;
		}
		var_77_bool = var_4_string == "place_butchers";
		if(var_77_bool != 0) {
			GetMainOutdoorScene(var_21_object);
			var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = "";
			var_21_object = var_79_object;
			func_344(var_78_object, var_79_object, "pt_b5q01_butcher1", "pers_butcher", "b5q01_butcher.xml");
			@@@var_2_object:add(var_78_object);
			var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = "";
			var_21_object = var_84_object;
			func_344(var_83_object, var_84_object, "pt_b5q01_butcher2", "pers_butcher", "b5q01_butcher.xml");
			@@@var_2_object:add(var_83_object);
			var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = "";
			var_21_object = var_89_object;
			func_344(var_88_object, var_89_object, "pt_b5q01_butcher3", "pers_butcher", "b5q01_butcher.xml");
			@@@var_2_object:add(var_88_object);
			var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = "";
			var_21_object = var_94_object;
			func_344(var_93_object, var_94_object, "pt_b5q01_nudegirl", "pers_nudegirl", "b5q01_gwife.xml");
			var_3_object = var_93_object;
			var_21_object = 0;
			goto Label_217;
		}
		var_99_bool = var_4_string == "butcher_attack";
		if(var_99_bool != 0) {
			@@@var_2_object:size(var_22_int);
			var_23_int = 0;

		Label_121:
			var_100_bool = var_23_int < var_22_int;
			if(var_100_bool != 0) {
				@@@var_2_object:get(var_24_object, var_23_int);
				var_101_object = var_24_object;
				if(var_101_object != 0) {
					@@var_24_object:GetActor(var_25_object);
					var_102_object = var_25_object;
					if(var_102_object != 0) {
						Trigger(var_25_object, "attack");
					}
					var_25_object = 0;
				}
				var_24_object = 0;
				var_23_int = var_23_int + (int)1;
				goto Label_121;
			}
			var_105_object = var_3_object;
			if(var_105_object != 0) {
				@@@var_3_object:GetActor(var_26_object);
				var_106_object = var_26_object;
				if(var_106_object != 0) {
					Trigger(var_26_object, "retreat");
				}
				@@@var_3_object:Remove();
			}
			goto Label_217;
		}
		var_109_bool = var_4_string == "gwife_dead";
		if(var_109_bool != 0) {
			SetVariable("b5q01WifeDead", (int)1);
			FindActor(var_27_object, "player");
			var_113_object = var_27_object;
			if(var_113_object != 0) {
				var_114_bool = 0; var_115_object = Obj(); var_116_float = 0;
				var_27_object = var_115_object;
				func_379(var_114_bool, var_115_object, (float)0.5);
			}
			goto Label_217;
		}
		var_153_bool = var_4_string == "cleanup";
		if(var_153_bool != 0) {
			GetVariable("b5q01", var_28_int);
			var_156_bool = var_28_int != (int)1000;
			if(var_156_bool != 0) {
				func_218();
			} else {
				func_234(var_25_object, Obj(), Obj(), var_28_int);
		}
			var_178_bool = var_4_string == "cutscene";
			if(var_178_bool != 0) {
				var_179_object = Obj(); var_180_string = "";
				func_315(var_179_object, "cs_burah_danko_microscope");
				goto Label_217;
			}
			var_188_bool = var_4_string == "cutscene_end";
			if(var_188_bool != 0) {
				SetVariable("b5q01MicroscopeCS", (int)1);
				goto Label_217;
			}
			var_192_bool = var_4_string == "fail";
			if(var_192_bool != 0) {
				func_218();
				goto Label_217;
			}
			var_194_bool = var_4_string == "completed";
			if(var_194_bool == 0) goto Label_217;
			func_226();
		}
		goto Label_217;
	}
Label_217:
	return 24;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_string = ""; var_5_bool = 0;
	func_362("cot_alexandr@door1", (bool)0);
	var_14_object = Obj();
	func_309(var_14_object);
	var_2_object = var_14_object;
	
Label_9:
	Hold();
	goto Label_9;
}
EMIT "Return(); Pop(0)";


func_258(var_133_bool, var_134_object, var_135_string)
{
	var_136_bool = 0; var_137_bool = 0;
	var_140_bool = IsFuncExist(var_134_object, "HasProperty", (int)2);
	var_141_bool = var_140_bool == 0; //@nz
	if(var_141_bool != 0) {
		var_133_bool = 0;
		return 2;
	}
	@@var_134_object:HasProperty(var_135_string, var_137_bool);
	var_137_bool = var_133_bool;
	return 2;
}


func_454(var_8_int, var_9_int, var_10_int, var_11_float)
{
	var_12_int = 0; var_13_int = 0;
	AddMessage(var_9_int, var_10_int, var_11_float, var_13_int);
	SendWorldWndMessage((int)6);
	var_13_int = var_8_int;
	return 2;
}


func_326(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj();
	@@var_33_object:GetLocator(var_34_string, var_41_bool, var_42_cvector, var_43_cvector);
	var_45_bool = var_41_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_47_int = "Locator " + var_34_string;
		var_49_int = var_47_int + " doesn't exist";
		Trace(var_49_int);
	} else {
		AddActor(Obj(), var_35_string, var_33_object, var_42_cvector, var_43_cvector, var_36_string);
	}
	var_44_object = var_32_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_270(var_125_bool, var_126_object, var_127_string, var_128_float, var_129_float, var_130_float)
{
	var_131_float = 0; var_132_float = 0;
	var_133_bool = 0; var_134_object = Obj(); var_135_string = "";
	var_126_object = var_134_object;
	var_127_string = var_135_string;
	func_258(var_133_bool, var_134_object, var_135_string);
	var_142_bool = var_133_bool == 0; //@nz
	if(var_142_bool != 0) {
		var_125_bool = 0;
		return 2;
	}
	@@var_126_object:GetProperty(var_127_string, var_132_float);
	var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0;
	var_144_float = var_132_float + var_128_float;
	var_129_float = var_145_float;
	var_130_float = var_146_float;
	func_298(var_143_float, var_144_float, var_145_float, var_146_float);
	@@var_126_object:SetProperty(var_127_string, var_143_float);
	var_125_bool = 1;
	return 2;
}


func_344(var_53_object, var_54_object, var_55_string, var_56_string, var_57_string)
{
	var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj(); var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj();
	@@var_54_object:GetLocator(var_55_string, var_62_bool, var_63_cvector, var_64_cvector);
	var_66_bool = var_62_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_68_int = "Locator " + var_55_string;
		var_70_int = var_68_int + " doesn't exist";
		Trace(var_70_int);
	} else {
		@@var_54_object:AddStationaryActor(Obj(), var_63_cvector, var_64_cvector, var_56_string, var_57_string);
	}
	var_65_object = var_53_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_218()
{
	SetVariable("b5q01", (int)-1);
	func_234(var_25_object, var_26_object, var_27_object, var_28_int);
	return 0;
}


func_414(var_121_float)
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateFloatVector(var_123_object);
	@@var_123_object:add(var_121_float);
	SendWorldWndMessage((int)16, var_123_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_226()
{
	SetVariable("b5q01", (int)1000);
	func_234(var_25_object, var_26_object, var_27_object, var_28_int);
	return 0;
}


func_292(var_174_object)
{
	var_175_object = Obj(); var_176_object = Obj();
	self(var_176_object);
	var_176_object = var_174_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_424(var_162_object)
{
	var_163_int = 0; var_164_int = 0; var_165_object = Obj(); var_166_int = 0; var_167_int = 0; var_168_object = Obj();
	var_169_object = var_162_object;
	if(var_169_object != 0) {
		@@var_162_object:size(var_166_int);
		var_167_int = 0;

	Label_430:
		var_170_bool = var_167_int < var_166_int;
		if(var_170_bool != 0) {
			@@var_162_object:get(var_168_object, var_167_int);
			var_171_object = var_168_object;
			if(var_171_object != 0) {
				@@var_168_object:Remove();
			}
			var_168_object = 0;
			var_167_int = var_167_int + (int)1;
			goto Label_430;
		}
		@@var_162_object:clear();
	}
	return 6;
}


func_362(var_4_string, var_5_bool)
{
	var_6_object = Obj(); var_7_object = Obj();
	FindActor(var_7_object, var_4_string);
	var_8_bool = var_7_object == 0; //@nz
	if(var_8_bool != 0) {
		var_10_int = "Door " + var_4_string;
		var_12_int = var_10_int + " not found";
		Trace(var_12_int);
	} else {
		@@var_7_object:SetProperty("locked", var_5_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_234(var_0_object, var_1_object, var_2_object, var_3_object)
{
	EventDisable(9);
	var_159_object = var_0_object;
	if(var_159_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_161_object = var_1_object;
	if(var_161_object != 0) {
		@@@var_1_object:Remove();
	}
	var_162_object = Obj();
	var_162_object = var_2_object;
	func_424(var_162_object);
	var_173_object = var_3_object;
	if(var_173_object != 0) {
		@@@var_3_object:Remove();
	}
	var_174_object = Obj();
	func_292(var_174_object);
	RemoveActor(var_174_object);
	return 0;
}


func_298(var_143_float, var_144_float, var_145_float, var_146_float)
{
	var_147_bool = var_144_float < var_145_float;
	if(var_147_bool != 0) {
		var_145_float = var_143_float;
		return 0;
	}
	var_148_bool = var_144_float > var_146_float;
	if(var_148_bool != 0) {
		var_146_float = var_143_float;
		return 0;
	}
	var_144_float = var_143_float;
	return 0;
}


func_315(var_179_object, var_180_string)
{
	var_181_object = Obj(); var_182_object = Obj(); var_183_object = Obj(); var_184_object = Obj();
	GetMainOutdoorScene(var_183_object);
	var_186_int = var_180_string + ".bin";
	AddBlankActor(var_184_object, var_183_object, var_180_string, var_186_int);
	var_184_object = var_179_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_309(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	CreateObjectVector(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_379(var_114_bool, var_115_object, var_116_float)
{
	var_117_bool = var_115_object == 0; //@nz
	if(var_117_bool != 0) {
		var_114_bool = 0;
		return 0;
	}
	var_119_bool = var_116_float > (int)0;
	if(var_119_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_150_bool = var_116_float < (int)0;
		if(var_150_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_400;
		}
		var_114_bool = 0;
		return 0;
	}
Label_400:
	var_121_float = 0;
	var_116_float = var_121_float;
	func_414(var_121_float);
	var_125_bool = 0; var_126_object = Obj(); var_127_string = ""; var_128_float = 0; var_129_float = 0; var_130_float = 0;
	var_115_object = var_126_object;
	var_116_float = var_128_float;
	func_270(var_125_bool, var_126_object, "reputation", var_128_float, (float)0, (float)1);
	var_114_bool = 1;
	return 0;
	
}


func_445(var_6_int, var_7_float)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_float = 0;
	var_7_float = var_11_float;
	func_454(var_8_int, (int)530811, (int)530810, var_11_float);
	var_8_int = var_6_int;
	return 0;
}


