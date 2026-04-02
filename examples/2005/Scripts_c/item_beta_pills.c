maintask task_0
{
	void init(void)
	{
		bool var_0_bool;
		func_56(var_0_bool, "health", -0.015, (float)0, (float)1);
		func_126(-0.015);
		bool var_20_bool;
		func_56(var_20_bool, "immunity", 0.15, (float)0, (float)1);
		func_106(0.15);
		bool var_29_bool;
		func_56(var_29_bool, "disease", 0.0, (float)0, (float)1);
		func_116(0.0);
		bool var_38_bool;
		func_56(var_38_bool, "hunger", 0.0, (float)0, (float)1);
		func_96(0.0);
		bool var_47_bool;
		func_56(var_47_bool, "tiredness", 0.0, (float)0, (float)1);
		func_86(0.0);
	}

}


void func_96(float var_43_float)
{
	object var_45_object;
	@CreateFloatVector(var_45_object);
	var_45_object->add(var_43_float);
	@SendWorldWndMessage(12, var_45_object);
}
EMIT "Stack[-1] = 0";


void func_106(float var_25_float)
{
	object var_27_object;
	@CreateFloatVector(var_27_object);
	var_27_object->add(var_25_float);
	@SendWorldWndMessage(13, var_27_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_75(float var_10_float, float var_11_float, float var_12_float, float var_13_float)
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


void func_116(float var_34_float)
{
	object var_36_object;
	@CreateFloatVector(var_36_object);
	var_36_object->add(var_34_float);
	@SendWorldWndMessage(14, var_36_object);
}
EMIT "Stack[-1] = 0";


void func_86(float var_52_float)
{
	object var_54_object;
	@CreateFloatVector(var_54_object);
	var_54_object->add(var_52_float);
	@SendWorldWndMessage(11, var_54_object);
}
EMIT "Stack[-1] = 0";


void func_56(bool var_0_bool, string var_1_string, float var_2_float, float var_3_float, float var_4_float)
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
	func_75(var_10_float, (var_8_float + var_2_float), var_12_float, var_13_float);
	@SetProperty(var_1_string, var_10_float);
	var_0_bool = true;
}


void func_126(float var_16_float)
{
	object var_18_object;
	@CreateFloatVector(var_18_object);
	var_18_object->add(var_16_float);
	@SendWorldWndMessage(15, var_18_object);
}
EMIT "Stack[-1] = 0";


