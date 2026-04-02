maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_11_int;
		func_43(var_11_int);
		@GetStringByID(var_0_string, var_11_int);
		@_strupr(var_0_string);
		int var_7_int;
		int var_8_int;
		@GetWindowSize(var_7_int, var_8_int);
		int var_9_int;
		@GetTextWidth(var_9_int, "default", var_0_string);
		if((var_7_int - var_9_int) < 0)
			var_7_int = 0;
		var_1_int = var_7_int / 2;
		int var_10_int;
		@GetFontHeight(var_10_int, "default");
		if(((var_8_int - var_10_int) / 2) < 0)
			var_2_int = 0;
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		@Print("default", var_1_int, var_2_int, var_0_string, 1.0, 1.0, 1.0);
	}

}


void func_43(int var_11_int)
{
	int var_13_int;
	@GetVariable("player", var_13_int);
	if(var_13_int == 0) {
		var_11_int = 200001;
		return 2;
	EMIT "GOTO 0x3a";
	}
	if(var_13_int == 1) {
		var_11_int = 200002;
		return 2;
	}
	var_11_int = 200003;
}


