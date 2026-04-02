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


// @pe
void func_22(string var_8_string)
{
	@Trace("playing: " + var_8_string);
	@CameraPlay(var_8_string);
	@CameraWaitForPlayFinish();
	@CameraSwitchToNormal();
}


