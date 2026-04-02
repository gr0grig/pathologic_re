// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		func_101(10);
	}

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_5_object; object var_6_object;
		@Trace(var_2_string);
		if(var_2_string == "place_trigger") {
			@GetMainOutdoorScene(var_5_object);
			object var_9_object; object var_10_object;
			var_5_object = var_10_object;
			func_131(var_9_object, var_10_object, "b10q02_trigger", "b10q02_trigger.xml");
			var_0_object = var_9_object;
			var_5_object = null;
		} else if(var_2_string == "place_bomb") {
				@GetMainOutdoorScene(var_6_object);
				object var_19_object; object var_20_object;
				var_6_object = var_20_object;
				func_131(var_19_object, var_20_object, "b10q02_bomb", "b10q02_bomb.xml");
				var_1_object = var_19_object;
				var_6_object = null;
		}

	
		if(var_2_string == "remove_bomb") {
			@Trigger(var_1_object, "cleanup");
		} else if(var_2_string == "fail") {
			func_68();
		} else if(var_2_string == "completed") {
			func_76();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_57();
	}

}


void func_131(object var_9_object, object var_10_object, string var_11_string, string var_12_string)
{
	object var_14_object;
	@AddActor(var_14_object, var_11_string, var_10_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_12_string);
	var_14_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_68(void)
{
	@SetVariable("b10q02", -1);
	func_84(var_4_int, var_5_int);
}


void func_101(int var_2_int)
{
	float var_3_float; float var_4_float;
	@GetGameTime(var_4_float);
	if(var_4_float >= (var_2_int * 24)) {
		func_84(var_3_float, var_4_float);
	} else {
		@SetTimeEvent(0, (var_2_int * 24));
		@Hold();
	}
	
}


void func_76(void)
{
	@SetVariable("b10q02", 1000);
	func_84(var_5_object, var_6_object);
}


void func_84(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_12_object;
	func_125(var_12_object);
	@RemoveActor(var_12_object);
}


void func_57(void)
{
	int var_5_int;
	@GetVariable("b10q02", var_5_int);
	if(var_5_int != 1000)
		func_68();
}


void func_125(object var_12_object)
{
	object var_14_object;
	@self(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


