maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d11q04", 1);
		func_65(11);
	}

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "fail") {
			func_37();
		} else if(var_1_string == "completed") {
			func_45();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_26();
	}

}


void func_65(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	if(var_5_float >= (var_3_int * 24)) {
		func_53(var_5_float);
	} else {
		@SetTimeEvent(0, (var_3_int * 24));
		@Hold();
	}
	
}


void func_37(void)
{
	@SetVariable("d11q04", -1);
	func_53(var_4_int);
}


void func_45(void)
{
	@SetVariable("d11q04", 1000);
	func_53(var_1_string);
}


void func_53(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_11_object;
	func_89(var_11_object);
	@RemoveActor(var_11_object);
}


void func_89(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_26(void)
{
	int var_4_int;
	@GetVariable("d11q04", var_4_int);
	if(var_4_int != 1000)
		func_37();
}


