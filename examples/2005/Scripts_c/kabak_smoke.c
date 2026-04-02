// @GLOBALS: 0:int:Material

maintask task_0
{
	void init(void)
	{
		bool var_2_bool;
		func_55(var_2_bool);
		if(!var_2_bool) { //@nz
			object var_6_object;
			func_60(var_6_object);
			@RemoveActor(var_6_object);
		}
		object var_1_object;
		@FindParticleSystem("smoke", var_1_object);
		var_1_object->Enable();
		var_1_object->AddSource([0.0, 0.0, 0.0], [0.0, 0.0, 0.0], 1.5);
		var_1_object->AddSource([150.0, 0.0, 150.0], [0.0, 0.0, 0.0], 1.5);
		var_1_object->AddSource([-150.0, 0.0, -150.0], [0.0, 0.0, 0.0], 1.5);
		var_1_object->AddSource([-150.0, 0.0, 150.0], [0.0, 0.0, 0.0], 1.5);
		var_1_object->AddSource([150.0, 0.0, -150.0], [0.0, 0.0, 0.0], 1.5);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnUnload(void)
	{
		object var_0_object;
		func_60(var_0_object);
		@RemoveActor(var_0_object);
		@sync();
	}

}


void func_60(object var_6_object)
{
	object var_8_object;
	@self(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_55(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


