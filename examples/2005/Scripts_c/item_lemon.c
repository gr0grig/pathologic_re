maintask task_0
{
	void init(void)
	{
		@PlaySound("eat");
		bool var_1_bool;
		func_59(var_1_bool, "health", 0.0, (float)0, (float)1);
		func_129(0.0);
		bool var_21_bool;
		func_59(var_21_bool, "immunity", 0.05, (float)0, (float)1);
		func_109(0.05);
		bool var_30_bool;
		func_59(var_30_bool, "disease", 0.0, (float)0, (float)1);
		func_119(0.0);
		bool var_39_bool;
		func_59(var_39_bool, "hunger", 0.1, (float)0, (float)1);
		func_99(0.1);
		bool var_48_bool;
		func_59(var_48_bool, "tiredness", -0.1, (float)0, (float)1);
		func_89(-0.1);
	}

}


void func_129(float var_17_float)
{
	object var_19_object;
	@CreateFloatVector(var_19_object);
	var_19_object->add(var_17_float);
	@SendWorldWndMessage(15, var_19_object);
}
EMIT "Stack[-1] = 0";


void func_99(float var_44_float)
{
	object var_46_object;
	@CreateFloatVector(var_46_object);
	var_46_object->add(var_44_float);
	@SendWorldWndMessage(12, var_46_object);
}
EMIT "Stack[-1] = 0";


void func_109(float var_26_float)
{
	object var_28_object;
	@CreateFloatVector(var_28_object);
	var_28_object->add(var_26_float);
	@SendWorldWndMessage(13, var_28_object);
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


void func_119(float var_35_float)
{
	object var_37_object;
	@CreateFloatVector(var_37_object);
	var_37_object->add(var_35_float);
	@SendWorldWndMessage(14, var_37_object);
}
EMIT "Stack[-1] = 0";


void func_89(float var_53_float)
{
	object var_55_object;
	@CreateFloatVector(var_55_object);
	var_55_object->add(var_53_float);
	@SendWorldWndMessage(11, var_55_object);
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


