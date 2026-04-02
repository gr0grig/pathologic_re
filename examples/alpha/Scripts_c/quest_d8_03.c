maintask task_0
{
	void init(void)
	{
		@SetVariable("d8q03", 1);
		func_60(8);
	}

	// @pe
	void OnTrigger(string name)
	{
		@Trace(name);
		if(name == "fail") {
			func_37();
		} else if(name == "completed") {
			func_45();
		}
	
	}

	// @pe
	void OnGameTime(int iID, float fTime)
	{
		func_26();
	}

}


void func_37(void)
{
	@SetVariable("d8q03", -1);
	func_53();
}


void func_45(void)
{
	@SetVariable("d8q03", 1000);
	func_53();
}


void func_84(object var_8_object)
{
	object var_10_object;
	@self(var_10_object);
	var_10_object = var_8_object;
}
EMIT "Stack[-1] = 0";


void func_53(void)
{
	object var_8_object;
	func_84(var_8_object);
	@RemoveActor(var_8_object);
}


void func_26(void)
{
	int var_3_int;
	@GetVariable("d8q03", var_3_int);
	if(var_3_int != 1000)
		func_37();
}


void func_60(int var_2_int)
{
	float var_4_float;
	@GetGameTime(var_4_float);
	if(var_4_float >= (var_2_int * 24)) {
		func_53();
	} else {
		@SetTimeEvent(0, (var_2_int * 24));
		@Hold();
	}
	
}


