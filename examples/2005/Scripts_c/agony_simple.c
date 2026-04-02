maintask task_0
{
	void init(void)
	{
		@RemoveEnvelope();
		@RemoveRTEnvelope();
	
	Label_5:
		for(;;) {
			bool var_2_bool;
			func_42(var_2_bool);
			var_5_bool = !var_2_bool; //@nz
			if(var_5_bool == 0) goto Label_13;
			@Hold();
		}
	
	Label_13:
		bool var_1_bool;
		@Is3DSoundLoaded(var_1_bool, "agony");
		bool var_7_bool = false;
		if(var_1_bool != 0) {
			bool var_9_bool;
			func_47(var_9_bool, 0.33333334);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0)
			@PlayGlobalSound("agony", [0.0, 40.0, 0.0]);
		@PlayAnimation("all", "agony");
		@WaitForAnimEnd(var_1_bool);
		goto Label_5;
	}
	EMIT "Return(); Pop(2)";

	void OnLoad(void)
	{
		@StopGroup0();
	}

}


void func_42(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_47(bool var_9_bool, float var_10_float)
{
	float var_12_float;
	@rand(var_12_float);
	var_9_bool = var_12_float < var_10_float;
}


