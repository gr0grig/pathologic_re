// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object)
	{
		var_1_bool = false;
		var_0_bool = false;
		var_2_bool = false;
		var_3_bool = false;
		func_1290();
		@SetTimeEvent(0, 288);
		int var_35_int;
		func_660(var_35_int);
		if(var_35_int >= 8) {
			bool var_42_bool;
			func_1009(var_42_bool);
			if(var_42_bool != 0) {
				bool var_156_bool;
				func_636(var_156_bool, "volonteers_burah", "childs_letter", "");
			}
		} else {
				@SetTimeEvent(1, 272);
		}
		func_1051(0);
		func_668();
		func_681();
		object var_17_object;
		@GetMainOutdoorScene(var_17_object);
		object var_196_object; object var_197_object;
		func_601(var_196_object, var_197_object, "pt_b12q01_birdmask_s", "pers_birdmask", "b12q01_birdmask_s.xml");
		var_4_object = var_196_object;
		@GetSceneByName(var_197_object, "termitnik2");
		object var_215_object; object var_216_object;
		var_17_object = var_216_object;
		func_583(var_215_object, var_216_object, "pt_b12q01_klara", "NPC_Klara", "b12q01_klara_t2.xml");
		var_9_object = var_215_object;
		func_619("sobor@door1", true);
		func_619("hidden_room@door1", true);
		func_619("mnogogrannik@door1", true);
		func_619("cot_eva@door1", false);
		func_619("termitnik2@door1", false);
		func_619("uprava_admin@door1", false);
		float var_18_float;
		@GetGameTime(var_18_float);
		if(var_18_float < 271) {
			func_619("theater@door1", false);
			@SetTimeEvent(2, 271);
		} else {
			func_0(var_18_float);

		}
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-2] = 0";

	void OnGameTime(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, int var_15_int, float var_16_float)
	{
		float var_18_float;
		disable OnTrigger;
		disable OnGameTime;
		if(var_15_int == 0) {
			@Trace("final 0");
			bool var_22_bool = true;
			if(var_3_bool != 1) {
				bool var_24_bool;
				func_1285(var_24_bool);
				var_27_bool = !var_24_bool; //@nz
				if(var_27_bool != 1)
					var_22_bool = false;
			}
			if(var_22_bool != 0) {
				@Trace("final 1 locked: " + var_3_bool);
				@GetGameTime(var_18_float);
				var_18_float += 0.008333334;
				@SetTimeEvent(0, var_18_float);
				enable OnTrigger;
				enable OnGameTime;
				return 2;
			}
			func_1062();
		} else if(var_15_int == 1) {
				bool var_150_bool;
				func_1009(var_150_bool);
				if(var_150_bool != 0) {
					bool var_264_bool;
					func_636(var_264_bool, "volonteers_burah", "childs_letter", "");
				}
				enable OnTrigger;
				enable OnGameTime;
		}
	Label_197:
		for(;;) {
			return 2;

		}
	
		if(!(var_15_int == 2)) goto Label_197;
		func_0(var_18_float);
		enable OnTrigger;
		enable OnGameTime;
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string)
	{
		object var_21_object; object var_22_object; object var_23_object; object var_24_object; int var_25_int;
		@Trace(var_15_string);
		if(var_15_string == "init_sobor") {
			@GetSceneByName(var_21_object, "sobor");
			@Trigger(var_21_object, "noaglaja");
			if(var_9_object != 0)
				@Trigger(var_9_object, "cleanup");
			func_619("isobor@door1", true);
			func_619("sobor@door1", false);
			var_1_bool = true;
			var_21_object = null;
		} else if(var_15_string == "sobor_load") {
				if(var_1_bool != 0) {
					var_3_bool = true;
					object var_47_object;
					func_572(var_47_object, "quest_b12_01_sobor_cutscene");
				}
		}
	Label_542:
		for(;;) {

		}
	
		if(var_15_string == "sobor_cutscene_end") {
			@GetSceneByName(var_22_object, "sobor");
			object var_58_object; object var_59_object;
			var_22_object = var_59_object;
			func_583(var_58_object, var_59_object, "pt_b12q01_block", "NPC_Block", "b12q01_Block.xml");
			var_5_object = var_58_object;
			object var_76_object; object var_77_object;
			var_22_object = var_77_object;
			func_583(var_76_object, var_77_object, "pt_b12q01_aglaja", "NPC_Aglaja", "b12q01_Aglaja.xml");
			var_6_object = var_76_object;
			object var_81_object; object var_82_object;
			var_22_object = var_82_object;
			func_583(var_81_object, var_82_object, "pt_b12q01_kapella", "NPC_Kapella", "b12q01_Kapella.xml");
			var_7_object = var_81_object;
			bool var_86_bool;
			func_1271(var_86_bool);
			if(var_86_bool != 0) {
				object var_91_object; object var_92_object;
				var_22_object = var_92_object;
				func_583(var_91_object, var_92_object, "pt_b12q01_klara", "NPC_Klara", "b12q01_Klara.xml");
				var_8_object = var_91_object;
			}
			bool var_96_bool;
			func_1278(var_96_bool);
			if(var_96_bool != 0) {
				object var_101_object; object var_102_object;
				var_22_object = var_102_object;
				func_583(var_101_object, var_102_object, "pt_b12q01_danko", "NPC_Bakalavr", "b12q01_Danko.xml");
				var_10_object = var_101_object;
			}
			var_22_object = null;
		} else if(var_15_string == "sobor_unload") {
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
				func_619("sobor@door1", true);
				var_3_bool = false;
			}
		} else if(var_15_string == "init_theater") {
			bool var_124_bool;
			func_648(var_124_bool, "NPC_Mark");
			func_619("itheater@door1", true);
			func_619("theater@door1", false);
			var_0_bool = true;
		} else if(var_15_string == "theater_load") {
			if(var_0_bool != 0) {
				var_3_bool = true;
				object var_136_object;
				func_572(var_136_object, "quest_b12_01_theater_cutscene");
				@SetVariable("b12q01TheaterIsVisited", 1);
			}
		} else if(var_15_string == "theater_cutscene_end") {
			@GetSceneByName(var_23_object, "theater");
			object var_143_object; object var_144_object;
			var_23_object = var_144_object;
			func_583(var_143_object, var_144_object, "pt_b12q01_birdmask", "pers_birdmask", "b12q01_tbirdmask.xml");
			var_11_object = var_143_object;
			object var_148_object; object var_149_object;
			var_23_object = var_149_object;
			func_583(var_148_object, var_149_object, "pt_b12q01_whitemask", "pers_whitemask", "b12q01_twhitemask.xml");
			var_12_object = var_148_object;
			var_23_object = null;
		} else if(var_15_string == "theater_unload") {
			if(var_0_bool != 0) {
				if(var_11_object != 0)
					@Trigger(var_11_object, "cleanup");
				if(var_12_object != 0)
					@Trigger(var_12_object, "cleanup");
				func_619("theater@door1", true);
				var_3_bool = false;
			}
		} else if(var_15_string == "init_hidden_room") {
			func_619("mnogogrannik_han@door1", false);
			func_619("mnogogrannik_han@door2", false);
			func_619("hidden_room@door1", false);
			func_619("imnogogrannik_han@door1", false);
			func_619("mnogogrannik@door1", false);
			var_2_bool = true;
		} else if(var_15_string == "hidden_room_load") {
			if(var_2_bool != 0) {
				var_3_bool = true;
				@SetVariable("b12q01ChildsAreVisited", 1);
				object var_179_object;
				func_572(var_179_object, "quest_b12_01_hidden_room_cutscene");
			}
		} else if(var_15_string == "hidden_room_cutscene_end") {
			@GetSceneByName(var_24_object, "hidden_room");
			object var_184_object; object var_185_object;
			var_24_object = var_185_object;
			func_583(var_184_object, var_185_object, "pt_girl", "pers_littlegirl2", "b12q01_littlegirl.xml");
			var_13_object = var_184_object;
			object var_189_object; object var_190_object;
			var_24_object = var_190_object;
			func_583(var_189_object, var_190_object, "pt_boy", "pers_littleboy2", "b12q01_littleboy.xml");
			var_14_object = var_189_object;
			var_24_object = null;
		} else if(var_15_string == "hidden_room_unload") {
			if(var_2_bool != 0) {
				func_619("hidden_room@door1", true);
				func_619("mnogogrannik@door1", true);
				var_3_bool = false;
				bool var_201_bool;
				func_1032(var_201_bool);
				if(var_201_bool != 0) {
					bool var_310_bool;
					func_636(var_310_bool, "volonteers_burah", "theater_letter", "");
				}
			}
		}
		if(var_15_string == "cleanup") {
			@GetVariable("b12q01", var_25_int);
			if(var_25_int != 1000)
				func_543();
			else
				func_559();
			if(var_15_string == "fail") {
				func_543();
			} else if(var_15_string == "completed") {
				func_551();
			}
		}
		goto Label_542;
	
	}

}


