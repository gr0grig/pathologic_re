maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d6q03", 1);
		func_116(6);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "completed") {
			func_83();
		} else if(var_1_string == "fail") {
				func_75();
		}

	
		if(var_1_string == "place_albinos") {
			@GetMainOutdoorScene(var_3_object);
			object var_26_object; object var_27_object;
			var_3_object = var_27_object;
			func_146(var_26_object, var_27_object, "pt_d6q03_albinos", "pers_albinos", "d6q03_albinos.xml");
			var_0_object = var_26_object;
			var_3_object = null;
		} else if(var_1_string == "albinos_retreated") {
			@SetVariable("d6q03AlbinosFlee", 1);
			var_0_object->Remove(); //@t
		} else if(var_1_string == "albinos_dead") {
			@SetVariable("d6q03AlbinosKilled", 1);
			func_206();
			var_0_object->Remove(); //@t
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_64();
	}

}


void func_64(void)
{
	int var_4_int;
	@GetVariable("d6q03", var_4_int);
	if(var_4_int != 1000)
		func_75();
}


void func_164(object var_67_object)
{
	object var_69_object;
	@GetDiaryRoot(var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_67_object = false;
	}
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


void func_105(object var_0_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	object var_10_object;
	func_140(var_10_object);
	@RemoveActor(var_10_object);
}


void func_75(void)
{
	@SetVariable("d6q03", -1);
	func_105(var_4_int);
}


void func_140(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_206(void)
{
	@Trace("Adding diary entry");
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 108, 2, 13731);
	bool var_58_bool; object var_59_object;
	var_53_object = var_59_object;
	func_177(var_58_bool, var_59_object, 107);
}
EMIT "Stack[-1] = 0";


void func_177(bool var_58_bool, object var_59_object, int var_60_int)
{
	object var_67_object;
	func_164(var_67_object);
	object var_64_object;
	var_67_object = var_64_object;
	object var_65_object;
	var_64_object->Find(var_60_int, var_65_object);
	if(!var_65_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_60_int);
		var_58_bool = false;
	}
	var_65_object->AddChild(var_59_object);
	@SetVariable("player_diary", 1);
	int var_66_int;
	var_59_object->GetCategory(var_66_int);
	@SetDiarySection(var_66_int);
	var_58_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_146(object var_26_object, object var_27_object, string var_28_string, string var_29_string, string var_30_string)
{
	bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	var_27_object->GetLocator(var_28_string, var_35_bool, var_36_cvector, var_37_cvector);
	if(!var_35_bool) //@nz
		@Trace(("Locator " + var_28_string) + " doesn't exist");
	else
		var_27_object->AddStationaryActor(Obj(), var_36_cvector, var_37_cvector, var_29_string, var_30_string);
	object var_38_object = var_26_object;
	
}
EMIT "Stack[-1] = 0";


void func_83(void)
{
	int var_7_int;
	@GetVariable("d6q03", var_7_int);
	bool var_9_bool = false;
	if(var_7_int != 1000) {
		if(var_7_int != -1)
			var_9_bool = true;
	}
	if(var_9_bool != 0) {
		@SetVariable("d6q03", 1000);
		func_105(var_7_int);
	}
}


void func_116(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	if(var_5_float >= (var_3_int * 24)) {
		func_105(var_5_float);
	} else {
		@SetTimeEvent(0, (var_3_int * 24));
		@Hold();
	}
	
}


