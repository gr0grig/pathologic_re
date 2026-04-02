maintask task_0
{
	void init(string var_0_string, int var_1_int, int var_2_int)
	{
		int var_7_int; int var_8_int; int var_9_int; int var_10_int;
		int var_11_int;
		func_52(var_11_int);
		if(var_11_int == 1) {
			var_7_int = 713;
		} else {
				int var_23_int;
				func_52(var_23_int);
				if(!(var_23_int == 0)) goto Label_17;
				var_7_int = 714;
		}
	Label_24:
		for(;;) {
			@GetStringByID(var_0_string, var_7_int);
			@GetWindowSize(var_8_int, var_9_int);
			var_1_int = 2;
			@GetFontHeight(var_10_int, "default");
			if(((var_9_int - var_10_int) / 2) < 0)
				var_2_int = 0;
			@SetOwnerDraw(true);
			@ProcessEvents();

		}
	
	Label_17:
		int var_26_int;
		func_52(var_26_int);
		if(!(var_26_int == 2)) goto Label_24;
		var_7_int = 715;
	}

	void OnUse(string var_0_string, int var_1_int, int var_2_int)
	{
		@Print("default", var_1_int, var_2_int, var_0_string, 0.654902, 0.654902, 0.654902);
	}

}


void func_52(int var_11_int)
{
	int var_13_int;
	@GetVariable("branch", var_13_int);
	var_13_int = var_11_int;
}