void func_0(object var_11_object)
{
	object var_252_object;
	@GetMainOutdoorScene(var_252_object);
	func_619("theater@door1", true);
	object var_255_object; object var_256_object;
	var_252_object = var_256_object;
	func_601(var_255_object, var_256_object, "pt_b12q01_birdmask_t", "pers_birdmask", "b12q01_birdmask_t.xml");
	var_11_object = var_255_object;
}
EMIT "Stack[-1] = 0";


void func_1285(bool var_24_bool)
{
	bool var_26_bool;
	@IsOverrideActive(var_26_bool);
	var_24_bool = !var_26_bool;
}


// @pe
void func_774(object var_132_object, bool var_133_bool, int var_134_int)
{
	var_132_object->add(18);
	var_132_object->add(24);
	var_132_object->add(20);
	var_132_object->add(14);
	if(var_133_bool == false) {
		var_132_object->add(10);
		var_132_object->add(17);
		var_132_object->add(8);
	} else if(var_134_int != 1) {
		var_132_object->add(10);
	}
	
}


void func_1032(bool var_201_bool)
{
	var_201_bool = false;
	bool var_202_bool = false;
	bool var_203_bool;
	func_971(var_203_bool);
	if(var_203_bool != 0) {
		bool var_247_bool;
		func_933(var_247_bool);
		if(var_247_bool != 0)
			var_202_bool = true;
	}
	if(var_202_bool != 0) {
		bool var_279_bool;
		func_895(var_279_bool);
		if(var_279_bool != 0)
			var_201_bool = true;
	}
}


