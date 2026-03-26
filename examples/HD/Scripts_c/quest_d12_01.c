// @IMPORTS: GetMainOutdoorScene/1,SetTimeEvent/2,GetSceneByName/2,GetGameTime/1,Hold/0,Trace/1,Trigger/2,SetVariable/2,GetVariable/2,RemoveActor/1,self/1,AddBlankActor/4,AddActor/6,FindActor/2,Trigger/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,SetRegistryData/2,CreateIntVector/1,UnlockAchievement/1,GameOver/1,IsOverrideActive/1
// @STRINGS: W:theater@door1|W:pt_b12q01_birdmask_t|W:pers_birdmask|W:d12q01_birdmask_t.xml|W:volonteers_danko|W:childs_letter|W:pt_b12q01_birdmask_s|W:d12q01_birdmask_s.xml|W:termitnik2|W:pt_b12q01_klara|W:NPC_Klara|W:d12q01_klara_t2.xml|W:factory|W:pt_d12q01_burah|W:NPC_Burah|W:d12q01_burah_factory.xml|W:sobor@door1|W:hidden_room@door1|W:mnogogrannik@door1|W:cot_eva@door1|W:termitnik2@door1|W:uprava_admin@door1|W:final 0|W:final 1 locked: |W:init_sobor|W:noaglaja|W:cleanup|W:isobor@door1|W:sobor_load|W:quest_d12_01_sobor_cutscene|W:sobor_cutscene_end|W:pt_b12q01_block|W:NPC_Block|W:d12q01_Block.xml|W:pt_b12q01_aglaja|W:NPC_Aglaja|W:d12q01_Aglaja.xml|W:pt_b12q01_kapella|W:NPC_Maria|W:d12q01_maria.xml|W:d12q01_Klara.xml|W:d12q01_Burah.xml|W:pt_d12q01_eva|W:NPC_Eva|W:d12q01_Eva.xml|W:sobor_unload|A:Remove|W:init_theater|W:NPC_Mark|W:itheater@door1|W:theater_load|W:quest_d12_01_theater_cutscene|W:d12q01TheaterIsVisited|W:theater_cutscene_end|W:pt_b12q01_birdmask|W:d12q01_tbirdmask.xml|W:pt_b12q01_whitemask|W:pers_whitemask|W:d12q01_twhitemask.xml|W:theater_unload|W:init_hidden_room|W:mnogogrannik_han@door1|W:mnogogrannik_han@door2|W:imnogogrannik_han@door1|W:hidden_room_load|W:d12q01ChildsAreVisited|W:quest_d12_01_hidden_room_cutscene|W:hidden_room_cutscene_end|W:pt_girl|W:pers_littlegirl2|W:d12q01_littlegirl.xml|W:pt_boy|W:pers_littleboy2|W:d12q01_littleboy.xml|W:hidden_room_unload|W:theater_letter|W:d12q01|W:fail|W:completed|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:BurahCompleted|W:DankoCompleted|W:KlaraCompleted|A:add|W:vol_|A:size|A:get|W:game_final|W:b12q01ChildsAreVisited|W:b12q01TheaterIsVisited|W:k12q01ChildsAreVisited|W:k12q01TheaterIsVisited|W:PlayFinalMovie|W:fin_termit|W:ACHIEVEMENT_HELLO_2|W:gameover_termit_chudo.xml|W:gameover_termit.xml|W:fin_utop|W:gameover_utopist_chudo.xml|W:gameover_utopist.xml|W:fin_smiren|W:gameover_smirennik_chudo.xml|W:gameover_smirennik.xml|W:fin_beda|W:gameover_beda_chudo.xml|W:gameover_beda.xml|W:d12q01KlaraInSobor|W:d12q01BurahInSobor|W:warehouse_rubin|W:warehouse_rubin@door1
// @GLOBALS: 0:object:
// @RUN_OP: 0x12
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool,bool,object,object,object,object,object,object,object,object,object,object,object,object,object params=0
// @EVENT_9: op=0x92 vars=int,float
// @EVENT_26: op=0xd1 vars=string
// @PE: 0x323,0x344,0x365,0x435

