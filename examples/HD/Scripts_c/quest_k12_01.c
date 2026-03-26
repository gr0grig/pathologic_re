// @IMPORTS: GetMainOutdoorScene/1,SetTimeEvent/2,GetGameTime/1,Hold/0,Trace/1,GetSceneByName/2,Trigger/2,SetVariable/2,GetVariable/2,RemoveActor/1,self/1,AddBlankActor/4,AddActor/6,FindActor/2,Trigger/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,SetRegistryData/2,CreateIntVector/1,UnlockAchievement/1,GameOver/1,IsOverrideActive/1
// @STRINGS: W:theater@door1|W:pt_b12q01_birdmask_t|W:pers_birdmask|W:k12q01_birdmask_t.xml|W:volonteers_klara|W:childs_letter|W:pt_b12q01_birdmask_s|W:k12q01_birdmask_s.xml|W:sobor@door1|W:hidden_room@door1|W:mnogogrannik@door1|W:cot_eva@door1|W:termitnik2@door1|W:uprava_admin@door1|W:final 0|W:final 1 locked: |W:init_sobor|W:noaglaja|W:isobor@door1|W:sobor_load|W:quest_k12_01_sobor_cutscene|W:sobor_cutscene_end|W:pt_b12q01_block|W:NPC_Block|W:k12q01_Block.xml|W:pt_b12q01_aglaja|W:NPC_Aglaja|W:k12q01_Aglaja.xml|W:pt_b12q01_kapella|W:NPC_Klara|W:k12q01_Klara2.xml|W:pt_d12q01_burah|W:NPC_Burah|W:k12q01_Burah.xml|W:pt_b12q01_danko|W:NPC_Bakalavr|W:k12q01_Danko.xml|W:sobor_unload|A:Remove|W:cleanup|W:init_theater|W:NPC_Mark|W:itheater@door1|W:theater_load|W:quest_k12_01_theater_cutscene|W:k12q01TheaterIsVisited|W:theater_cutscene_end|W:pt_b12q01_birdmask|W:k12q01_tbirdmask.xml|W:pt_b12q01_whitemask|W:pers_whitemask|W:k12q01_twhitemask.xml|W:theater_unload|W:init_hidden_room|W:mnogogrannik_han@door1|W:mnogogrannik_han@door2|W:imnogogrannik_han@door1|W:hidden_room_load|W:k12q01ChildsAreVisited|W:quest_k12_01_hidden_room_cutscene|W:hidden_room_cutscene_end|W:pt_girl|W:pers_littlegirl2|W:k12q01_littlegirl.xml|W:pt_boy|W:pers_littleboy2|W:k12q01_littleboy.xml|W:hidden_room_unload|W:theater_letter|W:k12q01|W:fail|W:completed|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:BurahCompleted|W:DankoCompleted|W:KlaraCompleted|A:add|W:vol_|A:size|A:get|W:game_final|W:d12q01ChildsAreVisited|W:d12q01TheaterIsVisited|W:b12q01ChildsAreVisited|W:b12q01TheaterIsVisited|W:PlayFinalMovie|W:fin_termit|W:ACHIEVEMENT_HELLO_2|W:gameover_termit_chudo.xml|W:gameover_termit.xml|W:fin_utop|W:gameover_utopist_chudo.xml|W:gameover_utopist.xml|W:fin_smiren|W:gameover_smirennik_chudo.xml|W:gameover_smirennik.xml|W:fin_beda|W:gameover_beda_chudo.xml|W:gameover_beda.xml|W:k12q01BurahInSobor|W:k12q01DankoInSobor|W:warehouse_rubin|W:warehouse_rubin@door1|W:cot_eva
// @GLOBALS: 0:object:
// @RUN_OP: 0x12
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool,bool,object,object,object,object,object,object,object,object,object,object params=0
// @EVENT_9: op=0x7c vars=int,float
// @EVENT_26: op=0xbb vars=string
// @PE: 0x2f6,0x317,0x338,0x408

