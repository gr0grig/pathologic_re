maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		@GetWindowSize(var_1_int, var_2_int);
		@GetStringByID(var_0_string, 725);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_4_int;
		@PrintInWidth(var_4_int, "default", 0, -1, var_1_int, var_0_string, 0.37254903, 0.37254903, 0.37254903);
	}

}


