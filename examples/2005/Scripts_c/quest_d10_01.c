maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool)
	{
		object var_6_object;
		@GetSceneByName(var_6_object, "warehouse_rubin");
		@Trigger(var_6_object, "rubin");
		func_235("house_petr@door1", false);
		object var_19_object;
		func_193(var_19_object);
		var_0_object = var_19_object;
		var_4_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, bool var_4_bool, string var_5_string)
	{
		int var_8_int; object var_9_object; int var_10_int; int var_11_int;
		@Trace(var_5_string);
		if(var_5_string == "init_house") {
			bool var_14_bool;
			func_252(var_14_bool, "NPC_Petr");
			@GetSceneByName(var_9_object, "house_petr");
			var_10_int = 1;

			while(var_10_int <= 4) {
				object var_22_object; object var_23_object;
				var_9_object = var_23_object;
				func_199(var_22_object, var_23_object, ("pt_d10q01_soldier" + var_10_int), "pers_soldat", "d10q01_soldier.xml");
				var_0_object->add(var_22_object); //@t
			}

			object var_42_object; object var_43_object;
			var_9_object = var_43_object;
			func_199(var_42_object, var_43_object, "pt_d10q01_msoldier", "pers_soldat", "d10q01_msoldier.xml");
			var_0_object->add(var_42_object); //@t
			object var_47_object; object var_48_object;
			func_217(var_47_object, var_48_object, "pt_d10q01_sketch", "scripted_container", "d10q01_blueprint.xml");
			var_1_object = var_47_object;
			@GetMainOutdoorScene(var_48_object);
			object var_65_object; object var_66_object;
			var_9_object = var_66_object;
			func_199(var_65_object, var_66_object, "pt_d10q01_petr", "pers_birdmask", "d10q01_petr.xml");
			var_2_object = var_65_object;
			object var_70_object; object var_71_object;
			var_9_object = var_71_object;
			func_217(var_70_object, var_71_object, "pt_d10q01_fire", "scripted", "d10q01_fire.xml");
			var_3_object = var_70_object;
		} else if(var_5_string == "soldier_fight") {
				func_264(var_0_object, "attack");
				var_4_bool = true;
		}
	Label_138:
		for(;;) {

		}
	
		if(var_5_string == "house_unload") {
			func_235("house_petr@door1", true);
			goto Label_138;
		}
		if(var_5_string == "cleanup") {
			@GetVariable("d10q01", var_11_int);
			if(var_11_int != 1000)
				func_139();
			else
				func_155(var_8_int, Obj(), (var_10_int + 1), var_11_int);
			if(var_5_string == "fail") {
				func_139();
			} else if(var_5_string == "completed") {
				func_147();
			}
		}
		goto Label_138;
	
	}

}


void func_193(object var_19_object)
{
	object var_21_object;
	@CreateObjectVector(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_199(object var_22_object, object var_23_object, string var_24_string, string var_25_string, string var_26_string)
{
	bool var_32_bool; cvector var_33_cvector; cvector var_34_cvector;
	var_23_object->GetLocator(var_24_string, var_32_bool, var_33_cvector, var_34_cvector);
	if(!var_32_bool) //@nz
		@Trace(("Locator " + var_24_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_25_string, var_23_object, var_33_cvector, var_34_cvector, var_26_string);
	object var_35_object = var_22_object;
	
}
EMIT "Stack[-1] = 0";


void func_264(object var_77_object, string var_78_string)
{
	int var_82_int; int var_83_int; object var_84_object;
	if(var_77_object != 0) {
		var_77_object->size(var_82_int);
		var_83_int = 0;

		for(;;) {
			if(!(var_83_int < var_82_int)) goto Label_282;
			var_77_object->get(var_84_object, var_83_int);
			if(var_84_object != 0)
				@Trigger(var_84_object, var_78_string);
			var_84_object = null;
			var_83_int += 1;
		}
	}
Label_282:
}


void func_235(string var_9_string, bool var_10_bool)
{
	object var_12_object;
	@FindActor(var_12_object, var_9_string);
	if(!var_12_object) //@nz
		@Trace(("Door " + var_9_string) + " not found");
	else
		var_12_object->SetProperty("locked", var_10_bool);
	
}
EMIT "Stack[-1] = 0";


void func_139(void)
{
	@SetVariable("d10q01", -1);
	func_155(var_8_int, var_9_object, var_10_int, var_11_int);
}


void func_187(object var_118_object)
{
	object var_120_object;
	@self(var_120_object);
	var_120_object = var_118_object;
}
EMIT "Stack[-1] = 0";


void func_147(void)
{
	@SetVariable("d10q01", 1000);
	func_155(var_8_int, var_9_object, var_10_int, var_11_int);
}


void func_217(object var_47_object, object var_48_object, string var_49_string, string var_50_string, string var_51_string)
{
	bool var_56_bool; cvector var_57_cvector; cvector var_58_cvector;
	var_48_object->GetLocator(var_49_string, var_56_bool, var_57_cvector, var_58_cvector);
	if(!var_56_bool) //@nz
		@Trace(("Locator " + var_49_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_50_string, var_48_object, var_57_cvector, var_58_cvector, var_51_string);
	object var_59_object = var_47_object;
	
}
EMIT "Stack[-1] = 0";


void func_155(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	func_264(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	func_235("house_petr@door1", false);
	object var_118_object;
	func_187(var_118_object);
	@RemoveActor(var_118_object);
}


void func_252(bool var_14_bool, string var_15_string)
{
	object var_17_object;
	@FindActor(var_17_object, var_15_string);
	if(!var_17_object) //@nz
		var_14_bool = false;
	@RemoveActor(var_17_object);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


