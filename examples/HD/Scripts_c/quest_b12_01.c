// @IMPORTS: GetMainOutdoorScene/1,SetTimeEvent/2,GetSceneByName/2,GetGameTime/1,Hold/0,Trace/1,Trigger/2,SetVariable/2,GetVariable/2,RemoveActor/1,self/1,AddBlankActor/4,AddActor/6,FindActor/2,Trigger/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,SetRegistryData/2,CreateIntVector/1,UnlockAchievement/1,GameOver/1,IsOverrideActive/1
// @STRINGS: W:theater@door1|W:pt_b12q01_birdmask_t|W:pers_birdmask|W:b12q01_birdmask_t.xml|W:volonteers_burah|W:childs_letter|W:pt_b12q01_birdmask_s|W:b12q01_birdmask_s.xml|W:termitnik2|W:pt_b12q01_klara|W:NPC_Klara|W:b12q01_klara_t2.xml|W:sobor@door1|W:hidden_room@door1|W:mnogogrannik@door1|W:cot_eva@door1|W:termitnik2@door1|W:uprava_admin@door1|W:final 0|W:final 1 locked: |W:init_sobor|W:noaglaja|W:cleanup|W:isobor@door1|W:sobor_load|W:quest_b12_01_sobor_cutscene|W:sobor_cutscene_end|W:pt_b12q01_block|W:NPC_Block|W:b12q01_Block.xml|W:pt_b12q01_aglaja|W:NPC_Aglaja|W:b12q01_Aglaja.xml|W:pt_b12q01_kapella|W:NPC_Kapella|W:b12q01_Kapella.xml|W:b12q01_Klara.xml|W:pt_b12q01_danko|W:NPC_Bakalavr|W:b12q01_Danko.xml|W:sobor_unload|A:Remove|W:init_theater|W:NPC_Mark|W:itheater@door1|W:theater_load|W:quest_b12_01_theater_cutscene|W:b12q01TheaterIsVisited|W:theater_cutscene_end|W:pt_b12q01_birdmask|W:b12q01_tbirdmask.xml|W:pt_b12q01_whitemask|W:pers_whitemask|W:b12q01_twhitemask.xml|W:theater_unload|W:init_hidden_room|W:mnogogrannik_han@door1|W:mnogogrannik_han@door2|W:imnogogrannik_han@door1|W:hidden_room_load|W:b12q01ChildsAreVisited|W:quest_b12_01_hidden_room_cutscene|W:hidden_room_cutscene_end|W:pt_girl|W:pers_littlegirl2|W:b12q01_littlegirl.xml|W:pt_boy|W:pers_littleboy2|W:b12q01_littleboy.xml|W:hidden_room_unload|W:theater_letter|W:b12q01|W:fail|W:completed|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:BurahCompleted|W:DankoCompleted|W:KlaraCompleted|A:add|W:vol_|A:size|A:get|W:game_final|W:d12q01ChildsAreVisited|W:d12q01TheaterIsVisited|W:k12q01ChildsAreVisited|W:k12q01TheaterIsVisited|W:PlayFinalMovie|W:fin_termit|W:ACHIEVEMENT_HELLO_2|W:gameover_termit_chudo.xml|W:gameover_termit.xml|W:fin_utop|W:gameover_utopist_chudo.xml|W:gameover_utopist.xml|W:fin_smiren|W:gameover_smirennik_chudo.xml|W:gameover_smirennik.xml|W:fin_beda|W:gameover_beda_chudo.xml|W:gameover_beda.xml|W:b12q01KlaraInSobor|W:b12q01DankoInSobor|W:warehouse_rubin|W:warehouse_rubin@door1
// @GLOBALS: 0:object:
// @RUN_OP: 0x12
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool,bool,object,object,object,object,object,object,object,object,object,object,object params=0
// @EVENT_9: op=0x87 vars=int,float
// @EVENT_26: op=0xc6 vars=string
// @PE: 0x306,0x327,0x348,0x418

