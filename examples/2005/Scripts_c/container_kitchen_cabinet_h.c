maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		@DisableUpdate();
		func_95("Knife", 1, 15);
		func_95("tvirin", 1, 7);
		func_106("lemon", 1, 5, 2);
		func_95("funduk", 1, 30);
		func_95("peanut", 1, 30);
		func_95("walnut", 1, 30);
		func_95("rifle_ammo", 1, 10);
		func_106("revolver_ammo", 1, 10, 2);
		func_95("samopal_ammo", 1, 13);
		func_65();
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool = true;
		var_6_bool = !actor; //@nz
		if(var_6_bool != 1) {
			bool var_7_bool;
			func_126(var_7_bool);
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


void func_65(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_106(string var_15_string, int var_16_int, int var_17_int, int var_18_int)
{
	int var_21_int; bool var_22_bool;
	int var_24_int;
	var_16_int = var_24_int;
	int var_25_int;
	var_17_int = var_25_int;
	bool var_23_bool;
	func_121(var_23_bool, var_24_int, var_25_int);
	if(var_23_bool != 0) {
		@irand(var_21_int, var_18_int);
		@AddItem(var_22_bool, var_15_string, 0, (var_21_int + 1));
	}
}


void func_121(bool var_6_bool, int var_7_int, int var_8_int)
{
	int var_10_int;
	@irand(var_10_int, var_8_int);
	var_6_bool = var_10_int < var_7_int;
}


void func_126(bool var_7_bool)
{
	int var_9_int;
	@GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
}


void func_95(string var_1_string, int var_2_int, int var_3_int)
{
	bool var_5_bool;
	int var_7_int;
	var_2_int = var_7_int;
	int var_8_int;
	var_3_int = var_8_int;
	bool var_6_bool;
	func_121(var_6_bool, var_7_int, var_8_int);
	if(var_6_bool != 0)
		@AddItem(var_5_bool, var_1_string, 0);
}


