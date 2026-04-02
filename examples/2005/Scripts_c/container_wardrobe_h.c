maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		@DisableUpdate();
		func_125("Rifle", 1, 250);
		func_136("rifle_ammo", 1, 20, 2);
		func_136("revolver_ammo", 1, 20, 2);
		int var_32_int;
		func_162(var_32_int);
		int var_1_int;
		var_32_int = var_1_int;
		if(var_1_int >= 3) {
			func_125("halfboot_repel", 1, 30);
			func_125("drapery", 1, 40);
			func_125("glove_disp", 1, 40);
		}
		if(var_1_int >= 5) {
			func_125("cloak_repel", 1, 70);
			func_125("glove", 1, 70);
		}
		if(var_1_int >= 6)
			func_125("boot_repel", 1, 40);
		if(var_1_int >= 8)
			func_125("raincoat_repel", 1, 80);
		func_136("needle", 1, 5, 1);
		func_95();
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool = true;
		var_6_bool = !actor; //@nz
		if(var_6_bool != 1) {
			bool var_7_bool;
			func_156(var_7_bool);
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


void func_162(int var_32_int)
{
	float var_34_float;
	@GetGameTime(var_34_float);
	var_32_int = 1 + (var_34_float / 24);
}


void func_136(string var_14_string, int var_15_int, int var_16_int, int var_17_int)
{
	int var_20_int; bool var_21_bool;
	int var_23_int;
	var_15_int = var_23_int;
	int var_24_int;
	var_16_int = var_24_int;
	bool var_22_bool;
	func_151(var_22_bool, var_23_int, var_24_int);
	if(var_22_bool != 0) {
		@irand(var_20_int, var_17_int);
		@AddItem(var_21_bool, var_14_string, 0, (var_20_int + 1));
	}
}


void func_151(bool var_8_bool, int var_9_int, int var_10_int)
{
	int var_12_int;
	@irand(var_12_int, var_10_int);
	var_8_bool = var_12_int < var_9_int;
}


void func_156(bool var_7_bool)
{
	int var_9_int;
	@GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
}


void func_125(string var_3_string, int var_4_int, int var_5_int)
{
	bool var_7_bool;
	int var_9_int;
	var_4_int = var_9_int;
	int var_10_int;
	var_5_int = var_10_int;
	bool var_8_bool;
	func_151(var_8_bool, var_9_int, var_10_int);
	if(var_8_bool != 0)
		@AddItem(var_7_bool, var_3_string, 0);
}


void func_95(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


