maintask task_0
{
	void init(void)
	{
		bool var_0_bool;
		func_71(var_0_bool, "health", 0.35, (float)0, (float)1);
		bool var_16_bool;
		func_71(var_16_bool, "tiredness", 0.05, (float)0, (float)1);
		func_42(10.0);
	}

}


// @pe
void func_103(float var_10_float, float var_11_float, float var_12_float, float var_13_float)
{
	if(var_11_float < var_12_float) {
		var_12_float = var_10_float;
		return 0;
	}
	if(var_11_float > var_13_float) {
		var_13_float = var_10_float;
		return 0;
	}
	var_11_float = var_10_float;
}


void func_71(bool var_0_bool, string var_1_string, float var_2_float, float var_3_float, float var_4_float)
{
	bool var_7_bool;
	@HasProperty(var_1_string, var_7_bool);
	if(!var_7_bool) //@nz
		var_0_bool = false;
	float var_8_float;
	@GetProperty(var_1_string, var_8_float);
	float var_10_float; float var_12_float; float var_13_float;
	var_3_float = var_12_float;
	var_4_float = var_13_float;
	func_103(var_10_float, (var_8_float + var_2_float), var_12_float, var_13_float);
	@SetProperty(var_1_string, var_10_float);
	var_0_bool = true;
}


void func_42(float var_21_float)
{
	float var_26_float; float var_29_float;
	@GetGameTime(var_26_float);
	float var_27_float = var_26_float + var_21_float;
	float var_28_float;
	var_26_float = var_28_float;
	
	for(;;) {
		@sync();
		@GetGameTime(var_29_float);
		if(var_29_float <= var_28_float) {
		} else {
		if(var_29_float >= var_27_float) {
			bool var_32_bool;
			func_19(var_32_bool, (var_27_float - var_28_float));
			goto Label_70;
		EMIT "GOTO 0x45";

		Label_70:
			for(;;) {
		}
			bool var_54_bool;
			func_19(var_54_bool, (var_29_float - var_28_float));
			if(var_54_bool == 0) goto Label_68;
		}

	Label_68:
		var_29_float = var_28_float;
		}
	}
	
}


// @pe
void func_19(bool var_32_bool, float var_33_float)
{
	bool var_34_bool;
	func_90(var_34_bool);
	if(var_34_bool != 0) {
		bool var_42_bool;
		func_71(var_42_bool, "health", (var_33_float * 0.01), (float)0, (float)1);
		bool var_48_bool;
		func_71(var_48_bool, "tiredness", (var_33_float * -0.01), (float)0, (float)1);
	}
	var_32_bool = false;
}


void func_90(bool var_34_bool)
{
	bool var_37_bool;
	@HasProperty("sleeping", var_37_bool);
	if(!var_37_bool) //@nz
		var_34_bool = false;
	bool var_38_bool;
	@GetProperty("sleeping", var_38_bool);
	var_38_bool = var_34_bool;
}


