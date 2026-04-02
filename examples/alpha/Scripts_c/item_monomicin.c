maintask task_0
{
	void init(void)
	{
		bool var_4_bool;
		func_36(var_4_bool);
		bool var_28_bool;
		func_111(var_28_bool, "health", -0.05, (float)0, (float)1);
		float var_2_float;
		@GetProperty("DiseaseSpeed", var_2_float);
		float var_3_float = var_2_float * 0.5;
		@SetProperty("DiseaseSpeed", (var_2_float - var_3_float));
		func_31();
		@GetProperty("DiseaseSpeed", var_2_float);
		@SetProperty("DiseaseSpeed", (var_2_float + var_3_float));
	}

}


// @pe
void func_130(float var_38_float, float var_39_float, float var_40_float, float var_41_float)
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


void func_36(bool var_4_bool)
{
	float var_9_float; float var_10_float; float var_12_float;
	@GetProperty("disease", var_9_float);
	bool var_14_bool = false;
	if(var_9_float >= 0.3) {
		if(var_9_float <= 0.6)
			var_14_bool = true;
	}
	if(var_14_bool != 0) {
		@GetProperty("hunger", var_10_float);
		@rand(var_12_float);
		if(var_12_float < (0.25 * (1 + (2.0 * var_10_float)))) {
			@SetProperty("disease", 0);
			var_4_bool = true;
		}
	}
	var_4_bool = false;
}


// @pe
void func_71(bool var_59_bool, float var_60_float)
{
	bool var_61_bool;
	func_111(var_61_bool, "health", (var_60_float * -0.05), (float)0, (float)1);
	var_59_bool = false;
}


void func_111(bool var_28_bool, string var_29_string, float var_30_float, float var_31_float, float var_32_float)
{
	bool var_35_bool;
	@HasProperty(var_29_string, var_35_bool);
	if(!var_35_bool) //@nz
		var_28_bool = false;
	float var_36_float;
	@GetProperty(var_29_string, var_36_float);
	float var_38_float; float var_40_float; float var_41_float;
	var_31_float = var_40_float;
	var_32_float = var_41_float;
	func_130(var_38_float, (var_36_float + var_30_float), var_40_float, var_41_float);
	@SetProperty(var_29_string, var_38_float);
	var_28_bool = true;
}


void func_82(float var_48_float)
{
	float var_53_float; float var_56_float;
	@GetGameTime(var_53_float);
	float var_54_float = var_53_float + var_48_float;
	float var_55_float;
	var_53_float = var_55_float;
	
	for(;;) {
		@sync();
		@GetGameTime(var_56_float);
		if(var_56_float <= var_55_float) {
		} else {
		if(var_56_float >= var_54_float) {
			bool var_59_bool;
			func_71(var_59_bool, (var_54_float - var_55_float));
			goto Label_110;
		EMIT "GOTO 0x6d";

		Label_110:
			for(;;) {
		}
			bool var_67_bool;
			func_71(var_67_bool, (var_56_float - var_55_float));
			if(var_67_bool == 0) goto Label_108;
		}

	Label_108:
		var_56_float = var_55_float;
		}
	}
	
}


void func_31(void)
{
	func_82(6.0);
}


