maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
		@SetBackground("default");
		@ProcessEvents();
	}

	// @pe
	void OnStopSee(bool var_0_bool, int var_1_int, int var_2_int)
	{
		var_0_bool = !var_0_bool;
		func_33();
		func_7();
	}

	// @pe
	void OnHear(bool var_0_bool, int var_1_int, int var_2_int)
	{
	}

	// @pe
	void event_200(bool var_0_bool, int var_1_int, string var_2_string, object var_3_object)
	{
		var_0_bool = var_1_int != 0;
		func_33();
	}

}


void func_33(void)
{
	if(var_0_bool != 0)
		@SetBackground("checked");
	else
		@SetBackground("default");
	
}


void func_7(void)
{
	if(var_0_bool != 0)
		var_7_int = 1;
	else
		var_8_int = 0; //@pi
	@SendMessageToParent(var_7_int);
	
}


