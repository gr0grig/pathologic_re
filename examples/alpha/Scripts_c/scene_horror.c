maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(void)
	{
		TaskCall(1);
		func_10();
		TaskReturn();
	}

}


task task_1
{
	void OnUnload(void)
	{
		@StopGroup0();
	}

}


void func_10(void)
{
	bool var_2_bool; cvector var_3_cvector;
	@Sleep(3, var_2_bool);
	if(!var_2_bool) { //@nz
	}
	for(;;) {
		@GetRandomPFPoint(var_3_cvector, 0, 0);
		cvector var_8_cvector;
		var_3_cvector = var_8_cvector;
		func_36(var_8_cvector);
		@Sleep(30, var_2_bool);
		if(!var_2_bool) //@nz
			break;
	}
}


void func_51(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_36(cvector var_8_cvector)
{
	@Trace("New fog at " + var_8_cvector);
	object var_14_object;
	func_51(var_14_object);
	object var_10_object;
	@AddActorByType(var_10_object, "fog", var_14_object, var_8_cvector, [0.0, 0.0, 1.0], "horror_fog.xml");
}
EMIT "Stack[-1] = 0";


