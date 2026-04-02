// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


maintask task_1
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(string name)
	{
		var_2_int = "@Trigger : " + name;
		@Trace(var_2_int);
		if(name == "d2q01_trigger") {
			TaskCall(0);
			func_0("scenes/d2q01_trigger.mot");
			TaskReturn();
		}
	}

	void OnLoad(void)
	{
		bool var_0_bool;
		func_66(var_0_bool, "quest_b1_05", "house_load");
	}

	void OnUnload(void)
	{
	}

}


// @pe
void func_0(string var_5_string)
{
	@RegisterKeyCallback("space");
	@RegisterKeyCallback("escape");
	string var_8_string;
	var_5_string = var_8_string;
	func_22(var_8_string);
	@UnregisterKeyCallback("escape");
	@UnregisterKeyCallback("space");
}


void func_66(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


void func_78(void)
{
	@SetSepia(0.5, 0.886);
}


void func_83(void)
{
	@SetSepia(0, 0);
}


// @pe
void func_22(string var_8_string)
{
	@Trace("playing: " + var_8_string);
	func_78();
	@CameraPlay(var_8_string);
	@CameraWaitForPlayFinish();
	func_83();
	@CameraSwitchToNormal();
}


