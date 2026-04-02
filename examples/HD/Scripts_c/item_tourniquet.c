maintask task_0
{
	void init(void)
	{
		bool var_0_bool;
		func_12(var_0_bool, "health", 0.1, (float)0, (float)1);
		func_42(0.1);
	}

}


void func_42(float var_16_float)
{
	object var_18_object;
	@CreateFloatVector(var_18_object);
	var_18_object->add(var_16_float);
	if(var_16_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_18_object);
}
EMIT "Stack[-1] = 0";


void func_12(bool var_0_bool, string var_1_string, float var_2_float, float var_3_float, float var_4_float)
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
	func_31(var_10_float, (var_8_float + var_2_float), var_12_float, var_13_float);
	@SetProperty(var_1_string, var_10_float);
	var_0_bool = true;
}


// @pe
void func_31(float var_10_float, float var_11_float, float var_12_float, float var_13_float)
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