task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_int, var_16_float)
{
	var_17_float = 0; var_18_float = 0;
	EventDisable(26);
	EventDisable(9);
	var_20_bool = var_15_int == (int)0;
	if(var_20_bool != 0) {
		Trace("final 0");
		var_22_bool = 0;
		var_22_bool = 1;
		var_23_bool = var_3_bool;
		if(var_23_bool != 1) {
			var_24_bool = 0;
			func_1297(var_24_bool);
			var_27_bool = var_24_bool == 0; //@nz
			if(var_27_bool != 1) {
				var_22_bool = 0;
			}
		}
		if(var_22_bool != 0) {
			var_29_int = "final 1 locked: " + var_3_bool;
			Trace(var_29_int);
			GetGameTime(var_18_float);
			var_18_float = var_18_float + (float)0.008333333767950535;
			SetTimeEvent((int)0, var_18_float);
			EventEnable(26);
			EventEnable(9);
			return 2;
		}
		func_1059();
	} else {
		var_155_bool = var_15_int == (int)1;
		if(var_155_bool != 0) {
			var_156_bool = 0;
			func_1006(var_156_bool);
			if(var_156_bool != 0) {
				var_269_bool = 0; var_270_string = ""; var_271_string = ""; var_272_string = "";
				func_636(var_269_bool, "volonteers_burah", "childs_letter", "");
			}
			EventEnable(26);
			EventEnable(9);
			goto Label_197;
		}
		var_277_bool = var_15_int == (int)2;
		if(var_277_bool == 0) goto Label_197;
		func_0(var_18_float);
		EventEnable(26);
		EventEnable(9);
	}
Label_197:
	return 2;
	
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0;
	Trace(var_15_string);
	var_27_bool = var_15_string == "init_sobor";
	if(var_27_bool != 0) {
		GetSceneByName(var_21_object, "sobor");
		Trigger(var_21_object, "noaglaja");
		var_30_object = var_9_object;
		if(var_30_object != 0) {
			Trigger(var_9_object, "cleanup");
		}
		var_32_string = ""; var_33_bool = 0;
		func_619("isobor@door1", (bool)1);
		var_42_string = ""; var_43_bool = 0;
		func_619("sobor@door1", (bool)0);
		var_1_bool = true;
		var_21_object = 0;
	} else {
		var_45_bool = var_15_string == "sobor_load";
		if(var_45_bool != 0) {
			var_46_bool = var_1_bool;
			if(var_46_bool != 0) {
				var_3_bool = true;
				var_47_object = Obj(); var_48_string = "";
				func_572(var_47_object, "quest_b12_01_sobor_cutscene");
			}
			goto Label_542;
		}
		var_56_bool = var_15_string == "sobor_cutscene_end";
		if(var_56_bool != 0) {
			GetSceneByName(var_22_object, "sobor");
			var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = "";
			var_22_object = var_59_object;
			func_583(var_58_object, var_59_object, "pt_b12q01_block", "NPC_Block", "b12q01_Block.xml");
			var_5_object = var_58_object;
			var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = "";
			var_22_object = var_77_object;
			func_583(var_76_object, var_77_object, "pt_b12q01_aglaja", "NPC_Aglaja", "b12q01_Aglaja.xml");
			var_6_object = var_76_object;
			var_81_object = Obj(); var_82_object = Obj(); var_83_string = ""; var_84_string = ""; var_85_string = "";
			var_22_object = var_82_object;
			func_583(var_81_object, var_82_object, "pt_b12q01_kapella", "NPC_Kapella", "b12q01_Kapella.xml");
			var_7_object = var_81_object;
			var_86_bool = 0;
			func_1283(var_86_bool);
			if(var_86_bool != 0) {
				var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = "";
				var_22_object = var_92_object;
				func_583(var_91_object, var_92_object, "pt_b12q01_klara", "NPC_Klara", "b12q01_Klara.xml");
				var_8_object = var_91_object;
			}
			var_96_bool = 0;
			func_1290(var_96_bool);
			if(var_96_bool != 0) {
				var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = "";
				var_22_object = var_102_object;
				func_583(var_101_object, var_102_object, "pt_b12q01_danko", "NPC_Bakalavr", "b12q01_Danko.xml");
				var_10_object = var_101_object;
			}
			var_22_object = 0;
			goto Label_542;
		}
		var_107_bool = var_15_string == "sobor_unload";
		if(var_107_bool != 0) {
			var_108_bool = var_1_bool;
			if(var_108_bool != 0) {
				var_109_object = var_4_object;
				if(var_109_object != 0) {
					@@@var_4_object:Remove();
				}
				var_110_object = var_5_object;
				if(var_110_object != 0) {
					Trigger(var_5_object, "cleanup");
				}
				var_112_object = var_6_object;
				if(var_112_object != 0) {
					Trigger(var_6_object, "cleanup");
				}
				var_114_object = var_7_object;
				if(var_114_object != 0) {
					Trigger(var_7_object, "cleanup");
				}
				var_116_object = var_8_object;
				if(var_116_object != 0) {
					Trigger(var_8_object, "cleanup");
				}
				var_118_object = var_10_object;
				if(var_118_object != 0) {
					Trigger(var_10_object, "cleanup");
				}
				var_120_string = ""; var_121_bool = 0;
				func_619("sobor@door1", (bool)1);
				var_3_bool = false;
			}
			goto Label_542;
		}
		var_123_bool = var_15_string == "init_theater";
		if(var_123_bool != 0) {
			var_124_bool = 0; var_125_string = "";
			func_648(var_124_bool, "NPC_Mark");
			var_129_string = ""; var_130_bool = 0;
			func_619("itheater@door1", (bool)1);
			var_131_string = ""; var_132_bool = 0;
			func_619("theater@door1", (bool)0);
			var_0_bool = true;
			goto Label_542;
		}
		var_134_bool = var_15_string == "theater_load";
		if(var_134_bool != 0) {
			var_135_bool = var_0_bool;
			if(var_135_bool != 0) {
				var_3_bool = true;
				var_136_object = Obj(); var_137_string = "";
				func_572(var_136_object, "quest_b12_01_theater_cutscene");
				SetVariable("b12q01TheaterIsVisited", (int)1);
			}
			goto Label_542;
		}
		var_141_bool = var_15_string == "theater_cutscene_end";
		if(var_141_bool != 0) {
			GetSceneByName(var_23_object, "theater");
			var_143_object = Obj(); var_144_object = Obj(); var_145_string = ""; var_146_string = ""; var_147_string = "";
			var_23_object = var_144_object;
			func_583(var_143_object, var_144_object, "pt_b12q01_birdmask", "pers_birdmask", "b12q01_tbirdmask.xml");
			var_11_object = var_143_object;
			var_148_object = Obj(); var_149_object = Obj(); var_150_string = ""; var_151_string = ""; var_152_string = "";
			var_23_object = var_149_object;
			func_583(var_148_object, var_149_object, "pt_b12q01_whitemask", "pers_whitemask", "b12q01_twhitemask.xml");
			var_12_object = var_148_object;
			var_23_object = 0;
			goto Label_542;
		}
		var_154_bool = var_15_string == "theater_unload";
		if(var_154_bool != 0) {
			var_155_bool = var_0_bool;
			if(var_155_bool != 0) {
				var_156_object = var_11_object;
				if(var_156_object != 0) {
					Trigger(var_11_object, "cleanup");
				}
				var_158_object = var_12_object;
				if(var_158_object != 0) {
					Trigger(var_12_object, "cleanup");
				}
				var_160_string = ""; var_161_bool = 0;
				func_619("theater@door1", (bool)1);
				var_3_bool = false;
			}
			goto Label_542;
		}
		var_163_bool = var_15_string == "init_hidden_room";
		if(var_163_bool != 0) {
			var_164_string = ""; var_165_bool = 0;
			func_619("mnogogrannik_han@door1", (bool)0);
			var_166_string = ""; var_167_bool = 0;
			func_619("mnogogrannik_han@door2", (bool)0);
			var_168_string = ""; var_169_bool = 0;
			func_619("hidden_room@door1", (bool)0);
			var_170_string = ""; var_171_bool = 0;
			func_619("imnogogrannik_han@door1", (bool)0);
			var_172_string = ""; var_173_bool = 0;
			func_619("mnogogrannik@door1", (bool)0);
			var_2_bool = true;
			goto Label_542;
		}
		var_175_bool = var_15_string == "hidden_room_load";
		if(var_175_bool != 0) {
			var_176_bool = var_2_bool;
			if(var_176_bool != 0) {
				var_3_bool = true;
				SetVariable("b12q01ChildsAreVisited", (int)1);
				var_179_object = Obj(); var_180_string = "";
				func_572(var_179_object, "quest_b12_01_hidden_room_cutscene");
			}
			goto Label_542;
		}
		var_182_bool = var_15_string == "hidden_room_cutscene_end";
		if(var_182_bool != 0) {
			GetSceneByName(var_24_object, "hidden_room");
			var_184_object = Obj(); var_185_object = Obj(); var_186_string = ""; var_187_string = ""; var_188_string = "";
			var_24_object = var_185_object;
			func_583(var_184_object, var_185_object, "pt_girl", "pers_littlegirl2", "b12q01_littlegirl.xml");
			var_13_object = var_184_object;
			var_189_object = Obj(); var_190_object = Obj(); var_191_string = ""; var_192_string = ""; var_193_string = "";
			var_24_object = var_190_object;
			func_583(var_189_object, var_190_object, "pt_boy", "pers_littleboy2", "b12q01_littleboy.xml");
			var_14_object = var_189_object;
			var_24_object = 0;
			goto Label_542;
		}
		var_195_bool = var_15_string == "hidden_room_unload";
		if(var_195_bool != 0) {
			var_196_bool = var_2_bool;
			if(var_196_bool != 0) {
				var_197_string = ""; var_198_bool = 0;
				func_619("hidden_room@door1", (bool)1);
				var_199_string = ""; var_200_bool = 0;
				func_619("mnogogrannik@door1", (bool)1);
				var_3_bool = false;
				var_201_bool = 0;
				func_1029(var_201_bool);
				if(var_201_bool != 0) {
					var_309_bool = 0; var_310_string = ""; var_311_string = ""; var_312_string = "";
					func_636(var_309_bool, "volonteers_burah", "theater_letter", "");
				}
			}
			goto Label_542;
		}
		var_317_bool = var_15_string == "cleanup";
		if(var_317_bool != 0) {
			GetVariable("b12q01", var_25_int);
			var_320_bool = var_25_int != (int)1000;
			if(var_320_bool != 0) {
				func_543();
			} else {
				func_559();
		}
			var_327_bool = var_15_string == "fail";
			if(var_327_bool != 0) {
				func_543();
				goto Label_542;
			}
			var_329_bool = var_15_string == "completed";
			if(var_329_bool == 0) goto Label_542;
			func_551();
		}
		goto Label_542;
	}
Label_542:
	return 10;
	
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object)
{
	var_15_object = Obj(); var_16_float = 0; var_17_object = Obj(); var_18_float = 0;
	var_1_bool = false;
	var_0_bool = false;
	var_2_bool = false;
	var_3_bool = false;
	func_1302();
	SetTimeEvent((int)0, (int)288);
	var_35_int = 0;
	func_660(var_35_int);
	var_41_bool = var_35_int >= (int)8;
	if(var_41_bool != 0) {
		var_42_bool = 0;
		func_1006(var_42_bool);
		if(var_42_bool != 0) {
			var_155_bool = 0; var_156_string = ""; var_157_string = ""; var_158_string = "";
			func_636(var_155_bool, "volonteers_burah", "childs_letter", "");
		}
	} else {
			SetTimeEvent((int)1, (int)272);
	}
	var_162_int = 0;
	func_1048((int)0);
	func_668();
	func_681();
	GetMainOutdoorScene(var_17_object);
	var_195_object = Obj(); var_196_object = Obj(); var_197_string = ""; var_198_string = ""; var_199_string = "";
	var_17_object = var_196_object;
	func_601(var_195_object, var_196_object, "pt_b12q01_birdmask_s", "pers_birdmask", "b12q01_birdmask_s.xml");
	var_4_object = var_195_object;
	GetSceneByName(var_17_object, "termitnik2");
	var_214_object = Obj(); var_215_object = Obj(); var_216_string = ""; var_217_string = ""; var_218_string = "";
	var_17_object = var_215_object;
	func_583(var_214_object, var_215_object, "pt_b12q01_klara", "NPC_Klara", "b12q01_klara_t2.xml");
	var_9_object = var_214_object;
	var_232_string = ""; var_233_bool = 0;
	func_619("sobor@door1", (bool)1);
	var_234_string = ""; var_235_bool = 0;
	func_619("hidden_room@door1", (bool)1);
	var_236_string = ""; var_237_bool = 0;
	func_619("mnogogrannik@door1", (bool)1);
	var_238_string = ""; var_239_bool = 0;
	func_619("cot_eva@door1", (bool)0);
	var_240_string = ""; var_241_bool = 0;
	func_619("termitnik2@door1", (bool)0);
	var_242_string = ""; var_243_bool = 0;
	func_619("uprava_admin@door1", (bool)0);
	GetGameTime(var_18_float);
	var_245_bool = var_18_float < (int)271;
	if(var_245_bool != 0) {
		var_246_string = ""; var_247_bool = 0;
		func_619("theater@door1", (bool)0);
		SetTimeEvent((int)2, (int)271);
	} else {
		func_0(var_18_float);

	}
Label_130:
	Hold();
	goto Label_130;
	
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-2] = 0";


