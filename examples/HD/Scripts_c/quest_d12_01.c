// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object)
	{
		var_1_bool = false;
		var_0_bool = false;
		var_2_bool = false;
		var_3_bool = false;
		func_1331();
		@SetTimeEvent(0, 288);
		int var_37_int;
		func_689(var_37_int);
		if(var_37_int >= 8) {
			bool var_44_bool;
			func_1035(var_44_bool);
			if(var_44_bool != 0) {
				bool var_157_bool;
				func_665(var_157_bool, "volonteers_danko", "childs_letter", "");
			}
		} else {
				@SetTimeEvent(1, 272);
		}
		func_1077(0);
		func_697();
		func_710();
		object var_19_object;
		@GetMainOutdoorScene(var_19_object);
		object var_197_object; object var_198_object;
		func_630(var_197_object, var_198_object, "pt_b12q01_birdmask_s", "pers_birdmask", "d12q01_birdmask_s.xml");
		var_4_object = var_197_object;
		@GetSceneByName(var_198_object, "termitnik2");
		object var_216_object; object var_217_object;
		func_612(var_216_object, var_217_object, "pt_b12q01_klara", "NPC_Klara", "d12q01_klara_t2.xml");
		var_9_object = var_216_object;
		@GetSceneByName(var_217_object, "factory");
		object var_235_object; object var_236_object;
		var_19_object = var_236_object;
		func_612(var_235_object, var_236_object, "pt_d12q01_burah", "NPC_Burah", "d12q01_burah_factory.xml");
		var_11_object = var_235_object;
		func_648("sobor@door1", true);
		func_648("hidden_room@door1", true);
		func_648("mnogogrannik@door1", true);
		func_648("cot_eva@door1", false);
		func_648("termitnik2@door1", false);
		func_648("uprava_admin@door1", false);
		float var_20_float;
		@GetGameTime(var_20_float);
		if(var_20_float < 271) {
			@SetTimeEvent(2, 271);
			func_648("theater@door1", false);
		} else {
			func_0(var_20_float);

		}
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-2] = 0";

	void OnGameTime(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, int var_17_int, float var_18_float)
	{
		float var_20_float;
		disable OnTrigger;
		disable OnGameTime;
		if(var_17_int == 0) {
			@Trace("final 0");
			bool var_24_bool = true;
			if(var_3_bool != 1) {
				bool var_26_bool;
				func_1326(var_26_bool);
				var_29_bool = !var_26_bool; //@nz
				if(var_29_bool != 1)
					var_24_bool = false;
			}
			if(var_24_bool != 0) {
				@Trace("final 1 locked: " + var_3_bool);
				@GetGameTime(var_20_float);
				var_20_float += 0.008333334;
				@SetTimeEvent(0, var_20_float);
				enable OnTrigger;
				enable OnGameTime;
				return 2;
			}
			func_1088();
		} else if(var_17_int == 1) {
				bool var_158_bool;
				func_1035(var_158_bool);
				if(var_158_bool != 0) {
					bool var_271_bool;
					func_665(var_271_bool, "volonteers_danko", "childs_letter", "");
				}
				enable OnTrigger;
				enable OnGameTime;
		}
	Label_208:
		for(;;) {
			return 2;

		}
	
		if(!(var_17_int == 2)) goto Label_208;
		func_0(var_20_float);
		enable OnTrigger;
		enable OnGameTime;
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string)
	{
		object var_23_object; object var_24_object; object var_25_object; object var_26_object; int var_27_int;
		@Trace(var_17_string);
		if(var_17_string == "init_sobor") {
			@GetSceneByName(var_23_object, "sobor");
			@Trigger(var_23_object, "noaglaja");
			if(var_9_object != 0)
				@Trigger(var_9_object, "cleanup");
			if(var_11_object != 0)
				@Trigger(var_11_object, "cleanup");
			func_648("isobor@door1", true);
			func_648("sobor@door1", false);
			var_1_bool = true;
			var_23_object = null;
		} else if(var_17_string == "sobor_load") {
				if(var_1_bool != 0) {
					var_3_bool = true;
					object var_51_object;
					func_601(var_51_object, "quest_d12_01_sobor_cutscene");
				}
		}
	Label_571:
		for(;;) {

		}
	
		if(var_17_string == "sobor_cutscene_end") {
			@GetSceneByName(var_24_object, "sobor");
			object var_62_object; object var_63_object;
			var_24_object = var_63_object;
			func_612(var_62_object, var_63_object, "pt_b12q01_block", "NPC_Block", "d12q01_Block.xml");
			var_5_object = var_62_object;
			object var_80_object; object var_81_object;
			var_24_object = var_81_object;
			func_612(var_80_object, var_81_object, "pt_b12q01_aglaja", "NPC_Aglaja", "d12q01_Aglaja.xml");
			var_6_object = var_80_object;
			object var_85_object; object var_86_object;
			var_24_object = var_86_object;
			func_612(var_85_object, var_86_object, "pt_b12q01_kapella", "NPC_Maria", "d12q01_maria.xml");
			var_7_object = var_85_object;
			bool var_90_bool;
			func_1312(var_90_bool);
			if(var_90_bool != 0) {
				object var_95_object; object var_96_object;
				var_24_object = var_96_object;
				func_612(var_95_object, var_96_object, "pt_b12q01_klara", "NPC_Klara", "d12q01_Klara.xml");
				var_8_object = var_95_object;
			}
			bool var_100_bool;
			func_1319(var_100_bool);
			if(var_100_bool != 0) {
				object var_105_object; object var_106_object;
				var_24_object = var_106_object;
				func_612(var_105_object, var_106_object, "pt_d12q01_burah", "NPC_Burah", "d12q01_Burah.xml");
				var_10_object = var_105_object;
			}
			object var_110_object; object var_111_object;
			var_24_object = var_111_object;
			func_612(var_110_object, var_111_object, "pt_d12q01_eva", "NPC_Eva", "d12q01_Eva.xml");
			var_12_object = var_110_object;
			var_24_object = null;
		} else if(var_17_string == "sobor_unload") {
			if(var_1_bool != 0) {
				if(var_4_object != 0)
					var_4_object->Remove(); //@t
				if(var_5_object != 0)
					@Trigger(var_5_object, "cleanup");
				if(var_6_object != 0)
					@Trigger(var_6_object, "cleanup");
				if(var_7_object != 0)
					@Trigger(var_7_object, "cleanup");
				if(var_8_object != 0)
					@Trigger(var_8_object, "cleanup");
				if(var_10_object != 0)
					@Trigger(var_10_object, "cleanup");
				if(var_12_object != 0)
					@Trigger(var_12_object, "cleanup");
				func_648("sobor@door1", true);
				var_3_bool = false;
			}
		} else if(var_17_string == "init_theater") {
			bool var_135_bool;
			func_677(var_135_bool, "NPC_Mark");
			func_648("itheater@door1", true);
			func_648("theater@door1", false);
			var_0_bool = true;
		} else if(var_17_string == "theater_load") {
			if(var_0_bool != 0) {
				var_3_bool = true;
				object var_147_object;
				func_601(var_147_object, "quest_d12_01_theater_cutscene");
				@SetVariable("d12q01TheaterIsVisited", 1);
			}
		} else if(var_17_string == "theater_cutscene_end") {
			@GetSceneByName(var_25_object, "theater");
			object var_154_object; object var_155_object;
			var_25_object = var_155_object;
			func_612(var_154_object, var_155_object, "pt_b12q01_birdmask", "pers_birdmask", "d12q01_tbirdmask.xml");
			var_13_object = var_154_object;
			object var_159_object; object var_160_object;
			var_25_object = var_160_object;
			func_612(var_159_object, var_160_object, "pt_b12q01_whitemask", "pers_whitemask", "d12q01_twhitemask.xml");
			var_14_object = var_159_object;
			var_25_object = null;
		} else if(var_17_string == "theater_unload") {
			if(var_0_bool != 0) {
				if(var_13_object != 0)
					@Trigger(var_13_object, "cleanup");
				if(var_14_object != 0)
					@Trigger(var_14_object, "cleanup");
				func_648("theater@door1", true);
				var_3_bool = false;
			}
		} else if(var_17_string == "init_hidden_room") {
			func_648("mnogogrannik_han@door1", false);
			func_648("mnogogrannik_han@door2", false);
			func_648("hidden_room@door1", false);
			func_648("imnogogrannik_han@door1", false);
			func_648("mnogogrannik@door1", false);
			var_2_bool = true;
		} else if(var_17_string == "hidden_room_load") {
			if(var_2_bool != 0) {
				var_3_bool = true;
				@SetVariable("d12q01ChildsAreVisited", 1);
				object var_190_object;
				func_601(var_190_object, "quest_d12_01_hidden_room_cutscene");
			}
		} else if(var_17_string == "hidden_room_cutscene_end") {
			@GetSceneByName(var_26_object, "hidden_room");
			object var_195_object; object var_196_object;
			var_26_object = var_196_object;
			func_612(var_195_object, var_196_object, "pt_girl", "pers_littlegirl2", "d12q01_littlegirl.xml");
			var_15_object = var_195_object;
			object var_200_object; object var_201_object;
			var_26_object = var_201_object;
			func_612(var_200_object, var_201_object, "pt_boy", "pers_littleboy2", "d12q01_littleboy.xml");
			var_16_object = var_200_object;
			var_26_object = null;
		} else if(var_17_string == "hidden_room_unload") {
			if(var_2_bool != 0) {
				func_648("hidden_room@door1", true);
				func_648("mnogogrannik@door1", true);
				var_3_bool = false;
				bool var_212_bool;
				func_1058(var_212_bool);
				if(var_212_bool != 0) {
					bool var_320_bool;
					func_665(var_320_bool, "volonteers_danko", "theater_letter", "");
				}
			}
		}
		if(var_17_string == "cleanup") {
			@GetVariable("d12q01", var_27_int);
			if(var_27_int != 1000)
				func_572();
			else
				func_588();
			if(var_17_string == "fail") {
				func_572();
			} else if(var_17_string == "completed") {
				func_580();
			}
		}
		goto Label_571;
	
	}

}


