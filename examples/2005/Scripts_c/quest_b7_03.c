// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		func_84(7);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "place_birdmask") {
			@GetSceneByName(var_3_object, "theater");
			object var_7_object; object var_8_object;
			var_3_object = var_8_object;
			func_114(var_7_object, var_8_object, "pt_b7q03_birdmask", "pers_birdmask", "b7q03_birdmask.xml");
			var_3_object = null;
		} else if(var_1_string == "remove_birdmask") {
				@Trigger(var_7_object, "cleanup");
		}

	
		if(var_1_string == "fail") {
			func_56();
		} else if(var_1_string == "completed") {
			func_64();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_45();
	}

}


void func_64(void)
{
	@SetVariable("b7q03", 1000);
	func_72(var_3_object);
}


void func_72(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_9_object;
	func_108(var_9_object);
	@RemoveActor(var_9_object);
}


void func_108(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_45(void)
{
	int var_4_int;
	@GetVariable("b7q03", var_4_int);
	if(var_4_int != 1000)
		func_56();
}


void func_114(object var_7_object, object var_8_object, string var_9_string, string var_10_string, string var_11_string)
{
	bool var_16_bool; cvector var_17_cvector; cvector var_18_cvector;
	var_8_object->GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector);
	if(!var_16_bool) //@nz
		@Trace(("Locator " + var_9_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string);
	object var_19_object = var_7_object;
	
}
EMIT "Stack[-1] = 0";


void func_84(int var_1_int)
{
	float var_3_float;
	@GetGameTime(var_3_float);
	if(var_3_float >= (var_1_int * 24)) {
		func_72(var_3_float);
	} else {
		@SetTimeEvent(0, (var_1_int * 24));
		@Hold();
	}
	
}


void func_56(void)
{
	@SetVariable("b7q03", -1);
	func_72(var_4_int);
}