task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_int, var_18_float)
{
	var_19_float = 0; var_20_float = 0;
	EventDisable(26);
	EventDisable(9);
	var_22_bool = var_17_int == (int)0;
	if(var_22_bool != 0) {
		Trace("final 0");
		var_24_bool = 0;
		var_24_bool = 1;
		var_25_bool = var_3_bool;
		if(var_25_bool != 1) {
			var_26_bool = 0;
			func_1326(var_26_bool);
			var_29_bool = var_26_bool == 0; //@nz
			if(var_29_bool != 1) {
				var_24_bool = 0;
			}
		}
		if(var_24_bool != 0) {
			var_31_int = "final 1 locked: " + var_3_bool;
			Trace(var_31_int);
			GetGameTime(var_20_float);
			var_20_float = var_20_float + (float)0.008333333767950535;
			SetTimeEvent((int)0, var_20_float);
			EventEnable(26);
			EventEnable(9);
			return 2;
		}
		func_1088();
	} else {
		var_157_bool = var_17_int == (int)1;
		if(var_157_bool != 0) {
			var_158_bool = 0;
			func_1035(var_158_bool);
			if(var_158_bool != 0) {
				var_271_bool = 0; var_272_string = ""; var_273_string = ""; var_274_string = "";
				func_665(var_271_bool, "volonteers_danko", "childs_letter", "");
			}
			EventEnable(26);
			EventEnable(9);
			goto Label_208;
		}
		var_279_bool = var_17_int == (int)2;
		if(var_279_bool == 0) goto Label_208;
		func_0(var_20_float);
		EventEnable(26);
		EventEnable(9);
	}
Label_208:
	return 2;
	
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0;
	Trace(var_17_string);
	var_29_bool = var_17_string == "init_sobor";
	if(var_29_bool != 0) {
		GetSceneByName(var_23_object, "sobor");
		Trigger(var_23_object, "noaglaja");
		var_32_object = var_9_object;
		if(var_32_object != 0) {
			Trigger(var_9_object, "cleanup");
		}
		var_34_object = var_11_object;
		if(var_34_object != 0) {
			Trigger(var_11_object, "cleanup");
		}
		var_36_string = ""; var_37_bool = 0;
		func_648("isobor@door1", (bool)1);
		var_46_string = ""; var_47_bool = 0;
		func_648("sobor@door1", (bool)0);
		var_1_bool = true;
		var_23_object = 0;
	} else {
		var_49_bool = var_17_string == "sobor_load";
		if(var_49_bool != 0) {
			var_50_bool = var_1_bool;
			if(var_50_bool != 0) {
				var_3_bool = true;
				var_51_object = Obj(); var_52_string = "";
				func_601(var_51_object, "quest_d12_01_sobor_cutscene");
			}
			goto Label_571;
		}
		var_60_bool = var_17_string == "sobor_cutscene_end";
		if(var_60_bool != 0) {
			GetSceneByName(var_24_object, "sobor");
			var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = ""; var_66_string = "";
			var_24_object = var_63_object;
			func_612(var_62_object, var_63_object, "pt_b12q01_block", "NPC_Block", "d12q01_Block.xml");
			var_5_object = var_62_object;
			var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = "";
			var_24_object = var_81_object;
			func_612(var_80_object, var_81_object, "pt_b12q01_aglaja", "NPC_Aglaja", "d12q01_Aglaja.xml");
			var_6_object = var_80_object;
			var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = "";
			var_24_object = var_86_object;
			func_612(var_85_object, var_86_object, "pt_b12q01_kapella", "NPC_Maria", "d12q01_maria.xml");
			var_7_object = var_85_object;
			var_90_bool = 0;
			func_1312(var_90_bool);
			if(var_90_bool != 0) {
				var_95_object = Obj(); var_96_object = Obj(); var_97_string = ""; var_98_string = ""; var_99_string = "";
				var_24_object = var_96_object;
				func_612(var_95_object, var_96_object, "pt_b12q01_klara", "NPC_Klara", "d12q01_Klara.xml");
				var_8_object = var_95_object;
			}
			var_100_bool = 0;
			func_1319(var_100_bool);
			if(var_100_bool != 0) {
				var_105_object = Obj(); var_106_object = Obj(); var_107_string = ""; var_108_string = ""; var_109_string = "";
				var_24_object = var_106_object;
				func_612(var_105_object, var_106_object, "pt_d12q01_burah", "NPC_Burah", "d12q01_Burah.xml");
				var_10_object = var_105_object;
			}
			var_110_object = Obj(); var_111_object = Obj(); var_112_string = ""; var_113_string = ""; var_114_string = "";
			var_24_object = var_111_object;
			func_612(var_110_object, var_111_object, "pt_d12q01_eva", "NPC_Eva", "d12q01_Eva.xml");
			var_12_object = var_110_object;
			var_24_object = 0;
			goto Label_571;
		}
		var_116_bool = var_17_string == "sobor_unload";
		if(var_116_bool != 0) {
			var_117_bool = var_1_bool;
			if(var_117_bool != 0) {
				var_118_object = var_4_object;
				if(var_118_object != 0) {
					@@@var_4_object:Remove();
				}
				var_119_object = var_5_object;
				if(var_119_object != 0) {
					Trigger(var_5_object, "cleanup");
				}
				var_121_object = var_6_object;
				if(var_121_object != 0) {
					Trigger(var_6_object, "cleanup");
				}
				var_123_object = var_7_object;
				if(var_123_object != 0) {
					Trigger(var_7_object, "cleanup");
				}
				var_125_object = var_8_object;
				if(var_125_object != 0) {
					Trigger(var_8_object, "cleanup");
				}
				var_127_object = var_10_object;
				if(var_127_object != 0) {
					Trigger(var_10_object, "cleanup");
				}
				var_129_object = var_12_object;
				if(var_129_object != 0) {
					Trigger(var_12_object, "cleanup");
				}
				var_131_string = ""; var_132_bool = 0;
				func_648("sobor@door1", (bool)1);
				var_3_bool = false;
			}
			goto Label_571;
		}
		var_134_bool = var_17_string == "init_theater";
		if(var_134_bool != 0) {
			var_135_bool = 0; var_136_string = "";
			func_677(var_135_bool, "NPC_Mark");
			var_140_string = ""; var_141_bool = 0;
			func_648("itheater@door1", (bool)1);
			var_142_string = ""; var_143_bool = 0;
			func_648("theater@door1", (bool)0);
			var_0_bool = true;
			goto Label_571;
		}
		var_145_bool = var_17_string == "theater_load";
		if(var_145_bool != 0) {
			var_146_bool = var_0_bool;
			if(var_146_bool != 0) {
				var_3_bool = true;
				var_147_object = Obj(); var_148_string = "";
				func_601(var_147_object, "quest_d12_01_theater_cutscene");
				SetVariable("d12q01TheaterIsVisited", (int)1);
			}
			goto Label_571;
		}
		var_152_bool = var_17_string == "theater_cutscene_end";
		if(var_152_bool != 0) {
			GetSceneByName(var_25_object, "theater");
			var_154_object = Obj(); var_155_object = Obj(); var_156_string = ""; var_157_string = ""; var_158_string = "";
			var_25_object = var_155_object;
			func_612(var_154_object, var_155_object, "pt_b12q01_birdmask", "pers_birdmask", "d12q01_tbirdmask.xml");
			var_13_object = var_154_object;
			var_159_object = Obj(); var_160_object = Obj(); var_161_string = ""; var_162_string = ""; var_163_string = "";
			var_25_object = var_160_object;
			func_612(var_159_object, var_160_object, "pt_b12q01_whitemask", "pers_whitemask", "d12q01_twhitemask.xml");
			var_14_object = var_159_object;
			var_25_object = 0;
			goto Label_571;
		}
		var_165_bool = var_17_string == "theater_unload";
		if(var_165_bool != 0) {
			var_166_bool = var_0_bool;
			if(var_166_bool != 0) {
				var_167_object = var_13_object;
				if(var_167_object != 0) {
					Trigger(var_13_object, "cleanup");
				}
				var_169_object = var_14_object;
				if(var_169_object != 0) {
					Trigger(var_14_object, "cleanup");
				}
				var_171_string = ""; var_172_bool = 0;
				func_648("theater@door1", (bool)1);
				var_3_bool = false;
			}
			goto Label_571;
		}
		var_174_bool = var_17_string == "init_hidden_room";
		if(var_174_bool != 0) {
			var_175_string = ""; var_176_bool = 0;
			func_648("mnogogrannik_han@door1", (bool)0);
			var_177_string = ""; var_178_bool = 0;
			func_648("mnogogrannik_han@door2", (bool)0);
			var_179_string = ""; var_180_bool = 0;
			func_648("hidden_room@door1", (bool)0);
			var_181_string = ""; var_182_bool = 0;
			func_648("imnogogrannik_han@door1", (bool)0);
			var_183_string = ""; var_184_bool = 0;
			func_648("mnogogrannik@door1", (bool)0);
			var_2_bool = true;
			goto Label_571;
		}
		var_186_bool = var_17_string == "hidden_room_load";
		if(var_186_bool != 0) {
			var_187_bool = var_2_bool;
			if(var_187_bool != 0) {
				var_3_bool = true;
				SetVariable("d12q01ChildsAreVisited", (int)1);
				var_190_object = Obj(); var_191_string = "";
				func_601(var_190_object, "quest_d12_01_hidden_room_cutscene");
			}
			goto Label_571;
		}
		var_193_bool = var_17_string == "hidden_room_cutscene_end";
		if(var_193_bool != 0) {
			GetSceneByName(var_26_object, "hidden_room");
			var_195_object = Obj(); var_196_object = Obj(); var_197_string = ""; var_198_string = ""; var_199_string = "";
			var_26_object = var_196_object;
			func_612(var_195_object, var_196_object, "pt_girl", "pers_littlegirl2", "d12q01_littlegirl.xml");
			var_15_object = var_195_object;
			var_200_object = Obj(); var_201_object = Obj(); var_202_string = ""; var_203_string = ""; var_204_string = "";
			var_26_object = var_201_object;
			func_612(var_200_object, var_201_object, "pt_boy", "pers_littleboy2", "d12q01_littleboy.xml");
			var_16_object = var_200_object;
			var_26_object = 0;
			goto Label_571;
		}
		var_206_bool = var_17_string == "hidden_room_unload";
		if(var_206_bool != 0) {
			var_207_bool = var_2_bool;
			if(var_207_bool != 0) {
				var_208_string = ""; var_209_bool = 0;
				func_648("hidden_room@door1", (bool)1);
				var_210_string = ""; var_211_bool = 0;
				func_648("mnogogrannik@door1", (bool)1);
				var_3_bool = false;
				var_212_bool = 0;
				func_1058(var_212_bool);
				if(var_212_bool != 0) {
					var_320_bool = 0; var_321_string = ""; var_322_string = ""; var_323_string = "";
					func_665(var_320_bool, "volonteers_danko", "theater_letter", "");
				}
			}
			goto Label_571;
		}
		var_328_bool = var_17_string == "cleanup";
		if(var_328_bool != 0) {
			GetVariable("d12q01", var_27_int);
			var_331_bool = var_27_int != (int)1000;
			if(var_331_bool != 0) {
				func_572();
			} else {
				func_588();
		}
			var_338_bool = var_17_string == "fail";
			if(var_338_bool != 0) {
				func_572();
				goto Label_571;
			}
			var_340_bool = var_17_string == "completed";
			if(var_340_bool == 0) goto Label_571;
			func_580();
		}
		goto Label_571;
	}
Label_571:
	return 10;
	
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object)
{
	var_17_object = Obj(); var_18_float = 0; var_19_object = Obj(); var_20_float = 0;
	var_1_bool = false;
	var_0_bool = false;
	var_2_bool = false;
	var_3_bool = false;
	func_1331();
	SetTimeEvent((int)0, (int)288);
	var_37_int = 0;
	func_689(var_37_int);
	var_43_bool = var_37_int >= (int)8;
	if(var_43_bool != 0) {
		var_44_bool = 0;
		func_1035(var_44_bool);
		if(var_44_bool != 0) {
			var_157_bool = 0; var_158_string = ""; var_159_string = ""; var_160_string = "";
			func_665(var_157_bool, "volonteers_danko", "childs_letter", "");
		}
	} else {
			SetTimeEvent((int)1, (int)272);
	}
	var_164_int = 0;
	func_1077((int)0);
	func_697();
	func_710();
	GetMainOutdoorScene(var_19_object);
	var_197_object = Obj(); var_198_object = Obj(); var_199_string = ""; var_200_string = ""; var_201_string = "";
	var_19_object = var_198_object;
	func_630(var_197_object, var_198_object, "pt_b12q01_birdmask_s", "pers_birdmask", "d12q01_birdmask_s.xml");
	var_4_object = var_197_object;
	GetSceneByName(var_19_object, "termitnik2");
	var_216_object = Obj(); var_217_object = Obj(); var_218_string = ""; var_219_string = ""; var_220_string = "";
	var_19_object = var_217_object;
	func_612(var_216_object, var_217_object, "pt_b12q01_klara", "NPC_Klara", "d12q01_klara_t2.xml");
	var_9_object = var_216_object;
	GetSceneByName(var_19_object, "factory");
	var_235_object = Obj(); var_236_object = Obj(); var_237_string = ""; var_238_string = ""; var_239_string = "";
	var_19_object = var_236_object;
	func_612(var_235_object, var_236_object, "pt_d12q01_burah", "NPC_Burah", "d12q01_burah_factory.xml");
	var_11_object = var_235_object;
	var_240_string = ""; var_241_bool = 0;
	func_648("sobor@door1", (bool)1);
	var_242_string = ""; var_243_bool = 0;
	func_648("hidden_room@door1", (bool)1);
	var_244_string = ""; var_245_bool = 0;
	func_648("mnogogrannik@door1", (bool)1);
	var_246_string = ""; var_247_bool = 0;
	func_648("cot_eva@door1", (bool)0);
	var_248_string = ""; var_249_bool = 0;
	func_648("termitnik2@door1", (bool)0);
	var_250_string = ""; var_251_bool = 0;
	func_648("uprava_admin@door1", (bool)0);
	GetGameTime(var_20_float);
	var_253_bool = var_20_float < (int)271;
	if(var_253_bool != 0) {
		SetTimeEvent((int)2, (int)271);
		var_256_string = ""; var_257_bool = 0;
		func_648("theater@door1", (bool)0);
	} else {
		func_0(var_20_float);

	}
Label_141:
	Hold();
	goto Label_141;
	
}
EMIT "Return(); Pop(4)";
EMIT "Stack[-2] = 0";


