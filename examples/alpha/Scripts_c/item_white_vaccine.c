maintask task_0
{
	void init(void)
	{
		float var_1_float;
		@GetProperty("immunity", var_1_float);
		if(var_1_float < 0.99)
			@SetProperty("immunity", 0.99);
		bool var_7_bool;
		func_71(var_7_bool, "health", 0.05, (float)0, (float)1);
		func_42(12.0);
	}

}


void func_42(float var_23_float)
{
	float var_28_float; float var_31_float;
	@GetGameTime(var_28_float);
	float var_29_float = var_28_float + var_23_float;
	float var_30_float;
	var_28_float = var_30_float;
	
	for(;;) {
		@sync();
		@GetGameTime(var_31_float);
		if(var_31_float <= var_30_float) {
		} else {
		if(var_31_float >= var_29_float) {
			bool var_34_bool;
			func_23(var_34_bool, (var_29_float - var_30_float));
			goto Label_70;
		EMIT "GOTO 0x45";

		Label_70:
			for(;;) {
		}
			bool var_48_bool;
			func_23(var_48_bool, (var_31_float - var_30_float));
			if(var_48_bool == 0) goto Label_68;
		}

	Label_68:
		var_31_float = var_30_float;
		}
	}
	
}


// @pe
void func_23(bool var_34_bool, float var_35_float)
{
	bool var_36_bool;
	func_71(var_36_bool, "immunity", (var_35_float * 2.0), (float)0, 0.99);
	bool var_42_bool;
	func_71(var_42_bool, "health", (var_35_float * -0.05), (float)0, (float)1);
	var_34_bool = false;
}


// @pe
void func_90(float var_17_float, float var_18_float, float var_19_float, float var_20_float)
{
	if(var_18_float < var_19_float) {
		var_19_float = var_17_float;
		return 0;
	}
	if(var_18_float > var_20_float) {
		var_20_float = var_17_float;
		return 0;
	}
	var_18_float = var_17_float;
}


void func_71(bool var_7_bool, string var_8_string, float var_9_float, float var_10_float, float var_11_float)
{
	bool var_14_bool;
	@HasProperty(var_8_string, var_14_bool);
	if(!var_14_bool) //@nz
		var_7_bool = false;
	float var_15_float;
	@GetProperty(var_8_string, var_15_float);
	float var_17_float; float var_19_float; float var_20_float;
	var_10_float = var_19_float;
	var_11_float = var_20_float;
	func_90(var_17_float, (var_15_float + var_9_float), var_19_float, var_20_float);
	@SetProperty(var_8_string, var_17_float);
	var_7_bool = true;
}


