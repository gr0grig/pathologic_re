// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object)
	{
		func_474("storojka@door1", false);
		func_474("burah_home@door1", false);
		func_474("cot_katerina@door1", true);
		func_474("cot_alexandr@door1", true);
		object var_14_object;
		@GetMainOutdoorScene(var_14_object);
		object var_31_object; object var_32_object;
		var_14_object = var_32_object;
		func_455(var_31_object, var_32_object, "pt_k1q01_birdmask", "pers_birdmask", "k1q01_birdmask.xml");
		var_0_object = var_31_object;
		object var_50_object; object var_51_object;
		var_14_object = var_51_object;
		func_455(var_50_object, var_51_object, "pt_k1q01_whitemask", "pers_whitemask", "k1q01_whitemask.xml");
		var_1_object = var_50_object;
		object var_55_object; object var_56_object;
		var_14_object = var_56_object;
		func_437(var_55_object, var_56_object, "pt_k1q01_grabitel1", "pers_grabitel", "k1q01_grabitel.xml");
		var_11_object = var_55_object;
		object var_73_object; object var_74_object;
		func_437(var_73_object, var_74_object, "pt_k1q01_grabitel2", "pers_grabitel", "k1q01_grabitel.xml");
		var_12_object = var_73_object;
		@GetSceneByName(var_74_object, "storojka");
		object var_79_object; object var_80_object;
		var_14_object = var_80_object;
		func_419(var_79_object, var_80_object, "pt_k1q01_katerina", "NPC_Katerina", "k1q01_katerina.xml");
		var_2_object = var_79_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, string var_13_string)
	{
		object var_14_object; object var_15_object; int var_16_int; object var_17_object; object var_18_object; int var_19_int;
		@Trace(var_13_string);
		if(var_13_string == "remove_whitemask") {
			if(var_1_object != 0)
				var_1_object->Remove(); //@t
		} else if(var_13_string == "remove_birdmask") {
				if(var_0_object != 0)
					var_0_object->Remove(); //@t
		}
	Label_267:
		for(;;) {

		}
	
		if(var_13_string == "remove_katerina") {
			if(var_2_object != 0)
				@Trigger(var_2_object, "cleanup");
			func_474("cot_katerina@door1", false);
			func_474("cot_alexandr@door1", false);
		} else if(var_13_string == "init_alexandr") {
			func_474("cot_anna@door1", false);
			@GetMainOutdoorScene(var_17_object);
			object var_46_object; object var_47_object;
			var_17_object = var_47_object;
			func_437(var_46_object, var_47_object, "pt_k1q01_doberman", "pers_doberman", "k1q01_doberman.xml");
			var_4_object = var_46_object;
			object var_64_object; object var_65_object;
			func_437(var_64_object, var_65_object, "pt_k1q01_dohodyaga", "pers_dohodyaga", "k1q01_dohodyaga.xml");
			@GetSceneByName(var_65_object, "cot_anna");
			object var_70_object; object var_71_object;
			var_17_object = var_71_object;
			func_419(var_70_object, var_71_object, "pt_k1q01_danko", "NPC_Bakalavr", "k1q01_danko.xml");
			var_3_object = var_70_object;
			object var_88_object; object var_89_object;
			var_17_object = var_89_object;
			func_419(var_88_object, var_89_object, "pt_k1q01_wastedmale1", "pers_wasted_male", "k1q01_statist.xml");
			var_5_object = var_88_object;
			object var_93_object; object var_94_object;
			var_17_object = var_94_object;
			func_419(var_93_object, var_94_object, "pt_k1q01_wastedmale2", "pers_wasted_male", "k1q01_statist.xml");
			var_6_object = var_93_object;
			object var_98_object; object var_99_object;
			var_17_object = var_99_object;
			func_419(var_98_object, var_99_object, "pt_k1q01_woman", "pers_woman", "k1q01_statist.xml");
			object var_103_object; object var_104_object;
			var_17_object = var_104_object;
			func_419(var_103_object, var_104_object, "pt_k1q01_agony", "pers_worker", "k1q01_agony.xml");
		} else if(var_13_string == "doberman_dead") {
			if(var_4_object != 0)
				var_4_object->Remove(); //@t
			@SetVariable("k1q01DobermanDead", 1);
			func_536();
		} else if(var_13_string == "cure_worker") {
			@RemoveActor(var_103_object);
			var_7_object = null;
			object var_138_object;
			func_408(var_138_object, "quest_k1_01_cutscene");
		} else if(var_13_string == "cutscene_end") {
			@GetSceneByName(var_18_object, "cot_anna");
			object var_149_object; object var_150_object;
			var_18_object = var_150_object;
			func_419(var_149_object, var_150_object, "pt_k1q01_worker", "pers_worker", "k1q01_worker.xml");
			@SetVariable("k1q01Healed", 1);
			func_549();
			bool var_164_bool; object var_165_object;
			object var_167_object;
			func_350(var_167_object);
			var_167_object = var_165_object;
			func_491(var_164_bool, var_165_object, 0.25);
		}
		if(var_13_string == "cleanup") {
			@GetVariable("k1q01", var_19_int);
			if(var_19_int != 1000)
				func_268();
			else
				func_284(var_64_object, var_98_object, var_149_object, var_11_object, var_12_object, var_13_string, var_14_object, var_15_object, var_16_int, Obj(), Obj(), var_19_int);
			if(var_13_string == "fail") {
				func_268();
			} else if(var_13_string == "completed") {
				func_276();
			}
		}
		goto Label_267;
	
	}

}


