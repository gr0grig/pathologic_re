maintask task_0
{
	void init(bool var_0_bool, string var_1_string, int var_2_int, int var_3_int)
	{
		var_0_bool = false;
		@GetWindowSize(var_2_int, var_3_int);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool, string var_1_string, int var_2_int, int var_3_int)
	{
		int var_5_int;
		if(var_0_bool != 0)
			@PrintInWidth(var_5_int, "default", 0, -1, var_2_int, var_1_string, 0.37254903, 0.37254903, 0.37254903);
	}

	// @pe
	void event_200(bool var_0_bool, string var_1_string, int var_2_int, int var_3_int, int var_4_int, string var_5_string, object var_6_object)
	{
		if(var_4_int != -1) {
			@GetStringByID(var_1_string, var_4_int);
			var_0_bool = true;
		} else {
			var_0_bool = false;
		}
	
	}

}


