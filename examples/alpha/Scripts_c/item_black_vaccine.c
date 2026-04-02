maintask task_0
{
	void init(void)
	{
		float var_1_float;
		@GetProperty("immunity", var_1_float);
		if(var_1_float < 0.6)
			@SetProperty("immunity", 0.6);
		func_27(6.0);
	}

}


void func_56(bool var_20_bool, string var_21_string, float var_22_float, float var_23_float, float var_24_float)
{
	bool var_28_bool;
	@HasProperty(var_21_string, var_28_bool);
	if(!var_28_bool) //@nz
		var_20_bool = false;
	float var_29_float;
	@GetProperty(var_21_string, var_29_float);
	float var_31_float; float var_33_float; float var_34_float;
	var_23_float = var_33_float;
	var_24_float = var_34_float;
	func_75(var_31_float, (var_29_float + var_22_float), var_33_float, var_34_float);
	@SetProperty(var_21_string, var_31_float);
	var_20_bool = true;
}


// @pe
void func_16(bool var_18_bool, float var_19_float)
{
	bool var_20_bool;
	func_56(var_20_bool, "immunity", (var_19_float * 0.6), (float)0, 0.6);
	var_18_bool = false;
}


// @pe
void func_75(float var_31_float, float var_32_float, float var_33_float, float var_34_float)
{
	if(var_32_float < var_33_float) {
		var_33_float = var_31_float;
		return 0;
	}
	if(var_32_float > var_34_float) {
		var_34_float = var_31_float;
		return 0;
	}
	var_32_float = var_31_float;
}


void func_27(float var_7_float)
{
	float var_12_float; float var_15_float;
	@GetGameTime(var_12_float);
	float var_13_float = var_12_float + var_7_float;
	float var_14_float;
	var_12_float = var_14_float;
	
	for(;;) {
		@sync();
		@GetGameTime(var_15_float);
		if(var_15_float <= var_14_float) {
		} else {
		if(var_15_float >= var_13_float) {
			bool var_18_bool;
			func_16(var_18_bool, (var_13_float - var_14_float));
			goto Label_55;
		EMIT "GOTO 0x36";

		Label_55:
			for(;;) {
		}
			bool var_37_bool;
			func_16(var_37_bool, (var_15_float - var_14_float));
			if(var_37_bool == 0) goto Label_53;
		}

	Label_53:
		var_15_float = var_14_float;
		}
	}
	
}


