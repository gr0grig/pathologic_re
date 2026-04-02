maintask task_0
{
	void init(void)
	{
		float var_1_float;
		bool var_2_bool;
		func_23(var_2_bool);
		if(!var_2_bool) { //@nz
			@GetProperty("disease", var_1_float);
			@SetProperty("disease", (var_1_float * 0.5));
		}
		func_18();
	}

}


void func_98(bool var_44_bool, string var_45_string, float var_46_float, float var_47_float, float var_48_float)
{
	bool var_52_bool;
	@HasProperty(var_45_string, var_52_bool);
	if(!var_52_bool) //@nz
		var_44_bool = false;
	float var_53_float;
	@GetProperty(var_45_string, var_53_float);
	float var_55_float; float var_57_float; float var_58_float;
	var_47_float = var_57_float;
	var_48_float = var_58_float;
	func_117(var_55_float, (var_53_float + var_46_float), var_57_float, var_58_float);
	@SetProperty(var_45_string, var_55_float);
	var_44_bool = true;
}


void func_69(float var_31_float)
{
	float var_36_float; float var_39_float;
	@GetGameTime(var_36_float);
	float var_37_float = var_36_float + var_31_float;
	float var_38_float;
	var_36_float = var_38_float;
	
	for(;;) {
		@sync();
		@GetGameTime(var_39_float);
		if(var_39_float <= var_38_float) {
		} else {
		if(var_39_float >= var_37_float) {
			bool var_42_bool;
			func_58(var_42_bool, (var_37_float - var_38_float));
			goto Label_97;
		EMIT "GOTO 0x60";

		Label_97:
			for(;;) {
		}
			bool var_61_bool;
			func_58(var_61_bool, (var_39_float - var_38_float));
			if(var_61_bool == 0) goto Label_95;
		}

	Label_95:
		var_39_float = var_38_float;
		}
	}
	
}


void func_18(void)
{
	func_69(12.0);
}


// @pe
void func_117(float var_55_float, float var_56_float, float var_57_float, float var_58_float)
{
	if(var_56_float < var_57_float) {
		var_57_float = var_55_float;
		return 0;
	}
	if(var_56_float > var_58_float) {
		var_58_float = var_55_float;
		return 0;
	}
	var_56_float = var_55_float;
}


void func_23(bool var_2_bool)
{
	float var_7_float; float var_8_float; float var_10_float;
	@GetProperty("disease", var_7_float);
	bool var_12_bool = false;
	if(var_7_float >= 0.0) {
		if(var_7_float <= 0.4)
			var_12_bool = true;
	}
	if(var_12_bool != 0) {
		@GetProperty("hunger", var_8_float);
		@rand(var_10_float);
		if(var_10_float < (0.15 * (1 + (2.0 * var_8_float)))) {
			@SetProperty("disease", 0);
			var_2_bool = true;
		}
	}
	var_2_bool = false;
}


// @pe
void func_58(bool var_42_bool, float var_43_float)
{
	bool var_44_bool;
	func_98(var_44_bool, "health", (var_43_float * -0.01), (float)0, (float)1);
	var_42_bool = false;
}


