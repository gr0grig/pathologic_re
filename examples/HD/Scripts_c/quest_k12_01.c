// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object)
	{
		var_1_bool = false;
		var_0_bool = false;
		var_2_bool = false;
		var_3_bool = false;
		func_1286();
		@SetTimeEvent(0, 288);
		int var_38_int;
		func_644(var_38_int);
		if(var_38_int >= 8) {
			bool var_45_bool;
			func_990(var_45_bool);
			if(var_45_bool != 0) {
				bool var_158_bool;
				func_620(var_158_bool, "volonteers_klara", "childs_letter", "");
			}
		} else {
				@SetTimeEvent(1, 272);
		}
		func_1032(0);
		func_652();
		func_665();
		object var_16_object;
		@GetMainOutdoorScene(var_16_object);
		object var_198_object; object var_199_object;
		var_16_object = var_199_object;
		func_585(var_198_object, var_199_object, "pt_b12q01_birdmask_s", "pers_birdmask", "k12q01_birdmask_s.xml");
		var_4_object = var_198_object;
		func_603("sobor@door1", true);
		func_603("hidden_room@door1", true);
		func_603("mnogogrannik@door1", true);
		func_603("cot_eva@door1", false);
		func_603("termitnik2@door1", false);
		func_603("uprava_admin@door1", false);
		float var_17_float;
		@GetGameTime(var_17_float);
		if(var_17_float < 271) {
			func_603("theater@door1", false);
			@SetTimeEvent(2, 271);
		} else {
			func_0(var_17_float);

		}
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-2] = 0";

	void OnGameTime(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, int var_14_int, float var_15_float)
	{
		float var_17_float;
		disable OnTrigger;
		disable OnGameTime;
		if(var_14_int == 0) {
			@Trace("final 0");
			bool var_21_bool = true;
			if(var_3_bool != 1) {
				bool var_23_bool;
				func_1281(var_23_bool);
				var_26_bool = !var_23_bool; //@nz
				if(var_26_bool != 1)
					var_21_bool = false;
			}
			if(var_21_bool != 0) {
				@Trace("final 1 locked: " + var_3_bool);
				@GetGameTime(var_17_float);
				var_17_float += 0.008333334;
				@SetTimeEvent(0, var_17_float);
				enable OnTrigger;
				enable OnGameTime;
				return 2;
			}
			func_1043();
		} else if(var_14_int == 1) {
				bool var_155_bool;
				func_990(var_155_bool);
				if(var_155_bool != 0) {
					bool var_268_bool;
					func_620(var_268_bool, "volonteers_klara", "childs_letter", "");
				}
				enable OnTrigger;
				enable OnGameTime;
		}
	Label_186:
		for(;;) {
			return 2;

		}
	
		if(!(var_14_int == 2)) goto Label_186;
		func_0(var_17_float);
		enable OnTrigger;
		enable OnGameTime;
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, string var_14_string)
	{
		object var_20_object; object var_21_object; object var_22_object; object var_23_object; int var_24_int;
		@Trace(var_14_string);
		if(var_14_string == "init_sobor") {
			@GetSceneByName(var_20_object, "sobor");
			@Trigger(var_20_object, "noaglaja");
			func_603("isobor@door1", true);
			func_603("sobor@door1", false);
			var_1_bool = true;
			var_20_object = null;
		} else if(var_14_string == "sobor_load") {
				if(var_1_bool != 0) {
					var_3_bool = true;
					object var_44_object;
					func_556(var_44_object, "quest_k12_01_sobor_cutscene");
				}
		}
	Label_526:
		for(;;) {

		}
	
		if(var_14_string == "sobor_cutscene_end") {
			@GetSceneByName(var_21_object, "sobor");
			object var_55_object; object var_56_object;
			var_21_object = var_56_object;
			func_567(var_55_object, var_56_object, "pt_b12q01_block", "NPC_Block", "k12q01_Block.xml");
			var_5_object = var_55_object;
			object var_73_object; object var_74_object;
			var_21_object = var_74_object;
			func_567(var_73_object, var_74_object, "pt_b12q01_aglaja", "NPC_Aglaja", "k12q01_Aglaja.xml");
			var_6_object = var_73_object;
			object var_78_object; object var_79_object;
			var_21_object = var_79_object;
			func_567(var_78_object, var_79_object, "pt_b12q01_kapella", "NPC_Klara", "k12q01_Klara2.xml");
			var_7_object = var_78_object;
			bool var_83_bool;
			func_1267(var_83_bool);
			if(var_83_bool != 0) {
				object var_88_object; object var_89_object;
				var_21_object = var_89_object;
				func_567(var_88_object, var_89_object, "pt_d12q01_burah", "NPC_Burah", "k12q01_Burah.xml");
				var_8_object = var_88_object;
			}
			bool var_93_bool;
			func_1274(var_93_bool);
			if(var_93_bool != 0) {
				object var_98_object; object var_99_object;
				var_21_object = var_99_object;
				func_567(var_98_object, var_99_object, "pt_b12q01_danko", "NPC_Bakalavr", "k12q01_Danko.xml");
				var_9_object = var_98_object;
			}
			var_21_object = null;
		} else if(var_14_string == "sobor_unload") {
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
				if(var_9_object != 0)
					@Trigger(var_9_object, "cleanup");
				func_603("sobor@door1", true);
				var_3_bool = false;
			}
		} else if(var_14_string == "init_theater") {
			bool var_121_bool;
			func_632(var_121_bool, "NPC_Mark");
			func_603("itheater@door1", true);
			func_603("theater@door1", false);
			var_0_bool = true;
		} else if(var_14_string == "theater_load") {
			if(var_0_bool != 0) {
				var_3_bool = true;
				object var_133_object;
				func_556(var_133_object, "quest_k12_01_theater_cutscene");
				@SetVariable("k12q01TheaterIsVisited", 1);
			}
		} else if(var_14_string == "theater_cutscene_end") {
			@GetSceneByName(var_22_object, "theater");
			object var_140_object; object var_141_object;
			var_22_object = var_141_object;
			func_567(var_140_object, var_141_object, "pt_b12q01_birdmask", "pers_birdmask", "k12q01_tbirdmask.xml");
			var_10_object = var_140_object;
			object var_145_object; object var_146_object;
			var_22_object = var_146_object;
			func_567(var_145_object, var_146_object, "pt_b12q01_whitemask", "pers_whitemask", "k12q01_twhitemask.xml");
			var_11_object = var_145_object;
			var_22_object = null;
		} else if(var_14_string == "theater_unload") {
			if(var_0_bool != 0) {
				if(var_10_object != 0)
					@Trigger(var_10_object, "cleanup");
				if(var_11_object != 0)
					@Trigger(var_11_object, "cleanup");
				func_603("theater@door1", true);
				var_3_bool = false;
			}
		} else if(var_14_string == "init_hidden_room") {
			func_603("mnogogrannik_han@door1", false);
			func_603("mnogogrannik_han@door2", false);
			func_603("hidden_room@door1", false);
			func_603("imnogogrannik_han@door1", false);
			func_603("mnogogrannik@door1", false);
			var_2_bool = true;
		} else if(var_14_string == "hidden_room_load") {
			if(var_2_bool != 0) {
				var_3_bool = true;
				@SetVariable("k12q01ChildsAreVisited", 1);
				object var_176_object;
				func_556(var_176_object, "quest_k12_01_hidden_room_cutscene");
			}
		} else if(var_14_string == "hidden_room_cutscene_end") {
			@GetSceneByName(var_23_object, "hidden_room");
			object var_181_object; object var_182_object;
			var_23_object = var_182_object;
			func_567(var_181_object, var_182_object, "pt_girl", "pers_littlegirl2", "k12q01_littlegirl.xml");
			var_12_object = var_181_object;
			object var_186_object; object var_187_object;
			var_23_object = var_187_object;
			func_567(var_186_object, var_187_object, "pt_boy", "pers_littleboy2", "k12q01_littleboy.xml");
			var_13_object = var_186_object;
			var_23_object = null;
		} else if(var_14_string == "hidden_room_unload") {
			if(var_2_bool != 0) {
				func_603("hidden_room@door1", true);
				func_603("mnogogrannik@door1", true);
				var_3_bool = false;
				bool var_198_bool;
				func_1013(var_198_bool);
				if(var_198_bool != 0) {
					bool var_306_bool;
					func_620(var_306_bool, "volonteers_klara", "theater_letter", "");
				}
			}
		}
		if(var_14_string == "cleanup") {
			@GetVariable("k12q01", var_24_int);
			if(var_24_int != 1000)
				func_527();
			else
				func_543();
			if(var_14_string == "fail") {
				func_527();
			} else if(var_14_string == "completed") {
				func_535();
			}
		}
		goto Label_526;
	
	}

}