void func_0(object var_13_object)
{
	object var_259_object;
	@GetMainOutdoorScene(var_259_object);
	func_648("theater@door1", true);
	object var_262_object; object var_263_object;
	var_259_object = var_263_object;
	func_630(var_262_object, var_263_object, "pt_b12q01_birdmask_t", "pers_birdmask", "d12q01_birdmask_t.xml");
	var_13_object = var_262_object;
}
EMIT "Stack[-1] = 0";


void func_770(void)
{
	int var_52_int;
	func_764(var_52_int);
	if(var_52_int == 1) {
		@SetRegistryData("BurahCompleted", 1);
	} else {
			int var_60_int;
			func_764(var_60_int);
			if(!(var_60_int == 0)) goto Label_792;
			@SetRegistryData("DankoCompleted", 1);
	}
Label_802:
	for(;;) {
		return 0;

	}
	
Label_792:
	int var_65_int;
	func_764(var_65_int);
	if(!(var_65_int == 2)) goto Label_802;
	@SetRegistryData("KlaraCompleted", 1);
}


void func_901(bool var_81_bool, int var_82_int)
{
	int var_84_int;
	@GetVariable(("vol_" + var_82_int), var_84_int);
	var_81_bool = (var_84_int & 4) != 0;
}


void func_648(string var_25_string, bool var_26_bool)
{
	object var_28_object;
	@FindActor(var_28_object, var_25_string);
	if(!var_28_object) //@nz
		@Trace(("Door " + var_25_string) + " not found");
	else
		var_28_object->SetProperty("locked", var_26_bool);
	
}
EMIT "Stack[-1] = 0";


