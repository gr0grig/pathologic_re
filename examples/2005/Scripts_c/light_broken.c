maintask task_0
{
	void init(float var_0_float, float var_1_float)
	{
		float var_3_float;
	
		for(;;) {
			@Switch(true);
			@rand(var_3_float, 0.05, 1.0);
			@Sleep(var_3_float);
			@Switch(false);
			@rand(var_3_float, 0.05, 1.0);
			@Sleep(var_3_float);
		}
	}
	EMIT "Return(); Pop(2)";

}


