maintask task_0
{
	void init(void)
	{
		bool var_6_bool;
		func_119(var_6_bool, "health", -0.25, (float)0, (float)1);
		bool var_22_bool;
		func_44(var_22_bool);
		float var_3_float;
		@GetProperty("disease", var_3_float);
		@SetProperty("disease", (var_3_float * 0.5));
		float var_4_float;
		@GetProperty("DiseaseSpeed", var_4_float);
		float var_5_float = var_4_float * 0.5;
		@SetProperty("DiseaseSpeed", (var_4_float - var_5_float));
		func_39();
		@GetProperty("DiseaseSpeed", var_4_float);
		@SetProperty("DiseaseSpeed", (var_4_float + var_5_float));
	}

}


void func_39(void)
{
	func_90(6.0);
}


// @pe
void func_138(float var_16_float, float var_17_float, float var_18_float, float var_19_float)
{
	if(var_17_float < var_18_float) {
		var_18_float = var_16_float;
		return 0;
	}
	if(var_17_float > var_19_float) {
		var_19_float = var_16_float;
		return 0;
	}
	var_17_float = var_16_float;
}


void func_44(bool var_22_bool)
{
	float var_27_float; float var_28_float; float var_30_float;
	@GetProperty("disease", var_27_float);
	bool var_32_bool = false;
	if(var_27_float >= 0.8) {
		if(var_27_float <= 0.95)
			var_32_bool = true;
	}
	if(var_32_bool != 0) {
		@GetProperty("hunger", var_28_float);
		@rand(var_30_float);
		if(var_30_float < (0.33 * (1 + (1.0 * var_28_float)))) {
			@SetProperty("disease", 0);
			var_22_bool = true;
			return 8;
		}
	}
	var_22_bool = false;
}


// @pe
void func_79(bool var_65_bool, float var_66_float)
{
	bool var_67_bool;
	func_119(var_67_bool, "health", (var_66_float * -0.05), (float)0, (float)1);
	var_65_bool = false;
}


void func_119(bool var_6_bool, string var_7_string, float var_8_float, float var_9_float, float var_10_float)
{
	bool var_13_bool;
	@HasProperty(var_7_string, var_13_bool);
	if(!var_13_bool) //@nz
		var_6_bool = false;
	float var_14_float;
	@GetProperty(var_7_string, var_14_float);
	float var_16_float; float var_18_float; float var_19_float;
	var_9_float = var_18_float;
	var_10_float = var_19_float;
	func_138(var_16_float, (var_14_float + var_8_float), var_18_float, var_19_float);
	@SetProperty(var_7_string, var_16_float);
	var_6_bool = true;
}


void func_90(float var_54_float)
{
	float var_59_float; float var_62_float;
	@GetGameTime(var_59_float);
	float var_60_float = var_59_float + var_54_float;
	float var_61_float;
	var_59_float = var_61_float;
	
	for(;;) {
		@sync();
		@GetGameTime(var_62_float);
		if(var_62_float <= var_61_float) {
		} else {
		if(var_62_float >= var_60_float) {
			bool var_65_bool;
			func_79(var_65_bool, (var_60_float - var_61_float));
			goto Label_118;
		EMIT "GOTO 0x75";

		Label_118:
			for(;;) {
		}
			bool var_73_bool;
			func_79(var_73_bool, (var_62_float - var_61_float));
			if(var_73_bool == 0) goto Label_116;
		}

	Label_116:
		var_62_float = var_61_float;
		}
	}
	
}


