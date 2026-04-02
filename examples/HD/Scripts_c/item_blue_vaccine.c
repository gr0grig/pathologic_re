maintask task_0
{
	void init(bool var_0_bool)
	{
		float var_2_float;
		@GetProperty("immunity", var_2_float);
		if(var_2_float < 0.9)
			@SetProperty("immunity", 0.9);
		func_33(4.0);
	}

}


void func_16(bool var_20_bool, float var_21_float)
{
	float var_23_float;
	@GetProperty("immunity", var_23_float);
	if(var_23_float < 0.9) {
		bool var_27_bool;
		func_65(var_27_bool, "immunity", (var_21_float * 1.5), (float)0, 0.9);
	}
	var_20_bool = false;
}


void func_65(bool var_27_bool, string var_28_string, float var_29_float, float var_30_float, float var_31_float)
{
	bool var_35_bool;
	@HasProperty(var_28_string, var_35_bool);
	if(!var_35_bool) //@nz
		var_27_bool = false;
	float var_36_float;
	@GetProperty(var_28_string, var_36_float);
	float var_38_float; float var_40_float; float var_41_float;
	var_30_float = var_40_float;
	var_31_float = var_41_float;
	func_84(var_38_float, (var_36_float + var_29_float), var_40_float, var_41_float);
	@SetProperty(var_28_string, var_38_float);
	var_27_bool = true;
}


// @pe
void func_84(float var_38_float, float var_39_float, float var_40_float, float var_41_float)
{
	if(var_39_float < var_40_float) {
		var_40_float = var_38_float;
		return 0;
	}
	if(var_39_float > var_41_float) {
		var_41_float = var_38_float;
		return 0;
	}
	var_39_float = var_38_float;
}


void func_33(float var_8_float)
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
				goto Label_64;
			EMIT "GOTO 0x3f";
			}
			bool var_44_bool;
			func_16(var_44_bool, (var_16_float - var_15_float));
			if(var_44_bool != 0) {
				goto Label_64;
			}
			var_16_float = var_15_float;
			}
		}
	Label_64:

	}
	
}


