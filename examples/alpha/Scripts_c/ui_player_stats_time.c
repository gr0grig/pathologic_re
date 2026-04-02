maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_13_int;
		func_74(var_13_int);
		var_0_string += (var_13_int + " : ");
		int var_20_int;
		func_82(var_20_int);
		if(var_20_int < 10)
			var_0_string += "0";
		int var_29_int;
		func_82(var_29_int);
		string var_8_string;
		@GetStringByID(var_8_string, 200004);
		int var_35_int;
		func_65(var_35_int);
		int var_9_int;
		int var_10_int;
		@GetWindowSize(var_9_int, var_10_int);
		int var_11_int;
		@GetTextWidth(var_11_int, "default", ((var_0_string + var_29_int) + (((" " + var_8_string) + " ") + var_35_int)));
		if((var_9_int - var_11_int) < 0)
			var_9_int = 0;
		var_1_int = var_9_int;
		int var_12_int;
		@GetFontHeight(var_12_int, "default");
		if(((var_10_int - var_12_int) / 2) < 0)
			var_2_int = 0;
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		@Print("default", var_1_int, var_2_int, var_0_string, 1.0, 1.0, 1.0);
	}

}


void func_65(int var_35_int)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_35_int = 1 + (var_37_float / 24);
}


void func_74(int var_13_int)
{
	float var_15_float;
	@GetGameTime(var_15_float);
	int var_16_int;
	var_15_float = var_16_int;
	var_13_int = var_16_int % 24;
}


void func_82(int var_20_int)
{
	float var_22_float;
	@GetGameTime(var_22_float);
	int var_23_int;
	var_20_int = (var_23_int - var_23_int) * 60;
}


