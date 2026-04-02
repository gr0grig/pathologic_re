maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d7q02", 1);
		func_92(7);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "completed") {
			func_58();
		} else if(var_1_string == "fail") {
				func_50();
		}
	Label_38:
		for(;;) {

		}
	
		if(!(var_1_string == "place_corpse")) goto Label_38;
		object var_3_object;
		@GetMainOutdoorScene(var_3_object);
		@AddActor(var_0_object, "d7q02_corpse", var_3_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d7q02_corpse.xml");
		var_3_object = null;
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_39();
	}

}


void func_39(void)
{
	int var_4_int;
	@GetVariable("d7q02", var_4_int);
	if(var_4_int != 1000)
		func_50();
}


void func_80(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_11_object;
	func_116(var_11_object);
	@RemoveActor(var_11_object);
}


void func_50(void)
{
	@SetVariable("d7q02", -1);
	func_80(var_4_int);
}


void func_116(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_58(void)
{
	int var_7_int;
	@GetVariable("d7q02", var_7_int);
	bool var_9_bool = false;
	if(var_7_int != 1000) {
		if(var_7_int != -1)
			var_9_bool = true;
	}
	if(var_9_bool != 0) {
		@SetVariable("d7q02", 1000);
		func_80(var_7_int);
	}
}


void func_92(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	if(var_5_float >= (var_3_int * 24)) {
		func_80(var_5_float);
	} else {
		@SetTimeEvent(0, (var_3_int * 24));
		@Hold();
	}
	
}


