// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool)
	{
		bool var_1_bool;
		func_69(var_1_bool);
		if(!var_1_bool) //@nz
			@Hold();
		func_20();
	
		while(true != 0) {
			@PlayAnimation("all", "ill");
			@WaitForAnimEnd();
		}
	
	}

	void OnUnload(bool var_0_bool)
	{
		@StopAnimation();
		if(var_0_bool != 0) {
			object var_2_object;
			func_74(var_2_object);
			@RemoveActor(var_2_object);
		}
		@Hold();
	}

	void OnLoad(bool var_0_bool)
	{
		@StopGroup0();
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			if(!var_3_bool) { //@nz
				object var_7_object;
				func_74(var_7_object);
				@RemoveActor(var_7_object);
			}
		} else if(var_1_string == "restore") {
			var_0_bool = false;
		}
	
	}

}


void OnDispose(bool var_0_bool)
{
	var_1_object = GlobalVars[0];
	if(var_1_object != 0) {
		var_2_object = GlobalVars[0];
		@RemoveActor(var_2_object);
	}
}


void func_74(object var_7_object)
{
	object var_9_object;
	@self(var_9_object);
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


void func_20(void)
{
	object var_7_object;
	@GetScene(var_7_object);
	object var_8_object;
	@AddActor(var_8_object, "b10q04_bull_envelope", var_7_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_12_object = GlobalVars[0];
	var_8_object = var_12_object;
	GlobalVars[0] = var_12_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_69(bool var_1_bool)
{
	bool var_3_bool;
	@IsLoaded(var_3_bool);
	var_3_bool = var_1_bool;
}


