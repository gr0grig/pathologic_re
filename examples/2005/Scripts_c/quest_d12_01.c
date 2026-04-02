// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object)
	{
		var_1_bool = false;
		var_0_bool = false;
		var_2_bool = false;
		var_3_bool = false;
		func_1306();
		@SetTimeEvent(0, 288);
		int var_36_int;
		func_676(var_36_int);
		if(var_36_int >= 8) {
			bool var_43_bool;
			func_1025(var_43_bool);
			if(var_43_bool != 0) {
				bool var_157_bool;
				func_652(var_157_bool, "volonteers_danko", "childs_letter", "");
			}
		} else {
				@SetTimeEvent(1, 272);
		}
		func_1067(0);
		func_684();
		func_697();
		object var_18_object;
		@GetMainOutdoorScene(var_18_object);
		object var_197_object; object var_198_object;
		func_617(var_197_object, var_198_object, "pt_b12q01_birdmask_s", "pers_birdmask", "d12q01_birdmask_s.xml");
		var_4_object = var_197_object;
		@GetSceneByName(var_198_object, "termitnik2");
		object var_216_object; object var_217_object;
		func_599(var_216_object, var_217_object, "pt_b12q01_klara", "NPC_Klara", "d12q01_klara_t2.xml");
		var_9_object = var_216_object;
		@GetSceneByName(var_217_object, "factory");
		object var_235_object; object var_236_object;
		var_18_object = var_236_object;
		func_599(var_235_object, var_236_object, "pt_d12q01_burah", "NPC_Burah", "d12q01_burah_factory.xml");
		var_11_object = var_235_object;
		func_635("sobor@door1", true);
		func_635("hidden_room@door1", true);
		func_635("mnogogrannik@door1", true);
		func_635("cot_eva@door1", false);
		func_635("termitnik2@door1", false);
		func_635("uprava_admin@door1", false);
		float var_19_float;
		@GetGameTime(var_19_float);
		if(var_19_float < 271) {
			@SetTimeEvent(2, 271);
			func_635("theater@door1", false);
		} else {
			func_0(var_19_float);

		}
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-2] = 0";

	void OnGameTime(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, int var_16_int, float var_17_float)
	{
		float var_19_float;
		disable OnTrigger;
		disable OnGameTime;
		if(var_16_int == 0) {
			@Trace("final 0");
			bool var_23_bool = true;
			if(var_3_bool != 1) {
				bool var_25_bool;
				func_1301(var_25_bool);
				var_28_bool = !var_25_bool; //@nz
				if(var_28_bool != 1)
					var_23_bool = false;
			}
			if(var_23_bool != 0) {
				@Trace("final 1 locked: " + var_3_bool);
				@GetGameTime(var_19_float);
				var_19_float += 0.008333334;
				@SetTimeEvent(0, var_19_float);
				enable OnTrigger;
				enable OnGameTime;
				return 2;
			}
			func_1078();
		} else if(var_16_int == 1) {
				bool var_151_bool;
				func_1025(var_151_bool);
				if(var_151_bool != 0) {
					bool var_265_bool;
					func_652(var_265_bool, "volonteers_danko", "childs_letter", "");
				}
				enable OnTrigger;
				enable OnGameTime;
		}
	Label_208:
		for(;;) {
			return 2;

		}
	
		if(!(var_16_int == 2)) goto Label_208;
		func_0(var_19_float);
		enable OnTrigger;
		enable OnGameTime;
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string)
	{
		object var_22_object; object var_23_object; object var_24_object; object var_25_object; int var_26_int;
		@Trace(var_16_string);
		if(var_16_string == "init_sobor") {
			@GetSceneByName(var_22_object, "sobor");
			@Trigger(var_22_object, "noaglaja");
			if(var_9_object != 0)
				@Trigger(var_9_object, "cleanup");
			if(var_11_object != 0)
				@Trigger(var_11_object, "cleanup");
			func_635("isobor@door1", true);
			func_635("sobor@door1", false);
			var_1_bool = true;
			var_22_object = null;
		} else if(var_16_string == "sobor_load") {
				if(var_1_bool != 0) {
					var_3_bool = true;
					object var_50_object;
					func_588(var_50_object, "quest_d12_01_sobor_cutscene");
				}
		}
	Label_558:
		for(;;) {

		}
	
		if(var_16_string == "sobor_cutscene_end") {
			@GetSceneByName(var_23_object, "sobor");
			object var_61_object; object var_62_object;
			var_23_object = var_62_object;
			func_599(var_61_object, var_62_object, "pt_b12q01_block", "NPC_Block", "d12q01_Block.xml");
			var_5_object = var_61_object;
			object var_79_object; object var_80_object;
			var_23_object = var_80_object;
			func_599(var_79_object, var_80_object, "pt_b12q01_aglaja", "NPC_Aglaja", "d12q01_Aglaja.xml");
			var_6_object = var_79_object;
			object var_84_object; object var_85_object;
			var_23_object = var_85_object;
			func_599(var_84_object, var_85_object, "pt_b12q01_kapella", "NPC_Maria", "d12q01_maria.xml");
			var_7_object = var_84_object;
			bool var_89_bool;
			func_1287(var_89_bool);
			if(var_89_bool != 0) {
				object var_94_object; object var_95_object;
				var_23_object = var_95_object;
				func_599(var_94_object, var_95_object, "pt_b12q01_klara", "NPC_Klara", "d12q01_Klara.xml");
				var_8_object = var_94_object;
			}
			bool var_99_bool;
			func_1294(var_99_bool);
			if(var_99_bool != 0) {
				object var_104_object; object var_105_object;
				var_23_object = var_105_object;
				func_599(var_104_object, var_105_object, "pt_d12q01_burah", "NPC_Burah", "d12q01_Burah.xml");
				var_10_object = var_104_object;
			}
			var_23_object = null;
		} else if(var_16_string == "sobor_unload") {
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
				func_635("sobor@door1", true);
				var_3_bool = false;
			}
		} else if(var_16_string == "init_theater") {
			bool var_127_bool;
			func_664(var_127_bool, "NPC_Mark");
			func_635("itheater@door1", true);
			func_635("theater@door1", false);
			var_0_bool = true;
		} else if(var_16_string == "theater_load") {
			if(var_0_bool != 0) {
				var_3_bool = true;
				object var_139_object;
				func_588(var_139_object, "quest_d12_01_theater_cutscene");
				@SetVariable("d12q01TheaterIsVisited", 1);
			}
		} else if(var_16_string == "theater_cutscene_end") {
			@GetSceneByName(var_24_object, "theater");
			object var_146_object; object var_147_object;
			var_24_object = var_147_object;
			func_599(var_146_object, var_147_object, "pt_b12q01_birdmask", "pers_birdmask", "d12q01_tbirdmask.xml");
			var_12_object = var_146_object;
			object var_151_object; object var_152_object;
			var_24_object = var_152_object;
			func_599(var_151_object, var_152_object, "pt_b12q01_whitemask", "pers_whitemask", "d12q01_twhitemask.xml");
			var_13_object = var_151_object;
			var_24_object = null;
		} else if(var_16_string == "theater_unload") {
			if(var_0_bool != 0) {
				if(var_12_object != 0)
					@Trigger(var_12_object, "cleanup");
				if(var_13_object != 0)
					@Trigger(var_13_object, "cleanup");
				func_635("theater@door1", true);
				var_3_bool = false;
			}
		} else if(var_16_string == "init_hidden_room") {
			func_635("mnogogrannik_han@door1", false);
			func_635("mnogogrannik_han@door2", false);
			func_635("hidden_room@door1", false);
			func_635("imnogogrannik_han@door1", false);
			func_635("mnogogrannik@door1", false);
			var_2_bool = true;
		} else if(var_16_string == "hidden_room_load") {
			if(var_2_bool != 0) {
				var_3_bool = true;
				@SetVariable("d12q01ChildsAreVisited", 1);
				object var_182_object;
				func_588(var_182_object, "quest_d12_01_hidden_room_cutscene");
			}
		} else if(var_16_string == "hidden_room_cutscene_end") {
			@GetSceneByName(var_25_object, "hidden_room");
			object var_187_object; object var_188_object;
			var_25_object = var_188_object;
			func_599(var_187_object, var_188_object, "pt_girl", "pers_littlegirl2", "d12q01_littlegirl.xml");
			var_14_object = var_187_object;
			object var_192_object; object var_193_object;
			var_25_object = var_193_object;
			func_599(var_192_object, var_193_object, "pt_boy", "pers_littleboy2", "d12q01_littleboy.xml");
			var_15_object = var_192_object;
			var_25_object = null;
		} else if(var_16_string == "hidden_room_unload") {
			if(var_2_bool != 0) {
				func_635("hidden_room@door1", true);
				func_635("mnogogrannik@door1", true);
				var_3_bool = false;
				bool var_204_bool;
				func_1048(var_204_bool);
				if(var_204_bool != 0) {
					bool var_313_bool;
					func_652(var_313_bool, "volonteers_danko", "theater_letter", "");
				}
			}
		}
		if(var_16_string == "cleanup") {
			@GetVariable("d12q01", var_26_int);
			if(var_26_int != 1000)
				func_559();
			else
				func_575();
			if(var_16_string == "fail") {
				func_559();
			} else if(var_16_string == "completed") {
				func_567();
			}
		}
		goto Label_558;
	
	}

}


