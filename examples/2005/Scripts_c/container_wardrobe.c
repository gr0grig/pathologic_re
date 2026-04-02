maintask task_0
{
	void init(void)
	{
		int var_6_int; int var_7_int;
		@SetVisibility(true);
		@DisableUpdate();
		object var_4_object;
		@GetScene(var_4_object);
		bool var_5_bool;
		var_4_object->GetProperty("nailed", var_5_bool);
		if(var_5_bool != 0) {
			func_200("Rifle", 1, 250);
			func_200("Revolver", 1, 250);
			int var_25_int;
			func_237(var_25_int);
			var_25_int = var_6_int;
			if(var_6_int >= 3) {
				func_200("halfboot_repel", 1, 40);
				func_200("drapery", 1, 30);
				func_200("glove_disp", 1, 40);
			}
			if(var_6_int >= 5) {
				func_200("cloak_repel", 1, 40);
				func_200("glove", 1, 40);
			}
			if(var_6_int >= 6)
				func_200("boot_repel", 1, 70);
			if(var_6_int >= 8)
				func_200("raincoat_repel", 1, 60);
			func_211("Money", 1, 2, 5);
		} else {
			int var_74_int;
			func_237(var_74_int);
			var_74_int = var_7_int;
			if(var_7_int >= 3) {
				func_200("halfboot_repel", 1, 60);
				func_200("drapery", 1, 40);
				func_200("glove_disp", 1, 60);
			}
			if(var_7_int >= 5) {
				func_200("cloak_repel", 1, 60);
				func_200("glove", 1, 60);
			}
			if(var_7_int >= 8)
				func_200("boot_repel", 1, 80);
			if(var_7_int >= 8)
				func_200("raincoat_repel", 1, 80);
			func_211("Money", 1, 2, 3);
		}
		func_161();
	
	}
	EMIT "Stack[-4] = 0";

	void OnUse(object actor)
	{
		bool var_6_bool; int var_7_int; object var_8_object;
		bool var_9_bool = true;
		var_10_bool = !actor; //@nz
		if(var_10_bool != 1) {
			bool var_11_bool;
			func_231(var_11_bool);
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


void func_161(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_226(bool var_16_bool, int var_17_int, int var_18_int)
{
	int var_20_int;
	@irand(var_20_int, var_18_int);
	var_16_bool = var_20_int < var_17_int;
}


void func_231(bool var_11_bool)
{
	int var_13_int;
	@GetVariable("nouse_container", var_13_int);
	var_11_bool = !var_13_int;
}


void func_200(string var_11_string, int var_12_int, int var_13_int)
{
	bool var_15_bool;
	int var_17_int;
	var_12_int = var_17_int;
	int var_18_int;
	var_13_int = var_18_int;
	bool var_16_bool;
	func_226(var_16_bool, var_17_int, var_18_int);
	if(var_16_bool != 0)
		@AddItem(var_15_bool, var_11_string, 0);
}


void func_237(int var_25_int)
{
	float var_27_float;
	@GetGameTime(var_27_float);
	var_25_int = 1 + (var_27_float / 24);
}


void func_211(string var_60_string, int var_61_int, int var_62_int, int var_63_int)
{
	int var_66_int; bool var_67_bool;
	int var_69_int;
	var_61_int = var_69_int;
	int var_70_int;
	var_62_int = var_70_int;
	bool var_68_bool;
	func_226(var_68_bool, var_69_int, var_70_int);
	if(var_68_bool != 0) {
		@irand(var_66_int, var_63_int);
		@AddItem(var_67_bool, var_60_string, 0, (var_66_int + 1));
	}
}


