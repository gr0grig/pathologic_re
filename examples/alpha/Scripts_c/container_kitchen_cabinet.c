maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		object var_2_object;
		@GetScene(var_2_object);
		bool var_3_bool;
		var_2_object->GetProperty("nailed", var_3_bool);
		if(var_3_bool != 0) {
			func_183("Knife", 1, 10);
			func_194("tvirin", 1, 10, 1);
			func_194("lemon", 1, 20, 2);
			func_194("funduk", 1, 40, 1);
			func_194("peanut", 1, 40, 1);
			func_194("walnut", 1, 40, 1);
		} else {
			func_183("Knife", 1, 20);
			func_183("tvirin", 1, 20);
			func_194("lemon", 1, 10, 2);
			func_194("funduk", 1, 50, 2);
			func_194("peanut", 1, 50, 2);
			func_194("walnut", 1, 50, 2);
			func_194("rusk", 1, 10, 2);
			func_183("dried_fish", 1, 50);
			func_183("egg", 1, 40);
			func_183("vegetables", 1, 50);
			func_183("milk", 1, 30);
			func_183("dried_meat", 1, 50);
			func_183("smoked_meat", 1, 50);
			func_183("fresh_fish", 1, 50);
			func_183("fresh_meat", 1, 50);
			func_183("bread", 1, 10);
		}
		func_159();
	
	}
	EMIT "Stack[-2] = 0";

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool;
		func_214(var_5_bool);
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


void func_194(string var_18_string, int var_19_int, int var_20_int, int var_21_int)
{
	int var_24_int; bool var_25_bool;
	int var_27_int;
	var_19_int = var_27_int;
	int var_28_int;
	var_20_int = var_28_int;
	bool var_26_bool;
	func_209(var_26_bool, var_27_int, var_28_int);
	if(var_26_bool != 0) {
		@irand(var_24_int, var_21_int);
		@AddItem(var_25_bool, var_18_string, 0, (var_21_int + 1));
	}
}


void func_209(bool var_12_bool, int var_13_int, int var_14_int)
{
	int var_16_int;
	@irand(var_16_int, var_14_int);
	var_12_bool = var_16_int < var_13_int;
}


void func_214(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


void func_183(string var_7_string, int var_8_int, int var_9_int)
{
	bool var_11_bool;
	int var_13_int;
	var_8_int = var_13_int;
	int var_14_int;
	var_9_int = var_14_int;
	bool var_12_bool;
	func_209(var_12_bool, var_13_int, var_14_int);
	if(var_12_bool != 0)
		@AddItem(var_11_bool, var_7_string, 0);
}


void func_159(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


