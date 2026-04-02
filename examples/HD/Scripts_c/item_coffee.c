maintask task_0
{
	void init(void)
	{
		@PlaySound("drink");
		bool var_1_bool;
		func_59(var_1_bool, "health", -0.05, (float)0, (float)1);
		func_129(-0.05);
		bool var_25_bool;
		func_59(var_25_bool, "immunity", 0.0, (float)0, (float)1);
		func_109(0.0);
		bool var_34_bool;
		func_59(var_34_bool, "disease", 0.0, (float)0, (float)1);
		func_119(0.0);
		bool var_43_bool;
		func_59(var_43_bool, "hunger", 0.0, (float)0, (float)1);
		func_99(0.0);
		bool var_52_bool;
		func_59(var_52_bool, "tiredness", -0.2, (float)0, (float)1);
		func_89(-0.2);
	}

}


void func_129(float var_17_float)
{
	object var_19_object;
	@CreateFloatVector(var_19_object);
	var_19_object->add(var_17_float);
	if(var_17_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_19_object);
}
EMIT "Stack[-1] = 0";


void func_99(float var_48_float)
{
	object var_50_object;
	@CreateFloatVector(var_50_object);
	var_50_object->add(var_48_float);
	@SendWorldWndMessage(12, var_50_object);
}
EMIT "Stack[-1] = 0";


void func_109(float var_30_float)
{
	object var_32_object;
	@CreateFloatVector(var_32_object);
	var_32_object->add(var_30_float);
	@SendWorldWndMessage(13, var_32_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_78(float var_11_float, float var_12_float, float var_13_float, float var_14_float)
{
	if(var_12_float < var_13_float) {
		var_13_float = var_11_float;
		return 0;
	}
	if(var_12_float > var_14_float) {
		var_14_float = var_11_float;
		return 0;
	}
	var_12_float = var_11_float;
}


void func_119(float var_39_float)
{
	object var_41_object;
	@CreateFloatVector(var_41_object);
	var_41_object->add(var_39_float);
	@SendWorldWndMessage(14, var_41_object);
}
EMIT "Stack[-1] = 0";


void func_89(float var_57_float)
{
	object var_59_object;
	@CreateFloatVector(var_59_object);
	var_59_object->add(var_57_float);
	@SendWorldWndMessage(11, var_59_object);
}
EMIT "Stack[-1] = 0";


void func_59(bool var_1_bool, string var_2_string, float var_3_float, float var_4_float, float var_5_float)
{
	bool var_8_bool;
	@HasProperty(var_2_string, var_8_bool);
	if(!var_8_bool) //@nz
		var_1_bool = false;
	float var_9_float;
	@GetProperty(var_2_string, var_9_float);
	float var_11_float; float var_13_float; float var_14_float;
	var_4_float = var_13_float;
	var_5_float = var_14_float;
	func_78(var_11_float, (var_9_float + var_3_float), var_13_float, var_14_float);
	@SetProperty(var_2_string, var_11_float);
	var_1_bool = true;
}


