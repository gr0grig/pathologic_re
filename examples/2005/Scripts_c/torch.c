// @GLOBALS: 0:object:

maintask task_0
{
	void init(void)
	{
		object var_1_object;
		@FindParticleSystem("torch", var_1_object);
		if(var_1_object == null)
			@Trace("Can't find torch particle system");
		var_1_object->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		var_1_object->Enable();
		var_8_object = GlobalVars[0];
		var_1_object = var_8_object;
		GlobalVars[0] = var_8_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(string name)
	{
		if(name == "remove") {
			TaskCall(1);
			func_35();
			TaskReturn();
		}
	}

}


task task_1
{
}


void func_51(object var_6_object)
{
	object var_8_object;
	@self(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_35(void)
{
	var_3_object = GlobalVars[0];
	if(var_3_object != 0) {
		var_4_object = GlobalVars[0];
		var_4_object->Fade();
	}
	@Sleep(1);
	object var_6_object;
	func_51(var_6_object);
	@RemoveActor(var_6_object);
	@Hold();
}


