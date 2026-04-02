maintask task_0
{
	void init(void)
	{
		float var_1_float;
		@GetProperty("health", var_1_float);
		if(var_1_float > 0.05)
			@SetProperty("health", 0.05);
		@SetProperty("disease", 0);
	}

}


