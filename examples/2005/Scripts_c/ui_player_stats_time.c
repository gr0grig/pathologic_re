maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_11_int;
		func_66(var_11_int);
		var_0_string += (var_11_int + " : ");
		int var_18_int;
		func_74(var_18_int);
		if(var_18_int < 10)
			var_0_string += "0";
		int var_27_int;
		func_74(var_27_int);
		var_0_string += var_27_int;
		string var_7_string;
		@GetStringByID(var_7_string, 4);
		int var_33_int;
		func_57(var_33_int);
		var_0_string += (((" " + var_7_string) + " ") + var_33_int);
		int var_8_int;
		int var_9_int;
		@GetWindowSize(var_8_int, var_9_int);
		var_1_int = 20;
		int var_10_int;
		@GetFontHeight(var_10_int, "default");
		if(((var_9_int - var_10_int) / 2) < 0)
			var_2_int = 0;
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		@Print("default", var_1_int, var_2_int, var_0_string, 1.0, 1.0, 1.0);
	}

}


void func_57(int var_33_int)
{
	float var_35_float;
	@GetGameTime(var_35_float);
	var_33_int = 1 + (var_35_float / 24);
}


void func_66(int var_11_int)
{
	float var_13_float;
	@GetGameTime(var_13_float);
	int var_14_int;
	var_13_float = var_14_int;
	var_11_int = var_14_int % 24;
}


void func_74(int var_18_int)
{
	float var_20_float;
	@GetGameTime(var_20_float);
	int var_21_int;
	var_18_int = (var_21_int - var_21_int) * 60;
}


