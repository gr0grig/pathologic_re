maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d6q02", 1);
		func_150(6);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_4_object; object var_5_object;
		@Trace(var_1_string);
		if(var_1_string == "completed") {
			func_117();
		} else if(var_1_string == "fail") {
				func_109();
		}

	
		if(var_1_string == "place_trigger") {
			@GetMainOutdoorScene(var_4_object);
			@AddActor(var_0_object, "d6q02_trigger_bombers", var_4_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d6q02_trigger.xml");
			var_4_object = null;
		} else if(var_1_string == "d6q02_trigger_bombers") {
			@SetVariable("d6q02Trigger", 1);
			@RemoveActor(var_0_object);
			@GetMainOutdoorScene(var_5_object);
			object var_36_object; object var_37_object;
			var_5_object = var_37_object;
			func_180(var_36_object, var_37_object, "pt_d6q02_bomber1", "pers_bomber", "d6q02_bomber.xml");
			object var_54_object; object var_55_object;
			var_5_object = var_55_object;
			func_180(var_54_object, var_55_object, "pt_d6q02_bomber2", "pers_bomber", "d6q02_bomber.xml");
			object var_59_object; object var_60_object;
			var_5_object = var_60_object;
			func_180(var_59_object, var_60_object, "pt_d6q02_bomber3", "pers_bomber", "d6q02_bomber.xml");
			object var_64_object; object var_65_object;
			var_5_object = var_65_object;
			func_180(var_64_object, var_65_object, "pt_d6q02_bomber4", "pers_bomber", "d6q02_bomber.xml");
			object var_69_object; object var_70_object;
			var_5_object = var_70_object;
			func_180(var_69_object, var_70_object, "pt_d6q02_gorbun", "pers_bomber", "d6q02_gorbun.xml");
			var_5_object = null;
		} else if(var_1_string == "gorbun_death") {
			func_240();
			@SetVariable("d6q02GorbunDeath", 1);
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_98();
	}

}


void func_98(void)
{
	int var_4_int;
	@GetVariable("d6q02", var_4_int);
	if(var_4_int != 1000)
		func_109();
}


void func_198(object var_91_object)
{
	object var_93_object;
	@GetDiaryRoot(var_93_object);
	if(!var_93_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_91_object = false;
	}
	var_93_object = var_91_object;
}
EMIT "Stack[-1] = 0";


void func_139(object var_0_object)
{
	if(var_0_object != 0)
		@RemoveActor(var_0_object);
	object var_10_object;
	func_174(var_10_object);
	@RemoveActor(var_10_object);
}


void func_109(void)
{
	@SetVariable("d6q02", -1);
	func_139(var_4_int);
}


void func_174(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_240(void)
{
	@Trace("Adding diary entry");
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 103, 2, 13726);
	bool var_82_bool; object var_83_object;
	var_77_object = var_83_object;
	func_211(var_82_bool, var_83_object, 102);
}
EMIT "Stack[-1] = 0";


void func_211(bool var_82_bool, object var_83_object, int var_84_int)
{
	object var_91_object;
	func_198(var_91_object);
	object var_88_object;
	var_91_object = var_88_object;
	object var_89_object;
	var_88_object->Find(var_84_int, var_89_object);
	if(!var_89_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_84_int);
		var_82_bool = false;
	}
	var_89_object->AddChild(var_83_object);
	@SetVariable("player_diary", 1);
	int var_90_int;
	var_83_object->GetCategory(var_90_int);
	@SetDiarySection(var_90_int);
	var_82_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_180(object var_36_object, object var_37_object, string var_38_string, string var_39_string, string var_40_string)
{
	bool var_45_bool; cvector var_46_cvector; cvector var_47_cvector;
	var_37_object->GetLocator(var_38_string, var_45_bool, var_46_cvector, var_47_cvector);
	if(!var_45_bool) //@nz
		@Trace(("Locator " + var_38_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_39_string, var_37_object, var_46_cvector, var_47_cvector, var_40_string);
	object var_48_object = var_36_object;
	
}
EMIT "Stack[-1] = 0";


void func_117(void)
{
	int var_9_int;
	@GetVariable("d6q02", var_9_int);
	bool var_11_bool = false;
	if(var_9_int != 1000) {
		if(var_9_int != -1)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		@SetVariable("d6q02", 1000);
		func_139(var_9_int);
	}
}


void func_150(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	if(var_5_float >= (var_3_int * 24)) {
		func_139(var_5_float);
	} else {
		@SetTimeEvent(0, (var_3_int * 24));
		@Hold();
	}
	
}


