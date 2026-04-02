maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		func_68("Knife", 1, 10);
		func_68("Tvirin", 1, 7);
		func_79("Lemon", 1, 5, 2);
		func_68("Funduk", 1, 30);
		func_68("Peanut", 1, 30);
		func_68("Walnut", 1, 30);
		func_44();
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool;
		func_99(var_5_bool);
		if(!var_5_bool) { //@nz
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


void func_99(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


void func_68(string var_1_string, int var_2_int, int var_3_int)
{
	bool var_5_bool;
	int var_7_int;
	var_2_int = var_7_int;
	int var_8_int;
	var_3_int = var_8_int;
	bool var_6_bool;
	func_94(var_6_bool, var_7_int, var_8_int);
	if(var_6_bool != 0)
		@AddItem(var_5_bool, var_1_string, 0);
}


void func_44(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_79(string var_15_string, int var_16_int, int var_17_int, int var_18_int)
{
	int var_21_int; bool var_22_bool;
	int var_24_int;
	var_16_int = var_24_int;
	int var_25_int;
	var_17_int = var_25_int;
	bool var_23_bool;
	func_94(var_23_bool, var_24_int, var_25_int);
	if(var_23_bool != 0) {
		@irand(var_21_int, var_18_int);
		@AddItem(var_22_bool, var_15_string, 0, (var_18_int + 1));
	}
}


void func_94(bool var_6_bool, int var_7_int, int var_8_int)
{
	int var_10_int;
	@irand(var_10_int, var_8_int);
	var_6_bool = var_10_int < var_7_int;
}


