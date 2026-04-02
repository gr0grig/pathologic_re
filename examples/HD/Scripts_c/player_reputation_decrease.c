maintask task_0
{
	void init(bool var_0_bool)
	{
		func_57((float)288);
	}

}


void func_89(bool var_53_bool, string var_54_string, float var_55_float, float var_56_float, float var_57_float)
{
	bool var_60_bool;
	@HasProperty(var_54_string, var_60_bool);
	if(!var_60_bool) //@nz
		var_53_bool = false;
	float var_61_float;
	@GetProperty(var_54_string, var_61_float);
	float var_63_float; float var_65_float; float var_66_float;
	var_56_float = var_65_float;
	var_57_float = var_66_float;
	func_121(var_63_float, (var_61_float + var_55_float), var_65_float, var_66_float);
	@SetProperty(var_54_string, var_63_float);
	var_53_bool = true;
}


void func_132(float var_69_float)
{
	object var_71_object;
	@CreateFloatVector(var_71_object);
	var_71_object->add(var_69_float);
	@SendWorldWndMessage(16, var_71_object);
}
EMIT "Stack[-1] = 0";


void func_5(bool var_13_bool, float var_14_float)
{
	float var_18_float; int var_19_int; int var_20_int;
	bool var_21_bool;
	func_108(var_21_bool);
	if(!var_21_bool) { //@nz
		var_30_int = -var_14_float;
		var_18_float = var_30_int / 36.0;
		bool var_32_bool;
		func_151(var_32_bool, 6);
		if(var_32_bool != 0) {
			@GetVariable("k6q01", var_19_int);
			if(var_19_int != 1000) {
				var_18_float *= 2.0;
				if(var_19_int >= 1)
					var_18_float *= 3.0;
				if(var_19_int >= 2)
					var_18_float *= 4.0;
				@GetVariable("k6q01ItemsRemoved", var_20_int);
				if(var_20_int != 0)
					var_18_float /= 4.0;
			}
		}
		bool var_53_bool; float var_55_float;
		var_18_float = var_55_float;
		func_89(var_53_bool, "reputation", var_55_float, (float)0, (float)1);
		float var_69_float;
		var_18_float = var_69_float;
		func_132(var_69_float);
	}
	var_13_bool = false;
}


void func_108(bool var_21_bool)
{
	bool var_24_bool;
	@HasProperty("sleeping", var_24_bool);
	if(!var_24_bool) //@nz
		var_21_bool = false;
	bool var_25_bool;
	@GetProperty("sleeping", var_25_bool);
	var_25_bool = var_21_bool;
}


void func_142(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


// @pe
void func_151(bool var_32_bool, int var_33_int)
{
	int var_34_int;
	func_142(var_34_int);
	var_32_bool = var_34_int == var_33_int;
}


// @pe
void func_121(float var_63_float, float var_64_float, float var_65_float, float var_66_float)
{
	if(var_64_float < var_65_float) {
		var_65_float = var_63_float;
		return 0;
	}
	if(var_64_float > var_66_float) {
		var_66_float = var_63_float;
		return 0;
	}
	var_64_float = var_63_float;
}


void func_57(float var_1_float)
{
	float var_6_float; float var_9_float;
	@GetGameTime(var_6_float);
	float var_7_float = var_6_float + var_1_float;
	float var_8_float;
	var_6_float = var_8_float;
	
	for(;;) {
		@sync();
		if(var_0_bool != 0) {
		} else {
			@GetGameTime(var_9_float);
			if(var_9_float <= var_8_float) {
			} else {
			if(var_9_float >= var_7_float) {
				bool var_13_bool;
				func_5(var_13_bool, (var_7_float - var_8_float));
				goto Label_88;
			EMIT "GOTO 0x57";
			}
			bool var_73_bool;
			func_5(var_73_bool, (var_9_float - var_8_float));
			if(var_73_bool != 0) {
				goto Label_88;
			}
			var_9_float = var_8_float;
			}
		}
	Label_88:

	}
	
}


