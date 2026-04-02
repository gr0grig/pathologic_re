maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d1q02", 1);
		object var_2_object;
		@GetSceneByName(var_2_object, "cot_anna");
		@AddScriptedActor(var_0_object, "cot_anna_corpse", "actor_disp.bin", var_2_object, [0.0, 0.0, 0.0]);
		func_68(1);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "completed")
			func_48();
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_29();
	}

}


void func_68(int var_9_int)
{
	float var_11_float;
	@GetGameTime(var_11_float);
	if(var_11_float >= (var_9_int * 24)) {
		func_56(var_11_float);
	} else {
		@SetTimeEvent(0, (var_9_int * 24));
		@Hold();
	}
	
}


void func_40(void)
{
	@SetVariable("d1q02", -1);
	func_56(var_4_int);
}


void func_48(void)
{
	@SetVariable("d1q02", 1000);
	func_56(var_1_string);
}


void func_56(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_17_object;
	func_92(var_17_object);
	@RemoveActor(var_17_object);
}


void func_92(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_29(void)
{
	int var_4_int;
	@GetVariable("d1q02", var_4_int);
	if(var_4_int != 1000)
		func_40();
}


