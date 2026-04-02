maintask task_0
{
	void init(void)
	{
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(void)
	{
		string var_3_string;
		func_25(var_3_string, 102);
		@Print("default", 15, 15, var_3_string);
		string var_10_string;
		func_25(var_10_string, 103);
		@Print("default", 15, 98, var_10_string);
	}

}


void func_25(string var_3_string, int var_4_int)
{
	string var_6_string;
	@GetStringByID(var_6_string, var_4_int);
	var_6_string = var_3_string;
}


