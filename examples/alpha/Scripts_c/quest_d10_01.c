maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool)
	{
		object var_5_object;
		func_152(var_5_object);
		var_0_object = var_5_object;
		var_4_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, string var_5_string)
	{
		object var_8_object; int var_9_int;
		@Trace(var_5_string);
		if(var_5_string == "init_house") {
			bool var_12_bool;
			func_210(var_12_bool, "NPC_Petr");
			@GetSceneByName(var_8_object, "house_petr");
			var_9_int = 1;

			while(var_9_int <= 4) {
				object var_20_object; object var_21_object;
				var_8_object = var_21_object;
				func_158(var_20_object, var_21_object, ("pt_d10q01_soldier" + var_9_int), "pers_soldat", "d10q01_soldier.xml");
				var_0_object->add(var_20_object); //@t
				var_9_int += 1;
			}

			object var_40_object; object var_41_object;
			var_8_object = var_41_object;
			func_158(var_40_object, var_41_object, "pt_d10q01_msoldier", "pers_soldat", "d10q01_msoldier.xml");
			var_0_object->add(var_40_object); //@t
			object var_45_object; object var_46_object;
			func_176(var_45_object, var_46_object, "pt_d10q01_sketch", "scripted_container", "d10q01_blueprint.xml");
			var_1_object = var_45_object;
			@GetMainOutdoorScene(var_46_object);
			object var_63_object; object var_64_object;
			var_8_object = var_64_object;
			func_158(var_63_object, var_64_object, "pt_d10q01_petr", "pers_birdmask", "d10q01_petr.xml");
			var_2_object = var_63_object;
			object var_68_object; object var_69_object;
			var_8_object = var_69_object;
			func_176(var_68_object, var_69_object, "pt_d10q01_fire", "scripted", "d10q01_fire.xml");
			var_3_object = var_68_object;
			var_8_object = null;
		} else if(var_5_string == "soldier_fight") {
				func_222(var_0_object, "attack");
				var_4_bool = true;
		}

		for(;;) {
			return 4;

		}
	
		if(var_5_string == "house_unload") {
			func_194("house_petr@door1", true);
		} else if(var_5_string == "fail") {
			func_109();
		} else if(var_5_string == "completed") {
			func_117();
		}
	}

}


void func_194(string var_88_string, bool var_89_bool)
{
	object var_91_object;
	@FindActor(var_91_object, var_88_string);
	if(!var_91_object) //@nz
		@Trace(("Door " + var_88_string) + " not found");
	var_91_object->SetProperty("locked", var_89_bool);
}
EMIT "Stack[-1] = 0";


void func_109(void)
{
	@SetVariable("d10q01", -1);
	func_125(var_6_object, var_7_int, var_8_object, var_9_int);
}


void func_176(object var_45_object, object var_46_object, string var_47_string, string var_48_string, string var_49_string)
{
	bool var_54_bool; cvector var_55_cvector; cvector var_56_cvector;
	var_46_object->GetLocator(var_47_string, var_54_bool, var_55_cvector, var_56_cvector);
	if(!var_54_bool) //@nz
		@Trace(("Locator " + var_47_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_48_string, var_46_object, var_55_cvector, var_56_cvector, var_49_string);
	object var_57_object = var_45_object;
	
}
EMIT "Stack[-1] = 0";


void func_210(bool var_12_bool, string var_13_string)
{
	object var_15_object;
	@FindActor(var_15_object, var_13_string);
	if(!var_15_object) //@nz
		var_12_bool = false;
	@RemoveActor(var_15_object);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


void func_117(void)
{
	@SetVariable("d10q01", 1000);
	func_125(var_6_object, var_7_int, var_8_object, var_9_int);
}


void func_152(object var_5_object)
{
	object var_7_object;
	@CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
}
EMIT "Stack[-1] = 0";


void func_158(object var_20_object, object var_21_object, string var_22_string, string var_23_string, string var_24_string)
{
	bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	var_21_object->GetLocator(var_22_string, var_30_bool, var_31_cvector, var_32_cvector);
	if(!var_30_bool) //@nz
		@Trace(("Locator " + var_22_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_23_string, var_21_object, var_31_cvector, var_32_cvector, var_24_string);
	object var_33_object = var_20_object;
	
}
EMIT "Stack[-1] = 0";


void func_125(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	func_222(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	func_194("house_petr@door1", false);
}


void func_222(object var_75_object, string var_76_string)
{
	int var_80_int; object var_82_object;
	var_75_object->size(var_80_int);
	int var_81_int = 0;
	
	while(var_81_int < var_80_int) {
		var_75_object->get(var_82_object, var_81_int);
		if(var_82_object != 0)
			@Trigger(var_82_object, var_76_string);
		var_82_object = null;
		var_81_int += 1;
	}
	
}


