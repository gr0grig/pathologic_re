maintask task_0
{
	void init(string var_0_string, bool var_1_bool, bool var_2_bool, float var_3_float, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		string var_16_string; int var_17_int;
		int var_18_int;
		func_104(var_18_int);
		int var_14_int;
		var_18_int = var_14_int;
		int var_15_int;
		@GetVariable("c_iWM_RealDayChange", var_15_int);
		var_15_int += -1;
		var_3_float = 1.0;
		if(var_14_int == 0) {
			var_16_string = ("d" + var_15_int) + "q01";
		} else if(var_14_int == 1) {
				var_16_string = ("b" + var_15_int) + "q01";
		}
		for(;;) {
			@GetVariable(var_16_string, var_17_int);
			if(var_17_int == 1000) {
				var_1_bool = true;
				var_0_string = "alive";
				var_7_int = 351;
				break;
			}
			var_1_bool = false;
			var_0_string = "dead";
			var_7_int = 350;

		}
		@GetWindowSize(var_4_int, var_5_int);
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	
		var_16_string = ("k" + var_15_int) + "q01";
	}

	// @pe
	void OnSee(string var_0_string, bool var_1_bool, bool var_2_bool, float var_3_float, int var_4_int, int var_5_int, int var_6_int, int var_7_int, float var_8_float)
	{
		if(!var_2_bool) { //@nz
			var_2_bool = true;
			@PlaySound(var_0_string);
			return 0;
		EMIT "GOTO 0x43";
		}
		bool var_10_bool;
		func_92(var_10_bool);
		if(var_10_bool != 0)
			return 0;
		if((var_3_float - var_8_float) <= 0)
			@DestroyWindow();
	}

	void OnUse(string var_0_string, bool var_1_bool, bool var_2_bool, float var_3_float, int var_4_int, int var_5_int, int var_6_int, int var_7_int)
	{
		if(var_3_float <= 0) {
		}
		string var_11_string;
		@GetStringByID(var_11_string, var_7_int);
		int var_13_int;
		@PrintInWidth(var_13_int, "default", 0, 0, var_4_int, var_11_string, 1.0, 1.0, 1.0, (var_3_float / 1.0));
	}

}


void func_104(int var_18_int)
{
	int var_20_int;
	@GetVariable("branch", var_20_int);
	var_20_int = var_18_int;
}


void func_92(bool var_10_bool)
{
	bool var_12_bool;
	if(var_1_bool != 0)
		@IsSoundPlaying(var_12_bool, "alive");
	else
		@IsSoundPlaying(var_12_bool, "dead");
	var_12_bool = var_10_bool;
	
}


