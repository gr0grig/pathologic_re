maintask task_0
{
	void init(int var_0_int, float var_1_float, int var_2_int, int var_3_int)
	{
		@GetWindowSize(var_2_int, var_3_int);
		var_0_int = -1;
		disable event_201;
		enable event_201;
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}

	// @pe
	void event_201(int var_0_int, float var_1_float, int var_2_int, int var_3_int, int var_4_int, object var_5_object)
	{
		if(var_4_int == 1000) {
			var_0_int = 109;
			var_1_float = 1.0;
		}
	}

	// @pe
	void OnSee(int var_0_int, float var_1_float, int var_2_int, int var_3_int, float var_4_float)
	{
		float var_5_float;
		func_50(var_3_int, var_5_float, var_5_float);
	}

	// @pe
	void OnUse(int var_0_int, float var_1_float, int var_2_int, int var_3_int)
	{
		func_27(var_2_int, var_3_int);
	}

}


// @pe
void func_50(int var_0_int, float var_1_float, float var_5_float)
{
	if(var_0_int == -1)
		return 0;
	if((var_1_float - var_5_float) <= 0)
		var_0_int = -1;
}


void func_27(int var_0_int, float var_1_float)
{
	if(var_0_int == -1) {
	}
	string var_6_string;
	@GetStringByID(var_6_string, var_0_int);
	float var_7_float = sin(((3.14 * var_1_float) / 1.0) / 2.0);
	@Print("help", 10, 10, var_6_string, 1.0, 1.0, 1.0, var_7_float);
}


