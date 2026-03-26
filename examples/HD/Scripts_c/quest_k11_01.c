// @IMPORTS: GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetMainOutdoorScene/1,FindActor/2,RemoveActor/1,SetVariable/2,GetVariable/2,self/1,CreateObjectVector/1,AddBlankActor/4,AddActor/6
// @STRINGS: W:cot_eva|W:nodanko|W:icot_eva_door|W:shouse1_kabak|W:noandrei|W:warehouse_rubin|W:sobor@door1|W:cot_maria@door1|W:init_kabak|W:pt_k11q01_soldier|A:GetLocator|W:pers_soldat|W:k11q01_kabak_soldier.xml|A:add|W:pt_k11q01_officer|W:k11q01_kabak_officer.xml|W:init_gun|W:k11q01_soldier.xml|W:pt_k11q01_agony_officer|W:k11q01_officer_agony.xml|A:AddStationaryActor|W:cure_officer|W:player|A:GetPosition|A:GetDirection|A:GetActor|A:Remove|W:k11q01Cured|W:quest_k11_01_cutscene|W:cutscene_end|W:k11q01_officer.xml|W:init_house_petr|W:pt_k11q01_andrei|W:NPC_Andrei|W:k11q01_andrei.xml|W:pt_k11q01_danko|W:NPC_Bakalavr|W:k11q01_danko.xml|W:place_burah|W:burah_home|W:noburah|W:boiny|W:pt_k11q01_burah|W:NPC_Burah|W:k11q01_burah.xml|W:fail|W:completed|W:cleanup|W:k11q01|W:.bin|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:Close|A:size|A:get|A:clear|W:klara2_npc_positioner|W:init
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,object,object,cvector,cvector params=0
// @EVENT_26: op=0x2f vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_cvector, var_10_string)
{
	var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0;
	Trace(var_10_string);
	var_52_bool = var_10_string == "init_kabak";
	if(var_52_bool != 0) {
		GetSceneByName(var_31_object, "shouse1_kabak");
		var_32_int = 1;

	Label_57:
		var_55_int = "pt_k11q01_soldier" + var_32_int;
		@@var_31_object:GetLocator(var_55_int, var_33_bool, var_34_cvector, var_35_cvector);
		var_56_bool = var_33_bool == 0; //@nz
		if(var_56_bool != 0) {
		} else {
			var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = "";
			var_31_object = var_76_object;
			var_77_string = "pt_k11q01_soldier" + var_32_int;
			func_380(var_75_object, var_76_object, var_77_string, "pers_soldat", "k11q01_kabak_soldier.xml");
			@@@var_0_object:add(var_75_object);
			var_32_int = var_32_int + (int)1;
			goto Label_57;
	}
		var_83_bool = var_10_string == "init_gun";
		if(var_83_bool != 0) {
			GetMainOutdoorScene(var_36_object);
			var_37_int = 1;

		Label_93:
			var_85_int = "pt_k11q01_soldier" + var_37_int;
			@@var_36_object:GetLocator(var_85_int, var_38_bool, var_39_cvector, var_40_cvector);
			var_86_bool = var_38_bool == 0; //@nz
			if(var_86_bool != 0) {
			} else {
				var_92_object = Obj(); var_93_object = Obj(); var_94_string = ""; var_95_string = ""; var_96_string = "";
				var_36_object = var_93_object;
				var_94_string = "pt_k11q01_soldier" + var_37_int;
				func_398(var_92_object, var_93_object, var_94_string, "pers_soldat", "k11q01_soldier.xml");
				@@@var_2_object:add(var_92_object);
				var_37_int = var_37_int + (int)1;
				goto Label_93;
		}
			var_113_bool = var_10_string == "cure_officer";
			if(var_113_bool != 0) {
				FindActor(var_44_object, "player");
				@@var_44_object:GetPosition(var_8_cvector);
				@@var_44_object:GetDirection(var_9_cvector);
				var_115_float = GetByIndex(var_9_cvector, 1);
				SetByIndex(var_9_cvector, 1) = (float)0;
				var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0);
				var_117_cvector = var_9_cvector;
				func_353(var_116_cvector, var_117_cvector);
				var_9_cvector = var_116_cvector;
				@@@var_4_object:GetActor(var_45_object);
				var_123_object = var_45_object;
				if(var_123_object != 0) {
					RemoveActor(var_45_object);
				}
				@@@var_4_object:Remove();
				SetVariable("k11q01Cured", (int)1);
				var_126_object = Obj(); var_127_string = "";
				func_369(var_126_object, "quest_k11_01_cutscene");
				var_45_object = 0;
				var_44_object = 0;
				goto Label_267;
			}
			var_135_bool = var_10_string == "cutscene_end";
			if(var_135_bool != 0) {
				GetMainOutdoorScene(var_46_object);
				var_137_float = var_9_cvector * (float)150.0;
				var_138_int = var_8_cvector + var_137_float;
				var_47_cvector = var_138_int + CVector(0.0, 10.0, 0.0);
				var_140_int = -var_9_cvector;
				@@var_46_object:AddStationaryActor(var_3_object, var_47_cvector, var_140_int, "pers_soldat", "k11q01_officer.xml", (bool)1);
				var_46_object = 0;
				goto Label_267;
			}
			var_145_bool = var_10_string == "init_house_petr";
			if(var_145_bool != 0) {
				GetSceneByName(var_48_object, "house_petr");
				var_147_object = Obj(); var_148_object = Obj(); var_149_string = ""; var_150_string = ""; var_151_string = "";
				var_48_object = var_148_object;
				func_380(var_147_object, var_148_object, "pt_k11q01_andrei", "NPC_Andrei", "k11q01_andrei.xml");
				var_7_object = var_147_object;
				var_152_object = Obj(); var_153_object = Obj(); var_154_string = ""; var_155_string = ""; var_156_string = "";
				var_48_object = var_153_object;
				func_380(var_152_object, var_153_object, "pt_k11q01_danko", "NPC_Bakalavr", "k11q01_danko.xml");
				var_5_object = var_152_object;
				var_48_object = 0;
				goto Label_267;
			}
			var_158_bool = var_10_string == "place_burah";
			if(var_158_bool != 0) {
				GetSceneByName(var_49_object, "burah_home");
				Trigger(var_49_object, "noburah");
				GetSceneByName(var_49_object, "boiny");
				var_162_object = Obj(); var_163_object = Obj(); var_164_string = ""; var_165_string = ""; var_166_string = "";
				var_49_object = var_163_object;
				func_380(var_162_object, var_163_object, "pt_k11q01_burah", "NPC_Burah", "k11q01_burah.xml");
				var_6_object = var_162_object;
				var_49_object = 0;
				goto Label_267;
			}
			var_168_bool = var_10_string == "fail";
			if(var_168_bool != 0) {
				func_268();
				func_506();
				func_512();
				goto Label_267;
			}
			var_220_bool = var_10_string == "completed";
			if(var_220_bool != 0) {
				func_276();
				func_506();
				func_512();
				goto Label_267;
			}
			var_224_bool = var_10_string == "cleanup";
			if(var_224_bool == 0) goto Label_267;
			GetVariable("k11q01", var_50_int);
			var_227_bool = var_50_int != (int)1000;
			if(var_227_bool != 0) {
				func_268();
			}
			func_332();
		}
		@@var_36_object:GetLocator("pt_k11q01_agony_officer", var_41_bool, var_42_cvector, var_43_cvector);
		var_42_cvector = var_42_cvector + CVector(0.0, 7.0, 0.0);
		@@var_36_object:AddStationaryActor(var_4_object, var_42_cvector, var_43_cvector, "pers_soldat", "k11q01_officer_agony.xml", (bool)1);
		var_36_object = 0;
		goto Label_267;
	}
	var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = "";
	var_31_object = var_58_object;
	func_380(var_57_object, var_58_object, "pt_k11q01_officer", "pers_soldat", "k11q01_kabak_officer.xml");
	var_1_object = var_57_object;
	var_31_object = 0;
	goto Label_267;
	