void func_0(object var_10_object)
{
	object var_235_object;
	@GetMainOutdoorScene(var_235_object);
	func_603("theater@door1", true);
	object var_238_object; object var_239_object;
	var_235_object = var_239_object;
	func_585(var_238_object, var_239_object, "pt_b12q01_birdmask_t", "pers_birdmask", "k12q01_birdmask_t.xml");
	var_10_object = var_238_object;
}
EMIT "Stack[-1] = 0";


void func_1281(bool var_23_bool)
{
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	var_23_bool = !var_25_bool;
}


void func_644(int var_38_int)
{
	float var_40_float;
	@GetGameTime(var_40_float);
	int var_41_int;
	var_40_float = var_41_int;
	var_38_int = var_41_int % 24;
}


void func_1286(void)
{
	object var_19_object;
	@GetSceneByName(var_19_object, "warehouse_rubin");
	@Trigger(var_19_object, "rubin");
	func_603("warehouse_rubin@door1", false);
	@GetSceneByName(var_19_object, "cot_eva");
	@Trigger(var_19_object, "danko");
	func_603("cot_eva@door1", false);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1032(int var_165_int)
{
	@SetVariable("game_final", var_165_int);
}


void func_652(void)
{
	object var_168_object;
	@CreateDiaryEntry(var_168_object, 729, 1, 539359);
	bool var_172_bool; object var_173_object;
	var_168_object = var_173_object;
	func_691(var_172_bool, var_173_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1037(int var_68_int)
{
	int var_70_int;
	@GetVariable("game_final", var_70_int);
	var_70_int = var_68_int;
}


void func_527(void)
{
	@SetVariable("k12q01", -1);
	func_543();
}


void func_914(bool var_93_bool)
{
	object var_98_object; int var_101_int;
	@CreateIntVector(var_98_object);
	object var_102_object;
	var_98_object = var_102_object;
	func_791(var_102_object, false, -1);
	int var_99_int;
	var_98_object->size(var_99_int);
	int var_100_int = 0;
	
	while(var_100_int < var_99_int) {
		var_98_object->get(var_101_int, var_100_int);
		bool var_118_bool = true;
		bool var_119_bool; int var_120_int;
		var_101_int = var_120_int;
		func_866(var_119_bool, var_120_int);
		if(var_119_bool != 1) {
			bool var_121_bool; int var_122_int;
			var_101_int = var_122_int;
			func_856(var_121_bool, var_122_int);
			if(var_121_bool != 1)
				var_118_bool = false;
		}
		if(var_118_bool != 0)
			var_93_bool = false;
		var_100_int += 1;
	}
	
	var_93_bool = true;
}
EMIT "Stack[-4] = 0";


void func_1043(void)
{
	int var_44_int; int var_45_int; int var_46_int; bool var_47_bool; bool var_48_bool;
	func_725();
	int var_67_int;
	func_719(var_67_int);
	int var_40_int;
	var_67_int = var_40_int;
	int var_68_int;
	func_1037(var_68_int);
	int var_41_int;
	var_68_int = var_41_int;
	bool var_42_bool = false;
	bool var_43_bool = false;
	if(var_40_int == 0) {
		@GetVariable("d12q01ChildsAreVisited", var_44_int);
		var_42_bool = var_44_int != 0;
		@GetVariable("d12q01TheaterIsVisited", var_44_int);
		var_43_bool = var_44_int != 0;
	} else {
						if(var_40_int == 1) {
							@GetVariable("b12q01ChildsAreVisited", var_45_int);
							var_42_bool = var_45_int != 0;
							@GetVariable("b12q01TheaterIsVisited", var_45_int);
							var_43_bool = var_45_int != 0;
						}
						goto Label_1266;
	}
	for(;;) {
		var_47_bool = false;
		bool var_78_bool = false;
		if(var_40_int == 0) {
			if(var_41_int == 2)
				var_78_bool = true;
		}
		if(var_78_bool != 0)
			var_47_bool = true;
		bool var_83_bool = false;
		if(var_40_int == 1) {
			if(var_41_int == 1)
				var_83_bool = true;
		}
		if(var_83_bool != 0)
			var_47_bool = true;
		bool var_88_bool = false;
		if(var_40_int == 2) {
			if(var_41_int == 3)
				var_88_bool = true;
		}
		if(var_88_bool != 0)
			var_47_bool = true;
		var_48_bool = false;
		bool var_93_bool = false;
		bool var_94_bool = false;
		if(var_41_int == 4) {
			if(!var_42_bool) //@nz
				var_94_bool = true;
		}
		if(var_94_bool != 0) {
			if(!var_43_bool) //@nz
				var_93_bool = true;
		}
		if(var_93_bool != 0)
			var_48_bool = true;
		bool var_99_bool = false;
		bool var_100_bool = false;
		if(!var_47_bool) { //@nz
			if(var_42_bool != 0)
				var_100_bool = true;
		}
		if(var_100_bool != 0) {
			if(!var_43_bool) //@nz
				var_99_bool = true;
		}
		if(var_99_bool != 0)
			var_48_bool = true;
		bool var_104_bool = false;
		bool var_105_bool = false;
		if(var_47_bool != 0) {
			if(var_42_bool != 0)
				var_105_bool = true;
		}
		if(var_105_bool != 0) {
			if(var_43_bool != 0)
				var_104_bool = true;
		}
		if(var_104_bool != 0)
			var_48_bool = true;
		@Trace("PlayFinalMovie");
		int var_110_int;
		func_1037(var_110_int);
		if(var_110_int == 1) {
			@Trace("fin_termit");
			if(!var_47_bool) //@nz
				@UnlockAchievement("ACHIEVEMENT_HELLO_2");
			if(var_48_bool != 0)
				@GameOver("gameover_termit_chudo.xml");
			else
				@GameOver("gameover_termit.xml");
				int var_119_int;
				func_1037(var_119_int);
				if(var_119_int == 2) {
					@Trace("fin_utop");
					if(!var_47_bool) //@nz
						@UnlockAchievement("ACHIEVEMENT_HELLO_2");
					if(var_48_bool != 0)
						@GameOver("gameover_utopist_chudo.xml");
					else
						@GameOver("gameover_utopist.xml");
				int var_128_int;
				func_1037(var_128_int);
				if(var_128_int == 3) {
					@Trace("fin_smiren");
					if(!var_47_bool) //@nz
						@UnlockAchievement("ACHIEVEMENT_HELLO_2");
					if(var_48_bool != 0)
						@GameOver("gameover_smirennik_chudo.xml");
					else
						@GameOver("gameover_smirennik.xml");
					@Trace("fin_beda");
					if(var_48_bool != 0) {
						@GameOver("gameover_beda_chudo.xml");
						goto Label_1266;
					}
					@GameOver("gameover_beda.xml");

					}
			}
					} else if(var_40_int == 2) {
		@GetVariable("k12q01ChildsAreVisited", var_46_int);
		var_42_bool = var_46_int != 0;
		@GetVariable("k12q01TheaterIsVisited", var_46_int);
		var_43_bool = var_46_int != 0;
					}
	Label_1266:
		for(;;) {

		}

	}
	
}


// @pe
void func_791(object var_102_object, bool var_103_bool, int var_104_int)
{
	var_102_object->add(6);
	var_102_object->add(26);
	var_102_object->add(2);
	var_102_object->add(22);
	if(var_103_bool == false) {
		var_102_object->add(15);
		var_102_object->add(5);
		var_102_object->add(16);
	} else if(var_104_int != 0) {
		var_102_object->add(15);
	}
	
}


void func_535(void)
{
	@SetVariable("k12q01", 1000);
	func_543();
}


void func_665(void)
{
	object var_191_object;
	@CreateDiaryEntry(var_191_object, 735, 1, 539365);
	bool var_195_bool; object var_196_object;
	var_191_object = var_196_object;
	func_691(var_195_bool, var_196_object, 729);
}
EMIT "Stack[-1] = 0";


void func_543(void)
{
	object var_320_object;
	func_550(var_320_object);
	@RemoveActor(var_320_object);
}


void func_550(object var_320_object)
{
	object var_322_object;
	@self(var_322_object);
	var_322_object = var_320_object;
}
EMIT "Stack[-1] = 0";


void func_678(object var_181_object)
{
	object var_183_object;
	@GetDiaryRoot(var_183_object);
	if(!var_183_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_181_object = false;
	}
	var_183_object = var_181_object;
}
EMIT "Stack[-1] = 0";


void func_556(object var_44_object, string var_45_string)
{
	object var_48_object;
	@GetMainOutdoorScene(var_48_object);
	object var_49_object;
	@AddBlankActor(var_49_object, var_48_object, var_45_string, (var_45_string + ".bin"));
	var_49_object = var_44_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_691(bool var_172_bool, object var_173_object, int var_174_int)
{
	object var_181_object;
	func_678(var_181_object);
	object var_178_object;
	var_181_object = var_178_object;
	object var_179_object;
	var_178_object->Find(var_174_int, var_179_object);
	if(!var_179_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_174_int);
		var_172_bool = false;
	}
	var_179_object->AddChild(var_173_object);
	@SendWorldWndMessage(7);
	int var_180_int;
	var_173_object->GetCategory(var_180_int);
	@SetDiarySection(var_180_int);
	var_172_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_567(object var_55_object, object var_56_object, string var_57_string, string var_58_string, string var_59_string)
{
	bool var_64_bool; cvector var_65_cvector; cvector var_66_cvector;
	var_56_object->GetLocator(var_57_string, var_64_bool, var_65_cvector, var_66_cvector);
	if(!var_64_bool) //@nz
		@Trace(("Locator " + var_57_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_58_string, var_56_object, var_65_cvector, var_66_cvector, var_59_string);
	object var_67_object = var_55_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_824(object var_57_object, bool var_58_bool)
{
	var_57_object->add(7);
	var_57_object->add(23);
	var_57_object->add(21);
	var_57_object->add(9);
	var_57_object->add(3);
	var_57_object->add(1);
	var_57_object->add(11);
	var_57_object->add(13);
	if(var_58_bool == false)
		var_57_object->add(25);
}


void func_952(bool var_48_bool)
{
	object var_53_object; int var_56_int;
	@CreateIntVector(var_53_object);
	object var_57_object;
	var_53_object = var_57_object;
	func_824(false, -1);
	int var_54_int;
	var_53_object->size(var_54_int);
	int var_55_int = 0;
	
	while(var_55_int < var_54_int) {
		var_53_object->get(var_56_int, var_55_int);
		bool var_72_bool = true;
		bool var_73_bool; int var_74_int;
		var_56_int = var_74_int;
		func_866(var_73_bool, var_74_int);
		if(var_73_bool != 1) {
			bool var_82_bool; int var_83_int;
			var_56_int = var_83_int;
			func_856(var_82_bool, var_83_int);
			if(var_82_bool != 1)
				var_72_bool = false;
		}
		if(var_72_bool != 0)
			var_48_bool = false;
		var_55_int += 1;
	}
	
	var_48_bool = true;
}
EMIT "Stack[-4] = 0";


void func_585(object var_198_object, object var_199_object, string var_200_string, string var_201_string, string var_202_string)
{
	bool var_207_bool; cvector var_208_cvector; cvector var_209_cvector;
	var_199_object->GetLocator(var_200_string, var_207_bool, var_208_cvector, var_209_cvector);
	if(!var_207_bool) //@nz
		@Trace(("Locator " + var_200_string) + " doesn't exist");
	else
		var_199_object->AddStationaryActor(Obj(), var_208_cvector, var_209_cvector, var_201_string, var_202_string);
	object var_210_object = var_198_object;
	
}
EMIT "Stack[-1] = 0";


void func_719(int var_49_int)
{
	int var_51_int;
	@GetVariable("branch", var_51_int);
	var_51_int = var_49_int;
}


void func_725(void)
{
	int var_49_int;
	func_719(var_49_int);
	if(var_49_int == 1) {
		@SetRegistryData("BurahCompleted", 1);
	} else {
			int var_57_int;
			func_719(var_57_int);
			if(!(var_57_int == 0)) goto Label_747;
			@SetRegistryData("DankoCompleted", 1);
	}
Label_757:
	for(;;) {
		return 0;

	}
	
Label_747:
	int var_62_int;
	func_719(var_62_int);
	if(!(var_62_int == 2)) goto Label_757;
	@SetRegistryData("KlaraCompleted", 1);
}


void func_856(bool var_82_bool, int var_83_int)
{
	int var_85_int;
	@GetVariable(("vol_" + var_83_int), var_85_int);
	var_82_bool = (var_85_int & 4) != 0;
}


void func_603(string var_22_string, bool var_23_bool)
{
	object var_25_object;
	@FindActor(var_25_object, var_22_string);
	if(!var_25_object) //@nz
		@Trace(("Door " + var_22_string) + " not found");
	else
		var_25_object->SetProperty("locked", var_23_bool);
	
}
EMIT "Stack[-1] = 0";


void func_990(bool var_45_bool)
{
	int var_47_int = 0;
	bool var_48_bool;
	func_952(var_48_bool);
	if(var_48_bool != 0)
		var_47_int += 1;
	bool var_93_bool;
	func_914(var_93_bool);
	if(var_93_bool != 0)
		var_47_int += 1;
	bool var_125_bool;
	func_876(var_125_bool);
	if(var_125_bool != 0)
		var_47_int += 1;
	var_45_bool = var_47_int >= 2;
}


void func_866(bool var_73_bool, int var_74_int)
{
	int var_76_int;
	@GetVariable(("vol_" + var_74_int), var_76_int);
	var_73_bool = (var_76_int & 16) != 0;
}


void func_620(bool var_158_bool, string var_159_string, string var_160_string, string var_161_string)
{
	object var_163_object;
	@FindActor(var_163_object, var_159_string);
	if(var_163_object == null)
		var_158_bool = false;
	@Trigger(var_163_object, var_160_string, var_161_string);
	var_158_bool = true;
}
EMIT "Stack[-1] = 0";


void func_876(bool var_125_bool)
{
	object var_130_object; int var_133_int;
	@CreateIntVector(var_130_object);
	object var_134_object;
	var_130_object = var_134_object;
	func_758(var_134_object, false, -1);
	int var_131_int;
	var_130_object->size(var_131_int);
	int var_132_int = 0;
	
	while(var_132_int < var_131_int) {
		var_130_object->get(var_133_int, var_132_int);
		bool var_150_bool = true;
		bool var_151_bool; int var_152_int;
		var_133_int = var_152_int;
		func_866(var_151_bool, var_152_int);
		if(var_151_bool != 1) {
			bool var_153_bool; int var_154_int;
			var_133_int = var_154_int;
			func_856(var_153_bool, var_154_int);
			if(var_153_bool != 1)
				var_150_bool = false;
		}
		if(var_150_bool != 0)
			var_125_bool = false;
		var_132_int += 1;
	}
	
	var_125_bool = true;
}
EMIT "Stack[-4] = 0";


void func_1267(bool var_83_bool)
{
	int var_85_int;
	@GetVariable("k12q01BurahInSobor", var_85_int);
	var_83_bool = var_85_int != 0;
}


void func_1013(bool var_198_bool)
{
	var_198_bool = false;
	bool var_199_bool = false;
	bool var_200_bool;
	func_952(var_200_bool);
	if(var_200_bool != 0) {
		bool var_244_bool;
		func_914(var_244_bool);
		if(var_244_bool != 0)
			var_199_bool = true;
	}
	if(var_199_bool != 0) {
		bool var_275_bool;
		func_876(var_275_bool);
		if(var_275_bool != 0)
			var_198_bool = true;
	}
}


// @pe
void func_758(object var_134_object, bool var_135_bool, int var_136_int)
{
	var_134_object->add(18);
	var_134_object->add(24);
	var_134_object->add(20);
	var_134_object->add(14);
	if(var_135_bool == false) {
		var_134_object->add(10);
		var_134_object->add(17);
		var_134_object->add(8);
	} else if(var_136_int != 1) {
		var_134_object->add(10);
	}
	
}


void func_632(bool var_121_bool, string var_122_string)
{
	object var_124_object;
	@FindActor(var_124_object, var_122_string);
	if(!var_124_object) //@nz
		var_121_bool = false;
	@RemoveActor(var_124_object);
	var_121_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1274(bool var_93_bool)
{
	int var_95_int;
	@GetVariable("k12q01DankoInSobor", var_95_int);
	var_93_bool = var_95_int != 0;
}


