// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		object var_2_object;
		@GetSceneByName(var_2_object, "storojka");
		object var_4_object; object var_5_object;
		var_2_object = var_5_object;
		func_138(var_4_object, var_5_object, "pt_b1q02_agony", "pers_worker", "b1q02_agony.xml");
		var_0_object = var_4_object;
		func_97(1);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "agony_dead") {
			@SetVariable("b1q02_dead", true);
		} else if(var_1_string == "agony_cured") {
				@RemoveActor(var_0_object);
				var_0_object = null;
				object var_8_object;
				func_127(var_8_object, "quest_b1_02_cutscene");
		}

	
		if(var_1_string == "fail") {
			func_65();
		} else if(var_1_string == "completed") {
			func_73();
		}
	}

	// @pe
	void OnKeyDown(object var_0_object, int var_1_int)
	{
		@CameraSwitchToNormal();
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_54();
	}

}


void func_65(void)
{
	@SetVariable("b1q02", -1);
	func_81(var_4_int);
}


void func_97(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	if(var_24_float >= (var_22_int * 24)) {
		func_81(var_24_float);
	} else {
		@SetTimeEvent(0, (var_22_int * 24));
		@Hold();
	}
	
}


void func_73(void)
{
	@SetVariable("b1q02", 1000);
	func_81(var_1_string);
}


void func_138(object var_4_object, object var_5_object, string var_6_string, string var_7_string, string var_8_string)
{
	bool var_13_bool; cvector var_14_cvector; cvector var_15_cvector;
	var_5_object->GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector);
	if(!var_13_bool) //@nz
		@Trace(("Locator " + var_6_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_7_string, var_5_object, var_14_cvector, var_15_cvector, var_8_string);
	object var_16_object = var_4_object;
	
}
EMIT "Stack[-1] = 0";


void func_81(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_30_object;
	func_121(var_30_object);
	@RemoveActor(var_30_object);
}


void func_54(void)
{
	int var_4_int;
	@GetVariable("b1q02", var_4_int);
	if(var_4_int != 1000)
		func_65();
}


void func_121(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_127(object var_8_object, string var_9_string)
{
	object var_12_object;
	@GetMainOutdoorScene(var_12_object);
	object var_13_object;
	@AddBlankActor(var_13_object, var_12_object, var_9_string, (var_9_string + ".bin"));
	var_13_object = var_8_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