void func_391(object var_233_object)
{
	object var_235_object;
	@self(var_235_object);
	var_235_object = var_233_object;
}
EMIT "Stack[-1] = 0";


void func_455(object var_31_object, object var_32_object, string var_33_string, string var_34_string, string var_35_string)
{
	bool var_40_bool; cvector var_41_cvector; cvector var_42_cvector;
	var_32_object->GetLocator(var_33_string, var_40_bool, var_41_cvector, var_42_cvector);
	if(!var_40_bool) //@nz
		@Trace(("Locator " + var_33_string) + " doesn't exist");
	else
		var_32_object->AddStationaryActor(Obj(), var_41_cvector, var_42_cvector, var_34_string, var_35_string, true);
	object var_43_object = var_31_object;
	
}
EMIT "Stack[-1] = 0";


void func_268(void)
{
	@SetVariable("k1q01", -1);
	func_284(var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_string, var_14_object, var_15_object, var_16_int, var_17_object, var_18_object, var_19_int);
}


// @pe
void func_397(float var_197_float, float var_198_float, float var_199_float, float var_200_float)
{
	if(var_198_float < var_199_float) {
		var_199_float = var_197_float;
		return 0;
	}
	if(var_198_float > var_200_float) {
		var_200_float = var_197_float;
		return 0;
	}
	var_198_float = var_197_float;
}


void func_526(float var_175_float)
{
	object var_177_object;
	@CreateFloatVector(var_177_object);
	var_177_object->add(var_175_float);
	@SendWorldWndMessage(16, var_177_object);
}
EMIT "Stack[-1] = 0";


void func_276(void)
{
	@SetVariable("k1q01", 1000);
	func_284(var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_string, var_14_object, var_15_object, var_16_int, var_17_object, var_18_object, var_19_int);
}


void func_536(void)
{
	object var_114_object;
	@CreateDiaryEntry(var_114_object, 325, 1, 524741);
	bool var_118_bool; object var_119_object;
	var_114_object = var_119_object;
	func_575(var_118_bool, var_119_object, 318);
}
EMIT "Stack[-1] = 0";


void func_408(object var_138_object, string var_139_string)
{
	object var_142_object;
	@GetMainOutdoorScene(var_142_object);
	object var_143_object;
	@AddBlankActor(var_143_object, var_142_object, var_139_string, (var_139_string + ".bin"));
	var_143_object = var_138_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_474(string var_15_string, bool var_16_bool)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(!var_18_object) //@nz
		@Trace(("Door " + var_15_string) + " not found");
	else
		var_18_object->SetProperty("locked", var_16_bool);
	
}
EMIT "Stack[-1] = 0";


