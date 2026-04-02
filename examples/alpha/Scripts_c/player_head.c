maintask task_0
{
	void init(void)
	{
		bool var_1_bool;
	
		for(;;) {
			TaskCall(1);
			func_27();
			TaskReturn();

		Label_6:
			@PlayCameraMotion("head");
			@WaitForCameraMotionEnd();
			@IsWalking(var_1_bool);
			if(!var_1_bool) { //@nz
			} else {
			goto Label_6;
			}
			TaskCall(2);
			func_38();
			TaskReturn();
		}
	
	}
	EMIT "Return(); Pop(2)";

	void OnPlayerStopWalking(void)
	{
		@StopCameraMotion();
	}

}


task task_1
{
	void OnPlayerStartWalking(void)
	{
		@StopGroup0();
	}

}


task task_2
{
}


void func_27(void)
{
	bool var_3_bool;
	@IsWalking(var_3_bool);
	if(!var_3_bool) //@nz
		@Hold();
}


void func_38(void)
{
	@InterpolateCameraMotion(0.08726647, 60.0);
	@WaitForCameraMotionEnd();
}