void func_648(bool var_124_bool, string var_125_string)
{
	object var_127_object;
	@FindActor(var_127_object, var_125_string);
	if(!var_127_object) //@nz
		var_124_bool = false;
	@RemoveActor(var_127_object);
	var_124_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1290(void)
{
	object var_20_object;
	@GetSceneByName(var_20_object, "warehouse_rubin");
	@Trigger(var_20_object, "rubin");
	func_619("warehouse_rubin@door1", false);
}
EMIT "Stack[-1] = 0";


void func_660(int var_35_int)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	int var_38_int;
	var_37_float = var_38_int;
	var_35_int = var_38_int % 24;
}


// @pe
void func_1051(int var_163_int)
{
	@SetVariable("game_final", var_163_int);
}


void func_668(void)
{
	object var_166_object;
	@CreateDiaryEntry(var_166_object, 613, 1, 532002);
	bool var_170_bool; object var_171_object;
	var_166_object = var_171_object;
	func_707(var_170_bool, var_171_object, -1);
}
EMIT "Stack[-1] = 0";


void func_543(void)
{
	@SetVariable("b12q01", -1);
	func_559();
}


void func_1056(int var_69_int)
{
	int var_71_int;
	@GetVariable("game_final", var_71_int);
	var_71_int = var_69_int;
}


void func_933(bool var_90_bool)
{
	object var_95_object; int var_98_int;
	@CreateIntVector(var_95_object);
	object var_99_object;
	var_95_object = var_99_object;
	func_807(var_99_object, false, -1);
	int var_96_int;
	var_95_object->size(var_96_int);
	int var_97_int = 0;
	
	while(var_97_int < var_96_int) {
		var_95_object->get(var_98_int, var_97_int);
		bool var_116_bool = true;
		bool var_117_bool; int var_118_int;
		var_98_int = var_118_int;
		func_885(var_117_bool, var_118_int);
		if(var_117_bool != 1) {
			bool var_119_bool; int var_120_int;
			var_98_int = var_120_int;
			func_875(var_119_bool, var_120_int);
			if(var_119_bool != 1)
				var_116_bool = false;
		}
		if(var_116_bool != 0)
			var_90_bool = false;
		var_97_int += 1;
	}
	
	var_90_bool = true;
}
EMIT "Stack[-4] = 0";


