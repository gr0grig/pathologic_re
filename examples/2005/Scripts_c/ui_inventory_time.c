maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_13_int;
		func_69(var_13_int);
		var_0_string = var_13_int + " : ";
		int var_19_int;
		func_77(var_19_int);
		if(var_19_int < 10)
			var_0_string += "0";
		int var_28_int;
		func_77(var_28_int);
		var_0_string += var_28_int;
		string var_8_string;
		@GetStringByID(var_8_string, 4);
		int var_34_int;
		func_60(var_34_int);
		var_0_string += (((", " + var_8_string) + " ") + var_34_int);
		int var_9_int;
		int var_10_int;
		@GetWindowSize(var_9_int, var_10_int);
		int var_11_int;
		@GetFontHeight(var_11_int, "default");
		int var_12_int;
		@GetTextWidth(var_12_int, "default", var_0_string);
		@Print("default", ((var_9_int - var_12_int) / 2), ((var_10_int - var_11_int) / 2), var_0_string, 1.0, 1.0, 1.0);
	}

}


void func_77(int var_19_int)
{
	float var_21_float;
	@GetGameTime(var_21_float);
	int var_22_int;
	var_19_int = (var_22_int - var_22_int) * 60;
}


void func_69(int var_13_int)
{
	float var_15_float;
	@GetGameTime(var_15_float);
	int var_16_int;
	var_15_float = var_16_int;
	var_13_int = var_16_int % 24;
}


void func_60(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


