maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d4q02", 1);
		func_239("s_house7_03_door1", true);
		func_239("s_house7_03_door2", true);
		func_239("house7_03@door1", true);
		func_239("house7_03@door2", true);
		func_180(4);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		bool var_4_bool; object var_5_object;
		@Trace(var_1_string);
		if(var_1_string == "scene_load") {
			@GetVariable("d4q02_survived", var_4_bool);
			if(!var_4_bool) { //@nz
				@PlaySound("door_close");
				object var_11_object;
				func_210(var_11_object, "quest_d4_02_survival");
			}
		} else if(var_1_string == "scene_unload") {
				if(var_0_object != 0)
					var_0_object->Remove(); //@t
				func_239("s_house7_03_door2", false);
		}

	
		if(var_1_string == "birdmask") {
			@GetMainOutdoorScene(var_5_object);
			object var_34_object; object var_35_object;
			var_5_object = var_35_object;
			func_221(var_34_object, var_35_object, "pt_d4q02_birdmask", "pers_birdmask", "d4q02_birdmask.xml");
			var_0_object = var_34_object;
			var_5_object = null;
		} else if(var_1_string == "birdmask_talk") {
			func_239("house7_03@door1", false);
		} else if(var_1_string == "survived") {
			func_239("s_house7_03_door1", false);
			@SetVariable("d4q02_survived", 1);
			@PlaySound("door_open");
		} else if(var_1_string == "completed") {
			func_127();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_108();
	}

}


void func_204(object var_34_object)
{
	object var_36_object;
	@self(var_36_object);
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_108(void)
{
	int var_4_int;
	@GetVariable("d4q02", var_4_int);
	if(var_4_int != 1000)
		func_119();
}


void func_239(string var_3_string, bool var_4_bool)
{
	object var_6_object;
	@FindActor(var_6_object, var_3_string);
	if(!var_6_object) //@nz
		@Trace(("Door " + var_3_string) + " not found");
	var_6_object->SetProperty("locked", var_4_bool);
}
EMIT "Stack[-1] = 0";


void func_210(object var_11_object, string var_12_string)
{
	object var_15_object;
	@GetMainOutdoorScene(var_15_object);
	object var_16_object;
	@AddBlankActor(var_16_object, var_15_object, var_12_string, (var_12_string + ".bin"));
	var_16_object = var_11_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_180(int var_19_int)
{
	float var_21_float;
	@GetGameTime(var_21_float);
	if(var_21_float >= (var_19_int * 24)) {
		func_149(var_21_float);
	} else {
		@SetTimeEvent(0, (var_19_int * 24));
		@Hold();
	}
	
}


void func_149(object var_0_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	func_239("s_house7_03_door1", false);
	func_239("s_house7_03_door2", false);
	func_239("house7_03@door1", false);
	func_239("house7_03@door2", false);
	object var_34_object;
	func_204(var_34_object);
	@RemoveActor(var_34_object);
}


void func_119(void)
{
	@SetVariable("d4q02", -1);
	func_149(var_4_int);
}


void func_221(object var_34_object, object var_35_object, string var_36_string, string var_37_string, string var_38_string)
{
	bool var_43_bool; cvector var_44_cvector; cvector var_45_cvector;
	var_35_object->GetLocator(var_36_string, var_43_bool, var_44_cvector, var_45_cvector);
	if(!var_43_bool) //@nz
		@Trace(("Locator " + var_36_string) + " doesn't exist");
	else
		var_35_object->AddStationaryActor(Obj(), var_44_cvector, var_45_cvector, var_37_string, var_38_string);
	object var_46_object = var_34_object;
	
}
EMIT "Stack[-1] = 0";


void func_127(void)
{
	int var_66_int;
	@GetVariable("d4q02", var_66_int);
	bool var_68_bool = false;
	if(var_66_int != 1000) {
		if(var_66_int != -1)
			var_68_bool = true;
	}
	if(var_68_bool != 0) {
		@SetVariable("d4q02", 1000);
		func_149(var_66_int);
	}
}