void func_1062(void)
{
	int var_45_int; int var_46_int; int var_47_int; bool var_48_bool; bool var_49_bool;
	func_741();
	int var_68_int;
	func_735(var_68_int);
	int var_41_int;
	var_68_int = var_41_int;
	int var_69_int;
	func_1056(var_69_int);
	int var_42_int;
	var_69_int = var_42_int;
	bool var_43_bool = false;
	bool var_44_bool = false;
	if(var_41_int == 0) {
		@GetVariable("d12q01ChildsAreVisited", var_45_int);
		var_43_bool = var_45_int != 0;
		@GetVariable("d12q01TheaterIsVisited", var_45_int);
		var_44_bool = var_45_int != 0;
	} else {
						if(var_41_int == 1) {
							@GetVariable("b12q01ChildsAreVisited", var_46_int);
							var_43_bool = var_46_int != 0;
							@GetVariable("b12q01TheaterIsVisited", var_46_int);
							var_44_bool = var_46_int != 0;
						}
						goto Label_1270;
	}
	for(;;) {
		var_48_bool = false;
		bool var_79_bool = false;
		if(var_41_int == 0) {
			if(var_42_int == 2)
				var_79_bool = true;
		}
		if(var_79_bool != 0)
			var_48_bool = true;
		bool var_84_bool = false;
		if(var_41_int == 1) {
			if(var_42_int == 1)
				var_84_bool = true;
		}
		if(var_84_bool != 0)
			var_48_bool = true;
		bool var_89_bool = false;
		if(var_41_int == 2) {
			if(var_42_int == 3)
				var_89_bool = true;
		}
		if(var_89_bool != 0)
			var_48_bool = true;
		var_49_bool = false;
		bool var_94_bool = false;
		bool var_95_bool = false;
		if(var_42_int == 4) {
			if(!var_43_bool) //@nz
				var_95_bool = true;
		}
		if(var_95_bool != 0) {
			if(!var_44_bool) //@nz
				var_94_bool = true;
		}
		if(var_94_bool != 0)
			var_49_bool = true;
		bool var_100_bool = false;
		bool var_101_bool = false;
		if(!var_48_bool) { //@nz
			if(var_43_bool != 0)
				var_101_bool = true;
		}
		if(var_101_bool != 0) {
			if(!var_44_bool) //@nz
				var_100_bool = true;
		}
		if(var_100_bool != 0)
			var_49_bool = true;
		bool var_105_bool = false;
		bool var_106_bool = false;
		if(var_48_bool != 0) {
			if(var_43_bool != 0)
				var_106_bool = true;
		}
		if(var_106_bool != 0) {
			if(var_44_bool != 0)
				var_105_bool = true;
		}
		if(var_105_bool != 0)
			var_49_bool = true;
		@Trace("PlayFinalMovie");
		int var_111_int;
		func_1056(var_111_int);
		if(var_111_int == 1) {
			@Trace("fin_termit");
			if(var_49_bool != 0)
				@GameOver("gameover_termit_chudo.xml");
			else
				@GameOver("gameover_termit.xml");
				int var_118_int;
				func_1056(var_118_int);
				if(var_118_int == 2) {
					@Trace("fin_utop");
					if(var_49_bool != 0)
						@GameOver("gameover_utopist_chudo.xml");
					else
						@GameOver("gameover_utopist.xml");
				int var_125_int;
				func_1056(var_125_int);
				if(var_125_int == 3) {
					@Trace("fin_smiren");
					if(var_49_bool != 0)
						@GameOver("gameover_smirennik_chudo.xml");
					else
						@GameOver("gameover_smirennik.xml");
					@Trace("fin_beda");
					if(var_49_bool != 0) {
						@GameOver("gameover_beda_chudo.xml");
						goto Label_1270;
					}
					@GameOver("gameover_beda.xml");

					}
			}
					} else if(var_41_int == 2) {
		@GetVariable("k12q01ChildsAreVisited", var_47_int);
		var_43_bool = var_47_int != 0;
		@GetVariable("k12q01TheaterIsVisited", var_47_int);
		var_44_bool = var_47_int != 0;
					}
	Label_1270:
		for(;;) {

		}

	}
	
}


