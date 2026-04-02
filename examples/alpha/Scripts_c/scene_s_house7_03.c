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
		bool var_0_bool;
		func_81(var_0_bool, "quest_d4_02", "scene_load");
		func_19();
	}

	void OnUnload(void)
	{
		bool var_0_bool;
		func_81(var_0_bool, "quest_d4_02", "scene_unload");
	}

}


task task_1
{
	void OnUnload(void)
	{
		bool var_0_bool;
		func_81(var_0_bool, "quest_d4_02", "scene_unload");
		func_57();
	}

}


void func_34(void)
{
	bool var_8_bool; cvector var_9_cvector;
	@Sleep(3, var_8_bool);
	if(!var_8_bool) { //@nz
	}
	for(;;) {
		@GetRandomPFPoint(var_9_cvector, 0, 0);
		cvector var_14_cvector;
		var_9_cvector = var_14_cvector;
		func_60(var_14_cvector);
		@Sleep(30, var_8_bool);
		if(!var_8_bool) //@nz
			break;
	}
}


void func_75(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_81(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


void func_19(void)
{
	TaskCall(1);
	func_34();
	TaskReturn();
}


void func_57(void)
{
	@StopGroup0();
}


void func_60(cvector var_14_cvector)
{
	@Trace("New fog at " + var_14_cvector);
	object var_20_object;
	func_75(var_20_object);
	object var_16_object;
	@AddActorByType(var_16_object, "fog", var_20_object, var_14_cvector, [0.0, 0.0, 1.0], "horror_fog.xml");
}
EMIT "Stack[-1] = 0";


