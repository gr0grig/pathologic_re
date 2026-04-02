maintask task_0
{
	void init(bool var_0_bool)
	{
		@PlayAnimation();
		@lshPlayAnimation();
		@Hold();
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "remove")
			var_0_bool = true;
	}

	void OnUnload(bool var_0_bool)
	{
		if(var_0_bool != 0) {
			object var_2_object;
			func_21(var_2_object);
			@RemoveActor(var_2_object);
		}
	}

}


void func_21(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


