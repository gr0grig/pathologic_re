// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, cvector var_8_cvector, cvector var_9_cvector)
	{
		object var_12_object;
		func_363(var_12_object);
		var_0_object = var_12_object;
		object var_15_object;
		func_363(var_15_object);
		var_2_object = var_15_object;
		object var_11_object;
		@GetSceneByName(var_11_object, "cot_eva");
		@Trigger(var_11_object, "nodanko");
		func_433("icot_eva_door", false);
		@GetSceneByName(var_11_object, "shouse1_kabak");
		@Trigger(var_11_object, "noandrei");
		@GetSceneByName(var_11_object, "warehouse_rubin");
		@Trigger(var_11_object, "rubin");
		func_416("sobor@door1", false);
		func_416("cot_maria@door1", true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, cvector var_8_cvector, cvector var_9_cvector, string var_10_string)
	{
		object var_31_object; int var_32_int; bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector; object var_36_object; int var_37_int; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector; bool var_41_bool; cvector var_42_cvector; cvector var_43_cvector; object var_44_object; object var_45_object; object var_46_object; object var_48_object; object var_49_object; int var_50_int;
		@Trace(var_10_string);
		if(var_10_string == "init_kabak") {
			@GetSceneByName(var_31_object, "shouse1_kabak");
			var_32_int = 1;

			for(;;) {
				var_31_object->GetLocator(("pt_k11q01_soldier" + var_32_int), var_33_bool, var_34_cvector, var_35_cvector);
				if(!var_33_bool) { //@nz
				} else {
					object var_75_object; object var_76_object;
					var_31_object = var_76_object;
					func_380(var_75_object, var_76_object, ("pt_k11q01_soldier" + var_32_int), "pers_soldat", "k11q01_kabak_soldier.xml");
					var_0_object->add(var_75_object); //@t
					var_32_int += 1;
				}
				object var_57_object; object var_58_object;
				var_31_object = var_58_object;
				func_380(var_57_object, var_58_object, "pt_k11q01_officer", "pers_soldat", "k11q01_kabak_officer.xml");
				var_1_object = var_57_object;
				var_31_object = null;
		} else {
			if(var_10_string == "init_gun") {
				@GetMainOutdoorScene(var_36_object);
				var_37_int = 1;

				for(;;) {
					var_36_object->GetLocator(("pt_k11q01_soldier" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
					if(!var_38_bool) { //@nz
					} else {
						object var_92_object; object var_93_object;
						var_36_object = var_93_object;
						func_398(var_92_object, var_93_object, ("pt_k11q01_soldier" + var_37_int), "pers_soldat", "k11q01_soldier.xml");
						var_2_object->add(var_92_object); //@t
						var_37_int += 1;
					}
					var_36_object->GetLocator("pt_k11q01_agony_officer", var_41_bool, var_42_cvector, var_43_cvector);
					var_36_object->AddStationaryActor(var_4_object, (var_42_cvector + [0.0, 7.0, 0.0]), var_43_cvector, "pers_soldat", "k11q01_officer_agony.xml", true);
					var_36_object = null;
					goto Label_267;

				}
			}
			if(var_10_string == "cure_officer") {
				@FindActor(var_44_object, "player");
				var_44_object->GetPosition(var_8_cvector);
				var_44_object->GetDirection(var_9_cvector);
				var_115_float = GetByIndex(var_9_cvector, 1);
				SetByIndex(var_9_cvector, 1) = (float)0;
				cvector var_116_cvector;
				func_353(var_116_cvector, var_9_cvector);
				var_9_cvector = var_116_cvector;
				var_4_object->GetActor(var_45_object); //@t
				if(var_45_object != 0)
					@RemoveActor(var_45_object);
				var_4_object->Remove(); //@t
				@SetVariable("k11q01Cured", 1);
				object var_126_object;
				func_369(var_126_object, "quest_k11_01_cutscene");
				var_45_object = null;
				var_44_object = null;
			} else if(var_10_string == "cutscene_end") {
				@GetMainOutdoorScene(var_46_object);
				var_140_int = -var_9_cvector;
				var_46_object->AddStationaryActor(var_3_object, ((var_8_cvector + (var_9_cvector * 150.0)) + [0.0, 10.0, 0.0]), var_140_int, "pers_soldat", "k11q01_officer.xml", true);
				var_46_object = null;
			} else if(var_10_string == "init_house_petr") {
				@GetSceneByName(var_48_object, "house_petr");
				object var_147_object; object var_148_object;
				var_48_object = var_148_object;
				func_380(var_147_object, var_148_object, "pt_k11q01_andrei", "NPC_Andrei", "k11q01_andrei.xml");
				var_7_object = var_147_object;
				object var_152_object; object var_153_object;
				var_48_object = var_153_object;
				func_380(var_152_object, var_153_object, "pt_k11q01_danko", "NPC_Bakalavr", "k11q01_danko.xml");
				var_5_object = var_152_object;
				var_48_object = null;
			} else if(var_10_string == "place_burah") {
				@GetSceneByName(var_49_object, "burah_home");
				@Trigger(var_49_object, "noburah");
				@GetSceneByName(var_49_object, "boiny");
				object var_162_object; object var_163_object;
				var_49_object = var_163_object;
				func_380(var_162_object, var_163_object, "pt_k11q01_burah", "NPC_Burah", "k11q01_burah.xml");
				var_6_object = var_162_object;
				var_49_object = null;
			} else if(var_10_string == "fail") {
				func_268();
				func_506();
				func_512();
			} else if(var_10_string == "completed") {
				func_276();
				func_506();
				func_512();
			} else if(var_10_string == "cleanup") {
				@GetVariable("k11q01", var_50_int);
				if(var_50_int != 1000)
					func_268();
			}
			func_332();
		}
		Label_267:

		}
	
	}

}


void func_512(void)
{
	object var_216_object;
	@GetSceneByName(var_216_object, "burah_home");
	@Trigger(var_216_object, "noburah");
}
EMIT "Stack[-1] = 0";


void func_454(bool var_209_bool, string var_210_string, string var_211_string)
{
	object var_213_object;
	@FindActor(var_213_object, var_210_string);
	if(var_213_object == null)
		var_209_bool = false;
	@Trigger(var_213_object, var_211_string);
	var_209_bool = true;
}
EMIT "Stack[-1] = 0";


void func_521(void)
{
	object var_239_object;
	@GetSceneByName(var_239_object, "burah_home");
	@Trigger(var_239_object, "burah");
}
EMIT "Stack[-1] = 0";


void func_268(void)
{
	@SetVariable("k11q01", -1);
	func_284(var_44_object, var_45_object, var_46_object, var_47_cvector, var_48_object, var_49_object, var_50_int);
}


void func_332(void)
{
	func_416("cot_maria@door1", false);
	func_521();
	object var_242_object;
	func_347(var_242_object);
	@RemoveActor(var_242_object);
}


void func_398(object var_92_object, object var_93_object, string var_94_string, string var_95_string, string var_96_string)
{
	bool var_102_bool; cvector var_103_cvector; cvector var_104_cvector;
	var_93_object->GetLocator(var_94_string, var_102_bool, var_103_cvector, var_104_cvector);
	if(!var_102_bool) //@nz
		@Trace(("Locator " + var_94_string) + " doesn't exist");
	else
		var_93_object->AddStationaryActor(Obj(), var_103_cvector, var_104_cvector, var_95_string, var_96_string);
	object var_105_object = var_92_object;
	
}
EMIT "Stack[-1] = 0";


void func_466(object var_191_object)
{
	int var_195_int; int var_196_int; object var_197_object;
	if(var_191_object != 0) {
		var_191_object->size(var_195_int);
		var_196_int = 0;

		while(var_196_int < var_195_int) {
			var_191_object->get(var_197_object, var_196_int);
			if(var_197_object != 0)
				var_197_object->Remove();
			var_197_object = null;
			var_196_int += 1;
		}

		var_191_object->clear();
	}
}


void func_276(void)
{
	@SetVariable("k11q01", 1000);
	func_284(var_44_object, var_45_object, var_46_object, var_47_cvector, var_48_object, var_49_object, var_50_int);
}


void func_347(object var_242_object)
{
	object var_244_object;
	@self(var_244_object);
	var_244_object = var_242_object;
}
EMIT "Stack[-1] = 0";


void func_284(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_5_object, object var_6_object, object var_7_object)
{
	object var_172_object;
	@GetSceneByName(var_172_object, "cot_eva");
	@Trigger(var_172_object, "danko");
	@GetSceneByName(var_172_object, "shouse1_kabak");
	@Trigger(var_172_object, "andrei");
	func_487(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_466(var_2_object);
	if(var_3_object != 0)
		var_3_object->Remove(); //@t
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	if(var_6_object != 0)
		@Trigger(var_6_object, "cleanup");
	if(var_7_object != 0)
		@Trigger(var_7_object, "cleanup");
}
EMIT "Stack[-1] = 0";


void func_416(string var_33_string, bool var_34_bool)
{
	object var_36_object;
	@FindActor(var_36_object, var_33_string);
	if(!var_36_object) //@nz
		@Trace(("Door " + var_33_string) + " not found");
	else
		var_36_object->SetProperty("locked", var_34_bool);
	
}
EMIT "Stack[-1] = 0";


void func_353(cvector var_116_cvector, cvector var_117_cvector)
{
	float var_119_float = sqrt(var_117_cvector | var_117_cvector);
	if(var_119_float < 0.000001)
		var_116_cvector = [0.0, 0.0, 0.0];
	var_116_cvector = var_117_cvector / var_119_float;
}


void func_487(object var_177_object, string var_178_string)
{
	int var_182_int; int var_183_int; object var_184_object;
	if(var_177_object != 0) {
		var_177_object->size(var_182_int);
		var_183_int = 0;

		for(;;) {
			if(!(var_183_int < var_182_int)) goto Label_505;
			var_177_object->get(var_184_object, var_183_int);
			if(var_184_object != 0)
				@Trigger(var_184_object, var_178_string);
			var_184_object = null;
			var_183_int += 1;
		}
	}
Label_505:
}


void func_363(object var_12_object)
{
	object var_14_object;
	@CreateObjectVector(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_433(string var_18_string, bool var_19_bool)
{
	object var_21_object;
	@FindActor(var_21_object, var_18_string);
	if(!var_21_object) { //@nz
		@Trace(("Door " + var_18_string) + " not found");
	} else {
		if(var_19_bool != 0)
			var_21_object->Close();
		var_21_object->SetProperty("locked", var_19_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_369(object var_126_object, string var_127_string)
{
	object var_130_object;
	@GetMainOutdoorScene(var_130_object);
	object var_131_object;
	@AddBlankActor(var_131_object, var_130_object, var_127_string, (var_127_string + ".bin"));
	var_131_object = var_126_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_506(void)
{
	bool var_209_bool;
	func_454(var_209_bool, "klara2_npc_positioner", "init");
}


void func_380(object var_57_object, object var_58_object, string var_59_string, string var_60_string, string var_61_string)
{
	bool var_66_bool; cvector var_67_cvector; cvector var_68_cvector;
	var_58_object->GetLocator(var_59_string, var_66_bool, var_67_cvector, var_68_cvector);
	if(!var_66_bool) //@nz
		@Trace(("Locator " + var_59_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_60_string, var_58_object, var_67_cvector, var_68_cvector, var_61_string);
	object var_69_object = var_57_object;
	
}
EMIT "Stack[-1] = 0";