void func_284(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object)
{
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_11_object != 0)
		var_11_object->Remove(); //@t
	if(var_12_object != 0)
		var_12_object->Remove(); //@t
	if(var_4_object != 0)
		var_4_object->Remove(); //@t
	if(var_8_object != 0)
		var_8_object->Remove(); //@t
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	if(var_6_object != 0)
		@Trigger(var_6_object, "cleanup");
	if(var_9_object != 0)
		@Trigger(var_9_object, "cleanup");
	if(var_10_object != 0)
		@Trigger(var_10_object, "cleanup");
	func_474("cot_katerina@door1", false);
	object var_233_object;
	func_391(var_233_object);
	@RemoveActor(var_233_object);
}


void func_350(object var_167_object)
{
	object var_169_object;
	@FindActor(var_169_object, "player");
	var_169_object = var_167_object;
}
EMIT "Stack[-1] = 0";


void func_419(object var_79_object, object var_80_object, string var_81_string, string var_82_string, string var_83_string)
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


void func_549(void)
{
	object var_157_object;
	@CreateDiaryEntry(var_157_object, 323, 1, 524739);
	bool var_161_bool; object var_162_object;
	var_157_object = var_162_object;
	func_575(var_161_bool, var_162_object, 318);
}
EMIT "Stack[-1] = 0";


void func_357(bool var_187_bool, object var_188_object, string var_189_string)
{
	var_194_bool = IsFuncExist(var_188_object, "HasProperty", 2);
	if(!var_194_bool) { //@nz
		var_187_bool = false;
		return 2;
	}
	bool var_191_bool;
	var_188_object->HasProperty(var_189_string, var_191_bool);
	var_191_bool = var_187_bool;
}


// @pe
void func_491(bool var_164_bool, object var_165_object, float var_166_float)
{
	if(!var_165_object) { //@nz
		var_164_bool = false;
		return 0;
	}
	if(var_166_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_166_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_175_float;
		var_166_float = var_175_float;
		func_526(var_175_float);
		bool var_179_bool; object var_180_object; float var_182_float;
		var_165_object = var_180_object;
		var_166_float = var_182_float;
		func_369(var_179_bool, var_180_object, "reputation", var_182_float, (float)0, (float)1);
		var_164_bool = true;
		return 0;

	}
	
	var_164_bool = false;
}


void func_369(bool var_179_bool, object var_180_object, string var_181_string, float var_182_float, float var_183_float, float var_184_float)
{
	object var_188_object;
	var_180_object = var_188_object;
	string var_189_string;
	var_181_string = var_189_string;
	bool var_187_bool;
	func_357(var_187_bool, var_188_object, var_189_string);
	if(!var_187_bool) //@nz
		var_179_bool = false;
	float var_186_float;
	var_180_object->GetProperty(var_181_string, var_186_float);
	float var_197_float; float var_199_float; float var_200_float;
	var_183_float = var_199_float;
	var_184_float = var_200_float;
	func_397(var_197_float, (var_186_float + var_182_float), var_199_float, var_200_float);
	var_180_object->SetProperty(var_181_string, var_197_float);
	var_179_bool = true;
}


void func_562(object var_127_object)
{
	object var_129_object;
	@GetDiaryRoot(var_129_object);
	if(!var_129_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_127_object = false;
	}
	var_129_object = var_127_object;
}
EMIT "Stack[-1] = 0";


void func_437(object var_55_object, object var_56_object, string var_57_string, string var_58_string, string var_59_string)
{
	bool var_64_bool; cvector var_65_cvector; cvector var_66_cvector;
	var_56_object->GetLocator(var_57_string, var_64_bool, var_65_cvector, var_66_cvector);
	if(!var_64_bool) //@nz
		@Trace(("Locator " + var_57_string) + " doesn't exist");
	else
		var_56_object->AddStationaryActor(Obj(), var_65_cvector, var_66_cvector, var_58_string, var_59_string);
	object var_67_object = var_55_object;
	
}
EMIT "Stack[-1] = 0";


void func_575(bool var_118_bool, object var_119_object, int var_120_int)
{
	object var_127_object;
	func_562(var_127_object);
	object var_124_object;
	var_127_object = var_124_object;
	object var_125_object;
	var_124_object->Find(var_120_int, var_125_object);
	if(!var_125_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_120_int);
		var_118_bool = false;
	}
	var_125_object->AddChild(var_119_object);
	@SendWorldWndMessage(7);
	int var_126_int;
	var_119_object->GetCategory(var_126_int);
	@SetDiarySection(var_126_int);
	var_118_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


