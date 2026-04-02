maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		func_26();
		float var_1_float;
		@rand(var_1_float, 13);
		@GameSleep(var_1_float + 1);
	
		for(;;) {
			func_26();
			@rand(var_1_float, 2);
			@GameSleep(var_1_float + 12);
		}
	}
	EMIT "Return(); Pop(2)";

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool;
		func_111(var_5_bool);
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


void func_106(bool var_11_bool, int var_12_int, int var_13_int)
{
	int var_15_int;
	@irand(var_15_int, var_13_int);
	var_11_bool = var_15_int < var_12_int;
}


void func_111(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


void func_80(string var_19_string, int var_20_int, int var_21_int)
{
	bool var_23_bool;
	int var_25_int;
	var_20_int = var_25_int;
	int var_26_int;
	var_21_int = var_26_int;
	bool var_24_bool;
	func_106(var_24_bool, var_25_int, var_26_int);
	if(var_24_bool != 0)
		@AddItem(var_23_bool, var_19_string, 0);
}


void func_26(void)
{
	@RemoveAllItems();
	func_91("bottle_empty", 1, 2, 1);
	func_80("watch", 1, 20);
	func_80("razor", 1, 12);
	func_80("needle", 1, 12);
	func_80("gold_ring", 1, 60);
}


void func_91(string var_3_string, int var_4_int, int var_5_int, int var_6_int)
{
	int var_9_int; bool var_10_bool;
	int var_12_int;
	var_4_int = var_12_int;
	int var_13_int;
	var_5_int = var_13_int;
	bool var_11_bool;
	func_106(var_11_bool, var_12_int, var_13_int);
	if(var_11_bool != 0) {
		@irand(var_9_int, var_6_int);
		@AddItem(var_10_bool, var_3_string, 0, (var_9_int + 1));
	}
}


