maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_6_int; int var_7_int;
		@GetWindowSize(var_6_int, var_7_int);
		var_1_int = 20;
		int var_8_int;
		@GetFontHeight(var_8_int, "default");
		if(((var_7_int - var_8_int) / 2) < 0)
			var_2_int = 0;
		@SetNeedUpdate(true);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnSee(string var_0_string, int var_1_int, int var_2_int, float var_3_float)
	{
		int var_6_int;
		func_70(var_6_int);
		var_0_string = var_6_int + " : ";
		int var_12_int;
		func_78(var_12_int);
		if(var_12_int < 10)
			var_0_string += "0";
		int var_21_int;
		func_78(var_21_int);
		var_0_string += var_21_int;
		string var_5_string;
		@GetStringByID(var_5_string, 4);
		int var_27_int;
		func_61(var_27_int);
		var_0_string += (((" " + var_5_string) + " ") + var_27_int);
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		@Print("default", var_1_int, var_2_int, var_0_string, 1.0, 1.0, 1.0);
	}

}


void func_78(int var_12_int)
{
	float var_14_float;
	@GetGameTime(var_14_float);
	int var_15_int;
	var_12_int = (var_15_int - var_15_int) * 60;
}


void func_61(int var_27_int)
{
	float var_29_float;
	@GetGameTime(var_29_float);
	var_27_int = 1 + (var_29_float / 24);
}


void func_70(int var_6_int)
{
	float var_8_float;
	@GetGameTime(var_8_float);
	int var_9_int;
	var_8_float = var_9_int;
	var_6_int = var_9_int % 24;
}


