task task_0
{
	void OnLoad(void)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(void)
	{
		bool var_2_bool;
		func_84(var_2_bool);
		if(!var_2_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		object var_1_object;
		@FindParticleSystem("bonfire", var_1_object);
		if(var_1_object == null)
			@Trace("Can't find fire particle system");
		var_1_object->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([10.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([0.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([-10.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([0.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([10.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([-10.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([-10.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->AddSource([10.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->Enable();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnUnload(void)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


void func_0(void)
{
	@Hold();
}


void func_84(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


