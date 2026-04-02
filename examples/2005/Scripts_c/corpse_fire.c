maintask task_0
{
	void init(void)
	{
		@SetTimer(1, 5.0);
		object var_1_object;
		@FindParticleSystem("fire", var_1_object);
		if(var_1_object == null) {
			@Trace("Can't find fire particle system");
			return 2;
		}
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
		@Hold();
		@KillTimer(1);
		var_1_object->Fade(true);
		@Sleep(2);
		object var_37_object;
		func_95(var_37_object);
		@RemoveActor(var_37_object);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTimer(int iID)
	{
		if(iID == 1)
			@StopGroup0();
	}

	// @pe
	void OnTrigger(string name)
	{
		if(name == "continue")
			@SetTimer(1, 5.0);
	}

}


void func_95(object var_37_object)
{
	object var_39_object;
	@self(var_39_object);
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


