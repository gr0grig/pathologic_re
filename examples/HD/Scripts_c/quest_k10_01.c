// @IMPORTS: GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetMainOutdoorScene/1,AddActorByType/6,FindActor/2,Teleport/4,GetVariable/2,SetVariable/2,RemoveActor/1,self/1,CreateObjectVector/1,AddActor/6
// @STRINGS: W:cot_eva|W:nodanko|W:warehouse_rubin|W:norubin|W:warehouse_rubin@door1|W:warehouse_rubin_load|W:pt_rubin|W:NPC_Bakalavr|W:k10q01_danko.xml|W:place_soldiers|W:pt_k10q01_soldier1|W:pers_soldat|W:k10q01_soldier.xml|W:pt_k10q01_soldier2|W:uprava_prison@door1|W:uprava_admin@door1|W:remove_soldiers|A:Remove|W:init_prison|W:uprava_prison|W:pt_k10q01_wastedmale|W:pers_wasted_male|W:k10q01_wastedmale.xml|W:pt_k10q01_fog|A:GetLocator|W:fog_stat_indoor.xml|A:add|W:free_prisoner|W:cleanup|W:k10q01_wastedmale_free.xml|W:burah_home|W:noburah|W:init_factory|W:pt_k10q01_burah|W:NPC_Burah|W:k10q01_burah.xml|W:factory@door1|W:place_prophet|W:pt_k10q01_prophet|W:pers_krysa|W:k10q01_prophet.xml|W:teleport|W:player|W:house_vlad|W:pt_k10q01_teleport|W:ihouse_vlad@door2|W:pt_k10q01_wastedmale_u1|W:k10q01_wastedmale_u.xml|W:pt_k10q01_wastedmale_u2|W:pt_k10q01_rubin|W:NPC_Rubin|W:k10q01_rubin.xml|W:fail|W:completed|W:k10q01|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get|W:klara2_npc_positioner|W:init
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object,object,object,object,object,object,object,object params=0
// @EVENT_26: op=0x1b vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_int = 0;
	Trace(var_11_string);
	var_47_bool = var_11_string == "warehouse_rubin_load";
	if(var_47_bool != 0) {
		var_48_bool = var_0_object == 0; //@nz
		if(var_48_bool != 0) {
			GetSceneByName(var_29_object, "warehouse_rubin");
			var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = "";
			var_29_object = var_51_object;
			func_401(var_50_object, var_51_object, "pt_rubin", "NPC_Bakalavr", "k10q01_danko.xml");
			var_0_object = var_50_object;
			var_29_object = 0;
		}
	} else {
		var_69_bool = var_11_string == "place_soldiers";
		if(var_69_bool != 0) {
			GetMainOutdoorScene(var_30_object);
			var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = ""; var_74_string = "";
			var_30_object = var_71_object;
			func_419(var_70_object, var_71_object, "pt_k10q01_soldier1", "pers_soldat", "k10q01_soldier.xml");
			var_1_object = var_70_object;
			var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = "";
			var_30_object = var_89_object;
			func_419(var_88_object, var_89_object, "pt_k10q01_soldier2", "pers_soldat", "k10q01_soldier.xml");
			var_2_object = var_88_object;
			var_93_string = ""; var_94_bool = 0;
			func_437("uprava_prison@door1", (bool)1);
			var_103_string = ""; var_104_bool = 0;
			func_437("uprava_admin@door1", (bool)0);
			var_30_object = 0;
			goto Label_281;
		}
		var_106_bool = var_11_string == "remove_soldiers";
		if(var_106_bool != 0) {
			var_107_object = var_1_object;
			if(var_107_object != 0) {
				@@@var_1_object:Remove();
			}
			var_108_object = var_2_object;
			if(var_108_object != 0) {
				@@@var_2_object:Remove();
			}
			var_109_string = ""; var_110_bool = 0;
			func_437("uprava_prison@door1", (bool)0);
			goto Label_281;
		}
		var_112_bool = var_11_string == "init_prison";
		if(var_112_bool != 0) {
			GetSceneByName(var_31_object, "uprava_prison");
			var_114_object = Obj(); var_115_object = Obj(); var_116_string = ""; var_117_string = ""; var_118_string = "";
			var_31_object = var_115_object;
			func_401(var_114_object, var_115_object, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale.xml");
			var_3_object = var_114_object;
			var_32_int = 1;

		Label_113:
			var_120_int = "pt_k10q01_fog" + var_32_int;
			@@var_31_object:GetLocator(var_120_int, var_33_bool, var_34_cvector, var_35_cvector);
			var_121_bool = var_33_bool == 0; //@nz
			if(var_121_bool != 0) {
			} else {
				AddActorByType(var_36_object, "fog", var_31_object, var_34_cvector, var_35_cvector, "fog_stat_indoor.xml");
				@@@var_7_object:add(var_36_object);
				var_36_object = 0;
				var_32_int = var_32_int + (int)1;
				goto Label_113;
		}
			var_126_bool = var_11_string == "free_prisoner";
			if(var_126_bool != 0) {
				var_127_object = var_3_object;
				if(var_127_object != 0) {
					Trigger(var_3_object, "cleanup");
				}
				GetMainOutdoorScene(var_37_object);
				var_129_object = Obj(); var_130_object = Obj(); var_131_string = ""; var_132_string = ""; var_133_string = "";
				var_37_object = var_130_object;
				func_419(var_129_object, var_130_object, "pt_k10q01_wastedmale", "pers_wasted_male", "k10q01_wastedmale_free.xml");
				var_4_object = var_129_object;
				GetSceneByName(var_37_object, "burah_home");
				Trigger(var_37_object, "noburah");
				var_37_object = 0;
				goto Label_281;
			}
			var_137_bool = var_11_string == "init_factory";
			if(var_137_bool != 0) {
				GetSceneByName(var_38_object, "factory");
				var_139_object = Obj(); var_140_object = Obj(); var_141_string = ""; var_142_string = ""; var_143_string = "";
				var_38_object = var_140_object;
				func_401(var_139_object, var_140_object, "pt_k10q01_burah", "NPC_Burah", "k10q01_burah.xml");
				var_5_object = var_139_object;
				var_144_string = ""; var_145_bool = 0;
				func_437("factory@door1", (bool)0);
				var_38_object = 0;
				goto Label_281;
			}
			var_147_bool = var_11_string == "place_prophet";
			if(var_147_bool != 0) {
				GetMainOutdoorScene(var_39_object);
				var_148_object = Obj(); var_149_object = Obj(); var_150_string = ""; var_151_string = ""; var_152_string = "";
				var_39_object = var_149_object;
				func_419(var_148_object, var_149_object, "pt_k10q01_prophet", "pers_krysa", "k10q01_prophet.xml");
				var_10_object = var_148_object;
				var_39_object = 0;
				goto Label_281;
			}
			var_154_bool = var_11_string == "teleport";
			if(var_154_bool != 0) {
				FindActor(var_40_object, "player");
				var_156_object = var_40_object;
				if(var_156_object != 0) {
					GetSceneByName(var_41_object, "house_vlad");
					@@var_41_object:GetLocator("pt_k10q01_teleport", var_44_bool, var_42_cvector, var_43_cvector);
					Teleport(var_40_object, var_41_object, var_42_cvector, var_43_cvector);
					var_159_string = ""; var_160_bool = 0;
					func_437("ihouse_vlad@door2", (bool)1);
					var_161_object = Obj(); var_162_object = Obj(); var_163_string = ""; var_164_string = ""; var_165_string = "";
					var_41_object = var_162_object;
					func_401(var_161_object, var_162_object, "pt_k10q01_wastedmale_u1", "pers_wasted_male", "k10q01_wastedmale_u.xml");
					var_166_object = Obj(); var_167_object = Obj(); var_168_string = ""; var_169_string = ""; var_170_string = "";
					var_41_object = var_167_object;
					func_401(var_166_object, var_167_object, "pt_k10q01_wastedmale_u2", "pers_wasted_male", "k10q01_wastedmale_u.xml");
					var_171_object = Obj(); var_172_object = Obj(); var_173_string = ""; var_174_string = ""; var_175_string = "";
					var_41_object = var_172_object;
					func_401(var_171_object, var_172_object, "pt_k10q01_rubin", "NPC_Rubin", "k10q01_rubin.xml");
					var_6_object = var_171_object;
					var_41_object = 0;
				}
				var_40_object = 0;
				goto Label_281;
			}
			var_177_bool = var_11_string == "fail";
			if(var_177_bool != 0) {
				func_282();
				func_485();
				func_491();
				goto Label_281;
			}
			var_231_bool = var_11_string == "completed";
			if(var_231_bool != 0) {
				func_290();
				func_485();
				func_491();
				goto Label_281;
			}
			var_235_bool = var_11_string == "cleanup";
			if(var_235_bool == 0) goto Label_281;
			GetVariable("k10q01", var_45_int);
			var_238_bool = var_45_int != (int)1000;
			if(var_238_bool != 0) {
				func_282();
			}
			func_379();
		}
		var_31_object = 0;
		goto Label_281;
	}
Label_281:
	return 34;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	var_13_object = Obj();
	func_395(var_13_object);
	var_7_object = var_13_object;
	GetSceneByName(var_12_object, "cot_eva");
	Trigger(var_12_object, "nodanko");
	GetSceneByName(var_12_object, "warehouse_rubin");
	Trigger(var_12_object, "norubin");
	var_20_string = ""; var_21_bool = 0;
	func_437("warehouse_rubin@door1", (bool)0);
	
Label_22:
	Hold();
	goto Label_22;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_290()
{
	SetVariable("k10q01", (int)1000);
	func_298(var_35_cvector, var_36_object, var_37_object, var_38_object, var_39_object, var_40_object, var_41_object, var_42_cvector, var_43_cvector, var_44_bool, var_45_int);
	return 0;
}


func_419(var_70_object, var_71_object, var_72_string, var_73_string, var_74_string)
{
	var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj();
	@@var_71_object:GetLocator(var_72_string, var_79_bool, var_80_cvector, var_81_cvector);
	var_83_bool = var_79_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_85_int = "Locator " + var_72_string;
		var_87_int = var_85_int + " doesn't exist";
		Trace(var_87_int);
	} else {
		@@var_71_object:AddStationaryActor(Obj(), var_80_cvector, var_81_cvector, var_73_string, var_74_string);
	}
	var_82_object = var_70_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_485()
{
	var_220_bool = 0; var_221_string = ""; var_222_string = "";
	func_454(var_220_bool, "klara2_npc_positioner", "init");
	return 0;
}


func_454(var_220_bool, var_221_string, var_222_string)
{
	var_223_object = Obj(); var_224_object = Obj();
	FindActor(var_224_object, var_221_string);
	var_225_bool = var_224_object == 0; //@ne
	if(var_225_bool != 0) {
		var_220_bool = 0;
		return 2;
	}
	Trigger(var_224_object, var_222_string);
	var_220_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_389(var_243_object)
{
	var_244_object = Obj(); var_245_object = Obj();
	self(var_245_object);
	var_245_object = var_243_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_298(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_180_object = Obj(); var_181_object = Obj();
	GetSceneByName(var_181_object, "cot_eva");
	Trigger(var_181_object, "danko");
	GetSceneByName(var_181_object, "warehouse_rubin");
	Trigger(var_181_object, "rubin");
	var_186_string = ""; var_187_bool = 0;
	func_437("uprava_prison@door1", (bool)0);
	var_188_string = ""; var_189_bool = 0;
	func_437("ihouse_vlad@door2", (bool)0);
	var_190_string = ""; var_191_bool = 0;
	func_437("factory@door1", (bool)0);
	var_192_object = var_0_object;
	if(var_192_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_194_object = var_1_object;
	if(var_194_object != 0) {
		@@@var_1_object:Remove();
	}
	var_195_object = var_2_object;
	if(var_195_object != 0) {
		@@@var_2_object:Remove();
	}
	var_196_object = var_3_object;
	if(var_196_object != 0) {
		Trigger(var_3_object, "cleanup");
	}
	var_198_object = var_4_object;
	if(var_198_object != 0) {
		@@@var_4_object:Remove();
	}
	var_199_object = var_5_object;
	if(var_199_object != 0) {
		Trigger(var_5_object, "cleanup");
	}
	var_201_object = var_10_object;
	if(var_201_object != 0) {
		@@@var_10_object:Remove();
	}
	var_202_object = var_6_object;
	if(var_202_object != 0) {
		Trigger(var_6_object, "cleanup");
	}
	var_204_object = Obj(); var_205_string = "";
	var_204_object = var_7_object;
	func_466(var_204_object, "cleanup");
	var_216_object = var_8_object;
	if(var_216_object != 0) {
		Trigger(var_8_object, "cleanup");
	}
	var_218_object = var_9_object;
	if(var_218_object != 0) {
		Trigger(var_9_object, "cleanup");
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_395(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateObjectVector(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_491()
{
	var_226_object = Obj(); var_227_object = Obj();
	GetSceneByName(var_227_object, "burah_home");
	Trigger(var_227_object, "noburah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_401(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	@@var_51_object:GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector);
	var_63_bool = var_59_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_65_int = "Locator " + var_52_string;
		var_67_int = var_65_int + " doesn't exist";
		Trace(var_67_int);
	} else {
		AddActor(Obj(), var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string);
	}
	var_62_object = var_50_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_466(var_204_object, var_205_string)
{
	var_206_int = 0; var_207_int = 0; var_208_object = Obj(); var_209_int = 0; var_210_int = 0; var_211_object = Obj();
	var_212_object = var_204_object;
	if(var_212_object != 0) {
		@@var_204_object:size(var_209_int);
		var_210_int = 0;

	Label_472:
		var_213_bool = var_210_int < var_209_int;
		if(var_213_bool != 0) {
			@@var_204_object:get(var_211_object, var_210_int);
			var_214_object = var_211_object;
			if(var_214_object != 0) {
				Trigger(var_211_object, var_205_string);
			}
			var_211_object = 0;
			var_210_int = var_210_int + (int)1;
			goto Label_472;
		}
	}
	return 6;
}


func_500()
{
	var_239_object = Obj(); var_240_object = Obj();
	GetSceneByName(var_240_object, "burah_home");
	Trigger(var_240_object, "burah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_437(var_20_string, var_21_bool)
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, var_20_string);
	var_24_bool = var_23_object == 0; //@nz
	if(var_24_bool != 0) {
		var_26_int = "Door " + var_20_string;
		var_28_int = var_26_int + " not found";
		Trace(var_28_int);
	} else {
		@@var_23_object:SetProperty("locked", var_21_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_282()
{
	SetVariable("k10q01", (int)-1);
	func_298(var_35_cvector, var_36_object, var_37_object, var_38_object, var_39_object, var_40_object, var_41_object, var_42_cvector, var_43_cvector, var_44_bool, var_45_int);
	return 0;
}


func_379()
{
	EventDisable(26);
	func_500();
	var_243_object = Obj();
	func_389(var_243_object);
	RemoveActor(var_243_object);
	return 0;
}