task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_int, var_15_float)
{
	var_16_float = 0; var_17_float = 0;
	EventDisable(26);
	EventDisable(9);
	var_19_bool = var_14_int == (int)0;
	if(var_19_bool != 0) {
		Trace("final 0");
		var_21_bool = 0;
		var_21_bool = 1;
		var_22_bool = var_3_bool;
		if(var_22_bool != 1) {
			var_23_bool = 0;
			func_1281(var_23_bool);
			var_26_bool = var_23_bool == 0; //@nz
			if(var_26_bool != 1) {
				var_21_bool = 0;
			}
		}
		if(var_21_bool != 0) {
			var_28_int = "final 1 locked: " + var_3_bool;
			Trace(var_28_int);
			GetGameTime(var_17_float);
			var_17_float = var_17_float + (float)0.008333333767950535;
			SetTimeEvent((int)0, var_17_float);
			EventEnable(26);
			EventEnable(9);
			return 2;
		}
		func_1043();
	} else {
		var_154_bool = var_14_int == (int)1;
		if(var_154_bool != 0) {
			var_155_bool = 0;
			func_990(var_155_bool);
			if(var_155_bool != 0) {
				var_268_bool = 0; var_269_string = ""; var_270_string = ""; var_271_string = "";
				func_620(var_268_bool, "volonteers_klara", "childs_letter", "");
			}
			EventEnable(26);
			EventEnable(9);
			goto Label_186;
		}
		var_276_bool = var_14_int == (int)2;
		if(var_276_bool == 0) goto Label_186;
		func_0(var_17_float);
		EventEnable(26);
		EventEnable(9);
	}
Label_186:
	return 2;
	
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0;
	Trace(var_14_string);
	var_26_bool = var_14_string == "init_sobor";
	if(var_26_bool != 0) {
		GetSceneByName(var_20_object, "sobor");
		Trigger(var_20_object, "noaglaja");
		var_29_string = ""; var_30_bool = 0;
		func_603("isobor@door1", (bool)1);
		var_39_string = ""; var_40_bool = 0;
		func_603("sobor@door1", (bool)0);
		var_1_bool = true;
		var_20_object = 0;
	} else {
		var_42_bool = var_14_string == "sobor_load";
		if(var_42_bool != 0) {
			var_43_bool = var_1_bool;
			if(var_43_bool != 0) {
				var_3_bool = true;
				var_44_object = Obj(); var_45_string = "";
				func_556(var_44_object, "quest_k12_01_sobor_cutscene");
			}
			goto Label_526;
		}
		var_53_bool = var_14_string == "sobor_cutscene_end";
		if(var_53_bool != 0) {
			GetSceneByName(var_21_object, "sobor");
			var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = ""; var_59_string = "";
			var_21_object = var_56_object;
			func_567(var_55_object, var_56_object, "pt_b12q01_block", "NPC_Block", "k12q01_Block.xml");
			var_5_object = var_55_object;
			var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = "";
			var_21_object = var_74_object;
			func_567(var_73_object, var_74_object, "pt_b12q01_aglaja", "NPC_Aglaja", "k12q01_Aglaja.xml");
			var_6_object = var_73_object;
			var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = "";
			var_21_object = var_79_object;
			func_567(var_78_object, var_79_object, "pt_b12q01_kapella", "NPC_Klara", "k12q01_Klara2.xml");
			var_7_object = var_78_object;
			var_83_bool = 0;
			func_1267(var_83_bool);
			if(var_83_bool != 0) {
				var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = "";
				var_21_object = var_89_object;
				func_567(var_88_object, var_89_object, "pt_d12q01_burah", "NPC_Burah", "k12q01_Burah.xml");
				var_8_object = var_88_object;
			}
			var_93_bool = 0;
			func_1274(var_93_bool);
			if(var_93_bool != 0) {
				var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = "";
				var_21_object = var_99_object;
				func_567(var_98_object, var_99_object, "pt_b12q01_danko", "NPC_Bakalavr", "k12q01_Danko.xml");
				var_9_object = var_98_object;
			}
			var_21_object = 0;
			goto Label_526;
		}
		var_104_bool = var_14_string == "sobor_unload";
		if(var_104_bool != 0) {
			var_105_bool = var_1_bool;
			if(var_105_bool != 0) {
				var_106_object = var_4_object;
				if(var_106_object != 0) {
					@@@var_4_object:Remove();
				}
				var_107_object = var_5_object;
				if(var_107_object != 0) {
					Trigger(var_5_object, "cleanup");
				}
				var_109_object = var_6_object;
				if(var_109_object != 0) {
					Trigger(var_6_object, "cleanup");
				}
				var_111_object = var_7_object;
				if(var_111_object != 0) {
					Trigger(var_7_object, "cleanup");
				}
				var_113_object = var_8_object;
				if(var_113_object != 0) {
					Trigger(var_8_object, "cleanup");
				}
				var_115_object = var_9_object;
				if(var_115_object != 0) {
					Trigger(var_9_object, "cleanup");
				}
				var_117_string = ""; var_118_bool = 0;
				func_603("sobor@door1", (bool)1);
				var_3_bool = false;
			}
			goto Label_526;
		}
		var_120_bool = var_14_string == "init_theater";
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_string = "";
			func_632(var_121_bool, "NPC_Mark");
			var_126_string = ""; var_127_bool = 0;
			func_603("itheater@door1", (bool)1);
			var_128_string = ""; var_129_bool = 0;
			func_603("theater@door1", (bool)0);
			var_0_bool = true;
			goto Label_526;
		}
		var_131_bool = var_14_string == "theater_load";
		if(var_131_bool != 0) {
			var_132_bool = var_0_bool;
			if(var_132_bool != 0) {
				var_3_bool = true;
				var_133_object = Obj(); var_134_string = "";
				func_556(var_133_object, "quest_k12_01_theater_cutscene");
				SetVariable("k12q01TheaterIsVisited", (int)1);
			}
			goto Label_526;
		}
		var_138_bool = var_14_string == "theater_cutscene_end";
		if(var_138_bool != 0) {
			GetSceneByName(var_22_object, "theater");
			var_140_object = Obj(); var_141_object = Obj(); var_142_string = ""; var_143_string = ""; var_144_string = "";
			var_22_object = var_141_object;
			func_567(var_140_object, var_141_object, "pt_b12q01_birdmask", "pers_birdmask", "k12q01_tbirdmask.xml");
			var_10_object = var_140_object;
			var_145_object = Obj(); var_146_object = Obj(); var_147_string = ""; var_148_string = ""; var_149_string = "";
			var_22_object = var_146_object;
			func_567(var_145_object, var_146_object, "pt_b12q01_whitemask", "pers_whitemask", "k12q01_twhitemask.xml");
			var_11_object = var_145_object;
			var_22_object = 0;
			goto Label_526;
		}
		var_151_bool = var_14_string == "theater_unload";
		if(var_151_bool != 0) {
			var_152_bool = var_0_bool;
			if(var_152_bool != 0) {
				var_153_object = var_10_object;
				if(var_153_object != 0) {
					Trigger(var_10_object, "cleanup");
				}
				var_155_object = var_11_object;
				if(var_155_object != 0) {
					Trigger(var_11_object, "cleanup");
				}
				var_157_string = ""; var_158_bool = 0;
				func_603("theater@door1", (bool)1);
				var_3_bool = false;
			}
			goto Label_526;
		}
		var_160_bool = var_14_string == "init_hidden_room";
		if(var_160_bool != 0) {
			var_161_string = ""; var_162_bool = 0;
			func_603("mnogogrannik_han@door1", (bool)0);
			var_163_string = ""; var_164_bool = 0;
			func_603("mnogogrannik_han@door2", (bool)0);
			var_165_string = ""; var_166_bool = 0;
			func_603("hidden_room@door1", (bool)0);
			var_167_string = ""; var_168_bool = 0;
			func_603("imnogogrannik_han@door1", (bool)0);
			var_169_string = ""; var_170_bool = 0;
			func_603("mnogogrannik@door1", (bool)0);
			var_2_bool = true;
			goto Label_526;
		}
		var_172_bool = var_14_string == "hidden_room_load";
		if(var_172_bool != 0) {
			var_173_bool = var_2_bool;
			if(var_173_bool != 0) {
				var_3_bool = true;
				SetVariable("k12q01ChildsAreVisited", (int)1);
				var_176_object = Obj(); var_177_string = "";
				func_556(var_176_object, "quest_k12_01_hidden_room_cutscene");
			}
			goto Label_526;
		}
		var_179_bool = var_14_string == "hidden_room_cutscene_end";
		if(var_179_bool != 0) {
			GetSceneByName(var_23_object, "hidden_room");
			var_181_object = Obj(); var_182_object = Obj(); var_183_string = ""; var_184_string = ""; var_185_string = "";
			var_23_object = var_182_object;
			func_567(var_181_object, var_182_object, "pt_girl", "pers_littlegirl2", "k12q01_littlegirl.xml");
			var_12_object = var_181_object;
			var_186_object = Obj(); var_187_object = Obj(); var_188_string = ""; var_189_string = ""; var_190_string = "";
			var_23_object = var_187_object;
			func_567(var_186_object, var_187_object, "pt_boy", "pers_littleboy2", "k12q01_littleboy.xml");
			var_13_object = var_186_object;
			var_23_object = 0;
			goto Label_526;
		}
		var_192_bool = var_14_string == "hidden_room_unload";
		if(var_192_bool != 0) {
			var_193_bool = var_2_bool;
			if(var_193_bool != 0) {
				var_194_string = ""; var_195_bool = 0;
				func_603("hidden_room@door1", (bool)1);
				var_196_string = ""; var_197_bool = 0;
				func_603("mnogogrannik@door1", (bool)1);
				var_3_bool = false;
				var_198_bool = 0;
				func_1013(var_198_bool);
				if(var_198_bool != 0) {
					var_306_bool = 0; var_307_string = ""; var_308_string = ""; var_309_string = "";
					func_620(var_306_bool, "volonteers_klara", "theater_letter", "");
				}
			}
			goto Label_526;
		}
		var_314_bool = var_14_string == "cleanup";
		if(var_314_bool != 0) {
			GetVariable("k12q01", var_24_int);
			var_317_bool = var_24_int != (int)1000;
			if(var_317_bool != 0) {
				func_527();
			} else {
				func_543();
		}
			var_324_bool = var_14_string == "fail";
			if(var_324_bool != 0) {
				func_527();
				goto Label_526;
			}
			var_326_bool = var_14_string == "completed";
			if(var_326_bool == 0) goto Label_526;
			func_535();
		}
		goto Label_526;
	}
