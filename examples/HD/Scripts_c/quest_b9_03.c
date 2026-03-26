// @IMPORTS: GetSceneByName/2,Trigger/2,GetActiveScene/1,SetVariable/2,Trace/1,PlaySound/1,GetMainOutdoorScene/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,AddActor/6,FindActor/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:sobor|W:noaglaja|W:cot_kapella|W:b9q03BadInit|W:pt_b9q03_aglaja|W:NPC_Aglaja|W:b9q03_aglaja.xml|W:init_house_spi4ka|W:nospi4ka|W:pt_b9q03_doberman1|W:pers_doberman|W:b9q03_doberman.xml|A:add|W:pt_b9q03_doberman2|W:cleanup|W:doberman_attack|W:ihouse_spi4ka@door1|W:ihouse_spi4ka@door2|W:door_close|W:doberman_dead|A:size|W:door_open|W:place_follower|W:pt_b9q03_follower|W:pers_boy|W:b9q03_follower.xml|W:init_bonefires|W:pt_b9q03_b1_doberman1|W:b9q03_e_doberman.xml|W:pt_b9q03_b1_morlok1|W:pers_morlok|W:b9q03_e_morlok.xml|W:pt_b9q03_b1_morlok2|W:pt_b9q03_b2_doberman1|W:pt_b9q03_b2_grabitel1|W:pers_grabitel|W:b9q03_e_grabitel.xml|W:pt_b9q03_b2_grabitel2|W:pt_b9q03_b3_doberman1|W:pt_b9q03_b3_wastedmale1|W:pers_wasted_male|W:b9q03_e_wasted_male.xml|W:pt_b9q03_b3_hunter1|W:pers_hunter|W:b9q03_e_hunter.xml|W:pt_b9q03_b4_doberman1|W:pt_b9q03_b4_doberman2|W:pt_b9q03_b4_doberman3|W:bonfire_burn|W:b9q03BonefiresCount|W:pt_b9q03_girl|W:pers_girl|W:b9q03_girl.xml|W:pt_b9q03_spi4ka|W:NPC_Spi4ka|W:b9q03_spi4ka.xml|W:fail|W:completed|W:b9q03|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:get|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,int,bool,bool params=0
// @EVENT_26: op=0x2c vars=string
// @EVENT_9: op=0x1dd vars=int,float
// @PE: 0x1dd

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_string)
{
	var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj();
	Trace(var_9_string);
	var_23_bool = var_9_string == "init_house_spi4ka";
	if(var_23_bool != 0) {
		GetSceneByName(var_16_object, "house_spi4ka");
		Trigger(var_16_object, "nospi4ka");
		var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
		var_16_object = var_27_object;
		func_494(var_26_object, var_27_object, "pt_b9q03_doberman1", "pers_doberman", "b9q03_doberman.xml");
		@@@var_1_object:add(var_26_object);
		var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = "";
		var_16_object = var_45_object;
		func_494(var_44_object, var_45_object, "pt_b9q03_doberman2", "pers_doberman", "b9q03_doberman.xml");
		@@@var_1_object:add(var_44_object);
		var_49_object = var_0_object;
		if(var_49_object != 0) {
			Trigger(var_0_object, "cleanup");
		}
		GetSceneByName(var_16_object, "sobor");
		Trigger(var_16_object, "aglaja");
		var_16_object = 0;
	} else {
		var_54_bool = var_9_string == "doberman_attack";
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_string = "";
			var_55_object = var_1_object;
			func_529(var_55_object, "attack");
			var_67_string = ""; var_68_bool = 0;
			func_512("ihouse_spi4ka@door1", (bool)1);
			var_77_string = ""; var_78_bool = 0;
			func_512("ihouse_spi4ka@door2", (bool)1);
			PlaySound("door_close");
			goto Label_359;
		}
		var_81_bool = var_9_string == "doberman_dead";
		if(var_81_bool != 0) {
			var_6_int = var_6_int + (int)1;
			@@@var_1_object:size(var_17_int);
			var_83_bool = var_17_int == var_6_int;
			if(var_83_bool != 0) {
				var_84_string = ""; var_85_bool = 0;
				func_512("ihouse_spi4ka@door1", (bool)0);
				var_86_string = ""; var_87_bool = 0;
				func_512("ihouse_spi4ka@door2", (bool)0);
				PlaySound("door_open");
			}
			goto Label_359;
		}
		var_90_bool = var_9_string == "place_follower";
		if(var_90_bool != 0) {
			var_91_bool = var_7_bool;
			if(var_91_bool != 0) {
				return 12;
			}
			var_7_bool = true;
			GetMainOutdoorScene(var_18_object);
			var_92_object = Obj(); var_93_object = Obj(); var_94_string = ""; var_95_string = ""; var_96_string = "";
			var_18_object = var_93_object;
			func_494(var_92_object, var_93_object, "pt_b9q03_follower", "pers_boy", "b9q03_follower.xml");
			var_3_object = var_92_object;
			var_18_object = 0;
			goto Label_359;
		}
		var_98_bool = var_9_string == "init_bonefires";
		if(var_98_bool != 0) {
			var_99_bool = var_8_bool;
			if(var_99_bool != 0) {
				return 12;
			}
			var_8_bool = true;
			GetMainOutdoorScene(var_19_object);
			var_100_object = Obj(); var_101_object = Obj(); var_102_string = ""; var_103_string = ""; var_104_string = "";
			var_19_object = var_101_object;
			func_494(var_100_object, var_101_object, "pt_b9q03_b1_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			@@@var_2_object:add(var_100_object);
			var_105_object = Obj(); var_106_object = Obj(); var_107_string = ""; var_108_string = ""; var_109_string = "";
			var_19_object = var_106_object;
			func_494(var_105_object, var_106_object, "pt_b9q03_b1_morlok1", "pers_morlok", "b9q03_e_morlok.xml");
			@@@var_2_object:add(var_105_object);
			var_110_object = Obj(); var_111_object = Obj(); var_112_string = ""; var_113_string = ""; var_114_string = "";
			var_19_object = var_111_object;
			func_494(var_110_object, var_111_object, "pt_b9q03_b1_morlok2", "pers_morlok", "b9q03_e_morlok.xml");
			@@@var_2_object:add(var_110_object);
			var_115_object = Obj(); var_116_object = Obj(); var_117_string = ""; var_118_string = ""; var_119_string = "";
			var_19_object = var_116_object;
			func_494(var_115_object, var_116_object, "pt_b9q03_b2_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			@@@var_2_object:add(var_115_object);
			var_120_object = Obj(); var_121_object = Obj(); var_122_string = ""; var_123_string = ""; var_124_string = "";
			var_19_object = var_121_object;
			func_494(var_120_object, var_121_object, "pt_b9q03_b2_grabitel1", "pers_grabitel", "b9q03_e_grabitel.xml");
			@@@var_2_object:add(var_120_object);
			var_125_object = Obj(); var_126_object = Obj(); var_127_string = ""; var_128_string = ""; var_129_string = "";
			var_19_object = var_126_object;
			func_494(var_125_object, var_126_object, "pt_b9q03_b2_grabitel2", "pers_grabitel", "b9q03_e_grabitel.xml");
			@@@var_2_object:add(var_125_object);
			var_130_object = Obj(); var_131_object = Obj(); var_132_string = ""; var_133_string = ""; var_134_string = "";
			var_19_object = var_131_object;
			func_494(var_130_object, var_131_object, "pt_b9q03_b3_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			@@@var_2_object:add(var_130_object);
			var_135_object = Obj(); var_136_object = Obj(); var_137_string = ""; var_138_string = ""; var_139_string = "";
			var_19_object = var_136_object;
			func_494(var_135_object, var_136_object, "pt_b9q03_b3_wastedmale1", "pers_wasted_male", "b9q03_e_wasted_male.xml");
			@@@var_2_object:add(var_135_object);
			var_140_object = Obj(); var_141_object = Obj(); var_142_string = ""; var_143_string = ""; var_144_string = "";
			var_19_object = var_141_object;
			func_494(var_140_object, var_141_object, "pt_b9q03_b3_hunter1", "pers_hunter", "b9q03_e_hunter.xml");
			@@@var_2_object:add(var_140_object);
			var_145_object = Obj(); var_146_object = Obj(); var_147_string = ""; var_148_string = ""; var_149_string = "";
			var_19_object = var_146_object;
			func_494(var_145_object, var_146_object, "pt_b9q03_b4_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			@@@var_2_object:add(var_145_object);
			var_150_object = Obj(); var_151_object = Obj(); var_152_string = ""; var_153_string = ""; var_154_string = "";
			var_19_object = var_151_object;
			func_494(var_150_object, var_151_object, "pt_b9q03_b4_doberman2", "pers_doberman", "b9q03_e_doberman.xml");
			@@@var_2_object:add(var_150_object);
			var_155_object = Obj(); var_156_object = Obj(); var_157_string = ""; var_158_string = ""; var_159_string = "";
			var_19_object = var_156_object;
			func_494(var_155_object, var_156_object, "pt_b9q03_b4_doberman3", "pers_doberman", "b9q03_e_doberman.xml");
			@@@var_2_object:add(var_155_object);
			var_19_object = 0;
			goto Label_359;
		}
		var_161_bool = var_9_string == "bonfire_burn";
		if(var_161_bool != 0) {
			GetVariable("b9q03BonefiresCount", var_20_int);
			var_164_bool = var_20_int == (int)0;
			if(var_164_bool != 0) {
				func_574();
			} else {
				var_191_bool = var_20_int == (int)1;
				if(var_191_bool != 0) {
					func_561();
					goto Label_340;
				}
				var_201_bool = var_20_int == (int)2;
				if(var_201_bool != 0) {
					func_548();
					goto Label_340;
				}
				var_211_bool = var_20_int == (int)3;
				if(var_211_bool == 0) goto Label_340;
				func_587();
				GetMainOutdoorScene(var_21_object);
				var_220_object = Obj(); var_221_object = Obj(); var_222_string = ""; var_223_string = ""; var_224_string = "";
				var_21_object = var_221_object;
				func_494(var_220_object, var_221_object, "pt_b9q03_girl", "pers_girl", "b9q03_girl.xml");
				var_5_object = var_220_object;
				GetSceneByName(var_21_object, "cot_kapella");
				var_226_object = Obj(); var_227_object = Obj(); var_228_string = ""; var_229_string = ""; var_230_string = "";
				var_21_object = var_227_object;
				func_494(var_226_object, var_227_object, "pt_b9q03_spi4ka", "NPC_Spi4ka", "b9q03_spi4ka.xml");
				var_4_object = var_226_object;
				var_231_string = ""; var_232_bool = 0;
				func_512("house_spi4ka@door1", (bool)1);
				var_233_string = ""; var_234_bool = 0;
				func_512("house_spi4ka@door2", (bool)1);
				var_235_object = var_3_object;
				if(var_235_object != 0) {
					Trigger(var_3_object, "cleanup");
				}
				var_21_object = 0;
		}
			var_238_bool = var_9_string == "fail";
			if(var_238_bool != 0) {
				func_371();
				goto Label_359;
			}
			var_271_bool = var_9_string == "completed";
			if(var_271_bool == 0) goto Label_359;
			func_379();
		}
	Label_340:
		var_20_int = var_20_int + (int)1;
		SetVariable("b9q03BonefiresCount", var_20_int);
		goto Label_359;
	}
Label_359:
	return 12;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_int, var_10_float)
{
	func_360();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj();
	var_7_bool = false;
	var_8_bool = false;
	var_13_object = Obj();
	func_488(var_13_object);
	var_1_object = var_13_object;
	var_16_object = Obj();
	func_488(var_16_object);
	var_2_object = var_16_object;
	GetSceneByName(var_11_object, "sobor");
	Trigger(var_11_object, "noaglaja");
	GetSceneByName(var_11_object, "cot_kapella");
	GetActiveScene(var_12_object);
	var_20_bool = var_12_object == var_11_object;
	if(var_20_bool != 0) {
		SetVariable("b9q03BadInit", (int)1);
	} else {
		var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = "";
		var_11_object = var_80_object;
		func_494(var_79_object, var_80_object, "pt_b9q03_aglaja", "NPC_Aglaja", "b9q03_aglaja.xml");
		var_0_object = var_79_object;
	}
	var_23_int = 0;
	func_458((int)9);
	return 4;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_512(var_57_string, var_58_bool)
{
	var_59_object = Obj(); var_60_object = Obj();
	FindActor(var_60_object, var_57_string);
	var_61_bool = var_60_object == 0; //@nz
	if(var_61_bool != 0) {
		var_63_int = "Door " + var_57_string;
		var_65_int = var_63_int + " not found";
		Trace(var_65_int);
	} else {
		@@var_60_object:SetProperty("locked", var_58_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_387(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	EventDisable(26);
	GetSceneByName(var_30_object, "sobor");
	Trigger(var_30_object, "aglaja");
	GetSceneByName(var_30_object, "house_spi4ka");
	Trigger(var_30_object, "spi4ka");
	var_35_object = Obj(); var_36_string = "";
	var_35_object = var_1_object;
	func_529(var_35_object, "cleanup");
	var_47_object = Obj(); var_48_string = "";
	var_47_object = var_2_object;
	func_529(var_47_object, "cleanup");
	var_49_object = var_3_object;
	if(var_49_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_51_object = var_0_object;
	if(var_51_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_53_object = var_4_object;
	if(var_53_object != 0) {
		Trigger(var_4_object, "cleanup");
	}
	var_55_object = var_5_object;
	if(var_55_object != 0) {
		Trigger(var_5_object, "cleanup");
	}
	var_57_string = ""; var_58_bool = 0;
	func_512("ihouse_spi4ka@door1", (bool)0);
	var_67_string = ""; var_68_bool = 0;
	func_512("ihouse_spi4ka@door2", (bool)0);
	var_69_string = ""; var_70_bool = 0;
	func_512("house_spi4ka@door1", (bool)0);
	var_71_string = ""; var_72_bool = 0;
	func_512("house_spi4ka@door2", (bool)0);
	var_73_object = Obj();
	func_482(var_73_object);
	RemoveActor(var_73_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_458(var_23_int)
{
	var_24_float = 0; var_25_float = 0;
	GetGameTime(var_25_float);
	var_27_float = var_23_int * (int)24;
	var_28_bool = var_25_float >= var_27_float;
	if(var_28_bool != 0) {
		func_387(var_10_object, var_11_object, var_12_object, var_23_int, var_24_float, var_25_float);
	} else {
		var_78_float = var_23_int * (int)24;
		SetTimeEvent((int)0, var_78_float);
		Hold();
	}
	return 2;
	
}


func_587()
{
	var_212_object = Obj(); var_213_object = Obj();
	CreateDiaryEntry(var_213_object, (int)539, (int)2, (int)530351);
	var_217_bool = 0; var_218_object = Obj(); var_219_int = 0;
	var_213_object = var_218_object;
	func_613(var_217_bool, var_218_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_529(var_35_object, var_36_string)
{
	var_37_int = 0; var_38_int = 0; var_39_object = Obj(); var_40_int = 0; var_41_int = 0; var_42_object = Obj();
	var_43_object = var_35_object;
	if(var_43_object != 0) {
		@@var_35_object:size(var_40_int);
		var_41_int = 0;

	Label_535:
		var_44_bool = var_41_int < var_40_int;
		if(var_44_bool != 0) {
			@@var_35_object:get(var_42_object, var_41_int);
			var_45_object = var_42_object;
			if(var_45_object != 0) {
				Trigger(var_42_object, var_36_string);
			}
			var_42_object = 0;
			var_41_int = var_41_int + (int)1;
			goto Label_535;
		}
	}
	return 6;
}


func_600(var_179_object)
{
	var_180_object = Obj(); var_181_object = Obj();
	GetDiaryRoot(var_181_object);
	var_182_bool = var_181_object == 0; //@nz
	if(var_182_bool != 0) {
		Trace("Can't retrieve diary root");
		var_179_object = 0;
		return 2;
	}
	var_181_object = var_179_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_482(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj();
	self(var_75_object);
	var_75_object = var_73_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_548()
{
	var_202_object = Obj(); var_203_object = Obj();
	CreateDiaryEntry(var_203_object, (int)538, (int)2, (int)530350);
	var_207_bool = 0; var_208_object = Obj(); var_209_int = 0;
	var_203_object = var_208_object;
	func_613(var_207_bool, var_208_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_613(var_170_bool, var_171_object, var_172_int)
{
	var_173_object = Obj(); var_174_object = Obj(); var_175_int = 0; var_176_object = Obj(); var_177_object = Obj(); var_178_int = 0;
	func_600(Obj());
	var_179_object = var_176_object;
	@@var_176_object:Find(var_172_int, var_177_object);
	var_184_bool = var_177_object == 0; //@nz
	if(var_184_bool != 0) {
		var_186_int = "Can't find diary parent with id: " + var_172_int;
		Trace(var_186_int);
		var_170_bool = 0;
		return 6;
	}
	@@var_177_object:AddChild(var_171_object);
	SendWorldWndMessage((int)7);
	@@var_171_object:GetCategory(var_178_int);
	SetDiarySection(var_178_int);
	var_170_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_488(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateObjectVector(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_360()
{
	var_11_int = 0; var_12_int = 0;
	GetVariable("b9q03", var_12_int);
	var_15_bool = var_12_int != (int)1000;
	if(var_15_bool != 0) {
		func_371();
	}
	return 2;
}


func_494(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string)
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


func_561()
{
	var_192_object = Obj(); var_193_object = Obj();
	CreateDiaryEntry(var_193_object, (int)537, (int)2, (int)530349);
	var_197_bool = 0; var_198_object = Obj(); var_199_int = 0;
	var_193_object = var_198_object;
	func_613(var_197_bool, var_198_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


func_371()
{
	SetVariable("b9q03", (int)-1);
	func_387(var_7_bool, var_8_bool, var_9_int, var_10_float, var_11_int, var_12_int);
	return 0;
}


func_379()
{
	SetVariable("b9q03", (int)1000);
	func_387(var_16_object, var_17_int, var_18_object, var_19_object, var_20_int, var_21_object);
	return 0;
}


func_574()
{
	var_165_object = Obj(); var_166_object = Obj();
	CreateDiaryEntry(var_166_object, (int)536, (int)2, (int)530348);
	var_170_bool = 0; var_171_object = Obj(); var_172_int = 0;
	var_166_object = var_171_object;
	func_613(var_170_bool, var_171_object, (int)532);
	return 2;
}
EMIT "Stack[-1] = 0";


