task task_0
{
	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

}


maintask task_1
{
	void init(void)
	{
		bool var_4_bool;
		func_96(var_4_bool);
		if(!var_4_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		object var_2_object;
		@FindParticleSystem("fire", var_2_object);
		if(var_2_object == null)
			@Trace("Can't find fire particle system");
		object var_3_object;
		@PlayLoopedGlobalSound(var_3_object, "fire_loop", [0.0, 10.0, 0.0]);
		var_2_object->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([10.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([0.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([-10.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([0.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([10.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([-10.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([-10.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->AddSource([10.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		var_2_object->Enable();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";

	void OnUnload(void)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


void func_96(bool var_4_bool)
{
	bool var_6_bool;
	@IsLoaded(var_6_bool);
	var_6_bool = var_4_bool;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_8_bool;
	func_96(var_8_bool);
	if(!var_8_bool) goto Label_0; //@nz
}