Label_526:
	return 10;
	
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object)
{
	var_14_object = Obj(); var_15_float = 0; var_16_object = Obj(); var_17_float = 0;
	var_1_bool = false;
	var_0_bool = false;
	var_2_bool = false;
	var_3_bool = false;
	func_1286();
	SetTimeEvent((int)0, (int)288);
	var_38_int = 0;
	func_644(var_38_int);
	var_44_bool = var_38_int >= (int)8;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_990(var_45_bool);
		if(var_45_bool != 0) {
			var_158_bool = 0; var_159_string = ""; var_160_string = ""; var_161_string = "";
			func_620(var_158_bool, "volonteers_klara", "childs_letter", "");
		}
	} else {
			SetTimeEvent((int)1, (int)272);
	}
	var_165_int = 0;
	func_1032((int)0);
	func_652();
	func_665();
	GetMainOutdoorScene(var_16_object);
	var_198_object = Obj(); var_199_object = Obj(); var_200_string = ""; var_201_string = ""; var_202_string = "";
	var_16_object = var_199_object;
	func_585(var_198_object, var_199_object, "pt_b12q01_birdmask_s", "pers_birdmask", "k12q01_birdmask_s.xml");
	var_4_object = var_198_object;
	var_216_string = ""; var_217_bool = 0;
	func_603("sobor@door1", (bool)1);
	var_218_string = ""; var_219_bool = 0;
	func_603("hidden_room@door1", (bool)1);
	var_220_string = ""; var_221_bool = 0;
	func_603("mnogogrannik@door1", (bool)1);
	var_222_string = ""; var_223_bool = 0;
	func_603("cot_eva@door1", (bool)0);
	var_224_string = ""; var_225_bool = 0;
	func_603("termitnik2@door1", (bool)0);
	var_226_string = ""; var_227_bool = 0;
	func_603("uprava_admin@door1", (bool)0);
	GetGameTime(var_17_float);
	var_229_bool = var_17_float < (int)271;
	if(var_229_bool != 0) {
		var_230_string = ""; var_231_bool = 0;
		func_603("theater@door1", (bool)0);
		SetTimeEvent((int)2, (int)271);
	} else {
		func_0(var_17_float);

	}
