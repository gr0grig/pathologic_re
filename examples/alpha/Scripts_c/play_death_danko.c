maintask task_0
{
	void init(void)
	{
		@ModBlurLevel(0.15);
		@CameraPlayRel("danko_death.mot", true);
		@Sleep(1.5);
		func_21((float)0, (float)1, 1.25);
		@CameraWaitForPlayFinish();
		@Hold();
	}

}


void func_21(float var_4_float, float var_5_float, float var_6_float)
{
	bool var_10_bool; float var_12_float;
	var_10_bool = var_5_float > var_4_float;
	
	for(;;) {
		if(var_10_bool != 0)
			var_15_bool = var_4_float < var_5_float;
		else
			var_17_bool = var_5_float < var_4_float;
		if(var_15_bool == 0) goto Label_38;
		@ModDarkenLevel(var_4_float);
		@sync(var_12_float);
		var_4_float += (var_12_float * ((var_5_float - var_4_float) / var_6_float));
	}
	
Label_38:
	@ModDarkenLevel(var_5_float);
	
}


