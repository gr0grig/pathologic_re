maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int)
	{
		var_0_int = 0;
		@GetWindowSize(var_1_int, var_2_int);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, string var_4_string, object var_5_object)
	{
		var_0_int = var_3_int;
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int)
	{
		if(!var_0_int) //@nz
			return 6;
		int var_6_int = (var_1_int * var_0_int) / 100;
		if(var_6_int != 0)
			@StretchBlit("white", 0, 0, var_6_int, var_2_int);
		int var_7_int = (6.0 * (var_0_int + 1)) / 100.0;
		if(var_7_int != 0)
			@Print("default", ((((var_7_int - 1) * var_1_int) / 6.0) + 5), 5, var_7_int, 0, 0, 0);
	}

}