void func_1035(bool var_44_bool)
{
	int var_46_int = 0;
	bool var_47_bool;
	func_997(var_47_bool);
	if(var_47_bool != 0)
		var_46_int += 1;
	bool var_92_bool;
	func_959(var_92_bool);
	if(var_92_bool != 0)
		var_46_int += 1;
	bool var_124_bool;
	func_921(var_124_bool);
	if(var_124_bool != 0)
		var_46_int += 1;
	var_44_bool = var_46_int >= 2;
}


void func_911(bool var_72_bool, int var_73_int)
{
	int var_75_int;
	@GetVariable(("vol_" + var_73_int), var_75_int);
	var_72_bool = (var_75_int & 16) != 0;
}


void func_665(bool var_157_bool, string var_158_string, string var_159_string, string var_160_string)
{
	object var_162_object;
	@FindActor(var_162_object, var_158_string);
	if(var_162_object == null)
		var_157_bool = false;
	@Trigger(var_162_object, var_159_string, var_160_string);
	var_157_bool = true;
}
EMIT "Stack[-1] = 0";


void func_921(bool var_124_bool)
{
	object var_129_object; int var_132_int;
	@CreateIntVector(var_129_object);
	object var_133_object;
	var_129_object = var_133_object;
	func_803(var_133_object, false, -1);
	int var_130_int;
	var_129_object->size(var_130_int);
	int var_131_int = 0;
	
	while(var_131_int < var_130_int) {
		var_129_object->get(var_132_int, var_131_int);
		bool var_149_bool = true;
		bool var_150_bool; int var_151_int;
		var_132_int = var_151_int;
		func_911(var_150_bool, var_151_int);
		if(var_150_bool != 1) {
			bool var_152_bool; int var_153_int;
			var_132_int = var_153_int;
			func_901(var_152_bool, var_153_int);
			if(var_152_bool != 1)
				var_149_bool = false;
		}
		if(var_149_bool != 0)
			var_124_bool = false;
		var_131_int += 1;
	}
	
	var_124_bool = true;
}
EMIT "Stack[-4] = 0";


