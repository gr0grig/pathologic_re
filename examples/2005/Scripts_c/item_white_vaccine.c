maintask task_0
{
	void init(bool var_0_bool)
	{
		float var_2_float;
		@GetProperty("immunity", var_2_float);
		if(var_2_float < 1.2)
			@SetProperty("immunity", 1.2);
		func_27(4.0);
	}

}


// @pe
void func_16(bool var_20_bool, float var_21_float)
{
	bool var_22_bool;
	func_59(var_22_bool, "immunity", (var_21_float * 2.0), (float)0, 1.2);
	var_20_bool = false;
}


void func_59(bool var_22_bool, string var_23_string, float var_24_float, float var_25_float, float var_26_float)
{
	bool var_30_bool;
	@HasProperty(var_23_string, var_30_bool);
	if(!var_30_bool) //@nz
		var_22_bool = false;
	float var_31_float;
	@GetProperty(var_23_string, var_31_float);
	float var_33_float; float var_35_float; float var_36_float;
	var_25_float = var_35_float;
	var_26_float = var_36_float;
	func_78(var_33_float, (var_31_float + var_24_float), var_35_float, var_36_float);
	@SetProperty(var_23_string, var_33_float);
	var_22_bool = true;
}


void func_27(float var_8_float)
{
	float var_13_float; float var_16_float;
	@GetGameTime(var_13_float);
	float var_14_float = var_13_float + var_8_float;
	float var_15_float;
	var_13_float = var_15_float;
	
	for(;;) {
		@sync();
		if(var_0_bool != 0) {
		} else {
			@GetGameTime(var_16_float);
			if(var_16_float <= var_15_float) {
			} else {
			if(var_16_float >= var_14_float) {
				bool var_20_bool;
				func_16(var_20_bool, (var_14_float - var_15_float));
				goto Label_58;
			EMIT "GOTO 0x39";
			}
			bool var_39_bool;
			func_16(var_39_bool, (var_16_float - var_15_float));
			if(var_39_bool != 0) {
				goto Label_58;
			}
			var_16_float = var_15_float;
			}
		}
	Label_58:

	}
	
}


// @pe
void func_78(float var_33_float, float var_34_float, float var_35_float, float var_36_float)
{
	if(var_34_float < var_35_float) {
		var_35_float = var_33_float;
		return 0;
	}
	if(var_34_float > var_36_float) {
		var_36_float = var_33_float;
		return 0;
	}
	var_34_float = var_33_float;
}


