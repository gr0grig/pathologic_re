maintask task_0
{
	void init(void)
	{
		float var_1_float;
		@GetProperty("disease", var_1_float);
		@SetProperty("disease", (var_1_float * 0.2));
		func_78(var_1_float - (var_1_float * 0.2));
		bool var_12_bool;
		func_38(var_12_bool, "tiredness", 0.3, (float)0, (float)1);
		func_68(0.3);
		bool var_32_bool;
		func_38(var_32_bool, "health", -0.3, (float)0, (float)1);
		func_88(-0.3);
	}

}


void func_68(float var_28_float)
{
	object var_30_object;
	@CreateFloatVector(var_30_object);
	var_30_object->add(var_28_float);
	@SendWorldWndMessage(11, var_30_object);
}
EMIT "Stack[-1] = 0";


void func_38(bool var_12_bool, string var_13_string, float var_14_float, float var_15_float, float var_16_float)
{
	bool var_19_bool;
	@HasProperty(var_13_string, var_19_bool);
	if(!var_19_bool) //@nz
		var_12_bool = false;
	float var_20_float;
	@GetProperty(var_13_string, var_20_float);
	float var_22_float; float var_24_float; float var_25_float;
	var_15_float = var_24_float;
	var_16_float = var_25_float;
	func_57(var_22_float, (var_20_float + var_14_float), var_24_float, var_25_float);
	@SetProperty(var_13_string, var_22_float);
	var_12_bool = true;
}


void func_78(float var_6_float)
{
	object var_10_object;
	@CreateFloatVector(var_10_object);
	var_10_object->add(var_6_float);
	@SendWorldWndMessage(14, var_10_object);
}
EMIT "Stack[-1] = 0";


void func_88(float var_37_float)
{
	object var_39_object;
	@CreateFloatVector(var_39_object);
	var_39_object->add(var_37_float);
	@SendWorldWndMessage(15, var_39_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_57(float var_22_float, float var_23_float, float var_24_float, float var_25_float)
{
	if(var_23_float < var_24_float) {
		var_24_float = var_22_float;
		return 0;
	}
	if(var_23_float > var_25_float) {
		var_25_float = var_22_float;
		return 0;
	}
	var_23_float = var_22_float;
}


