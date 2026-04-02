// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d4q02", 1);
		func_244("s_house7_03_door1", true);
		func_244("s_house7_03_door2", true);
		func_261("house7_03@door1", true, false);
		func_261("house7_03@door2", true, false);
		func_185(4);
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
				func_215(var_11_object, "quest_d4_02_survival");
			}
		} else if(var_1_string == "scene_unload") {
				if(var_0_object != 0)
					var_0_object->Remove(); //@t
				func_244("s_house7_03_door2", false);
		}

	
		if(var_1_string == "birdmask") {
			@GetMainOutdoorScene(var_5_object);
			object var_34_object; object var_35_object;
			var_5_object = var_35_object;
			func_226(var_34_object, var_35_object, "pt_d4q02_birdmask", "pers_birdmask", "d4q02_birdmask.xml");
			var_0_object = var_34_object;
			var_5_object = null;
		} else if(var_1_string == "birdmask_talk") {
			func_244("house7_03@door1", false);
		} else if(var_1_string == "survived") {
			func_244("s_house7_03_door1", false);
			@SetVariable("d4q02_survived", 1);
			@PlaySound("door_open");
			func_281();
		} else if(var_1_string == "completed") {
			func_132();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_113();
	}

}


void func_226(object var_34_object, object var_35_object, string var_36_string, string var_37_string, string var_38_string)
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


void func_132(void)
{
	int var_89_int;
	@GetVariable("d4q02", var_89_int);
	bool var_91_bool = false;
	if(var_89_int != 1000) {
		if(var_89_int != -1)
			var_91_bool = true;
	}
	if(var_91_bool != 0) {
		@SetVariable("d4q02", 1000);
		func_154(var_89_int);
	}
}


void func_261(string var_15_string, bool var_16_bool, bool var_17_bool)
{
	object var_19_object;
	@FindActor(var_19_object, var_15_string);
	if(!var_19_object) { //@nz
		@Trace(("Door " + var_15_string) + " not found");
	} else {
		var_19_object->SetProperty("locked", var_16_bool);
		var_19_object->SetProperty("lp", var_17_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_294(object var_77_object)
{
	object var_79_object;
	@GetDiaryRoot(var_79_object);
	if(!var_79_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_77_object = false;
	}
	var_79_object = var_77_object;
}
EMIT "Stack[-1] = 0";


void func_281(void)
{
	object var_64_object;
	@CreateDiaryEntry(var_64_object, 629, 2, 532893);
	bool var_68_bool; object var_69_object;
	var_64_object = var_69_object;
	func_307(var_68_bool, var_69_object, 21);
}
EMIT "Stack[-1] = 0";


void func_209(object var_45_object)
{
	object var_47_object;
	@self(var_47_object);
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_113(void)
{
	int var_4_int;
	@GetVariable("d4q02", var_4_int);
	if(var_4_int != 1000)
		func_124();
}


void func_307(bool var_68_bool, object var_69_object, int var_70_int)
{
	object var_77_object;
	func_294(var_77_object);
	object var_74_object;
	var_77_object = var_74_object;
	object var_75_object;
	var_74_object->Find(var_70_int, var_75_object);
	if(!var_75_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_70_int);
		var_68_bool = false;
	}
	var_75_object->AddChild(var_69_object);
	@SendWorldWndMessage(7);
	int var_76_int;
	var_69_object->GetCategory(var_76_int);
	@SetDiarySection(var_76_int);
	var_68_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_244(string var_3_string, bool var_4_bool)
{
	object var_6_object;
	@FindActor(var_6_object, var_3_string);
	if(!var_6_object) //@nz
		@Trace(("Door " + var_3_string) + " not found");
	else
		var_6_object->SetProperty("locked", var_4_bool);
	
}
EMIT "Stack[-1] = 0";


void func_215(object var_11_object, string var_12_string)
{
	object var_15_object;
	@GetMainOutdoorScene(var_15_object);
	object var_16_object;
	@AddBlankActor(var_16_object, var_15_object, var_12_string, (var_12_string + ".bin"));
	var_16_object = var_11_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_185(int var_30_int)
{
	float var_32_float;
	@GetGameTime(var_32_float);
	if(var_32_float >= (var_30_int * 24)) {
		func_154(var_32_float);
	} else {
		@SetTimeEvent(0, (var_30_int * 24));
		@Hold();
	}
	
}


void func_154(object var_0_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	func_244("s_house7_03_door1", false);
	func_244("s_house7_03_door2", false);
	func_244("house7_03@door1", false);
	func_244("house7_03@door2", false);
	object var_45_object;
	func_209(var_45_object);
	@RemoveActor(var_45_object);
}


void func_124(void)
{
	@SetVariable("d4q02", -1);
	func_154(var_4_int);
}


