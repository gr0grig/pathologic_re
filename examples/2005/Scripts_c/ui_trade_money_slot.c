maintask task_0
{
	void init(int var_0_int)
	{
		var_0_int = 0;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(int var_0_int)
	{
		@Print("default", 2, 35, var_0_int);
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, string var_2_string, object var_3_object)
	{
		var_0_int = var_1_int;
	}

}


