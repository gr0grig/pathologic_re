maintask task_0
{
	void init(void)
	{
		@RemoveOverride();
		@ModBlurLevel(0.15);
		@CameraSwitchToNormal();
		object var_1_object;
		func_33(var_1_object);
		@RemoveActor(var_1_object);
		@CameraPlayRel("danko_death.mot", true);
		@Sleep(1.5);
		func_40((float)0, (float)1, 1.25);
		@CameraWaitForPlayFinish();
		@GameOver("gameover.xml");
		@Hold();
	}

}


void func_40(float var_8_float, float var_9_float, float var_10_float)
{
	bool var_14_bool; float var_16_float;
	var_14_bool = var_9_float > var_8_float;
	
	for(;;) {
		if(var_14_bool != 0)
			var_19_bool = var_8_float < var_9_float;
		else
			var_21_bool = var_9_float < var_8_float;
		if(var_19_bool == 0) goto Label_57;
		@ModDarkenLevel(var_8_float);
		@sync(var_16_float);
		var_8_float += (var_16_float * ((var_9_float - var_8_float) / var_10_float));
	}
	
Label_57:
	@ModDarkenLevel(var_9_float);
	
}


void func_33(object var_1_object)
{
	object var_3_object;
	@FindActor(var_3_object, "player");
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


