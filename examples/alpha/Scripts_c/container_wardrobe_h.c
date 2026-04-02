maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		func_128("Rifle", 1, 200);
		func_128("Revolver", 1, 150);
		func_139("rifle_ammo", 1, 20, 3);
		func_139("revolver_ammo", 1, 20, 6);
		int var_35_int;
		func_165(var_35_int);
		int var_1_int;
		var_35_int = var_1_int;
		if(var_1_int >= 3) {
			func_128("halfboot_repel", 1, 15);
			func_128("boot_repel", 1, 20);
			func_128("drapery", 1, 5);
			func_128("cloak_repel", 1, 15);
			func_128("raincoat_repel", 1, 35);
			func_128("glove_disp", 1, 20);
			func_128("glove", 1, 20);
		}
		if(var_1_int >= 9) {
			func_128("boot_army", 1, 40);
			func_128("glove_army", 1, 50);
			func_128("balahon", 1, 80);
		}
		func_104();
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool;
		func_159(var_5_bool);
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


void func_128(string var_3_string, int var_4_int, int var_5_int)
{
	bool var_7_bool;
	int var_9_int;
	var_4_int = var_9_int;
	int var_10_int;
	var_5_int = var_10_int;
	bool var_8_bool;
	func_154(var_8_bool, var_9_int, var_10_int);
	if(var_8_bool != 0)
		@AddItem(var_7_bool, var_3_string, 0);
}


void func_165(int var_35_int)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_35_int = 1 + (var_37_float / 24);
}


void func_104(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_139(string var_17_string, int var_18_int, int var_19_int, int var_20_int)
{
	int var_23_int; bool var_24_bool;
	int var_26_int;
	var_18_int = var_26_int;
	int var_27_int;
	var_19_int = var_27_int;
	bool var_25_bool;
	func_154(var_25_bool, var_26_int, var_27_int);
	if(var_25_bool != 0) {
		@irand(var_23_int, var_20_int);
		@AddItem(var_24_bool, var_17_string, 0, (var_20_int + 1));
	}
}


void func_154(bool var_8_bool, int var_9_int, int var_10_int)
{
	int var_12_int;
	@irand(var_12_int, var_10_int);
	var_8_bool = var_12_int < var_9_int;
}


void func_159(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