Label_267:
	return 40;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_cvector)
{
	var_10_object = Obj(); var_11_object = Obj();
	var_12_object = Obj();
	func_363(var_12_object);
	var_0_object = var_12_object;
	var_15_object = Obj();
	func_363(var_15_object);
	var_2_object = var_15_object;
	GetSceneByName(var_11_object, "cot_eva");
	Trigger(var_11_object, "nodanko");
	var_18_string = ""; var_19_bool = 0;
	func_433("icot_eva_door", (bool)0);
	GetSceneByName(var_11_object, "shouse1_kabak");
	Trigger(var_11_object, "noandrei");
	GetSceneByName(var_11_object, "warehouse_rubin");
	Trigger(var_11_object, "rubin");
	var_33_string = ""; var_34_bool = 0;
	func_416("sobor@door1", (bool)0);
	var_43_string = ""; var_44_bool = 0;
	func_416("cot_maria@door1", (bool)1);
	
Label_42:
	Hold();
	goto Label_42;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_512()
{
	var_215_object = Obj(); var_216_object = Obj();
	GetSceneByName(var_216_object, "burah_home");
	Trigger(var_216_object, "noburah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_454(var_209_bool, var_210_string, var_211_string)
{
	var_212_object = Obj(); var_213_object = Obj();
	FindActor(var_213_object, var_210_string);
	var_214_bool = var_213_object == 0; //@ne
	if(var_214_bool != 0) {
		var_209_bool = 0;
		return 2;
	}
	Trigger(var_213_object, var_211_string);
	var_209_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_521()
{
	var_238_object = Obj(); var_239_object = Obj();
	GetSceneByName(var_239_object, "burah_home");
	Trigger(var_239_object, "burah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_268()
{
	SetVariable("k11q01", (int)-1);
	func_284(var_44_object, var_45_object, var_46_object, var_47_cvector, var_48_object, var_49_object, var_50_int);
	return 0;
}


func_332()
{
	EventDisable(26);
	var_228_string = ""; var_229_bool = 0;
	func_416("cot_maria@door1", (bool)0);
	func_521();
	var_242_object = Obj();
	func_347(var_242_object);
	RemoveActor(var_242_object);
	return 0;
}


func_398(var_92_object, var_93_object, var_94_string, var_95_string, var_96_string)
{
	var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_object = Obj(); var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_object = Obj();
	@@var_93_object:GetLocator(var_94_string, var_102_bool, var_103_cvector, var_104_cvector);
	var_106_bool = var_102_bool == 0; //@nz
	if(var_106_bool != 0) {
		var_108_int = "Locator " + var_94_string;
		var_110_int = var_108_int + " doesn't exist";
		Trace(var_110_int);
	} else {
		@@var_93_object:AddStationaryActor(Obj(), var_103_cvector, var_104_cvector, var_95_string, var_96_string);
	}
	var_105_object = var_92_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_466(var_191_object)
{
	var_192_int = 0; var_193_int = 0; var_194_object = Obj(); var_195_int = 0; var_196_int = 0; var_197_object = Obj();
	var_198_object = var_191_object;
	if(var_198_object != 0) {
		@@var_191_object:size(var_195_int);
		var_196_int = 0;

	Label_472:
		var_199_bool = var_196_int < var_195_int;
		if(var_199_bool != 0) {
			@@var_191_object:get(var_197_object, var_196_int);
			var_200_object = var_197_object;
			if(var_200_object != 0) {
				@@var_197_object:Remove();
			}
			var_197_object = 0;
			var_196_int = var_196_int + (int)1;
			goto Label_472;
		}
		@@var_191_object:clear();
	}
	return 6;
}


func_276()
{
	SetVariable("k11q01", (int)1000);
	func_284(var_44_object, var_45_object, var_46_object, var_47_cvector, var_48_object, var_49_object, var_50_int);
	return 0;
}


func_347(var_242_object)
{
	var_243_object = Obj(); var_244_object = Obj();
	self(var_244_object);
	var_244_object = var_242_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_284(var_0_object, var_1_object, var_2_object, var_3_object, var_5_object, var_6_object, var_7_object)
{
	var_171_object = Obj(); var_172_object = Obj();
	GetSceneByName(var_172_object, "cot_eva");
	Trigger(var_172_object, "danko");
	GetSceneByName(var_172_object, "shouse1_kabak");
	Trigger(var_172_object, "andrei");
	var_177_object = Obj(); var_178_string = "";
	var_177_object = var_0_object;
	func_487(var_177_object, "cleanup");
	var_189_object = var_1_object;
	if(var_189_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_191_object = Obj();
	var_191_object = var_2_object;
	func_466(var_191_object);
	var_202_object = var_3_object;
	if(var_202_object != 0) {
		@@@var_3_object:Remove();
	}
	var_203_object = var_5_object;
	if(var_203_object != 0) {
		Trigger(var_5_object, "cleanup");
	}
	var_205_object = var_6_object;
	if(var_205_object != 0) {
		Trigger(var_6_object, "cleanup");
	}
	var_207_object = var_7_object;
	if(var_207_object != 0) {
		Trigger(var_7_object, "cleanup");
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_416(var_33_string, var_34_bool)
{
	var_35_object = Obj(); var_36_object = Obj();
	FindActor(var_36_object, var_33_string);
	var_37_bool = var_36_object == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Door " + var_33_string;
		var_41_int = var_39_int + " not found";
		Trace(var_41_int);
	} else {
		@@var_36_object:SetProperty("locked", var_34_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_353(var_116_cvector, var_117_cvector)
{
	var_118_float = 0; var_119_float = 0;
	var_120_int = var_117_cvector | var_117_cvector;
	var_119_float = sqrt(var_120_int);
	var_121_float = 9.999999974752427e-07;
	var_122_bool = var_119_float < var_121_float;
	if(var_122_bool != 0) {
		var_116_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_116_cvector = var_117_cvector / var_119_float;
	return 2;
}


func_487(var_177_object, var_178_string)
{
	var_179_int = 0; var_180_int = 0; var_181_object = Obj(); var_182_int = 0; var_183_int = 0; var_184_object = Obj();
	var_185_object = var_177_object;
	if(var_185_object != 0) {
		@@var_177_object:size(var_182_int);
		var_183_int = 0;

	Label_493:
		var_186_bool = var_183_int < var_182_int;
		if(var_186_bool != 0) {
			@@var_177_object:get(var_184_object, var_183_int);
			var_187_object = var_184_object;
			if(var_187_object != 0) {
				Trigger(var_184_object, var_178_string);
			}
			var_184_object = 0;
			var_183_int = var_183_int + (int)1;
			goto Label_493;
		}
	}
	return 6;
}


func_363(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	CreateObjectVector(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_433(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, var_18_string);
	var_22_bool = var_21_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Door " + var_18_string;
		var_26_int = var_24_int + " not found";
		Trace(var_26_int);
	} else {
		var_27_bool = var_19_bool;
		if(var_27_bool != 0) {
			@@var_21_object:Close();
		}
		@@var_21_object:SetProperty("locked", var_19_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_369(var_126_object, var_127_string)
{
	var_128_object = Obj(); var_129_object = Obj(); var_130_object = Obj(); var_131_object = Obj();
	GetMainOutdoorScene(var_130_object);
	var_133_int = var_127_string + ".bin";
	AddBlankActor(var_131_object, var_130_object, var_127_string, var_133_int);
	var_131_object = var_126_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_506()
{
	var_209_bool = 0; var_210_string = ""; var_211_string = "";
	func_454(var_209_bool, "klara2_npc_positioner", "init");
	return 0;
}


func_380(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string)
{
	var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj(); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj();
	@@var_58_object:GetLocator(var_59_string, var_66_bool, var_67_cvector, var_68_cvector);
	var_70_bool = var_66_bool == 0; //@nz
	if(var_70_bool != 0) {
		var_72_int = "Locator " + var_59_string;
		var_74_int = var_72_int + " doesn't exist";
		Trace(var_74_int);
	} else {
		AddActor(Obj(), var_60_string, var_58_object, var_67_cvector, var_68_cvector, var_61_string);
	}
	var_69_object = var_57_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


