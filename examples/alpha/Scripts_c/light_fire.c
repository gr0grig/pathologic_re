task task_0
{
	void OnLoad(float var_0_float, float var_1_float)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(float var_0_float, float var_1_float)
	{
		float var_6_float; float var_7_float;
		TaskCall(0);
		func_0();
		TaskReturn();
		cvector var_5_cvector;
		@GetColor(var_5_cvector);
	
		for(;;) {
			@rand(var_6_float, 0.92, 1.0);
			@SetColor(var_5_cvector * var_6_float);
			@rand(var_7_float, 0.075, 0.1);
			@Sleep(var_7_float);
		}
	}
	EMIT "Return(); Pop(6)";

	void OnUnload(float var_0_float, float var_1_float)
	{
		@sync();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


void func_0(void)
{
	@Hold();
}


