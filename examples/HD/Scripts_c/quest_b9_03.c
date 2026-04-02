// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, bool var_7_bool, bool var_8_bool)
	{
		var_7_bool = false;
		var_8_bool = false;
		object var_13_object;
		func_488(var_13_object);
		var_1_object = var_13_object;
		object var_16_object;
		func_488(var_16_object);
		var_2_object = var_16_object;
		object var_11_object;
		@GetSceneByName(var_11_object, "sobor");
		@Trigger(var_11_object, "noaglaja");
		@GetSceneByName(var_11_object, "cot_kapella");
		object var_12_object;
		@GetActiveScene(var_12_object);
		if(var_12_object == var_11_object) {
			@SetVariable("b9q03BadInit", 1);
		} else {
			object var_79_object; object var_80_object;
			var_11_object = var_80_object;
			func_494(var_79_object, var_80_object, "pt_b9q03_aglaja", "NPC_Aglaja", "b9q03_aglaja.xml");
			var_0_object = var_79_object;
		}
		func_458(9);
	
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, bool var_7_bool, bool var_8_bool, string var_9_string)
	{
		object var_16_object; int var_17_int; object var_18_object; object var_19_object; int var_20_int; object var_21_object;
		@Trace(var_9_string);
		if(var_9_string == "init_house_spi4ka") {
			@GetSceneByName(var_16_object, "house_spi4ka");
			@Trigger(var_16_object, "nospi4ka");
			object var_26_object; object var_27_object;
			var_16_object = var_27_object;
			func_494(var_26_object, var_27_object, "pt_b9q03_doberman1", "pers_doberman", "b9q03_doberman.xml");
			var_1_object->add(var_26_object); //@t
			object var_44_object; object var_45_object;
			var_16_object = var_45_object;
			func_494(var_44_object, var_45_object, "pt_b9q03_doberman2", "pers_doberman", "b9q03_doberman.xml");
			var_1_object->add(var_44_object); //@t
			if(var_0_object != 0)
				@Trigger(var_0_object, "cleanup");
			@GetSceneByName(var_16_object, "sobor");
			@Trigger(var_16_object, "aglaja");
			var_16_object = null;
		} else if(var_9_string == "doberman_attack") {
				func_529(var_1_object, "attack");
				func_512("ihouse_spi4ka@door1", true);
				func_512("ihouse_spi4ka@door2", true);
				@PlaySound("door_close");
		}
	Label_359:
		for(;;) {
			return 12;

		}
	
		if(var_9_string == "doberman_dead") {
			var_1_object->size(var_17_int); //@t
			if(var_17_int == (var_6_int + 1)) {
				func_512("ihouse_spi4ka@door1", false);
				func_512("ihouse_spi4ka@door2", false);
				@PlaySound("door_open");
			}
			goto Label_359;
		}
		if(var_9_string == "place_follower") {
			if(var_7_bool != 0) {
				var_7_bool = true;
				@GetMainOutdoorScene(var_18_object);
				object var_92_object; object var_93_object;
				var_18_object = var_93_object;
				func_494(var_92_object, var_93_object, "pt_b9q03_follower", "pers_boy", "b9q03_follower.xml");
				var_3_object = var_92_object;
				var_18_object = null;
				goto Label_359;
			}
			return 12;
		}
		if(var_9_string == "init_bonefires") {
			if(var_8_bool != 0) {
				var_8_bool = true;
				@GetMainOutdoorScene(var_19_object);
				object var_100_object; object var_101_object;
				var_19_object = var_101_object;
				func_494(var_100_object, var_101_object, "pt_b9q03_b1_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
				var_2_object->add(var_100_object); //@t
				object var_105_object; object var_106_object;
				var_19_object = var_106_object;
				func_494(var_105_object, var_106_object, "pt_b9q03_b1_morlok1", "pers_morlok", "b9q03_e_morlok.xml");
				var_2_object->add(var_105_object); //@t
				object var_110_object; object var_111_object;
				var_19_object = var_111_object;
				func_494(var_110_object, var_111_object, "pt_b9q03_b1_morlok2", "pers_morlok", "b9q03_e_morlok.xml");
				var_2_object->add(var_110_object); //@t
				object var_115_object; object var_116_object;
				var_19_object = var_116_object;
				func_494(var_115_object, var_116_object, "pt_b9q03_b2_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
				var_2_object->add(var_115_object); //@t
				object var_120_object; object var_121_object;
				var_19_object = var_121_object;
				func_494(var_120_object, var_121_object, "pt_b9q03_b2_grabitel1", "pers_grabitel", "b9q03_e_grabitel.xml");
				var_2_object->add(var_120_object); //@t
				object var_125_object; object var_126_object;
				var_19_object = var_126_object;
				func_494(var_125_object, var_126_object, "pt_b9q03_b2_grabitel2", "pers_grabitel", "b9q03_e_grabitel.xml");
				var_2_object->add(var_125_object); //@t
				object var_130_object; object var_131_object;
				var_19_object = var_131_object;
				func_494(var_130_object, var_131_object, "pt_b9q03_b3_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
				var_2_object->add(var_130_object); //@t
				object var_135_object; object var_136_object;
				var_19_object = var_136_object;
				func_494(var_135_object, var_136_object, "pt_b9q03_b3_wastedmale1", "pers_wasted_male", "b9q03_e_wasted_male.xml");
				var_2_object->add(var_135_object); //@t
				object var_140_object; object var_141_object;
				var_19_object = var_141_object;
				func_494(var_140_object, var_141_object, "pt_b9q03_b3_hunter1", "pers_hunter", "b9q03_e_hunter.xml");
				var_2_object->add(var_140_object); //@t
				object var_145_object; object var_146_object;
				var_19_object = var_146_object;
				func_494(var_145_object, var_146_object, "pt_b9q03_b4_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
				var_2_object->add(var_145_object); //@t
				object var_150_object; object var_151_object;
				var_19_object = var_151_object;
				func_494(var_150_object, var_151_object, "pt_b9q03_b4_doberman2", "pers_doberman", "b9q03_e_doberman.xml");
				var_2_object->add(var_150_object); //@t
				object var_155_object; object var_156_object;
				var_19_object = var_156_object;
				func_494(var_155_object, var_156_object, "pt_b9q03_b4_doberman3", "pers_doberman", "b9q03_e_doberman.xml");
				var_2_object->add(var_155_object); //@t
				var_19_object = null;
				goto Label_359;
			}
			return 12;
		}
		if(var_9_string == "bonfire_burn") {
			@GetVariable("b9q03BonefiresCount", var_20_int);
			if(var_20_int == 0) {
				func_574();
			} else if(var_20_int == 1) {
					func_561();
			}

			for(;;) {
				var_20_int += 1;
				@SetVariable("b9q03BonefiresCount", var_20_int);
				goto Label_359;

			}

			if(var_20_int == 2) {
				func_548();
			} else if(var_20_int == 3) {
				func_587();
				@GetMainOutdoorScene(var_21_object);
				object var_220_object; object var_221_object;
				func_494(var_220_object, var_221_object, "pt_b9q03_girl", "pers_girl", "b9q03_girl.xml");
				var_5_object = var_220_object;
				@GetSceneByName(var_221_object, "cot_kapella");
				object var_226_object; object var_227_object;
				var_21_object = var_227_object;
				func_494(var_226_object, var_227_object, "pt_b9q03_spi4ka", "NPC_Spi4ka", "b9q03_spi4ka.xml");
				var_4_object = var_226_object;
				func_512("house_spi4ka@door1", true);
				func_512("house_spi4ka@door2", true);
				if(var_3_object != 0)
					@Trigger(var_3_object, "cleanup");
			}
			var_21_object = null;
		}
		if(var_9_string == "fail") {
			func_371();
		} else if(var_9_string == "completed") {
			func_379();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, bool var_7_bool, bool var_8_bool, int var_9_int, float var_10_float)
	{
		func_360();
	}

}


void func_512(string var_57_string, bool var_58_bool)
{
	object var_60_object;
	@FindActor(var_60_object, var_57_string);
	if(!var_60_object) //@nz
		@Trace(("Door " + var_57_string) + " not found");
	else
		var_60_object->SetProperty("locked", var_58_bool);
	
}
EMIT "Stack[-1] = 0";


void func_387(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
{
	object var_30_object;
	@GetSceneByName(var_30_object, "sobor");
	@Trigger(var_30_object, "aglaja");
	@GetSceneByName(var_30_object, "house_spi4ka");
	@Trigger(var_30_object, "spi4ka");
	func_529(var_1_object, "cleanup");
	func_529(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	func_512("ihouse_spi4ka@door1", false);
	func_512("ihouse_spi4ka@door2", false);
	func_512("house_spi4ka@door1", false);
	func_512("house_spi4ka@door2", false);
	object var_73_object;
	func_482(var_73_object);
	@RemoveActor(var_73_object);
}
EMIT "Stack[-1] = 0";


void func_458(int var_23_int)
{
	float var_24_float; float var_25_float;
	@GetGameTime(var_25_float);
	if(var_25_float >= (var_23_int * 24)) {
		func_387(var_10_object, var_11_object, var_12_object, var_23_int, var_24_float, var_25_float);
	} else {
		@SetTimeEvent(0, (var_23_int * 24));
		@Hold();
	}
	
}


void func_587(void)
{
	object var_213_object;
	@CreateDiaryEntry(var_213_object, 539, 2, 530351);
	bool var_217_bool; object var_218_object;
	var_213_object = var_218_object;
	func_613(var_217_bool, var_218_object, 532);
}
EMIT "Stack[-1] = 0";


void func_529(object var_35_object, string var_36_string)
{
	int var_40_int; int var_41_int; object var_42_object;
	if(var_35_object != 0) {
		var_35_object->size(var_40_int);
		var_41_int = 0;

		for(;;) {
			if(!(var_41_int < var_40_int)) goto Label_547;
			var_35_object->get(var_42_object, var_41_int);
			if(var_42_object != 0)
				@Trigger(var_42_object, var_36_string);
			var_42_object = null;
			var_41_int += 1;
		}
	}
Label_547:
}


void func_600(object var_179_object)
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


void func_482(object var_73_object)
{
	object var_75_object;
	@self(var_75_object);
	var_75_object = var_73_object;
}
EMIT "Stack[-1] = 0";


void func_548(void)
{
	object var_203_object;
	@CreateDiaryEntry(var_203_object, 538, 2, 530350);
	bool var_207_bool; object var_208_object;
	var_203_object = var_208_object;
	func_613(var_207_bool, var_208_object, 532);
}
EMIT "Stack[-1] = 0";


void func_613(bool var_170_bool, object var_171_object, int var_172_int)
{
	object var_179_object;
	func_600(var_179_object);
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


void func_488(object var_13_object)
{
	object var_15_object;
	@CreateObjectVector(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_360(void)
{
	int var_12_int;
	@GetVariable("b9q03", var_12_int);
	if(var_12_int != 1000)
		func_371();
}


void func_494(object var_79_object, object var_80_object, string var_81_string, string var_82_string, string var_83_string)
{
	bool var_88_bool; cvector var_89_cvector; cvector var_90_cvector;
	var_80_object->GetLocator(var_81_string, var_88_bool, var_89_cvector, var_90_cvector);
	if(!var_88_bool) //@nz
		@Trace(("Locator " + var_81_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_82_string, var_80_object, var_89_cvector, var_90_cvector, var_83_string);
	object var_91_object = var_79_object;
	
}
EMIT "Stack[-1] = 0";


void func_561(void)
{
	object var_193_object;
	@CreateDiaryEntry(var_193_object, 537, 2, 530349);
	bool var_197_bool; object var_198_object;
	var_193_object = var_198_object;
	func_613(var_197_bool, var_198_object, 532);
}
EMIT "Stack[-1] = 0";


void func_371(void)
{
	@SetVariable("b9q03", -1);
	func_387(var_7_bool, var_8_bool, var_9_int, var_10_float, var_11_int, var_12_int);
}


void func_379(void)
{
	@SetVariable("b9q03", 1000);
	func_387(var_16_object, var_17_int, var_18_object, var_19_object, var_20_int, var_21_object);
}


void func_574(void)
{
	object var_166_object;
	@CreateDiaryEntry(var_166_object, 536, 2, 530348);
	bool var_170_bool; object var_171_object;
	var_166_object = var_171_object;
	func_613(var_170_bool, var_171_object, 532);
}
EMIT "Stack[-1] = 0";