func_0(var_11_object)
{
	var_250_object = Obj(); var_251_object = Obj();
	GetMainOutdoorScene(var_251_object);
	var_252_string = ""; var_253_bool = 0;
	func_619("theater@door1", (bool)1);
	var_254_object = Obj(); var_255_object = Obj(); var_256_string = ""; var_257_string = ""; var_258_string = "";
	var_251_object = var_255_object;
	func_601(var_254_object, var_255_object, "pt_b12q01_birdmask_t", "pers_birdmask", "b12q01_birdmask_t.xml");
	var_11_object = var_254_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_636(var_155_bool, var_156_string, var_157_string, var_158_string)
{
	var_159_object = Obj(); var_160_object = Obj();
	FindActor(var_160_object, var_156_string);
	var_161_bool = var_160_object == 0; //@ne
	if(var_161_bool != 0) {
		var_155_bool = 0;
		return 2;
	}
	Trigger(var_160_object, var_157_string, var_158_string);
	var_155_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1283(var_86_bool)
{
	var_87_int = 0; var_88_int = 0;
	GetVariable("b12q01KlaraInSobor", var_88_int);
	var_86_bool = var_88_int != (int)0;
	return 2;
}


func_1029(var_201_bool)
{
	var_201_bool = 0;
	var_202_bool = 0;
	var_202_bool = 0;
	var_203_bool = 0;
	func_968(var_203_bool);
	if(var_203_bool != 0) {
		var_247_bool = 0;
		func_930(var_247_bool);
		if(var_247_bool != 0) {
			var_202_bool = 1;
		}
	}
	if(var_202_bool != 0) {
		var_278_bool = 0;
		func_892(var_278_bool);
		if(var_278_bool != 0) {
			var_201_bool = 1;
		}
	}
	return 0;
}


func_774(var_131_object, var_132_bool, var_133_int)
{
	@@var_131_object:add((int)18);
	@@var_131_object:add((int)24);
	@@var_131_object:add((int)20);
	@@var_131_object:add((int)14);
	var_139_bool = var_132_bool == (bool)0;
	if(var_139_bool != 0) {
		@@var_131_object:add((int)10);
		@@var_131_object:add((int)17);
		@@var_131_object:add((int)8);
	} else {
		var_144_bool = var_133_int != (int)1;
		if(var_144_bool == 0) goto Label_806;
		@@var_131_object:add((int)10);
	}
Label_806:
	return 0;
	
}


func_648(var_124_bool, var_125_string)
{
	var_126_object = Obj(); var_127_object = Obj();
	FindActor(var_127_object, var_125_string);
	var_128_bool = var_127_object == 0; //@nz
	if(var_128_bool != 0) {
		var_124_bool = 0;
		return 2;
	}
	RemoveActor(var_127_object);
	var_124_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1290(var_96_bool)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable("b12q01DankoInSobor", var_98_int);
	var_96_bool = var_98_int != (int)0;
	return 2;
}


func_1297(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0;
	IsOverrideActive(var_26_bool);
	var_24_bool = !var_26_bool;
	return 2;
}


func_660(var_35_int)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_38_int = 0;
	var_37_float = var_38_int;
	var_35_int = var_38_int % (int)24;
	return 2;
}


func_1302()
{
	var_19_object = Obj(); var_20_object = Obj();
	GetSceneByName(var_20_object, "warehouse_rubin");
	Trigger(var_20_object, "rubin");
	var_23_string = ""; var_24_bool = 0;
	func_619("warehouse_rubin@door1", (bool)0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1048(var_162_int)
{
	SetVariable("game_final", var_162_int);
	return 0;
}


func_668()
{
	var_164_object = Obj(); var_165_object = Obj();
	CreateDiaryEntry(var_165_object, (int)613, (int)1, (int)532002);
	var_169_bool = 0; var_170_object = Obj(); var_171_int = 0;
	var_165_object = var_170_object;
	func_707(var_169_bool, var_170_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1053(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("game_final", var_71_int);
	var_71_int = var_69_int;
	return 2;
}


func_543()
{
	SetVariable("b12q01", (int)-1);
	func_559();
	return 0;
}


func_930(var_90_bool)
{
	var_91_object = Obj(); var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_object = Obj(); var_96_int = 0; var_97_int = 0; var_98_int = 0;
	CreateIntVector(var_95_object);
	var_99_object = Obj(); var_100_bool = 0; var_101_int = 0;
	var_95_object = var_99_object;
	func_807(var_99_object, (bool)0, (int)-1);
	@@var_95_object:size(var_96_int);
	var_97_int = 0;
	
Label_942:
	var_114_bool = var_97_int < var_96_int;
	if(var_114_bool != 0) {
		@@var_95_object:get(var_98_int, var_97_int);
		var_115_bool = 0;
		var_115_bool = 1;
		var_116_bool = 0; var_117_int = 0;
		var_98_int = var_117_int;
		func_882(var_116_bool, var_117_int);
		if(var_116_bool != 1) {
			var_118_bool = 0; var_119_int = 0;
			var_98_int = var_119_int;
			func_872(var_118_bool, var_119_int);
			if(var_118_bool != 1) {
				var_115_bool = 0;
			}
		}
		if(var_115_bool != 0) {
			var_90_bool = 0;
			var_97_int = var_97_int + (int)1;
			goto Label_942;
		}
		return 8;
	}
	var_90_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1059()
{
	var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_bool = 0;
	func_741();
	func_735((int)0);
	var_68_int = var_41_int;
	func_1053((int)0);
	var_69_int = var_42_int;
	var_43_bool = 0;
	var_44_bool = 0;
	var_74_bool = var_41_int == (int)0;
	if(var_74_bool != 0) {
		GetVariable("d12q01ChildsAreVisited", var_45_int);
		var_43_bool = var_45_int != (int)0;
		GetVariable("d12q01TheaterIsVisited", var_45_int);
		var_44_bool = var_45_int != (int)0;
	} else {
					var_143_bool = var_41_int == (int)1;
					if(var_143_bool != 0) {
						GetVariable("b12q01ChildsAreVisited", var_46_int);
						var_43_bool = var_46_int != (int)0;
						GetVariable("b12q01TheaterIsVisited", var_46_int);
						var_44_bool = var_46_int != (int)0;
						goto Label_1114;
					}
					var_149_bool = var_41_int == (int)2;
					if(var_149_bool == 0) goto Label_1114;
					GetVariable("k12q01ChildsAreVisited", var_47_int);
					var_43_bool = var_47_int != (int)0;
					GetVariable("k12q01TheaterIsVisited", var_47_int);
					var_44_bool = var_47_int != (int)0;
	}
Label_1114:
	var_48_bool = 0;
	var_79_bool = 0;
	var_79_bool = 0;
	var_81_bool = var_41_int == (int)0;
	if(var_81_bool != 0) {
		var_83_bool = var_42_int == (int)2;
		if(var_83_bool != 0) {
			var_79_bool = 1;
		}
	}
	if(var_79_bool != 0) {
		var_48_bool = 1;
	}
	var_84_bool = 0;
	var_84_bool = 0;
	var_86_bool = var_41_int == (int)1;
	if(var_86_bool != 0) {
		var_88_bool = var_42_int == (int)1;
		if(var_88_bool != 0) {
			var_84_bool = 1;
		}
	}
	if(var_84_bool != 0) {
		var_48_bool = 1;
	}
	var_89_bool = 0;
	var_89_bool = 0;
	var_91_bool = var_41_int == (int)2;
	if(var_91_bool != 0) {
		var_93_bool = var_42_int == (int)3;
		if(var_93_bool != 0) {
			var_89_bool = 1;
		}
	}
	if(var_89_bool != 0) {
		var_48_bool = 1;
	}
	var_49_bool = 0;
	var_94_bool = 0;
	var_94_bool = 0;
	var_95_bool = 0;
	var_95_bool = 0;
	var_97_bool = var_42_int == (int)4;
	if(var_97_bool != 0) {
		var_98_bool = var_43_bool == 0; //@nz
		if(var_98_bool != 0) {
			var_95_bool = 1;
		}
	}
	if(var_95_bool != 0) {
		var_99_bool = var_44_bool == 0; //@nz
		if(var_99_bool != 0) {
			var_94_bool = 1;
		}
	}
	if(var_94_bool != 0) {
		var_49_bool = 1;
	}
	var_100_bool = 0;
	var_100_bool = 0;
	var_101_bool = 0;
	var_101_bool = 0;
	var_102_bool = var_48_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_103_bool = var_43_bool;
		if(var_103_bool != 0) {
			var_101_bool = 1;
		}
	}
	if(var_101_bool != 0) {
		var_104_bool = var_44_bool == 0; //@nz
		if(var_104_bool != 0) {
			var_100_bool = 1;
		}
	}
	if(var_100_bool != 0) {
		var_49_bool = 1;
	}
	var_105_bool = 0;
	var_105_bool = 0;
	var_106_bool = 0;
	var_106_bool = 0;
	var_107_bool = var_48_bool;
	if(var_107_bool != 0) {
		var_108_bool = var_43_bool;
		if(var_108_bool != 0) {
			var_106_bool = 1;
		}
	}
	if(var_106_bool != 0) {
		var_109_bool = var_44_bool;
		if(var_109_bool != 0) {
			var_105_bool = 1;
		}
	}
	if(var_105_bool != 0) {
		var_49_bool = 1;
	}
	Trace("PlayFinalMovie");
	var_111_int = 0;
	func_1053(var_111_int);
	var_113_bool = var_111_int == (int)1;
	if(var_113_bool != 0) {
		Trace("fin_termit");
		var_115_bool = var_48_bool == 0; //@nz
		if(var_115_bool != 0) {
			UnlockAchievement("ACHIEVEMENT_HELLO_2");
		}
		var_117_bool = var_49_bool;
		if(var_117_bool != 0) {
			GameOver("gameover_termit_chudo.xml");
		} else {
			GameOver("gameover_termit.xml");
	}
		var_120_int = 0;
		func_1053(var_120_int);
		var_122_bool = var_120_int == (int)2;
		if(var_122_bool != 0) {
			Trace("fin_utop");
			var_124_bool = var_48_bool == 0; //@nz
			if(var_124_bool != 0) {
				UnlockAchievement("ACHIEVEMENT_HELLO_2");
			}
			var_126_bool = var_49_bool;
			if(var_126_bool != 0) {
				GameOver("gameover_utopist_chudo.xml");
			} else {
				GameOver("gameover_utopist.xml");
		}
			var_129_int = 0;
			func_1053(var_129_int);
			var_131_bool = var_129_int == (int)3;
			if(var_131_bool != 0) {
				Trace("fin_smiren");
				var_133_bool = var_48_bool == 0; //@nz
				if(var_133_bool != 0) {
					UnlockAchievement("ACHIEVEMENT_HELLO_2");
				}
				var_135_bool = var_49_bool;
				if(var_135_bool != 0) {
					GameOver("gameover_smirennik_chudo.xml");
				} else {
					GameOver("gameover_smirennik.xml");
			}
				Trace("fin_beda");
				var_139_bool = var_49_bool;
				if(var_139_bool != 0) {
					GameOver("gameover_beda_chudo.xml");
					goto Label_1282;
				}
				GameOver("gameover_beda.xml");

			}
			goto Label_1282;
		}
		goto Label_1282;
	}
	goto Label_1282;
	
Label_1282:
	return 18;
	
}


func_551()
{
	SetVariable("b12q01", (int)1000);
	func_559();
	return 0;
}


func_807(var_99_object, var_100_bool, var_101_int)
{
	@@var_99_object:add((int)6);
	@@var_99_object:add((int)26);
	@@var_99_object:add((int)2);
	@@var_99_object:add((int)22);
	var_107_bool = var_100_bool == (bool)0;
	if(var_107_bool != 0) {
		@@var_99_object:add((int)15);
		@@var_99_object:add((int)5);
		@@var_99_object:add((int)16);
	} else {
		var_112_bool = var_101_int != (int)0;
		if(var_112_bool == 0) goto Label_839;
		@@var_99_object:add((int)15);
	}
Label_839:
	return 0;
	
}


func_681()
{
	var_187_object = Obj(); var_188_object = Obj();
	CreateDiaryEntry(var_188_object, (int)694, (int)1, (int)535402);
	var_192_bool = 0; var_193_object = Obj(); var_194_int = 0;
	var_188_object = var_193_object;
	func_707(var_192_bool, var_193_object, (int)613);
	return 2;
}
EMIT "Stack[-1] = 0";


func_559()
{
	EventDisable(26);
	var_323_object = Obj();
	func_566(var_323_object);
	RemoveActor(var_323_object);
	return 0;
}


func_566(var_323_object)
{
	var_324_object = Obj(); var_325_object = Obj();
	self(var_325_object);
	var_325_object = var_323_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_694(var_178_object)
{
	var_179_object = Obj(); var_180_object = Obj();
	GetDiaryRoot(var_180_object);
	var_181_bool = var_180_object == 0; //@nz
	if(var_181_bool != 0) {
		Trace("Can't retrieve diary root");
		var_178_object = 0;
		return 2;
	}
	var_180_object = var_178_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_572(var_47_object, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj();
	GetMainOutdoorScene(var_51_object);
	var_54_int = var_48_string + ".bin";
	AddBlankActor(var_52_object, var_51_object, var_48_string, var_54_int);
	var_52_object = var_47_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_707(var_169_bool, var_170_object, var_171_int)
{
	var_172_object = Obj(); var_173_object = Obj(); var_174_int = 0; var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0;
	func_694(Obj());
	var_178_object = var_175_object;
	@@var_175_object:Find(var_171_int, var_176_object);
	var_183_bool = var_176_object == 0; //@nz
	if(var_183_bool != 0) {
		var_185_int = "Can't find diary parent with id: " + var_171_int;
		Trace(var_185_int);
		var_169_bool = 0;
		return 6;
	}
	@@var_176_object:AddChild(var_170_object);
	SendWorldWndMessage((int)7);
	@@var_170_object:GetCategory(var_177_int);
	SetDiarySection(var_177_int);
	var_169_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_583(var_214_object, var_215_object, var_216_string, var_217_string, var_218_string)
{
	var_219_bool = 0; var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_object = Obj(); var_223_bool = 0; var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_object = Obj();
	@@var_215_object:GetLocator(var_216_string, var_223_bool, var_224_cvector, var_225_cvector);
	var_227_bool = var_223_bool == 0; //@nz
	if(var_227_bool != 0) {
		var_229_int = "Locator " + var_216_string;
		var_231_int = var_229_int + " doesn't exist";
		Trace(var_231_int);
	} else {
		AddActor(Obj(), var_217_string, var_215_object, var_224_cvector, var_225_cvector, var_218_string);
	}
	var_226_object = var_214_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_840(var_54_object, var_55_bool)
{
	@@var_54_object:add((int)7);
	@@var_54_object:add((int)23);
	@@var_54_object:add((int)21);
	@@var_54_object:add((int)9);
	@@var_54_object:add((int)3);
	@@var_54_object:add((int)1);
	@@var_54_object:add((int)11);
	@@var_54_object:add((int)13);
	var_66_bool = var_55_bool == (bool)0;
	if(var_66_bool != 0) {
		@@var_54_object:add((int)25);
	}
	return 0;
}


func_968(var_45_bool)
{
	var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_object = Obj(); var_51_int = 0; var_52_int = 0; var_53_int = 0;
	CreateIntVector(var_50_object);
	var_54_object = Obj(); var_55_bool = 0; var_56_int = 0;
	var_50_object = var_54_object;
	func_840((bool)0, (int)-1);
	@@var_50_object:size(var_51_int);
	var_52_int = 0;
	
Label_980:
	var_68_bool = var_52_int < var_51_int;
	if(var_68_bool != 0) {
		@@var_50_object:get(var_53_int, var_52_int);
		var_69_bool = 0;
		var_69_bool = 1;
		var_70_bool = 0; var_71_int = 0;
		var_53_int = var_71_int;
		func_882(var_70_bool, var_71_int);
		if(var_70_bool != 1) {
			var_79_bool = 0; var_80_int = 0;
			var_53_int = var_80_int;
			func_872(var_79_bool, var_80_int);
			if(var_79_bool != 1) {
				var_69_bool = 0;
			}
		}
		if(var_69_bool != 0) {
			var_45_bool = 0;
			var_52_int = var_52_int + (int)1;
			goto Label_980;
		}
		return 8;
	}
	var_45_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_601(var_195_object, var_196_object, var_197_string, var_198_string, var_199_string)
{
	var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_object = Obj(); var_204_bool = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_object = Obj();
	@@var_196_object:GetLocator(var_197_string, var_204_bool, var_205_cvector, var_206_cvector);
	var_208_bool = var_204_bool == 0; //@nz
	if(var_208_bool != 0) {
		var_210_int = "Locator " + var_197_string;
		var_212_int = var_210_int + " doesn't exist";
		Trace(var_212_int);
	} else {
		@@var_196_object:AddStationaryActor(Obj(), var_205_cvector, var_206_cvector, var_198_string, var_199_string);
	}
	var_207_object = var_195_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_735(var_50_int)
{
	var_51_int = 0; var_52_int = 0;
	GetVariable("branch", var_52_int);
	var_52_int = var_50_int;
	return 2;
}


func_741()
{
	var_50_int = 0;
	func_735(var_50_int);
	var_55_bool = var_50_int == (int)1;
	if(var_55_bool != 0) {
		SetRegistryData("BurahCompleted", (int)1);
	} else {
		var_58_int = 0;
		func_735(var_58_int);
		var_60_bool = var_58_int == (int)0;
		if(var_60_bool != 0) {
			SetRegistryData("DankoCompleted", (int)1);
			goto Label_773;
		}
		var_63_int = 0;
		func_735(var_63_int);
		var_65_bool = var_63_int == (int)2;
		if(var_65_bool == 0) goto Label_773;
		SetRegistryData("KlaraCompleted", (int)1);
	}
Label_773:
	return 0;
	
}


func_872(var_79_bool, var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	var_84_int = "vol_" + var_80_int;
	GetVariable(var_84_int, var_82_int);
	var_86_int = var_82_int & (int)4;
	var_79_bool = var_86_int != (int)0;
	return 2;
}


func_619(var_23_string, var_24_bool)
{
	var_25_object = Obj(); var_26_object = Obj();
	FindActor(var_26_object, var_23_string);
	var_27_bool = var_26_object == 0; //@nz
	if(var_27_bool != 0) {
		var_29_int = "Door " + var_23_string;
		var_31_int = var_29_int + " not found";
		Trace(var_31_int);
	} else {
		@@var_26_object:SetProperty("locked", var_24_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1006(var_42_bool)
{
	var_43_int = 0; var_44_int = 0;
	var_45_bool = 0;
	func_968(var_45_bool);
	if(var_45_bool != 0) {
		(int)0 = (int)0 + (int)1;
	}
	var_90_bool = 0;
	func_930(var_90_bool);
	if(var_90_bool != 0) {
		var_44_int = var_44_int + (int)1;
	}
	var_122_bool = 0;
	func_892(var_122_bool);
	if(var_122_bool != 0) {
		var_44_int = var_44_int + (int)1;
	}
	var_42_bool = var_44_int >= (int)2;
	return 2;
}


func_882(var_70_bool, var_71_int)
{
	var_72_int = 0; var_73_int = 0;
	var_75_int = "vol_" + var_71_int;
	GetVariable(var_75_int, var_73_int);
	var_77_int = var_73_int & (int)16;
	var_70_bool = var_77_int != (int)0;
	return 2;
}


func_892(var_122_bool)
{
	var_123_object = Obj(); var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_object = Obj(); var_128_int = 0; var_129_int = 0; var_130_int = 0;
	CreateIntVector(var_127_object);
	var_131_object = Obj(); var_132_bool = 0; var_133_int = 0;
	var_127_object = var_131_object;
	func_774(var_131_object, (bool)0, (int)-1);
	@@var_127_object:size(var_128_int);
	var_129_int = 0;
	
Label_904:
	var_146_bool = var_129_int < var_128_int;
	if(var_146_bool != 0) {
		@@var_127_object:get(var_130_int, var_129_int);
		var_147_bool = 0;
		var_147_bool = 1;
		var_148_bool = 0; var_149_int = 0;
		var_130_int = var_149_int;
		func_882(var_148_bool, var_149_int);
		if(var_148_bool != 1) {
			var_150_bool = 0; var_151_int = 0;
			var_130_int = var_151_int;
			func_872(var_150_bool, var_151_int);
			if(var_150_bool != 1) {
				var_147_bool = 0;
			}
		}
		if(var_147_bool != 0) {
			var_122_bool = 0;
			var_129_int = var_129_int + (int)1;
			goto Label_904;
		}
		return 8;
	}
	var_122_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


