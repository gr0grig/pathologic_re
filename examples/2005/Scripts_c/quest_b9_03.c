// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int)
	{
		object var_11_object;
		func_478(var_11_object);
		var_1_object = var_11_object;
		object var_14_object;
		func_478(var_14_object);
		var_2_object = var_14_object;
		object var_9_object;
		@GetSceneByName(var_9_object, "sobor");
		@Trigger(var_9_object, "noaglaja");
		@GetSceneByName(var_9_object, "cot_kapella");
		object var_10_object;
		@GetActiveScene(var_10_object);
		if(var_10_object == var_9_object) {
			@SetVariable("b9q03BadInit", 1);
		} else {
			object var_77_object; object var_78_object;
			var_9_object = var_78_object;
			func_484(var_77_object, var_78_object, "pt_b9q03_aglaja", "NPC_Aglaja", "b9q03_aglaja.xml");
			var_0_object = var_77_object;
		}
		func_448(9);
	
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, string var_7_string)
	{
		object var_14_object; int var_15_int; object var_16_object; object var_17_object; int var_18_int; object var_19_object;
		@Trace(var_7_string);
		if(var_7_string == "init_house_spi4ka") {
			@GetSceneByName(var_14_object, "house_spi4ka");
			@Trigger(var_14_object, "nospi4ka");
			object var_24_object; object var_25_object;
			var_14_object = var_25_object;
			func_484(var_24_object, var_25_object, "pt_b9q03_doberman1", "pers_doberman", "b9q03_doberman.xml");
			var_1_object->add(var_24_object); //@t
			object var_42_object; object var_43_object;
			var_14_object = var_43_object;
			func_484(var_42_object, var_43_object, "pt_b9q03_doberman2", "pers_doberman", "b9q03_doberman.xml");
			var_1_object->add(var_42_object); //@t
			if(var_0_object != 0)
				@Trigger(var_0_object, "cleanup");
			@GetSceneByName(var_14_object, "sobor");
			@Trigger(var_14_object, "aglaja");
			var_14_object = null;
		} else if(var_7_string == "doberman_attack") {
				func_519(var_1_object, "attack");
				func_502("ihouse_spi4ka@door1", true);
				func_502("ihouse_spi4ka@door2", true);
				@PlaySound("door_close");
		}
	Label_349:
		for(;;) {

		}
	
		if(var_7_string == "doberman_dead") {
			var_1_object->size(var_15_int); //@t
			if(var_15_int == (var_6_int + 1)) {
				func_502("ihouse_spi4ka@door1", false);
				func_502("ihouse_spi4ka@door2", false);
				@PlaySound("door_open");
			}
		} else if(var_7_string == "place_follower") {
			@GetMainOutdoorScene(var_16_object);
			object var_89_object; object var_90_object;
			var_16_object = var_90_object;
			func_484(var_89_object, var_90_object, "pt_b9q03_follower", "pers_boy", "b9q03_follower.xml");
			var_3_object = var_89_object;
			var_16_object = null;
		} else if(var_7_string == "init_bonefires") {
			@GetMainOutdoorScene(var_17_object);
			object var_96_object; object var_97_object;
			var_17_object = var_97_object;
			func_484(var_96_object, var_97_object, "pt_b9q03_b1_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			var_2_object->add(var_96_object); //@t
			object var_101_object; object var_102_object;
			var_17_object = var_102_object;
			func_484(var_101_object, var_102_object, "pt_b9q03_b1_morlok1", "pers_morlok", "b9q03_e_morlok.xml");
			var_2_object->add(var_101_object); //@t
			object var_106_object; object var_107_object;
			var_17_object = var_107_object;
			func_484(var_106_object, var_107_object, "pt_b9q03_b1_morlok2", "pers_morlok", "b9q03_e_morlok.xml");
			var_2_object->add(var_106_object); //@t
			object var_111_object; object var_112_object;
			var_17_object = var_112_object;
			func_484(var_111_object, var_112_object, "pt_b9q03_b2_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			var_2_object->add(var_111_object); //@t
			object var_116_object; object var_117_object;
			var_17_object = var_117_object;
			func_484(var_116_object, var_117_object, "pt_b9q03_b2_grabitel1", "pers_grabitel", "b9q03_e_grabitel.xml");
			var_2_object->add(var_116_object); //@t
			object var_121_object; object var_122_object;
			var_17_object = var_122_object;
			func_484(var_121_object, var_122_object, "pt_b9q03_b2_grabitel2", "pers_grabitel", "b9q03_e_grabitel.xml");
			var_2_object->add(var_121_object); //@t
			object var_126_object; object var_127_object;
			var_17_object = var_127_object;
			func_484(var_126_object, var_127_object, "pt_b9q03_b3_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			var_2_object->add(var_126_object); //@t
			object var_131_object; object var_132_object;
			var_17_object = var_132_object;
			func_484(var_131_object, var_132_object, "pt_b9q03_b3_wastedmale1", "pers_wasted_male", "b9q03_e_wasted_male.xml");
			var_2_object->add(var_131_object); //@t
			object var_136_object; object var_137_object;
			var_17_object = var_137_object;
			func_484(var_136_object, var_137_object, "pt_b9q03_b3_hunter1", "pers_hunter", "b9q03_e_hunter.xml");
			var_2_object->add(var_136_object); //@t
			object var_141_object; object var_142_object;
			var_17_object = var_142_object;
			func_484(var_141_object, var_142_object, "pt_b9q03_b4_doberman1", "pers_doberman", "b9q03_e_doberman.xml");
			var_2_object->add(var_141_object); //@t
			object var_146_object; object var_147_object;
			var_17_object = var_147_object;
			func_484(var_146_object, var_147_object, "pt_b9q03_b4_doberman2", "pers_doberman", "b9q03_e_doberman.xml");
			var_2_object->add(var_146_object); //@t
			object var_151_object; object var_152_object;
			var_17_object = var_152_object;
			func_484(var_151_object, var_152_object, "pt_b9q03_b4_doberman3", "pers_doberman", "b9q03_e_doberman.xml");
			var_2_object->add(var_151_object); //@t
			var_17_object = null;
		}
		if(var_7_string == "bonfire_burn") {
			@GetVariable("b9q03BonefiresCount", var_18_int);
			if(var_18_int == 0) {
				func_564();
			} else if(var_18_int == 1) {
					func_551();
			}

			for(;;) {
				var_18_int += 1;
				@SetVariable("b9q03BonefiresCount", var_18_int);
				goto Label_349;

			}

			if(var_18_int == 2) {
				func_538();
			} else if(var_18_int == 3) {
				func_577();
				@GetMainOutdoorScene(var_19_object);
				object var_216_object; object var_217_object;
				func_484(var_216_object, var_217_object, "pt_b9q03_girl", "pers_girl", "b9q03_girl.xml");
				var_5_object = var_216_object;
				@GetSceneByName(var_217_object, "cot_kapella");
				object var_222_object; object var_223_object;
				var_19_object = var_223_object;
				func_484(var_222_object, var_223_object, "pt_b9q03_spi4ka", "NPC_Spi4ka", "b9q03_spi4ka.xml");
				var_4_object = var_222_object;
				func_502("house_spi4ka@door1", true);
				func_502("house_spi4ka@door2", true);
				if(var_3_object != 0)
					@Trigger(var_3_object, "cleanup");
			}
			var_19_object = null;
		}
		if(var_7_string == "fail") {
			func_361();
		} else if(var_7_string == "completed") {
			func_369();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, float var_8_float)
	{
		func_350();
	}

}


void func_448(int var_21_int)
{
	float var_22_float; float var_23_float;
	@GetGameTime(var_23_float);
	if(var_23_float >= (var_21_int * 24)) {
		func_377(var_8_object, var_9_object, var_10_object, var_21_int, var_22_float, var_23_float);
	} else {
		@SetTimeEvent(0, (var_21_int * 24));
		@Hold();
	}
	
}


void func_577(void)
{
	object var_209_object;
	@CreateDiaryEntry(var_209_object, 539, 2, 530351);
	bool var_213_bool; object var_214_object;
	var_209_object = var_214_object;
	func_603(var_213_bool, var_214_object, 532);
}
EMIT "Stack[-1] = 0";


void func_519(object var_33_object, string var_34_string)
{
	int var_38_int; int var_39_int; object var_40_object;
	if(var_33_object != 0) {
		var_33_object->size(var_38_int);
		var_39_int = 0;

		for(;;) {
			if(!(var_39_int < var_38_int)) goto Label_537;
			var_33_object->get(var_40_object, var_39_int);
			if(var_40_object != 0)
				@Trigger(var_40_object, var_34_string);
			var_40_object = null;
			var_39_int += 1;
		}
	}
Label_537:
}


void func_590(object var_175_object)
{
	object var_177_object;
	@GetDiaryRoot(var_177_object);
	if(!var_177_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_175_object = false;
	}
	var_177_object = var_175_object;
}
EMIT "Stack[-1] = 0";


void func_472(object var_71_object)
{
	object var_73_object;
	@self(var_73_object);
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


void func_538(void)
{
	object var_199_object;
	@CreateDiaryEntry(var_199_object, 538, 2, 530350);
	bool var_203_bool; object var_204_object;
	var_199_object = var_204_object;
	func_603(var_203_bool, var_204_object, 532);
}
EMIT "Stack[-1] = 0";


void func_603(bool var_166_bool, object var_167_object, int var_168_int)
{
	object var_175_object;
	func_590(var_175_object);
	object var_172_object;
	var_175_object = var_172_object;
	object var_173_object;
	var_172_object->Find(var_168_int, var_173_object);
	if(!var_173_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_168_int);
		var_166_bool = false;
	}
	var_173_object->AddChild(var_167_object);
	@SendWorldWndMessage(7);
	int var_174_int;
	var_167_object->GetCategory(var_174_int);
	@SetDiarySection(var_174_int);
	var_166_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_478(object var_11_object)
{
	object var_13_object;
	@CreateObjectVector(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_350(void)
{
	int var_10_int;
	@GetVariable("b9q03", var_10_int);
	if(var_10_int != 1000)
		func_361();
}


void func_484(object var_77_object, object var_78_object, string var_79_string, string var_80_string, string var_81_string)
{
	bool var_86_bool; cvector var_87_cvector; cvector var_88_cvector;
	var_78_object->GetLocator(var_79_string, var_86_bool, var_87_cvector, var_88_cvector);
	if(!var_86_bool) //@nz
		@Trace(("Locator " + var_79_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_80_string, var_78_object, var_87_cvector, var_88_cvector, var_81_string);
	object var_89_object = var_77_object;
	
}
EMIT "Stack[-1] = 0";


void func_551(void)
{
	object var_189_object;
	@CreateDiaryEntry(var_189_object, 537, 2, 530349);
	bool var_193_bool; object var_194_object;
	var_189_object = var_194_object;
	func_603(var_193_bool, var_194_object, 532);
}
EMIT "Stack[-1] = 0";


void func_361(void)
{
	@SetVariable("b9q03", -1);
	func_377(var_5_object, var_6_int, var_7_int, var_8_float, var_9_int, var_10_int);
}


void func_369(void)
{
	@SetVariable("b9q03", 1000);
	func_377(var_14_object, var_15_int, var_16_object, var_17_object, var_18_int, var_19_object);
}


void func_564(void)
{
	object var_162_object;
	@CreateDiaryEntry(var_162_object, 536, 2, 530348);
	bool var_166_bool; object var_167_object;
	var_162_object = var_167_object;
	func_603(var_166_bool, var_167_object, 532);
}
EMIT "Stack[-1] = 0";


void func_502(string var_55_string, bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, var_55_string);
	if(!var_58_object) //@nz
		@Trace(("Door " + var_55_string) + " not found");
	else
		var_58_object->SetProperty("locked", var_56_bool);
	
}
EMIT "Stack[-1] = 0";


void func_377(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
{
	object var_28_object;
	@GetSceneByName(var_28_object, "sobor");
	@Trigger(var_28_object, "aglaja");
	@GetSceneByName(var_28_object, "house_spi4ka");
	@Trigger(var_28_object, "spi4ka");
	func_519(var_1_object, "cleanup");
	func_519(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	func_502("ihouse_spi4ka@door1", false);
	func_502("ihouse_spi4ka@door2", false);
	func_502("house_spi4ka@door1", false);
	func_502("house_spi4ka@door2", false);
	object var_71_object;
	func_472(var_71_object);
	@RemoveActor(var_71_object);
}
EMIT "Stack[-1] = 0";