func_0(var_13_object)
{
	var_258_object = Obj(); var_259_object = Obj();
	GetMainOutdoorScene(var_259_object);
	var_260_string = ""; var_261_bool = 0;
	func_648("theater@door1", (bool)1);
	var_262_object = Obj(); var_263_object = Obj(); var_264_string = ""; var_265_string = ""; var_266_string = "";
	var_259_object = var_263_object;
	func_630(var_262_object, var_263_object, "pt_b12q01_birdmask_t", "pers_birdmask", "d12q01_birdmask_t.xml");
	var_13_object = var_262_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_770()
{
	var_52_int = 0;
	func_764(var_52_int);
	var_57_bool = var_52_int == (int)1;
	if(var_57_bool != 0) {
		SetRegistryData("BurahCompleted", (int)1);
	} else {
		var_60_int = 0;
		func_764(var_60_int);
		var_62_bool = var_60_int == (int)0;
		if(var_62_bool != 0) {
			SetRegistryData("DankoCompleted", (int)1);
			goto Label_802;
		}
		var_65_int = 0;
		func_764(var_65_int);
		var_67_bool = var_65_int == (int)2;
		if(var_67_bool == 0) goto Label_802;
		SetRegistryData("KlaraCompleted", (int)1);
	}
Label_802:
	return 0;
	
}


func_901(var_81_bool, var_82_int)
{
	var_83_int = 0; var_84_int = 0;
	var_86_int = "vol_" + var_82_int;
	GetVariable(var_86_int, var_84_int);
	var_88_int = var_84_int & (int)4;
	var_81_bool = var_88_int != (int)0;
	return 2;
}


func_648(var_25_string, var_26_bool)
{
	var_27_object = Obj(); var_28_object = Obj();
	FindActor(var_28_object, var_25_string);
	var_29_bool = var_28_object == 0; //@nz
	if(var_29_bool != 0) {
		var_31_int = "Door " + var_25_string;
		var_33_int = var_31_int + " not found";
		Trace(var_33_int);
	} else {
		@@var_28_object:SetProperty("locked", var_26_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1035(var_44_bool)
{
	var_45_int = 0; var_46_int = 0;
	var_47_bool = 0;
	func_997(var_47_bool);
	if(var_47_bool != 0) {
		(int)0 = (int)0 + (int)1;
	}
	var_92_bool = 0;
	func_959(var_92_bool);
	if(var_92_bool != 0) {
		var_46_int = var_46_int + (int)1;
	}
	var_124_bool = 0;
	func_921(var_124_bool);
	if(var_124_bool != 0) {
		var_46_int = var_46_int + (int)1;
	}
	var_44_bool = var_46_int >= (int)2;
	return 2;
}


func_911(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0;
	var_77_int = "vol_" + var_73_int;
	GetVariable(var_77_int, var_75_int);
	var_79_int = var_75_int & (int)16;
	var_72_bool = var_79_int != (int)0;
	return 2;
}


func_665(var_157_bool, var_158_string, var_159_string, var_160_string)
{
	var_161_object = Obj(); var_162_object = Obj();
	FindActor(var_162_object, var_158_string);
	var_163_bool = var_162_object == 0; //@ne
	if(var_163_bool != 0) {
		var_157_bool = 0;
		return 2;
	}
	Trigger(var_162_object, var_159_string, var_160_string);
	var_157_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_921(var_124_bool)
{
	var_125_object = Obj(); var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_object = Obj(); var_130_int = 0; var_131_int = 0; var_132_int = 0;
	CreateIntVector(var_129_object);
	var_133_object = Obj(); var_134_bool = 0; var_135_int = 0;
	var_129_object = var_133_object;
	func_803(var_133_object, (bool)0, (int)-1);
	@@var_129_object:size(var_130_int);
	var_131_int = 0;
	
Label_933:
	var_148_bool = var_131_int < var_130_int;
	if(var_148_bool != 0) {
		@@var_129_object:get(var_132_int, var_131_int);
		var_149_bool = 0;
		var_149_bool = 1;
		var_150_bool = 0; var_151_int = 0;
		var_132_int = var_151_int;
		func_911(var_150_bool, var_151_int);
		if(var_150_bool != 1) {
			var_152_bool = 0; var_153_int = 0;
			var_132_int = var_153_int;
			func_901(var_152_bool, var_153_int);
			if(var_152_bool != 1) {
				var_149_bool = 0;
			}
		}
		if(var_149_bool != 0) {
			var_124_bool = 0;
			var_131_int = var_131_int + (int)1;
			goto Label_933;
		}
		return 8;
	}
	var_124_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1312(var_90_bool)
{
	var_91_int = 0; var_92_int = 0;
	GetVariable("d12q01KlaraInSobor", var_92_int);
	var_90_bool = var_92_int != (int)0;
	return 2;
}


func_1058(var_212_bool)
{
	var_212_bool = 0;
	var_213_bool = 0;
	var_213_bool = 0;
	var_214_bool = 0;
	func_997(var_214_bool);
	if(var_214_bool != 0) {
		var_258_bool = 0;
		func_959(var_258_bool);
		if(var_258_bool != 0) {
			var_213_bool = 1;
		}
	}
	if(var_213_bool != 0) {
		var_289_bool = 0;
		func_921(var_289_bool);
		if(var_289_bool != 0) {
			var_212_bool = 1;
		}
	}
	return 0;
}


func_803(var_133_object, var_134_bool, var_135_int)
{
	@@var_133_object:add((int)18);
	@@var_133_object:add((int)24);
	@@var_133_object:add((int)20);
	@@var_133_object:add((int)14);
	var_141_bool = var_134_bool == (bool)0;
	if(var_141_bool != 0) {
		@@var_133_object:add((int)10);
		@@var_133_object:add((int)17);
		@@var_133_object:add((int)8);
	} else {
		var_146_bool = var_135_int != (int)1;
		if(var_146_bool == 0) goto Label_835;
		@@var_133_object:add((int)10);
	}
Label_835:
	return 0;
	
}


func_677(var_135_bool, var_136_string)
{
	var_137_object = Obj(); var_138_object = Obj();
	FindActor(var_138_object, var_136_string);
	var_139_bool = var_138_object == 0; //@nz
	if(var_139_bool != 0) {
		var_135_bool = 0;
		return 2;
	}
	RemoveActor(var_138_object);
	var_135_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1319(var_100_bool)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable("d12q01BurahInSobor", var_102_int);
	var_100_bool = var_102_int != (int)0;
	return 2;
}


func_1326(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsOverrideActive(var_28_bool);
	var_26_bool = !var_28_bool;
	return 2;
}


func_689(var_37_int)
{
	var_38_float = 0; var_39_float = 0;
	GetGameTime(var_39_float);
	var_40_int = 0;
	var_39_float = var_40_int;
	var_37_int = var_40_int % (int)24;
	return 2;
}


func_1331()
{
	var_21_object = Obj(); var_22_object = Obj();
	GetSceneByName(var_22_object, "warehouse_rubin");
	Trigger(var_22_object, "rubin");
	var_25_string = ""; var_26_bool = 0;
	func_648("warehouse_rubin@door1", (bool)0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1077(var_164_int)
{
	SetVariable("game_final", var_164_int);
	return 0;
}


func_697()
{
	var_166_object = Obj(); var_167_object = Obj();
	CreateDiaryEntry(var_167_object, (int)699, (int)1, (int)535682);
	var_171_bool = 0; var_172_object = Obj(); var_173_int = 0;
	var_167_object = var_172_object;
	func_736(var_171_bool, var_172_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1082(var_71_int)
{
	var_72_int = 0; var_73_int = 0;
	GetVariable("game_final", var_73_int);
	var_73_int = var_71_int;
	return 2;
}


func_572()
{
	SetVariable("d12q01", (int)-1);
	func_588();
	return 0;
}


func_959(var_92_bool)
{
	var_93_object = Obj(); var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_object = Obj(); var_98_int = 0; var_99_int = 0; var_100_int = 0;
	CreateIntVector(var_97_object);
	var_101_object = Obj(); var_102_bool = 0; var_103_int = 0;
	var_97_object = var_101_object;
	func_836(var_101_object, (bool)0, (int)-1);
	@@var_97_object:size(var_98_int);
	var_99_int = 0;
	
Label_971:
	var_116_bool = var_99_int < var_98_int;
	if(var_116_bool != 0) {
		@@var_97_object:get(var_100_int, var_99_int);
		var_117_bool = 0;
		var_117_bool = 1;
		var_118_bool = 0; var_119_int = 0;
		var_100_int = var_119_int;
		func_911(var_118_bool, var_119_int);
		if(var_118_bool != 1) {
			var_120_bool = 0; var_121_int = 0;
			var_100_int = var_121_int;
			func_901(var_120_bool, var_121_int);
			if(var_120_bool != 1) {
				var_117_bool = 0;
			}
		}
		if(var_117_bool != 0) {
			var_92_bool = 0;
			var_99_int = var_99_int + (int)1;
			goto Label_971;
		}
		return 8;
	}
	var_92_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1088()
{
	var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_bool = 0;
	func_770();
	func_764((int)0);
	var_70_int = var_43_int;
	func_1082((int)0);
	var_71_int = var_44_int;
	var_45_bool = 0;
	var_46_bool = 0;
	var_76_bool = var_43_int == (int)0;
	if(var_76_bool != 0) {
		GetVariable("d12q01ChildsAreVisited", var_47_int);
		var_45_bool = var_47_int != (int)0;
		GetVariable("d12q01TheaterIsVisited", var_47_int);
		var_46_bool = var_47_int != (int)0;
	} else {
					var_145_bool = var_43_int == (int)1;
					if(var_145_bool != 0) {
						GetVariable("b12q01ChildsAreVisited", var_48_int);
						var_45_bool = var_48_int != (int)0;
						GetVariable("b12q01TheaterIsVisited", var_48_int);
						var_46_bool = var_48_int != (int)0;
						goto Label_1143;
					}
					var_151_bool = var_43_int == (int)2;
					if(var_151_bool == 0) goto Label_1143;
					GetVariable("k12q01ChildsAreVisited", var_49_int);
					var_45_bool = var_49_int != (int)0;
					GetVariable("k12q01TheaterIsVisited", var_49_int);
					var_46_bool = var_49_int != (int)0;
	}
Label_1143:
	var_50_bool = 0;
	var_81_bool = 0;
	var_81_bool = 0;
	var_83_bool = var_43_int == (int)0;
	if(var_83_bool != 0) {
		var_85_bool = var_44_int == (int)2;
		if(var_85_bool != 0) {
			var_81_bool = 1;
		}
	}
	if(var_81_bool != 0) {
		var_50_bool = 1;
	}
	var_86_bool = 0;
	var_86_bool = 0;
	var_88_bool = var_43_int == (int)1;
	if(var_88_bool != 0) {
		var_90_bool = var_44_int == (int)1;
		if(var_90_bool != 0) {
			var_86_bool = 1;
		}
	}
	if(var_86_bool != 0) {
		var_50_bool = 1;
	}
	var_91_bool = 0;
	var_91_bool = 0;
	var_93_bool = var_43_int == (int)2;
	if(var_93_bool != 0) {
		var_95_bool = var_44_int == (int)3;
		if(var_95_bool != 0) {
			var_91_bool = 1;
		}
	}
	if(var_91_bool != 0) {
		var_50_bool = 1;
	}
	var_51_bool = 0;
	var_96_bool = 0;
	var_96_bool = 0;
	var_97_bool = 0;
	var_97_bool = 0;
	var_99_bool = var_44_int == (int)4;
	if(var_99_bool != 0) {
		var_100_bool = var_45_bool == 0; //@nz
		if(var_100_bool != 0) {
			var_97_bool = 1;
		}
	}
	if(var_97_bool != 0) {
		var_101_bool = var_46_bool == 0; //@nz
		if(var_101_bool != 0) {
			var_96_bool = 1;
		}
	}
	if(var_96_bool != 0) {
		var_51_bool = 1;
	}
	var_102_bool = 0;
	var_102_bool = 0;
	var_103_bool = 0;
	var_103_bool = 0;
	var_104_bool = var_50_bool == 0; //@nz
	if(var_104_bool != 0) {
		var_105_bool = var_45_bool;
		if(var_105_bool != 0) {
			var_103_bool = 1;
		}
	}
	if(var_103_bool != 0) {
		var_106_bool = var_46_bool == 0; //@nz
		if(var_106_bool != 0) {
			var_102_bool = 1;
		}
	}
	if(var_102_bool != 0) {
		var_51_bool = 1;
	}
	var_107_bool = 0;
	var_107_bool = 0;
	var_108_bool = 0;
	var_108_bool = 0;
	var_109_bool = var_50_bool;
	if(var_109_bool != 0) {
		var_110_bool = var_45_bool;
		if(var_110_bool != 0) {
			var_108_bool = 1;
		}
	}
	if(var_108_bool != 0) {
		var_111_bool = var_46_bool;
		if(var_111_bool != 0) {
			var_107_bool = 1;
		}
	}
	if(var_107_bool != 0) {
		var_51_bool = 1;
	}
	Trace("PlayFinalMovie");
	var_113_int = 0;
	func_1082(var_113_int);
	var_115_bool = var_113_int == (int)1;
	if(var_115_bool != 0) {
		Trace("fin_termit");
		var_117_bool = var_50_bool == 0; //@nz
		if(var_117_bool != 0) {
			UnlockAchievement("ACHIEVEMENT_HELLO_2");
		}
		var_119_bool = var_51_bool;
		if(var_119_bool != 0) {
			GameOver("gameover_termit_chudo.xml");
		} else {
			GameOver("gameover_termit.xml");
	}
		var_122_int = 0;
		func_1082(var_122_int);
		var_124_bool = var_122_int == (int)2;
		if(var_124_bool != 0) {
			Trace("fin_utop");
			var_126_bool = var_50_bool == 0; //@nz
			if(var_126_bool != 0) {
				UnlockAchievement("ACHIEVEMENT_HELLO_2");
			}
			var_128_bool = var_51_bool;
			if(var_128_bool != 0) {
				GameOver("gameover_utopist_chudo.xml");
			} else {
				GameOver("gameover_utopist.xml");
		}
			var_131_int = 0;
			func_1082(var_131_int);
			var_133_bool = var_131_int == (int)3;
			if(var_133_bool != 0) {
				Trace("fin_smiren");
				var_135_bool = var_50_bool == 0; //@nz
				if(var_135_bool != 0) {
					UnlockAchievement("ACHIEVEMENT_HELLO_2");
				}
				var_137_bool = var_51_bool;
				if(var_137_bool != 0) {
					GameOver("gameover_smirennik_chudo.xml");
				} else {
					GameOver("gameover_smirennik.xml");
			}
				Trace("fin_beda");
				var_141_bool = var_51_bool;
				if(var_141_bool != 0) {
					GameOver("gameover_beda_chudo.xml");
					goto Label_1311;
				}
				GameOver("gameover_beda.xml");

			}
			goto Label_1311;
		}
		goto Label_1311;
	}
	goto Label_1311;
	
Label_1311:
	return 18;
	
}


func_580()
{
	SetVariable("d12q01", (int)1000);
	func_588();
	return 0;
}


func_836(var_101_object, var_102_bool, var_103_int)
{
	@@var_101_object:add((int)6);
	@@var_101_object:add((int)26);
	@@var_101_object:add((int)2);
	@@var_101_object:add((int)22);
	var_109_bool = var_102_bool == (bool)0;
	if(var_109_bool != 0) {
		@@var_101_object:add((int)15);
		@@var_101_object:add((int)5);
		@@var_101_object:add((int)16);
	} else {
		var_114_bool = var_103_int != (int)0;
		if(var_114_bool == 0) goto Label_868;
		@@var_101_object:add((int)15);
	}
Label_868:
	return 0;
	
}


func_710()
{
	var_189_object = Obj(); var_190_object = Obj();
	CreateDiaryEntry(var_190_object, (int)705, (int)1, (int)535688);
	var_194_bool = 0; var_195_object = Obj(); var_196_int = 0;
	var_190_object = var_195_object;
	func_736(var_194_bool, var_195_object, (int)699);
	return 2;
}
EMIT "Stack[-1] = 0";


func_588()
{
	EventDisable(26);
	var_334_object = Obj();
	func_595(var_334_object);
	RemoveActor(var_334_object);
	return 0;
}


func_595(var_334_object)
{
	var_335_object = Obj(); var_336_object = Obj();
	self(var_336_object);
	var_336_object = var_334_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_723(var_180_object)
{
	var_181_object = Obj(); var_182_object = Obj();
	GetDiaryRoot(var_182_object);
	var_183_bool = var_182_object == 0; //@nz
	if(var_183_bool != 0) {
		Trace("Can't retrieve diary root");
		var_180_object = 0;
		return 2;
	}
	var_182_object = var_180_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_601(var_51_object, var_52_string)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj();
	GetMainOutdoorScene(var_55_object);
	var_58_int = var_52_string + ".bin";
	AddBlankActor(var_56_object, var_55_object, var_52_string, var_58_int);
	var_56_object = var_51_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_736(var_171_bool, var_172_object, var_173_int)
{
	var_174_object = Obj(); var_175_object = Obj(); var_176_int = 0; var_177_object = Obj(); var_178_object = Obj(); var_179_int = 0;
	func_723(Obj());
	var_180_object = var_177_object;
	@@var_177_object:Find(var_173_int, var_178_object);
	var_185_bool = var_178_object == 0; //@nz
	if(var_185_bool != 0) {
		var_187_int = "Can't find diary parent with id: " + var_173_int;
		Trace(var_187_int);
		var_171_bool = 0;
		return 6;
	}
	@@var_178_object:AddChild(var_172_object);
	SendWorldWndMessage((int)7);
	@@var_172_object:GetCategory(var_179_int);
	SetDiarySection(var_179_int);
	var_171_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_612(var_216_object, var_217_object, var_218_string, var_219_string, var_220_string)
{
	var_221_bool = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_object = Obj(); var_225_bool = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_object = Obj();
	@@var_217_object:GetLocator(var_218_string, var_225_bool, var_226_cvector, var_227_cvector);
	var_229_bool = var_225_bool == 0; //@nz
	if(var_229_bool != 0) {
		var_231_int = "Locator " + var_218_string;
		var_233_int = var_231_int + " doesn't exist";
		Trace(var_233_int);
	} else {
		AddActor(Obj(), var_219_string, var_217_object, var_226_cvector, var_227_cvector, var_220_string);
	}
	var_228_object = var_216_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_869(var_56_object, var_57_bool)
{
	@@var_56_object:add((int)7);
	@@var_56_object:add((int)23);
	@@var_56_object:add((int)21);
	@@var_56_object:add((int)9);
	@@var_56_object:add((int)3);
	@@var_56_object:add((int)1);
	@@var_56_object:add((int)11);
	@@var_56_object:add((int)13);
	var_68_bool = var_57_bool == (bool)0;
	if(var_68_bool != 0) {
		@@var_56_object:add((int)25);
	}
	return 0;
}


func_997(var_47_bool)
{
	var_48_object = Obj(); var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_object = Obj(); var_53_int = 0; var_54_int = 0; var_55_int = 0;
	CreateIntVector(var_52_object);
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0;
	var_52_object = var_56_object;
	func_869((bool)0, (int)-1);
	@@var_52_object:size(var_53_int);
	var_54_int = 0;
	
Label_1009:
	var_70_bool = var_54_int < var_53_int;
	if(var_70_bool != 0) {
		@@var_52_object:get(var_55_int, var_54_int);
		var_71_bool = 0;
		var_71_bool = 1;
		var_72_bool = 0; var_73_int = 0;
		var_55_int = var_73_int;
		func_911(var_72_bool, var_73_int);
		if(var_72_bool != 1) {
			var_81_bool = 0; var_82_int = 0;
			var_55_int = var_82_int;
			func_901(var_81_bool, var_82_int);
			if(var_81_bool != 1) {
				var_71_bool = 0;
			}
		}
		if(var_71_bool != 0) {
			var_47_bool = 0;
			var_54_int = var_54_int + (int)1;
			goto Label_1009;
		}
		return 8;
	}
	var_47_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_630(var_197_object, var_198_object, var_199_string, var_200_string, var_201_string)
{
	var_202_bool = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); var_205_object = Obj(); var_206_bool = 0; var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_object = Obj();
	@@var_198_object:GetLocator(var_199_string, var_206_bool, var_207_cvector, var_208_cvector);
	var_210_bool = var_206_bool == 0; //@nz
	if(var_210_bool != 0) {
		var_212_int = "Locator " + var_199_string;
		var_214_int = var_212_int + " doesn't exist";
		Trace(var_214_int);
	} else {
		@@var_198_object:AddStationaryActor(Obj(), var_207_cvector, var_208_cvector, var_200_string, var_201_string);
	}
	var_209_object = var_197_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_764(var_52_int)
{
	var_53_int = 0; var_54_int = 0;
	GetVariable("branch", var_54_int);
	var_54_int = var_52_int;
	return 2;
}


