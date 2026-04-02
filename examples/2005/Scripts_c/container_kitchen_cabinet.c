maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		@DisableUpdate();
		object var_2_object;
		@GetScene(var_2_object);
		bool var_3_bool;
		var_2_object->GetProperty("nailed", var_3_bool);
		if(var_3_bool != 0) {
			func_210("Knife", 1, 30);
			func_210("tvirin", 1, 10);
			func_221("lemon", 1, 20, 2);
			func_210("funduk", 1, 40);
			func_210("peanut", 1, 40);
			func_210("walnut", 1, 40);
			func_221("Money", 1, 2, 5);
		} else {
			func_210("Knife", 1, 30);
			func_210("tvirin", 1, 20);
			func_221("lemon", 1, 10, 2);
			func_221("funduk", 1, 50, 2);
			func_221("peanut", 1, 50, 2);
			func_221("walnut", 1, 50, 2);
			func_221("rusk", 1, 10, 2);
			func_210("dried_fish", 1, 50);
			func_210("egg", 1, 40);
			func_210("vegetables", 1, 50);
			func_210("milk", 1, 30);
			func_210("dried_meat", 1, 50);
			func_210("smoked_meat", 1, 50);
			func_210("fresh_fish", 1, 50);
			func_210("fresh_meat", 1, 50);
			func_210("bread", 1, 10);
			func_221("Money", 1, 2, 3);
		}
		func_171();
	
	}
	EMIT "Stack[-2] = 0";

	void OnUse(object actor)
	{
		bool var_6_bool; int var_7_int; object var_8_object;
		bool var_9_bool = true;
		var_10_bool = !actor; //@nz
		if(var_10_bool != 1) {
			bool var_11_bool;
			func_241(var_11_bool);
			var_15_bool = !var_11_bool; //@nz
			if(var_15_bool != 1)
				var_9_bool = false;
		}
		if(var_9_bool != 0) {
		}
		bool var_5_bool;
		actor->IsOnGround(var_5_bool);
		if(var_5_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_6_bool);
			if(!var_6_bool) { //@nz
				@GetItemCount(var_7_int);
				if(var_7_int != 0) {
					@GetScene(var_8_object);
					@BroadcastSteal(actor, var_8_object);
					var_8_object = null;
				}
				@Barter(actor);
			}
			enable OnUse;
		}
	}

}


void func_171(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_236(bool var_12_bool, int var_13_int, int var_14_int)
{
	int var_16_int;
	@irand(var_16_int, var_14_int);
	var_12_bool = var_16_int < var_13_int;
}


void func_241(bool var_11_bool)
{
	int var_13_int;
	@GetVariable("nouse_container", var_13_int);
	var_11_bool = !var_13_int;
}


void func_210(string var_7_string, int var_8_int, int var_9_int)
{
	bool var_11_bool;
	int var_13_int;
	var_8_int = var_13_int;
	int var_14_int;
	var_9_int = var_14_int;
	bool var_12_bool;
	func_236(var_12_bool, var_13_int, var_14_int);
	if(var_12_bool != 0)
		@AddItem(var_11_bool, var_7_string, 0);
}


void func_221(string var_21_string, int var_22_int, int var_23_int, int var_24_int)
{
	int var_27_int; bool var_28_bool;
	int var_30_int;
	var_22_int = var_30_int;
	int var_31_int;
	var_23_int = var_31_int;
	bool var_29_bool;
	func_236(var_29_bool, var_30_int, var_31_int);
	if(var_29_bool != 0) {
		@irand(var_27_int, var_24_int);
		@AddItem(var_28_bool, var_21_string, 0, (var_27_int + 1));
	}
}


