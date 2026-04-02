// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object)
	{
		object var_10_object;
		func_320(var_10_object);
		var_0_object = var_10_object;
		object var_13_object;
		func_320(var_13_object);
		var_2_object = var_13_object;
		object var_9_object;
		@GetSceneByName(var_9_object, "cot_eva");
		@Trigger(var_9_object, "nodanko");
		func_409("icot_eva_door", false);
		@GetSceneByName(var_9_object, "shouse1_kabak");
		@Trigger(var_9_object, "noandrei");
		@GetSceneByName(var_9_object, "warehouse_rubin");
		@Trigger(var_9_object, "rubin");
		func_392("sobor@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, string var_8_string)
	{
		object var_24_object; int var_25_int; bool var_26_bool; cvector var_27_cvector; cvector var_28_cvector; object var_29_object; int var_30_int; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector; object var_34_object; object var_35_object; object var_36_object; object var_37_object; int var_38_int;
		@Trace(var_8_string);
		if(var_8_string == "init_kabak") {
			@GetSceneByName(var_24_object, "shouse1_kabak");
			var_25_int = 1;

			for(;;) {
				var_24_object->GetLocator(("pt_k11q01_soldier" + var_25_int), var_26_bool, var_27_cvector, var_28_cvector);
				if(!var_26_bool) { //@nz
				} else {
					object var_63_object; object var_64_object;
					var_24_object = var_64_object;
					func_337(var_63_object, var_64_object, ("pt_k11q01_soldier" + var_25_int), "pers_soldat", "k11q01_kabak_soldier.xml");
					var_0_object->add(var_63_object); //@t
					var_25_int += 1;
				}
				object var_45_object; object var_46_object;
				var_24_object = var_46_object;
				func_337(var_45_object, var_46_object, "pt_k11q01_officer", "pers_soldat", "k11q01_kabak_officer.xml");
				var_1_object = var_45_object;
				var_24_object = null;
		} else {
			if(var_8_string == "init_gun") {
				@GetMainOutdoorScene(var_29_object);
				var_30_int = 1;

				for(;;) {
					var_29_object->GetLocator(("pt_k11q01_soldier" + var_30_int), var_31_bool, var_32_cvector, var_33_cvector);
					if(!var_31_bool) { //@nz
					} else {
						object var_93_object; object var_94_object;
						var_29_object = var_94_object;
						func_355(var_93_object, var_94_object, ("pt_k11q01_soldier" + var_30_int), "pers_soldat", "k11q01_soldier.xml");
						var_2_object->add(var_93_object); //@t
						var_30_int += 1;
					}
					object var_75_object; object var_76_object;
					var_29_object = var_76_object;
					func_355(var_75_object, var_76_object, "pt_k11q01_agony_officer", "pers_soldat", "k11q01_officer_agony.xml");
					var_4_object = var_75_object;
					var_29_object = null;
					goto Label_236;

				}
			}
			if(var_8_string == "cure_officer") {
				var_4_object->GetActor(var_34_object); //@t
				if(var_34_object != 0)
					@RemoveActor(var_34_object);
				var_4_object->Remove(); //@t
				@SetVariable("k11q01Cured", 1);
				object var_105_object;
				func_326(var_105_object, "quest_k11_01_cutscene");
				var_34_object = null;
			} else if(var_8_string == "cutscene_end") {
				@GetMainOutdoorScene(var_35_object);
				object var_115_object; object var_116_object;
				var_35_object = var_116_object;
				func_373(var_115_object, var_116_object, "pt_k11q01_officer", "pers_soldat", "k11q01_officer.xml");
				var_3_object = var_115_object;
				var_35_object = null;
			} else if(var_8_string == "init_house_petr") {
				@GetSceneByName(var_36_object, "house_petr");
				object var_137_object; object var_138_object;
				var_36_object = var_138_object;
				func_337(var_137_object, var_138_object, "pt_k11q01_andrei", "NPC_Andrei", "k11q01_andrei.xml");
				var_7_object = var_137_object;
				object var_142_object; object var_143_object;
				var_36_object = var_143_object;
				func_337(var_142_object, var_143_object, "pt_k11q01_danko", "NPC_Bakalavr", "k11q01_danko.xml");
				var_5_object = var_142_object;
				var_36_object = null;
			} else if(var_8_string == "place_burah") {
				@GetSceneByName(var_37_object, "burah_home");
				@Trigger(var_37_object, "noburah");
				@GetSceneByName(var_37_object, "boiny");
				object var_152_object; object var_153_object;
				var_37_object = var_153_object;
				func_337(var_152_object, var_153_object, "pt_k11q01_burah", "NPC_Burah", "k11q01_burah.xml");
				var_6_object = var_152_object;
				var_37_object = null;
			} else if(var_8_string == "fail") {
				func_482();
				func_237();
			} else if(var_8_string == "completed") {
				func_482();
				func_245();
			} else if(var_8_string == "cleanup") {
				@GetVariable("k11q01", var_38_int);
				if(var_38_int != 1000) {
				func_237();
				goto Label_236;
			}
			}
			func_253(var_32_cvector, var_33_cvector, var_34_object, var_35_object, var_36_object, var_37_object, var_38_int);
		}
		Label_236:

		}
	
	}

}


void func_320(object var_10_object)
{
	object var_12_object;
	@CreateObjectVector(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_482(void)
{
	bool var_159_bool;
	func_430(var_159_bool, "klara2_npc_positioner", "init");
}


void func_355(object var_75_object, object var_76_object, string var_77_string, string var_78_string, string var_79_string)
{
	bool var_84_bool; cvector var_85_cvector; cvector var_86_cvector;
	var_76_object->GetLocator(var_77_string, var_84_bool, var_85_cvector, var_86_cvector);
	if(!var_84_bool) //@nz
		@Trace(("Locator " + var_77_string) + " doesn't exist");
	else
		var_76_object->AddStationaryActor(Obj(), var_85_cvector, var_86_cvector, var_78_string, var_79_string);
	object var_87_object = var_75_object;
	
}
EMIT "Stack[-1] = 0";


void func_326(object var_105_object, string var_106_string)
{
	object var_109_object;
	@GetMainOutdoorScene(var_109_object);
	object var_110_object;
	@AddBlankActor(var_110_object, var_109_object, var_106_string, (var_106_string + ".bin"));
	var_110_object = var_105_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_392(string var_31_string, bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, var_31_string);
	if(!var_34_object) //@nz
		@Trace(("Door " + var_31_string) + " not found");
	else
		var_34_object->SetProperty("locked", var_32_bool);
	
}
EMIT "Stack[-1] = 0";


void func_237(void)
{
	@SetVariable("k11q01", -1);
	func_253(var_32_cvector, var_33_cvector, var_34_object, var_35_object, var_36_object, var_37_object, var_38_int);
}


void func_430(bool var_159_bool, string var_160_string, string var_161_string)
{
	object var_163_object;
	@FindActor(var_163_object, var_160_string);
	if(var_163_object == null)
		var_159_bool = false;
	@Trigger(var_163_object, var_161_string);
	var_159_bool = true;
}
EMIT "Stack[-1] = 0";


void func_463(object var_175_object, string var_176_string)
{
	int var_180_int; int var_181_int; object var_182_object;
	if(var_175_object != 0) {
		var_175_object->size(var_180_int);
		var_181_int = 0;

		for(;;) {
			if(!(var_181_int < var_180_int)) goto Label_481;
			var_175_object->get(var_182_object, var_181_int);
			if(var_182_object != 0)
				@Trigger(var_182_object, var_176_string);
			var_182_object = null;
			var_181_int += 1;
		}
	}
Label_481:
}


void func_442(object var_189_object)
{
	int var_193_int; int var_194_int; object var_195_object;
	if(var_189_object != 0) {
		var_189_object->size(var_193_int);
		var_194_int = 0;

		while(var_194_int < var_193_int) {
			var_189_object->get(var_195_object, var_194_int);
			if(var_195_object != 0)
				var_195_object->Remove();
			var_195_object = null;
			var_194_int += 1;
		}

		var_189_object->clear();
	}
}


void func_337(object var_45_object, object var_46_object, string var_47_string, string var_48_string, string var_49_string)
{
	bool var_54_bool; cvector var_55_cvector; cvector var_56_cvector;
	var_46_object->GetLocator(var_47_string, var_54_bool, var_55_cvector, var_56_cvector);
	if(!var_54_bool) //@nz
		@Trace(("Locator " + var_47_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_48_string, var_46_object, var_55_cvector, var_56_cvector, var_49_string);
	object var_57_object = var_45_object;
	
}
EMIT "Stack[-1] = 0";


void func_373(object var_115_object, object var_116_object, string var_117_string, string var_118_string, string var_119_string)
{
	bool var_124_bool; cvector var_125_cvector; cvector var_126_cvector;
	var_116_object->GetLocator(var_117_string, var_124_bool, var_125_cvector, var_126_cvector);
	if(!var_124_bool) //@nz
		@Trace(("Locator " + var_117_string) + " doesn't exist");
	else
		var_116_object->AddStationaryActor(Obj(), var_125_cvector, var_126_cvector, var_118_string, var_119_string, true);
	object var_127_object = var_115_object;
	
}
EMIT "Stack[-1] = 0";


void func_245(void)
{
	@SetVariable("k11q01", 1000);
	func_253(var_32_cvector, var_33_cvector, var_34_object, var_35_object, var_36_object, var_37_object, var_38_int);
}


void func_409(string var_16_string, bool var_17_bool)
{
	object var_19_object;
	@FindActor(var_19_object, var_16_string);
	if(!var_19_object) { //@nz
		@Trace(("Door " + var_16_string) + " not found");
	} else {
		if(var_17_bool != 0)
			var_19_object->Close();
		var_19_object->SetProperty("locked", var_17_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_314(object var_208_object)
{
	object var_210_object;
	@self(var_210_object);
	var_210_object = var_208_object;
}
EMIT "Stack[-1] = 0";


void func_253(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_5_object, object var_6_object, object var_7_object)
{
	object var_168_object;
	@GetSceneByName(var_168_object, "cot_eva");
	@Trigger(var_168_object, "danko");
	@GetSceneByName(var_168_object, "shouse1_kabak");
	@Trigger(var_168_object, "andrei");
	@GetSceneByName(var_168_object, "burah_home");
	@Trigger(var_168_object, "burah");
	func_463(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_442(var_2_object);
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_5_object != 0)
		@Trigger(var_5_object, "cleanup");
	if(var_6_object != 0)
		@Trigger(var_6_object, "cleanup");
	if(var_7_object != 0)
		@Trigger(var_7_object, "cleanup");
	object var_208_object;
	func_314(var_208_object);
	@RemoveActor(var_208_object);
}
EMIT "Stack[-1] = 0";