void func_0(object var_12_object)
{
	object var_259_object;
	@GetMainOutdoorScene(var_259_object);
	func_635("theater@door1", true);
	object var_262_object; object var_263_object;
	var_259_object = var_263_object;
	func_617(var_262_object, var_263_object, "pt_b12q01_birdmask_t", "pers_birdmask", "d12q01_birdmask_t.xml");
	var_12_object = var_262_object;
}
EMIT "Stack[-1] = 0";


void func_1025(bool var_43_bool)
{
	int var_45_int = 0;
	bool var_46_bool;
	func_987(var_46_bool);
	if(var_46_bool != 0)
		var_45_int += 1;
	bool var_91_bool;
	func_949(var_91_bool);
	if(var_91_bool != 0)
		var_45_int += 1;
	bool var_124_bool;
	func_911(var_124_bool);
	if(var_124_bool != 0)
		var_45_int += 1;
	var_43_bool = var_45_int >= 2;
}


void func_901(bool var_71_bool, int var_72_int)
{
	int var_74_int;
	@GetVariable(("vol_" + var_72_int), var_74_int);
	var_71_bool = (var_74_int & 16) != 0;
}


void func_1287(bool var_89_bool)
{
	int var_91_int;
	@GetVariable("d12q01KlaraInSobor", var_91_int);
	var_89_bool = var_91_int != 0;
}


