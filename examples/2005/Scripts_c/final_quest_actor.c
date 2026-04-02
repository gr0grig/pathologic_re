maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(string name)
	{
		float var_3_float; float var_4_float;
		@Trace(name);
		if(name == "voices") {
			@PlaySound("voice");
		} else {
			if(!(name == "whiten")) goto Label_49;
			func_50();
			@CameraPlay("final_theater_cam.mot");
			@CameraWaitForPlayFinish();
			var_3_float = 0;

		Label_26:
			@Trace(1);
			@sync(var_4_float);
			var_3_float += ((var_4_float * 1.0) / 2.0);
			@ModDarkenLevel(var_3_float);
			var_19_bool = var_3_float < 1;
			if(var_19_bool == 1) goto Label_26;
			func_55();
			@CameraSwitchToNormal();
			@TriggerWorld("exit");
		}
	Label_49:
	
	}

}


void func_50(void)
{
	@SetSepia(0.5, 0.886);
}


void func_55(void)
{
	@SetSepia(0, 0);
}


