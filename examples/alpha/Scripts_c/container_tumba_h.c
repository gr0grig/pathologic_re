maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		func_189("revolver_ammo", 1, 15, 2);
		func_189("rifle_ammo", 1, 20, 2);
		func_189("alpha_pills", 1, 3, 4);
		func_189("beta_pills", 1, 6, 3);
		func_189("gamma_pills", 1, 8, 2);
		func_178("delta_pills", 1, 12);
		func_178("tvirin", 1, 12);
		func_189("lemon", 1, 10, 2);
		func_178("powder", 1, 500);
		func_178("neomicin", 1, 10);
		func_178("monomicin", 1, 20);
		func_178("feromicin", 1, 30);
		func_178("meradorm", 1, 20);
		func_178("novocaine", 1, 10);
		func_178("morfin", 1, 20);
		func_178("etorfin", 1, 30);
		func_178("syringe", 1, 20);
		func_189("kerosene", 2, 5, 10);
		func_178("lockpick", 1, 20);
		int var_85_int;
		func_215(var_85_int);
		int var_1_int;
		var_85_int = var_1_int;
		if(var_1_int >= 3) {
			func_178("glove_disp", 1, 20);
			func_178("glove", 1, 20);
			func_178("mask", 1, 40);
		}
		func_154();
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool;
		func_209(var_5_bool);
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


void func_204(bool var_11_bool, int var_12_int, int var_13_int)
{
	int var_15_int;
	@irand(var_15_int, var_13_int);
	var_11_bool = var_15_int < var_12_int;
}


void func_209(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


void func_178(string var_35_string, int var_36_int, int var_37_int)
{
	bool var_39_bool;
	int var_41_int;
	var_36_int = var_41_int;
	int var_42_int;
	var_37_int = var_42_int;
	bool var_40_bool;
	func_204(var_40_bool, var_41_int, var_42_int);
	if(var_40_bool != 0)
		@AddItem(var_39_bool, var_35_string, 0);
}


void func_215(int var_85_int)
{
	float var_87_float;
	@GetGameTime(var_87_float);
	var_85_int = 1 + (var_87_float / 24);
}


void func_154(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_189(string var_3_string, int var_4_int, int var_5_int, int var_6_int)
{
	int var_9_int; bool var_10_bool;
	int var_12_int;
	var_4_int = var_12_int;
	int var_13_int;
	var_5_int = var_13_int;
	bool var_11_bool;
	func_204(var_11_bool, var_12_int, var_13_int);
	if(var_11_bool != 0) {
		@irand(var_9_int, var_6_int);
		@AddItem(var_10_bool, var_3_string, 0, (var_6_int + 1));
	}
}