void func_551(void)
{
	@SetVariable("b12q01", 1000);
	func_559();
}


// @pe
void func_807(object var_99_object, bool var_100_bool, int var_101_int)
{
	var_99_object->add(6);
	var_99_object->add(26);
	var_99_object->add(2);
	var_99_object->add(22);
	if(var_100_bool == false) {
		var_99_object->add(15);
		var_99_object->add(5);
		var_99_object->add(16);
		var_99_object->add(19);
	} else if(var_101_int != 0) {
		var_99_object->add(15);
	}
	
}


void func_681(void)
{
	object var_189_object;
	@CreateDiaryEntry(var_189_object, 694, 1, 535402);
	bool var_193_bool; object var_194_object;
	var_189_object = var_194_object;
	func_707(var_193_bool, var_194_object, 613);
}
EMIT "Stack[-1] = 0";


void func_559(void)
{
	object var_324_object;
	func_566(var_324_object);
	@RemoveActor(var_324_object);
}


void func_566(object var_324_object)
{
	object var_326_object;
	@self(var_326_object);
	var_326_object = var_324_object;
}
EMIT "Stack[-1] = 0";


void func_694(object var_179_object)
{
	object var_181_object;
	@GetDiaryRoot(var_181_object);
	if(!var_181_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_179_object = false;
	}
	var_181_object = var_179_object;
}
EMIT "Stack[-1] = 0";


