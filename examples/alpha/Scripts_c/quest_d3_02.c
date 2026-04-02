maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		@SetVariable("d3q02", 1);
		object var_7_object;
		func_157(var_7_object, "r7_house2_01");
		object var_4_object;
		var_7_object = var_4_object;
		object var_11_object; object var_12_object;
		var_4_object = var_12_object;
		func_163(var_11_object, var_12_object, "pt_d3q02_butcher", "pers_butcher", "d3q02_butcher.xml");
		var_0_object = var_11_object;
		@AddScriptedActor(var_1_object, "d3q02_corpse", "actor_disp.bin", var_4_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_2_object, "d3q02_btrigger", "quest_d3_02_btrigger.bin", var_4_object, [0.0, 0.0, 0.0]);
		func_127(3);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		@Trace(var_3_string);
		if(var_3_string == "butcher_trigger") {
			if(var_0_object != 0)
				@Trigger(var_0_object, "trigger");
			func_101(var_1_object, var_2_object, var_3_string);
			@SetVariable("d3q02SeeCorpse", 1);
		} else if(var_3_string == "completed") {
			func_79();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		func_60();
	}

}


void func_163(object var_11_object, object var_12_object, string var_13_string, string var_14_string, string var_15_string)
{
	bool var_20_bool; cvector var_21_cvector; cvector var_22_cvector;
	var_12_object->GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector);
	if(!var_20_bool) //@nz
		@Trace(("Locator " + var_13_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_14_string, var_12_object, var_21_cvector, var_22_cvector, var_15_string);
	object var_23_object = var_11_object;
	
}
EMIT "Stack[-1] = 0";


void func_101(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
}


void func_71(void)
{
	@SetVariable("d3q02", -1);
	func_117();
}


void func_79(void)
{
	int var_19_int;
	@GetVariable("d3q02", var_19_int);
	bool var_21_bool = false;
	if(var_19_int != 1000) {
		if(var_19_int != -1)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		@SetVariable("d3q02", 1000);
		func_117();
	}
}


void func_117(void)
{
	func_101(var_35_int, var_36_float, var_37_float);
	object var_47_object;
	func_151(var_47_object);
	@RemoveActor(var_47_object);
}


void func_151(object var_47_object)
{
	object var_49_object;
	@self(var_49_object);
	var_49_object = var_47_object;
}
EMIT "Stack[-1] = 0";


void func_60(void)
{
	int var_6_int;
	@GetVariable("d3q02", var_6_int);
	if(var_6_int != 1000)
		func_71();
}


void func_157(object var_7_object, string var_8_string)
{
	object var_10_object;
	@GetSceneByName(var_10_object, var_8_string);
	var_10_object = var_7_object;
}
EMIT "Stack[-1] = 0";


void func_127(int var_35_int)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	if(var_37_float >= (var_35_int * 24)) {
		func_117();
	} else {
		@SetTimeEvent(0, (var_35_int * 24));
		@Hold();
	}
	
}


