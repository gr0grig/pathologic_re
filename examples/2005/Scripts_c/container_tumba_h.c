maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		@DisableUpdate();
		func_155("meradorm", 1, 20);
		func_166("alpha_pills", 1, 25, 4);
		func_155("tvirin", 1, 12);
		func_166("lemon", 1, 10, 2);
		int var_35_int;
		func_192(var_35_int);
		int var_1_int;
		var_35_int = var_1_int;
		if(var_1_int >= 5)
			func_155("novocaine", 1, 10);
		if(var_1_int >= 7)
			func_155("morfin", 1, 20);
		if(var_1_int >= 10)
			func_155("etorfin", 1, 30);
		func_166("revolver_ammo", 1, 20, 2);
		func_155("rifle_ammo", 1, 10);
		func_155("powder", 1, 500);
		func_155("syringe", 1, 20);
		func_166("kerosene", 1, 4, 10);
		func_155("lockpick", 1, 20);
		func_166("hook", 1, 15, 5);
		func_166("needle", 1, 15, 3);
		func_155("glove", 1, 70);
		func_125();
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool = true;
		var_6_bool = !actor; //@nz
		if(var_6_bool != 1) {
			bool var_7_bool;
			func_186(var_7_bool);
			var_11_bool = !var_7_bool; //@nz
			if(var_11_bool != 1)
				var_5_bool = false;
		}
		if(var_5_bool != 0) {
		}
		bool var_3_bool;
		actor->IsOnGround(var_3_bool);
		if(var_3_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_4_bool);
			if(!var_4_bool) //@nz
				@Barter(actor);
			enable OnUse;
		}
	}

}


void func_192(int var_35_int)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_35_int = 1 + (var_37_float / 24);
}


void func_166(string var_14_string, int var_15_int, int var_16_int, int var_17_int)
{
	int var_20_int; bool var_21_bool;
	int var_23_int;
	var_15_int = var_23_int;
	int var_24_int;
	var_16_int = var_24_int;
	bool var_22_bool;
	func_181(var_22_bool, var_23_int, var_24_int);
	if(var_22_bool != 0) {
		@irand(var_20_int, var_17_int);
		@AddItem(var_21_bool, var_14_string, 0, (var_20_int + 1));
	}
}


void func_181(bool var_8_bool, int var_9_int, int var_10_int)
{
	int var_12_int;
	@irand(var_12_int, var_10_int);
	var_8_bool = var_12_int < var_9_int;
}


void func_186(bool var_7_bool)
{
	int var_9_int;
	@GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
}


void func_155(string var_3_string, int var_4_int, int var_5_int)
{
	bool var_7_bool;
	int var_9_int;
	var_4_int = var_9_int;
	int var_10_int;
	var_5_int = var_10_int;
	bool var_8_bool;
	func_181(var_8_bool, var_9_int, var_10_int);
	if(var_8_bool != 0)
		@AddItem(var_7_bool, var_3_string, 0);
}


void func_125(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