void func_1312(bool var_90_bool)
{
	int var_92_int;
	@GetVariable("d12q01KlaraInSobor", var_92_int);
	var_90_bool = var_92_int != 0;
}


void func_1058(bool var_212_bool)
{
	var_212_bool = false;
	bool var_213_bool = false;
	bool var_214_bool;
	func_997(var_214_bool);
	if(var_214_bool != 0) {
		bool var_258_bool;
		func_959(var_258_bool);
		if(var_258_bool != 0)
			var_213_bool = true;
	}
	if(var_213_bool != 0) {
		bool var_289_bool;
		func_921(var_289_bool);
		if(var_289_bool != 0)
			var_212_bool = true;
	}
}


// @pe
void func_803(object var_133_object, bool var_134_bool, int var_135_int)
{
	var_133_object->add(18);
	var_133_object->add(24);
	var_133_object->add(20);
	var_133_object->add(14);
	if(var_134_bool == false) {
		var_133_object->add(10);
		var_133_object->add(17);
		var_133_object->add(8);
	} else if(var_135_int != 1) {
		var_133_object->add(10);
	}
	
}


void func_677(bool var_135_bool, string var_136_string)
{
	object var_138_object;
	@FindActor(var_138_object, var_136_string);
	if(!var_138_object) //@nz
		var_135_bool = false;
	@RemoveActor(var_138_object);
	var_135_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1319(bool var_100_bool)
{
	int var_102_int;
	@GetVariable("d12q01BurahInSobor", var_102_int);
	var_100_bool = var_102_int != 0;
}


void func_1326(bool var_26_bool)
{
	bool var_28_bool;
	@IsOverrideActive(var_28_bool);
	var_26_bool = !var_28_bool;
}


void func_689(int var_37_int)
{
	float var_39_float;
	@GetGameTime(var_39_float);
	int var_40_int;
	var_39_float = var_40_int;
	var_37_int = var_40_int % 24;
}


void func_1331(void)
{
	object var_22_object;
	@GetSceneByName(var_22_object, "warehouse_rubin");
	@Trigger(var_22_object, "rubin");
	func_648("warehouse_rubin@door1", false);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1077(int var_164_int)
{
	@SetVariable("game_final", var_164_int);
}


void func_697(void)
{
	object var_167_object;
	@CreateDiaryEntry(var_167_object, 699, 1, 535682);
	bool var_171_bool; object var_172_object;
	var_167_object = var_172_object;
	func_736(var_171_bool, var_172_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1082(int var_71_int)
{
	int var_73_int;
	@GetVariable("game_final", var_73_int);
	var_73_int = var_71_int;
}


void func_572(void)
{
	@SetVariable("d12q01", -1);
	func_588();
}


void func_959(bool var_92_bool)
{
	object var_97_object; int var_100_int;
	@CreateIntVector(var_97_object);
	object var_101_object;
	var_97_object = var_101_object;
	func_836(var_101_object, false, -1);
	int var_98_int;
	var_97_object->size(var_98_int);
	int var_99_int = 0;
	
	while(var_99_int < var_98_int) {
		var_97_object->get(var_100_int, var_99_int);
		bool var_117_bool = true;
		bool var_118_bool; int var_119_int;
		var_100_int = var_119_int;
		func_911(var_118_bool, var_119_int);
		if(var_118_bool != 1) {
			bool var_120_bool; int var_121_int;
			var_100_int = var_121_int;
			func_901(var_120_bool, var_121_int);
			if(var_120_bool != 1)
				var_117_bool = false;
		}
		if(var_117_bool != 0)
			var_92_bool = false;
		var_99_int += 1;
	}
	
	var_92_bool = true;
}
EMIT "Stack[-4] = 0";


void func_1088(void)
{
	int var_47_int; int var_48_int; int var_49_int; bool var_50_bool; bool var_51_bool;
	func_770();
	int var_70_int;
	func_764(var_70_int);
	int var_43_int;
	var_70_int = var_43_int;
	int var_71_int;
	func_1082(var_71_int);
	int var_44_int;
	var_71_int = var_44_int;
	bool var_45_bool = false;
	bool var_46_bool = false;
	if(var_43_int == 0) {
		@GetVariable("d12q01ChildsAreVisited", var_47_int);
		var_45_bool = var_47_int != 0;
		@GetVariable("d12q01TheaterIsVisited", var_47_int);
		var_46_bool = var_47_int != 0;
	} else {
						if(var_43_int == 1) {
							@GetVariable("b12q01ChildsAreVisited", var_48_int);
							var_45_bool = var_48_int != 0;
							@GetVariable("b12q01TheaterIsVisited", var_48_int);
							var_46_bool = var_48_int != 0;
						}
						goto Label_1311;
	}
	for(;;) {
		var_50_bool = false;
		bool var_81_bool = false;
		if(var_43_int == 0) {
			if(var_44_int == 2)
				var_81_bool = true;
		}
		if(var_81_bool != 0)
			var_50_bool = true;
		bool var_86_bool = false;
		if(var_43_int == 1) {
			if(var_44_int == 1)
				var_86_bool = true;
		}
		if(var_86_bool != 0)
			var_50_bool = true;
		bool var_91_bool = false;
		if(var_43_int == 2) {
			if(var_44_int == 3)
				var_91_bool = true;
		}
		if(var_91_bool != 0)
			var_50_bool = true;
		var_51_bool = false;
		bool var_96_bool = false;
		bool var_97_bool = false;
		if(var_44_int == 4) {
			if(!var_45_bool) //@nz
				var_97_bool = true;
		}
		if(var_97_bool != 0) {
			if(!var_46_bool) //@nz
				var_96_bool = true;
		}
		if(var_96_bool != 0)
			var_51_bool = true;
		bool var_102_bool = false;
		bool var_103_bool = false;
		if(!var_50_bool) { //@nz
			if(var_45_bool != 0)
				var_103_bool = true;
		}
		if(var_103_bool != 0) {
			if(!var_46_bool) //@nz
				var_102_bool = true;
		}
		if(var_102_bool != 0)
			var_51_bool = true;
		bool var_107_bool = false;
		bool var_108_bool = false;
		if(var_50_bool != 0) {
			if(var_45_bool != 0)
				var_108_bool = true;
		}
		if(var_108_bool != 0) {
			if(var_46_bool != 0)
				var_107_bool = true;
		}
		if(var_107_bool != 0)
			var_51_bool = true;
		@Trace("PlayFinalMovie");
		int var_113_int;
		func_1082(var_113_int);
		if(var_113_int == 1) {
			@Trace("fin_termit");
			if(!var_50_bool) //@nz
				@UnlockAchievement("ACHIEVEMENT_HELLO_2");
			if(var_51_bool != 0)
				@GameOver("gameover_termit_chudo.xml");
			else
				@GameOver("gameover_termit.xml");
				int var_122_int;
				func_1082(var_122_int);
				if(var_122_int == 2) {
					@Trace("fin_utop");
					if(!var_50_bool) //@nz
						@UnlockAchievement("ACHIEVEMENT_HELLO_2");
					if(var_51_bool != 0)
						@GameOver("gameover_utopist_chudo.xml");
					else
						@GameOver("gameover_utopist.xml");
				int var_131_int;
				func_1082(var_131_int);
				if(var_131_int == 3) {
					@Trace("fin_smiren");
					if(!var_50_bool) //@nz
						@UnlockAchievement("ACHIEVEMENT_HELLO_2");
					if(var_51_bool != 0)
						@GameOver("gameover_smirennik_chudo.xml");
					else
						@GameOver("gameover_smirennik.xml");
					@Trace("fin_beda");
					if(var_51_bool != 0) {
						@GameOver("gameover_beda_chudo.xml");
						goto Label_1311;
					}
					@GameOver("gameover_beda.xml");

					}
			}
					} else if(var_43_int == 2) {
		@GetVariable("k12q01ChildsAreVisited", var_49_int);
		var_45_bool = var_49_int != 0;
		@GetVariable("k12q01TheaterIsVisited", var_49_int);
		var_46_bool = var_49_int != 0;
					}
	Label_1311:
		for(;;) {

		}

	}
	
}


void func_580(void)
{
	@SetVariable("d12q01", 1000);
	func_588();
}


// @pe
void func_836(object var_101_object, bool var_102_bool, int var_103_int)
{
	var_101_object->add(6);
	var_101_object->add(26);
	var_101_object->add(2);
	var_101_object->add(22);
	if(var_102_bool == false) {
		var_101_object->add(15);
		var_101_object->add(5);
		var_101_object->add(16);
	} else if(var_103_int != 0) {
		var_101_object->add(15);
	}
	
}


void func_710(void)
{
	object var_190_object;
	@CreateDiaryEntry(var_190_object, 705, 1, 535688);
	bool var_194_bool; object var_195_object;
	var_190_object = var_195_object;
	func_736(var_194_bool, var_195_object, 699);
}
EMIT "Stack[-1] = 0";


void func_588(void)
{
	object var_334_object;
	func_595(var_334_object);
	@RemoveActor(var_334_object);
}


void func_595(object var_334_object)
{
	object var_336_object;
	@self(var_336_object);
	var_336_object = var_334_object;
}
EMIT "Stack[-1] = 0";


void func_723(object var_180_object)
{
	object var_182_object;
	@GetDiaryRoot(var_182_object);
	if(!var_182_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_180_object = false;
	}
	var_182_object = var_180_object;
}
EMIT "Stack[-1] = 0";


void func_601(object var_51_object, string var_52_string)
{
	object var_55_object;
	@GetMainOutdoorScene(var_55_object);
	object var_56_object;
	@AddBlankActor(var_56_object, var_55_object, var_52_string, (var_52_string + ".bin"));
	var_56_object = var_51_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_736(bool var_171_bool, object var_172_object, int var_173_int)
{
	object var_180_object;
	func_723(var_180_object);
	object var_177_object;
	var_180_object = var_177_object;
	object var_178_object;
	var_177_object->Find(var_173_int, var_178_object);
	if(!var_178_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_173_int);
		var_171_bool = false;
	}
	var_178_object->AddChild(var_172_object);
	@SendWorldWndMessage(7);
	int var_179_int;
	var_172_object->GetCategory(var_179_int);
	@SetDiarySection(var_179_int);
	var_171_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_612(object var_216_object, object var_217_object, string var_218_string, string var_219_string, string var_220_string)
{
	bool var_225_bool; cvector var_226_cvector; cvector var_227_cvector;
	var_217_object->GetLocator(var_218_string, var_225_bool, var_226_cvector, var_227_cvector);
	if(!var_225_bool) //@nz
		@Trace(("Locator " + var_218_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_219_string, var_217_object, var_226_cvector, var_227_cvector, var_220_string);
	object var_228_object = var_216_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_869(object var_56_object, bool var_57_bool)
{
	var_56_object->add(7);
	var_56_object->add(23);
	var_56_object->add(21);
	var_56_object->add(9);
	var_56_object->add(3);
	var_56_object->add(1);
	var_56_object->add(11);
	var_56_object->add(13);
	if(var_57_bool == false)
		var_56_object->add(25);
}


void func_997(bool var_47_bool)
{
	object var_52_object; int var_55_int;
	@CreateIntVector(var_52_object);
	object var_56_object;
	var_52_object = var_56_object;
	func_869(false, -1);
	int var_53_int;
	var_52_object->size(var_53_int);
	int var_54_int = 0;
	
	while(var_54_int < var_53_int) {
		var_52_object->get(var_55_int, var_54_int);
		bool var_71_bool = true;
		bool var_72_bool; int var_73_int;
		var_55_int = var_73_int;
		func_911(var_72_bool, var_73_int);
		if(var_72_bool != 1) {
			bool var_81_bool; int var_82_int;
			var_55_int = var_82_int;
			func_901(var_81_bool, var_82_int);
			if(var_81_bool != 1)
				var_71_bool = false;
		}
		if(var_71_bool != 0)
			var_47_bool = false;
		var_54_int += 1;
	}
	
	var_47_bool = true;
}
EMIT "Stack[-4] = 0";


void func_630(object var_197_object, object var_198_object, string var_199_string, string var_200_string, string var_201_string)
{
	bool var_206_bool; cvector var_207_cvector; cvector var_208_cvector;
	var_198_object->GetLocator(var_199_string, var_206_bool, var_207_cvector, var_208_cvector);
	if(!var_206_bool) //@nz
		@Trace(("Locator " + var_199_string) + " doesn't exist");
	else
		var_198_object->AddStationaryActor(Obj(), var_207_cvector, var_208_cvector, var_200_string, var_201_string);
	object var_209_object = var_197_object;
	
}
EMIT "Stack[-1] = 0";


void func_764(int var_52_int)
{
	int var_54_int;
	@GetVariable("branch", var_54_int);
	var_54_int = var_52_int;
}


