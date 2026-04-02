maintask task_0
{
	void init(void)
	{
		object var_3_object;
		bool var_4_bool;
		func_79(var_4_bool);
		if(!var_4_bool) //@nz
			@Hold();
		object var_2_object;
		@FindParticleSystem("fire", var_2_object);
		if(var_2_object == null)
			@Trace("Can't find fire particle system");
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
	
		while(true != 0) {
			@PlayLoopedGlobalSound(var_3_object, "fire_loop", [0.0, 10.0, 0.0]);
			@Hold();
			var_3_object = null;
		}
	
	}
	EMIT "Stack[-2] = 0";

	void OnLoad(void)
	{
		@StopGroup0();
	}

}


void func_79(bool var_4_bool)
{
	bool var_6_bool;
	@IsLoaded(var_6_bool);
	var_6_bool = var_4_bool;
}


