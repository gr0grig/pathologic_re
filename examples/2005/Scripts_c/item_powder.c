maintask task_0
{
	void init(void)
	{
		float var_2_float;
		@GetProperty("health", var_2_float);
		if(var_2_float > 0.05) {
			@SetProperty("health", 0.05);
			func_38(0.05 - var_2_float);
		}
		float var_3_float;
		@GetProperty("disease", var_3_float);
		@SetProperty("disease", 0);
		float var_17_float = -var_3_float;
		func_28(var_17_float);
	}

}


void func_28(float var_17_float)
{
	object var_19_object;
	@CreateFloatVector(var_19_object);
	var_19_object->add(var_17_float);
	@SendWorldWndMessage(14, var_19_object);
}
EMIT "Stack[-1] = 0";


void func_38(float var_9_float)
{
	object var_12_object;
	@CreateFloatVector(var_12_object);
	var_12_object->add(var_9_float);
	@SendWorldWndMessage(15, var_12_object);
}
EMIT "Stack[-1] = 0";


