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
		func_43(var_3_string, 104);
		@Print("default", 15, 15, var_3_string);
		string var_10_string;
		func_43(var_10_string, 105);
		@Print("default", 15, 98, var_10_string);
		string var_15_string;
		func_43(var_15_string, 106);
		@Print("default", 16, 182, var_15_string);
		string var_20_string;
		func_43(var_20_string, 107);
		@Print("default", 16, 265, var_20_string);
	}

}


void func_43(string var_3_string, int var_4_int)
{
	string var_6_string;
	@GetStringByID(var_6_string, var_4_int);
	var_6_string = var_3_string;
}