void func_652(bool var_157_bool, string var_158_string, string var_159_string, string var_160_string)
{
	object var_162_object;
	@FindActor(var_162_object, var_158_string);
	if(var_162_object == null)
		var_157_bool = false;
	@Trigger(var_162_object, var_159_string, var_160_string);
	var_157_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1294(bool var_99_bool)
{
	int var_101_int;
	@GetVariable("d12q01BurahInSobor", var_101_int);
	var_99_bool = var_101_int != 0;
}


void func_911(bool var_124_bool)
{
	object var_129_object; int var_132_int;
	@CreateIntVector(var_129_object);
	object var_133_object;
	var_129_object = var_133_object;
	func_790(var_133_object, false, -1);
	int var_130_int;
	var_129_object->size(var_130_int);
	int var_131_int = 0;
	
	while(var_131_int < var_130_int) {
		var_129_object->get(var_132_int, var_131_int);
		bool var_149_bool = true;
		bool var_150_bool; int var_151_int;
		var_132_int = var_151_int;
		func_901(var_150_bool, var_151_int);
		if(var_150_bool != 1) {
			bool var_152_bool; int var_153_int;
			var_132_int = var_153_int;
			func_891(var_152_bool, var_153_int);
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


void func_1301(bool var_25_bool)
{
	bool var_27_bool;
	@IsOverrideActive(var_27_bool);
	var_25_bool = !var_27_bool;
}


// @pe
void func_790(object var_133_object, bool var_134_bool, int var_135_int)
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


void func_664(bool var_127_bool, string var_128_string)
{
	object var_130_object;
	@FindActor(var_130_object, var_128_string);
	if(!var_130_object) //@nz
		var_127_bool = false;
	@RemoveActor(var_130_object);
	var_127_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1048(bool var_204_bool)
{
	var_204_bool = false;
	bool var_205_bool = false;
	bool var_206_bool;
	func_987(var_206_bool);
	if(var_206_bool != 0) {
		bool var_250_bool;
		func_949(var_250_bool);
		if(var_250_bool != 0)
			var_205_bool = true;
	}
	if(var_205_bool != 0) {
		bool var_282_bool;
		func_911(var_282_bool);
		if(var_282_bool != 0)
			var_204_bool = true;
	}
}


void func_1306(void)
{
	object var_21_object;
	@GetSceneByName(var_21_object, "warehouse_rubin");
	@Trigger(var_21_object, "rubin");
	func_635("warehouse_rubin@door1", false);
}
EMIT "Stack[-1] = 0";


void func_676(int var_36_int)
{
	float var_38_float;
	@GetGameTime(var_38_float);
	int var_39_int;
	var_38_float = var_39_int;
	var_36_int = var_39_int % 24;
}


// @pe
void func_1067(int var_164_int)
{
	@SetVariable("game_final", var_164_int);
}


void func_684(void)
{
	object var_167_object;
	@CreateDiaryEntry(var_167_object, 699, 1, 535682);
	bool var_171_bool; object var_172_object;
	var_167_object = var_172_object;
	func_723(var_171_bool, var_172_object, -1);
}
EMIT "Stack[-1] = 0";


void func_559(void)
{
	@SetVariable("d12q01", -1);
	func_575();
}


void func_1072(int var_70_int)
{
	int var_72_int;
	@GetVariable("game_final", var_72_int);
	var_72_int = var_70_int;
}


void func_949(bool var_91_bool)
{
	object var_96_object; int var_99_int;
	@CreateIntVector(var_96_object);
	object var_100_object;
	var_96_object = var_100_object;
	func_823(var_100_object, false, -1);
	int var_97_int;
	var_96_object->size(var_97_int);
	int var_98_int = 0;
	
	while(var_98_int < var_97_int) {
		var_96_object->get(var_99_int, var_98_int);
		bool var_117_bool = true;
		bool var_118_bool; int var_119_int;
		var_99_int = var_119_int;
		func_901(var_118_bool, var_119_int);
		if(var_118_bool != 1) {
			bool var_120_bool; int var_121_int;
			var_99_int = var_121_int;
			func_891(var_120_bool, var_121_int);
			if(var_120_bool != 1)
				var_117_bool = false;
		}
		if(var_117_bool != 0)
			var_91_bool = false;
		var_98_int += 1;
	}
	
	var_91_bool = true;
}
EMIT "Stack[-4] = 0";


void func_1078(void)
{
	int var_46_int; int var_47_int; int var_48_int; bool var_49_bool; bool var_50_bool;
	func_757();
	int var_69_int;
	func_751(var_69_int);
	int var_42_int;
	var_69_int = var_42_int;
	int var_70_int;
	func_1072(var_70_int);
	int var_43_int;
	var_70_int = var_43_int;
	bool var_44_bool = false;
	bool var_45_bool = false;
	if(var_42_int == 0) {
		@GetVariable("d12q01ChildsAreVisited", var_46_int);
		var_44_bool = var_46_int != 0;
		@GetVariable("d12q01TheaterIsVisited", var_46_int);
		var_45_bool = var_46_int != 0;
	} else {
						if(var_42_int == 1) {
							@GetVariable("b12q01ChildsAreVisited", var_47_int);
							var_44_bool = var_47_int != 0;
							@GetVariable("b12q01TheaterIsVisited", var_47_int);
							var_45_bool = var_47_int != 0;
						}
						goto Label_1286;
	}
	for(;;) {
		var_49_bool = false;
		bool var_80_bool = false;
		if(var_42_int == 0) {
			if(var_43_int == 2)
				var_80_bool = true;
		}
		if(var_80_bool != 0)
			var_49_bool = true;
		bool var_85_bool = false;
		if(var_42_int == 1) {
			if(var_43_int == 1)
				var_85_bool = true;
		}
		if(var_85_bool != 0)
			var_49_bool = true;
		bool var_90_bool = false;
		if(var_42_int == 2) {
			if(var_43_int == 3)
				var_90_bool = true;
		}
		if(var_90_bool != 0)
			var_49_bool = true;
		var_50_bool = false;
		bool var_95_bool = false;
		bool var_96_bool = false;
		if(var_43_int == 4) {
			if(!var_44_bool) //@nz
				var_96_bool = true;
		}
		if(var_96_bool != 0) {
			if(!var_45_bool) //@nz
				var_95_bool = true;
		}
		if(var_95_bool != 0)
			var_50_bool = true;
		bool var_101_bool = false;
		bool var_102_bool = false;
		if(!var_49_bool) { //@nz
			if(var_44_bool != 0)
				var_102_bool = true;
		}
		if(var_102_bool != 0) {
			if(!var_45_bool) //@nz
				var_101_bool = true;
		}
		if(var_101_bool != 0)
			var_50_bool = true;
		bool var_106_bool = false;
		bool var_107_bool = false;
		if(var_49_bool != 0) {
			if(var_44_bool != 0)
				var_107_bool = true;
		}
		if(var_107_bool != 0) {
			if(var_45_bool != 0)
				var_106_bool = true;
		}
		if(var_106_bool != 0)
			var_50_bool = true;
		@Trace("PlayFinalMovie");
		int var_112_int;
		func_1072(var_112_int);
		if(var_112_int == 1) {
			@Trace("fin_termit");
			if(var_50_bool != 0)
				@GameOver("gameover_termit_chudo.xml");
			else
				@GameOver("gameover_termit.xml");
				int var_119_int;
				func_1072(var_119_int);
				if(var_119_int == 2) {
					@Trace("fin_utop");
					if(var_50_bool != 0)
						@GameOver("gameover_utopist_chudo.xml");
					else
						@GameOver("gameover_utopist.xml");
				int var_126_int;
				func_1072(var_126_int);
				if(var_126_int == 3) {
					@Trace("fin_smiren");
					if(var_50_bool != 0)
						@GameOver("gameover_smirennik_chudo.xml");
					else
						@GameOver("gameover_smirennik.xml");
					@Trace("fin_beda");
					if(var_50_bool != 0) {
						@GameOver("gameover_beda_chudo.xml");
						goto Label_1286;
					}
					@GameOver("gameover_beda.xml");

					}
			}
					} else if(var_42_int == 2) {
		@GetVariable("k12q01ChildsAreVisited", var_48_int);
		var_44_bool = var_48_int != 0;
		@GetVariable("k12q01TheaterIsVisited", var_48_int);
		var_45_bool = var_48_int != 0;
					}
	Label_1286:
		for(;;) {

		}

	}
	
}


void func_567(void)
{
	@SetVariable("d12q01", 1000);
	func_575();
}


// @pe
void func_823(object var_100_object, bool var_101_bool, int var_102_int)
{
	var_100_object->add(6);
	var_100_object->add(26);
	var_100_object->add(2);
	var_100_object->add(22);
	if(var_101_bool == false) {
		var_100_object->add(15);
		var_100_object->add(5);
		var_100_object->add(16);
		var_100_object->add(19);
	} else if(var_102_int != 0) {
		var_100_object->add(15);
	}
	
}


void func_697(void)
{
	object var_190_object;
	@CreateDiaryEntry(var_190_object, 705, 1, 535688);
	bool var_194_bool; object var_195_object;
	var_190_object = var_195_object;
	func_723(var_194_bool, var_195_object, 699);
}
EMIT "Stack[-1] = 0";


void func_575(void)
{
	object var_327_object;
	func_582(var_327_object);
	@RemoveActor(var_327_object);
}


void func_582(object var_327_object)
{
	object var_329_object;
	@self(var_329_object);
	var_329_object = var_327_object;
}
EMIT "Stack[-1] = 0";


void func_710(object var_180_object)
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


void func_588(object var_50_object, string var_51_string)
{
	object var_54_object;
	@GetMainOutdoorScene(var_54_object);
	object var_55_object;
	@AddBlankActor(var_55_object, var_54_object, var_51_string, (var_51_string + ".bin"));
	var_55_object = var_50_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_723(bool var_171_bool, object var_172_object, int var_173_int)
{
	object var_180_object;
	func_710(var_180_object);
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


void func_599(object var_216_object, object var_217_object, string var_218_string, string var_219_string, string var_220_string)
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
void func_859(object var_55_object, bool var_56_bool)
{
	var_55_object->add(7);
	var_55_object->add(23);
	var_55_object->add(21);
	var_55_object->add(9);
	var_55_object->add(3);
	var_55_object->add(1);
	var_55_object->add(11);
	var_55_object->add(13);
	if(var_56_bool == false)
		var_55_object->add(25);
}


void func_987(bool var_46_bool)
{
	object var_51_object; int var_54_int;
	@CreateIntVector(var_51_object);
	object var_55_object;
	var_51_object = var_55_object;
	func_859(false, -1);
	int var_52_int;
	var_51_object->size(var_52_int);
	int var_53_int = 0;
	
	while(var_53_int < var_52_int) {
		var_51_object->get(var_54_int, var_53_int);
		bool var_70_bool = true;
		bool var_71_bool; int var_72_int;
		var_54_int = var_72_int;
		func_901(var_71_bool, var_72_int);
		if(var_71_bool != 1) {
			bool var_80_bool; int var_81_int;
			var_54_int = var_81_int;
			func_891(var_80_bool, var_81_int);
			if(var_80_bool != 1)
				var_70_bool = false;
		}
		if(var_70_bool != 0)
			var_46_bool = false;
		var_53_int += 1;
	}
	
	var_46_bool = true;
}
EMIT "Stack[-4] = 0";


void func_635(string var_24_string, bool var_25_bool)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(!var_27_object) //@nz
		@Trace(("Door " + var_24_string) + " not found");
	else
		var_27_object->SetProperty("locked", var_25_bool);
	
}
EMIT "Stack[-1] = 0";


void func_617(object var_197_object, object var_198_object, string var_199_string, string var_200_string, string var_201_string)
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


void func_751(int var_51_int)
{
	int var_53_int;
	@GetVariable("branch", var_53_int);
	var_53_int = var_51_int;
}


void func_757(void)
{
	int var_51_int;
	func_751(var_51_int);
	if(var_51_int == 1) {
		@SetRegistryData("BurahCompleted", 1);
	} else {
			int var_59_int;
			func_751(var_59_int);
			if(!(var_59_int == 0)) goto Label_779;
			@SetRegistryData("DankoCompleted", 1);
	}
Label_789:
	for(;;) {
		return 0;

	}
	
Label_779:
	int var_64_int;
	func_751(var_64_int);
	if(!(var_64_int == 2)) goto Label_789;
	@SetRegistryData("KlaraCompleted", 1);
}


void func_891(bool var_80_bool, int var_81_int)
{
	int var_83_int;
	@GetVariable(("vol_" + var_81_int), var_83_int);
	var_80_bool = (var_83_int & 4) != 0;
}