void func_572(object var_47_object, string var_48_string)
{
	object var_51_object;
	@GetMainOutdoorScene(var_51_object);
	object var_52_object;
	@AddBlankActor(var_52_object, var_51_object, var_48_string, (var_48_string + ".bin"));
	var_52_object = var_47_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_707(bool var_170_bool, object var_171_object, int var_172_int)
{
	object var_179_object;
	func_694(var_179_object);
	object var_176_object;
	var_179_object = var_176_object;
	object var_177_object;
	var_176_object->Find(var_172_int, var_177_object);
	if(!var_177_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_172_int);
		var_170_bool = false;
	}
	var_177_object->AddChild(var_171_object);
	@SendWorldWndMessage(7);
	int var_178_int;
	var_171_object->GetCategory(var_178_int);
	@SetDiarySection(var_178_int);
	var_170_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_583(object var_215_object, object var_216_object, string var_217_string, string var_218_string, string var_219_string)
{
	bool var_224_bool; cvector var_225_cvector; cvector var_226_cvector;
	var_216_object->GetLocator(var_217_string, var_224_bool, var_225_cvector, var_226_cvector);
	if(!var_224_bool) //@nz
		@Trace(("Locator " + var_217_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_218_string, var_216_object, var_225_cvector, var_226_cvector, var_219_string);
	object var_227_object = var_215_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_843(object var_54_object, bool var_55_bool)
{
	var_54_object->add(7);
	var_54_object->add(23);
	var_54_object->add(21);
	var_54_object->add(9);
	var_54_object->add(3);
	var_54_object->add(1);
	var_54_object->add(11);
	var_54_object->add(13);
	if(var_55_bool == false)
		var_54_object->add(25);
}


void func_971(bool var_45_bool)
{
	object var_50_object; int var_53_int;
	@CreateIntVector(var_50_object);
	object var_54_object;
	var_50_object = var_54_object;
	func_843(false, -1);
	int var_51_int;
	var_50_object->size(var_51_int);
	int var_52_int = 0;
	
	while(var_52_int < var_51_int) {
		var_50_object->get(var_53_int, var_52_int);
		bool var_69_bool = true;
		bool var_70_bool; int var_71_int;
		var_53_int = var_71_int;
		func_885(var_70_bool, var_71_int);
		if(var_70_bool != 1) {
			bool var_79_bool; int var_80_int;
			var_53_int = var_80_int;
			func_875(var_79_bool, var_80_int);
			if(var_79_bool != 1)
				var_69_bool = false;
		}
		if(var_69_bool != 0)
			var_45_bool = false;
		var_52_int += 1;
	}
	
	var_45_bool = true;
}
EMIT "Stack[-4] = 0";


void func_601(object var_196_object, object var_197_object, string var_198_string, string var_199_string, string var_200_string)
{
	bool var_205_bool; cvector var_206_cvector; cvector var_207_cvector;
	var_197_object->GetLocator(var_198_string, var_205_bool, var_206_cvector, var_207_cvector);
	if(!var_205_bool) //@nz
		@Trace(("Locator " + var_198_string) + " doesn't exist");
	else
		var_197_object->AddStationaryActor(Obj(), var_206_cvector, var_207_cvector, var_199_string, var_200_string);
	object var_208_object = var_196_object;
	
}
EMIT "Stack[-1] = 0";


void func_735(int var_50_int)
{
	int var_52_int;
	@GetVariable("branch", var_52_int);
	var_52_int = var_50_int;
}


void func_741(void)
{
	int var_50_int;
	func_735(var_50_int);
	if(var_50_int == 1) {
		@SetRegistryData("BurahCompleted", 1);
	} else {
			int var_58_int;
			func_735(var_58_int);
			if(!(var_58_int == 0)) goto Label_763;
			@SetRegistryData("DankoCompleted", 1);
	}
Label_773:
	for(;;) {
		return 0;

	}
	
Label_763:
	int var_63_int;
	func_735(var_63_int);
	if(!(var_63_int == 2)) goto Label_773;
	@SetRegistryData("KlaraCompleted", 1);
}


void func_619(string var_23_string, bool var_24_bool)
{
	object var_26_object;
	@FindActor(var_26_object, var_23_string);
	if(!var_26_object) //@nz
		@Trace(("Door " + var_23_string) + " not found");
	else
		var_26_object->SetProperty("locked", var_24_bool);
	
}
EMIT "Stack[-1] = 0";


void func_875(bool var_79_bool, int var_80_int)
{
	int var_82_int;
	@GetVariable(("vol_" + var_80_int), var_82_int);
	var_79_bool = (var_82_int & 4) != 0;
}


void func_1009(bool var_42_bool)
{
	int var_44_int = 0;
	bool var_45_bool;
	func_971(var_45_bool);
	if(var_45_bool != 0)
		var_44_int += 1;
	bool var_90_bool;
	func_933(var_90_bool);
	if(var_90_bool != 0)
		var_44_int += 1;
	bool var_123_bool;
	func_895(var_123_bool);
	if(var_123_bool != 0)
		var_44_int += 1;
	var_42_bool = var_44_int >= 2;
}


void func_885(bool var_70_bool, int var_71_int)
{
	int var_73_int;
	@GetVariable(("vol_" + var_71_int), var_73_int);
	var_70_bool = (var_73_int & 16) != 0;
}


void func_1271(bool var_86_bool)
{
	int var_88_int;
	@GetVariable("b12q01KlaraInSobor", var_88_int);
	var_86_bool = var_88_int != 0;
}


void func_636(bool var_156_bool, string var_157_string, string var_158_string, string var_159_string)
{
	object var_161_object;
	@FindActor(var_161_object, var_157_string);
	if(var_161_object == null)
		var_156_bool = false;
	@Trigger(var_161_object, var_158_string, var_159_string);
	var_156_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1278(bool var_96_bool)
{
	int var_98_int;
	@GetVariable("b12q01DankoInSobor", var_98_int);
	var_96_bool = var_98_int != 0;
}


void func_895(bool var_123_bool)
{
	object var_128_object; int var_131_int;
	@CreateIntVector(var_128_object);
	object var_132_object;
	var_128_object = var_132_object;
	func_774(var_132_object, false, -1);
	int var_129_int;
	var_128_object->size(var_129_int);
	int var_130_int = 0;
	
	while(var_130_int < var_129_int) {
		var_128_object->get(var_131_int, var_130_int);
		bool var_148_bool = true;
		bool var_149_bool; int var_150_int;
		var_131_int = var_150_int;
		func_885(var_149_bool, var_150_int);
		if(var_149_bool != 1) {
			bool var_151_bool; int var_152_int;
			var_131_int = var_152_int;
			func_875(var_151_bool, var_152_int);
			if(var_151_bool != 1)
				var_148_bool = false;
		}
		if(var_148_bool != 0)
			var_123_bool = false;
		var_130_int += 1;
	}
	
	var_123_bool = true;
}
EMIT "Stack[-4] = 0";


