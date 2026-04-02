maintask task_0
{
	void init(void)
	{
		float var_1_float;
		@GetProperty("disease", var_1_float);
		@SetProperty("disease", 0);
		float var_5_float = -var_1_float;
		func_13(var_5_float);
	}

}


void func_13(float var_5_float)
{
	object var_7_object;
	@CreateFloatVector(var_7_object);
	var_7_object->add(var_5_float);
	@SendWorldWndMessage(14, var_7_object);
}
EMIT "Stack[-1] = 0";