Label_119:
	Hold();
	goto Label_119;
	
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-2] = 0";


func_0(var_10_object)
{
	var_234_object = Obj(); var_235_object = Obj();
	GetMainOutdoorScene(var_235_object);
	var_236_string = ""; var_237_bool = 0;
	func_603("theater@door1", (bool)1);
	var_238_object = Obj(); var_239_object = Obj(); var_240_string = ""; var_241_string = ""; var_242_string = "";
	var_235_object = var_239_object;
	func_585(var_238_object, var_239_object, "pt_b12q01_birdmask_t", "pers_birdmask", "k12q01_birdmask_t.xml");
	var_10_object = var_238_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1281(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsOverrideActive(var_25_bool);
	var_23_bool = !var_25_bool;
	return 2;
}


func_644(var_38_int)
{
	var_39_float = 0; var_40_float = 0;
	GetGameTime(var_40_float);
	var_41_int = 0;
	var_40_float = var_41_int;
	var_38_int = var_41_int % (int)24;
	return 2;
}


func_1286()
{
	var_18_object = Obj(); var_19_object = Obj();
	GetSceneByName(var_19_object, "warehouse_rubin");
	Trigger(var_19_object, "rubin");
	var_22_string = ""; var_23_bool = 0;
	func_603("warehouse_rubin@door1", (bool)0);
	GetSceneByName(var_19_object, "cot_eva");
	Trigger(var_19_object, "danko");
	var_34_string = ""; var_35_bool = 0;
	func_603("cot_eva@door1", (bool)0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1032(var_165_int)
{
	SetVariable("game_final", var_165_int);
	return 0;
}


func_652()
{
	var_167_object = Obj(); var_168_object = Obj();
	CreateDiaryEntry(var_168_object, (int)729, (int)1, (int)539359);
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0;
	var_168_object = var_173_object;
	func_691(var_172_bool, var_173_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1037(var_68_int)
{
	var_69_int = 0; var_70_int = 0;
	GetVariable("game_final", var_70_int);
	var_70_int = var_68_int;
	return 2;
}


func_527()
{
	SetVariable("k12q01", (int)-1);
	func_543();
	return 0;
}


func_914(var_93_bool)
{
	var_94_object = Obj(); var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_object = Obj(); var_99_int = 0; var_100_int = 0; var_101_int = 0;
	CreateIntVector(var_98_object);
	var_102_object = Obj(); var_103_bool = 0; var_104_int = 0;
	var_98_object = var_102_object;
	func_791(var_102_object, (bool)0, (int)-1);
	@@var_98_object:size(var_99_int);
	var_100_int = 0;
	
Label_926:
	var_117_bool = var_100_int < var_99_int;
	if(var_117_bool != 0) {
		@@var_98_object:get(var_101_int, var_100_int);
		var_118_bool = 0;
		var_118_bool = 1;
		var_119_bool = 0; var_120_int = 0;
		var_101_int = var_120_int;
		func_866(var_119_bool, var_120_int);
		if(var_119_bool != 1) {
			var_121_bool = 0; var_122_int = 0;
			var_101_int = var_122_int;
			func_856(var_121_bool, var_122_int);
			if(var_121_bool != 1) {
				var_118_bool = 0;
			}
		}
		if(var_118_bool != 0) {
			var_93_bool = 0;
			var_100_int = var_100_int + (int)1;
			goto Label_926;
		}
		return 8;
	}
	var_93_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1043()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_bool = 0;
	func_725();
	func_719((int)0);
	var_67_int = var_40_int;
	func_1037((int)0);
	var_68_int = var_41_int;
	var_42_bool = 0;
	var_43_bool = 0;
	var_73_bool = var_40_int == (int)0;
	if(var_73_bool != 0) {
		GetVariable("d12q01ChildsAreVisited", var_44_int);
		var_42_bool = var_44_int != (int)0;
		GetVariable("d12q01TheaterIsVisited", var_44_int);
		var_43_bool = var_44_int != (int)0;
	} else {
					var_142_bool = var_40_int == (int)1;
					if(var_142_bool != 0) {
						GetVariable("b12q01ChildsAreVisited", var_45_int);
						var_42_bool = var_45_int != (int)0;
						GetVariable("b12q01TheaterIsVisited", var_45_int);
						var_43_bool = var_45_int != (int)0;
						goto Label_1098;
					}
					var_148_bool = var_40_int == (int)2;
					if(var_148_bool == 0) goto Label_1098;
					GetVariable("k12q01ChildsAreVisited", var_46_int);
					var_42_bool = var_46_int != (int)0;
					GetVariable("k12q01TheaterIsVisited", var_46_int);
					var_43_bool = var_46_int != (int)0;
	}
Label_1098:
	var_47_bool = 0;
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_40_int == (int)0;
	if(var_80_bool != 0) {
		var_82_bool = var_41_int == (int)2;
		if(var_82_bool != 0) {
			var_78_bool = 1;
		}
	}
	if(var_78_bool != 0) {
		var_47_bool = 1;
	}
	var_83_bool = 0;
	var_83_bool = 0;
	var_85_bool = var_40_int == (int)1;
	if(var_85_bool != 0) {
		var_87_bool = var_41_int == (int)1;
		if(var_87_bool != 0) {
			var_83_bool = 1;
		}
	}
	if(var_83_bool != 0) {
		var_47_bool = 1;
	}
	var_88_bool = 0;
	var_88_bool = 0;
	var_90_bool = var_40_int == (int)2;
	if(var_90_bool != 0) {
		var_92_bool = var_41_int == (int)3;
		if(var_92_bool != 0) {
			var_88_bool = 1;
		}
	}
	if(var_88_bool != 0) {
		var_47_bool = 1;
	}
	var_48_bool = 0;
	var_93_bool = 0;
	var_93_bool = 0;
	var_94_bool = 0;
	var_94_bool = 0;
	var_96_bool = var_41_int == (int)4;
	if(var_96_bool != 0) {
		var_97_bool = var_42_bool == 0; //@nz
		if(var_97_bool != 0) {
			var_94_bool = 1;
		}
	}
	if(var_94_bool != 0) {
		var_98_bool = var_43_bool == 0; //@nz
		if(var_98_bool != 0) {
			var_93_bool = 1;
		}
	}
	if(var_93_bool != 0) {
		var_48_bool = 1;
	}
	var_99_bool = 0;
	var_99_bool = 0;
	var_100_bool = 0;
	var_100_bool = 0;
	var_101_bool = var_47_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_102_bool = var_42_bool;
		if(var_102_bool != 0) {
			var_100_bool = 1;
		}
	}
	if(var_100_bool != 0) {
		var_103_bool = var_43_bool == 0; //@nz
		if(var_103_bool != 0) {
			var_99_bool = 1;
		}
	}
	if(var_99_bool != 0) {
		var_48_bool = 1;
	}
	var_104_bool = 0;
	var_104_bool = 0;
	var_105_bool = 0;
	var_105_bool = 0;
	var_106_bool = var_47_bool;
	if(var_106_bool != 0) {
		var_107_bool = var_42_bool;
		if(var_107_bool != 0) {
			var_105_bool = 1;
		}
	}
	if(var_105_bool != 0) {
		var_108_bool = var_43_bool;
		if(var_108_bool != 0) {
			var_104_bool = 1;
		}
	}
	if(var_104_bool != 0) {
		var_48_bool = 1;
	}
	Trace("PlayFinalMovie");
	var_110_int = 0;
	func_1037(var_110_int);
	var_112_bool = var_110_int == (int)1;
	if(var_112_bool != 0) {
		Trace("fin_termit");
		var_114_bool = var_47_bool == 0; //@nz
		if(var_114_bool != 0) {
			UnlockAchievement("ACHIEVEMENT_HELLO_2");
		}
		var_116_bool = var_48_bool;
		if(var_116_bool != 0) {
			GameOver("gameover_termit_chudo.xml");
		} else {
			GameOver("gameover_termit.xml");
	}
		var_119_int = 0;
		func_1037(var_119_int);
		var_121_bool = var_119_int == (int)2;
		if(var_121_bool != 0) {
			Trace("fin_utop");
			var_123_bool = var_47_bool == 0; //@nz
			if(var_123_bool != 0) {
				UnlockAchievement("ACHIEVEMENT_HELLO_2");
			}
			var_125_bool = var_48_bool;
			if(var_125_bool != 0) {
				GameOver("gameover_utopist_chudo.xml");
			} else {
				GameOver("gameover_utopist.xml");
		}
			var_128_int = 0;
			func_1037(var_128_int);
			var_130_bool = var_128_int == (int)3;
			if(var_130_bool != 0) {
				Trace("fin_smiren");
				var_132_bool = var_47_bool == 0; //@nz
				if(var_132_bool != 0) {
					UnlockAchievement("ACHIEVEMENT_HELLO_2");
				}
				var_134_bool = var_48_bool;
				if(var_134_bool != 0) {
					GameOver("gameover_smirennik_chudo.xml");
				} else {
					GameOver("gameover_smirennik.xml");
			}
				Trace("fin_beda");
				var_138_bool = var_48_bool;
				if(var_138_bool != 0) {
					GameOver("gameover_beda_chudo.xml");
					goto Label_1266;
				}
				GameOver("gameover_beda.xml");

			}
			goto Label_1266;
		}
		goto Label_1266;
	}
	goto Label_1266;
	
Label_1266:
	return 18;
	
}


func_791(var_102_object, var_103_bool, var_104_int)
{
	@@var_102_object:add((int)6);
	@@var_102_object:add((int)26);
	@@var_102_object:add((int)2);
	@@var_102_object:add((int)22);
	var_110_bool = var_103_bool == (bool)0;
	if(var_110_bool != 0) {
		@@var_102_object:add((int)15);
		@@var_102_object:add((int)5);
		@@var_102_object:add((int)16);
	} else {
		var_115_bool = var_104_int != (int)0;
		if(var_115_bool == 0) goto Label_823;
		@@var_102_object:add((int)15);
	}
Label_823:
	return 0;
	
}


func_535()
{
	SetVariable("k12q01", (int)1000);
	func_543();
	return 0;
}


func_665()
{
	var_190_object = Obj(); var_191_object = Obj();
	CreateDiaryEntry(var_191_object, (int)735, (int)1, (int)539365);
	var_195_bool = 0; var_196_object = Obj(); var_197_int = 0;
	var_191_object = var_196_object;
	func_691(var_195_bool, var_196_object, (int)729);
	return 2;
}
EMIT "Stack[-1] = 0";


func_543()
{
	EventDisable(26);
	var_320_object = Obj();
	func_550(var_320_object);
	RemoveActor(var_320_object);
	return 0;
}


func_550(var_320_object)
{
	var_321_object = Obj(); var_322_object = Obj();
	self(var_322_object);
	var_322_object = var_320_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_678(var_181_object)
{
	var_182_object = Obj(); var_183_object = Obj();
	GetDiaryRoot(var_183_object);
	var_184_bool = var_183_object == 0; //@nz
	if(var_184_bool != 0) {
		Trace("Can't retrieve diary root");
		var_181_object = 0;
		return 2;
	}
	var_183_object = var_181_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_556(var_44_object, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj();
	GetMainOutdoorScene(var_48_object);
	var_51_int = var_45_string + ".bin";
	AddBlankActor(var_49_object, var_48_object, var_45_string, var_51_int);
	var_49_object = var_44_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_691(var_172_bool, var_173_object, var_174_int)
{
	var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_int = 0;
	func_678(Obj());
	var_181_object = var_178_object;
	@@var_178_object:Find(var_174_int, var_179_object);
	var_186_bool = var_179_object == 0; //@nz
	if(var_186_bool != 0) {
		var_188_int = "Can't find diary parent with id: " + var_174_int;
		Trace(var_188_int);
		var_172_bool = 0;
		return 6;
	}
	@@var_179_object:AddChild(var_173_object);
	SendWorldWndMessage((int)7);
	@@var_173_object:GetCategory(var_180_int);
	SetDiarySection(var_180_int);
	var_172_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_567(var_55_object, var_56_object, var_57_string, var_58_string, var_59_string)
{
	var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	@@var_56_object:GetLocator(var_57_string, var_64_bool, var_65_cvector, var_66_cvector);
	var_68_bool = var_64_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_70_int = "Locator " + var_57_string;
		var_72_int = var_70_int + " doesn't exist";
		Trace(var_72_int);
	} else {
		AddActor(Obj(), var_58_string, var_56_object, var_65_cvector, var_66_cvector, var_59_string);
	}
	var_67_object = var_55_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_824(var_57_object, var_58_bool)
{
	@@var_57_object:add((int)7);
	@@var_57_object:add((int)23);
	@@var_57_object:add((int)21);
	@@var_57_object:add((int)9);
	@@var_57_object:add((int)3);
	@@var_57_object:add((int)1);
	@@var_57_object:add((int)11);
	@@var_57_object:add((int)13);
	var_69_bool = var_58_bool == (bool)0;
	if(var_69_bool != 0) {
		@@var_57_object:add((int)25);
	}
	return 0;
}


func_952(var_48_bool)
{
	var_49_object = Obj(); var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_object = Obj(); var_54_int = 0; var_55_int = 0; var_56_int = 0;
	CreateIntVector(var_53_object);
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0;
	var_53_object = var_57_object;
	func_824((bool)0, (int)-1);
	@@var_53_object:size(var_54_int);
	var_55_int = 0;
	
Label_964:
	var_71_bool = var_55_int < var_54_int;
	if(var_71_bool != 0) {
		@@var_53_object:get(var_56_int, var_55_int);
		var_72_bool = 0;
		var_72_bool = 1;
		var_73_bool = 0; var_74_int = 0;
		var_56_int = var_74_int;
		func_866(var_73_bool, var_74_int);
		if(var_73_bool != 1) {
			var_82_bool = 0; var_83_int = 0;
			var_56_int = var_83_int;
			func_856(var_82_bool, var_83_int);
			if(var_82_bool != 1) {
				var_72_bool = 0;
			}
		}
		if(var_72_bool != 0) {
			var_48_bool = 0;
			var_55_int = var_55_int + (int)1;
			goto Label_964;
		}
		return 8;
	}
	var_48_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_585(var_198_object, var_199_object, var_200_string, var_201_string, var_202_string)
{
	var_203_bool = 0; var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_object = Obj(); var_207_bool = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_object = Obj();
	@@var_199_object:GetLocator(var_200_string, var_207_bool, var_208_cvector, var_209_cvector);
	var_211_bool = var_207_bool == 0; //@nz
	if(var_211_bool != 0) {
		var_213_int = "Locator " + var_200_string;
		var_215_int = var_213_int + " doesn't exist";
		Trace(var_215_int);
	} else {
		@@var_199_object:AddStationaryActor(Obj(), var_208_cvector, var_209_cvector, var_201_string, var_202_string);
	}
	var_210_object = var_198_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_719(var_49_int)
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("branch", var_51_int);
	var_51_int = var_49_int;
	return 2;
}


func_725()
{
	var_49_int = 0;
	func_719(var_49_int);
	var_54_bool = var_49_int == (int)1;
	if(var_54_bool != 0) {
		SetRegistryData("BurahCompleted", (int)1);
	} else {
		var_57_int = 0;
		func_719(var_57_int);
		var_59_bool = var_57_int == (int)0;
		if(var_59_bool != 0) {
			SetRegistryData("DankoCompleted", (int)1);
			goto Label_757;
		}
		var_62_int = 0;
		func_719(var_62_int);
		var_64_bool = var_62_int == (int)2;
		if(var_64_bool == 0) goto Label_757;
		SetRegistryData("KlaraCompleted", (int)1);
	}
Label_757:
	return 0;
	
}


func_856(var_82_bool, var_83_int)
{
	var_84_int = 0; var_85_int = 0;
	var_87_int = "vol_" + var_83_int;
	GetVariable(var_87_int, var_85_int);
	var_89_int = var_85_int & (int)4;
	var_82_bool = var_89_int != (int)0;
	return 2;
}


func_603(var_22_string, var_23_bool)
{
	var_24_object = Obj(); var_25_object = Obj();
	FindActor(var_25_object, var_22_string);
	var_26_bool = var_25_object == 0; //@nz
	if(var_26_bool != 0) {
		var_28_int = "Door " + var_22_string;
		var_30_int = var_28_int + " not found";
		Trace(var_30_int);
	} else {
		@@var_25_object:SetProperty("locked", var_23_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_990(var_45_bool)
{
	var_46_int = 0; var_47_int = 0;
	var_48_bool = 0;
	func_952(var_48_bool);
	if(var_48_bool != 0) {
		(int)0 = (int)0 + (int)1;
	}
	var_93_bool = 0;
	func_914(var_93_bool);
	if(var_93_bool != 0) {
		var_47_int = var_47_int + (int)1;
	}
	var_125_bool = 0;
	func_876(var_125_bool);
	if(var_125_bool != 0) {
		var_47_int = var_47_int + (int)1;
	}
	var_45_bool = var_47_int >= (int)2;
	return 2;
}


func_866(var_73_bool, var_74_int)
{
	var_75_int = 0; var_76_int = 0;
	var_78_int = "vol_" + var_74_int;
	GetVariable(var_78_int, var_76_int);
	var_80_int = var_76_int & (int)16;
	var_73_bool = var_80_int != (int)0;
	return 2;
}


func_620(var_158_bool, var_159_string, var_160_string, var_161_string)
{
	var_162_object = Obj(); var_163_object = Obj();
	FindActor(var_163_object, var_159_string);
	var_164_bool = var_163_object == 0; //@ne
	if(var_164_bool != 0) {
		var_158_bool = 0;
		return 2;
	}
	Trigger(var_163_object, var_160_string, var_161_string);
	var_158_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_876(var_125_bool)
{
	var_126_object = Obj(); var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_object = Obj(); var_131_int = 0; var_132_int = 0; var_133_int = 0;
	CreateIntVector(var_130_object);
	var_134_object = Obj(); var_135_bool = 0; var_136_int = 0;
	var_130_object = var_134_object;
	func_758(var_134_object, (bool)0, (int)-1);
	@@var_130_object:size(var_131_int);
	var_132_int = 0;
	
Label_888:
	var_149_bool = var_132_int < var_131_int;
	if(var_149_bool != 0) {
		@@var_130_object:get(var_133_int, var_132_int);
		var_150_bool = 0;
		var_150_bool = 1;
		var_151_bool = 0; var_152_int = 0;
		var_133_int = var_152_int;
		func_866(var_151_bool, var_152_int);
		if(var_151_bool != 1) {
			var_153_bool = 0; var_154_int = 0;
			var_133_int = var_154_int;
			func_856(var_153_bool, var_154_int);
			if(var_153_bool != 1) {
				var_150_bool = 0;
			}
		}
		if(var_150_bool != 0) {
			var_125_bool = 0;
			var_132_int = var_132_int + (int)1;
			goto Label_888;
		}
		return 8;
	}
	var_125_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1267(var_83_bool)
{
	var_84_int = 0; var_85_int = 0;
	GetVariable("k12q01BurahInSobor", var_85_int);
	var_83_bool = var_85_int != (int)0;
	return 2;
}


func_1013(var_198_bool)
{
	var_198_bool = 0;
	var_199_bool = 0;
	var_199_bool = 0;
	var_200_bool = 0;
	func_952(var_200_bool);
	if(var_200_bool != 0) {
		var_244_bool = 0;
		func_914(var_244_bool);
		if(var_244_bool != 0) {
			var_199_bool = 1;
		}
	}
	if(var_199_bool != 0) {
		var_275_bool = 0;
		func_876(var_275_bool);
		if(var_275_bool != 0) {
			var_198_bool = 1;
		}
	}
	return 0;
}


func_758(var_134_object, var_135_bool, var_136_int)
{
	@@var_134_object:add((int)18);
	@@var_134_object:add((int)24);
	@@var_134_object:add((int)20);
	@@var_134_object:add((int)14);
	var_142_bool = var_135_bool == (bool)0;
	if(var_142_bool != 0) {
		@@var_134_object:add((int)10);
		@@var_134_object:add((int)17);
		@@var_134_object:add((int)8);
	} else {
		var_147_bool = var_136_int != (int)1;
		if(var_147_bool == 0) goto Label_790;
		@@var_134_object:add((int)10);
	}
Label_790:
	return 0;
	
}


func_632(var_121_bool, var_122_string)
{
	var_123_object = Obj(); var_124_object = Obj();
	FindActor(var_124_object, var_122_string);
	var_125_bool = var_124_object == 0; //@nz
	if(var_125_bool != 0) {
		var_121_bool = 0;
		return 2;
	}
	RemoveActor(var_124_object);
	var_121_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1274(var_93_bool)
{
	var_94_int = 0; var_95_int = 0;
	GetVariable("k12q01DankoInSobor", var_95_int);
	var_93_bool = var_95_int != (int)0;
	return 2;
}


