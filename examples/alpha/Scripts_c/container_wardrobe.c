maintask task_0
{
	void init(void)
	{
		int var_6_int; int var_7_int;
		@SetVisibility(true);
		object var_4_object;
		@GetScene(var_4_object);
		bool var_5_bool;
		var_4_object->GetProperty("nailed", var_5_bool);
		if(var_5_bool != 0) {
			func_219("Rifle", 1, 150);
			func_219("Revolver", 1, 100);
			func_230("rifle_ammo", 1, 15, 3);
			func_230("revolver_ammo", 1, 15, 6);
			int var_43_int;
			func_256(var_43_int);
			var_43_int = var_6_int;
			if(var_6_int >= 3) {
				func_219("halfboot_repel", 1, 15);
				func_219("boot_repel", 1, 20);
				func_219("drapery", 1, 5);
				func_219("cloak_repel", 1, 15);
				func_219("raincoat_repel", 1, 35);
				func_219("glove_disp", 1, 20);
				func_219("glove", 1, 20);
			}
			if(var_6_int >= 9) {
				func_219("boot_army", 1, 40);
				func_219("glove_army", 1, 50);
				func_219("balahon", 1, 70);
			}
		} else {
			func_219("Rifle", 1, 300);
			func_219("Revolver", 1, 200);
			int var_89_int;
			func_256(var_89_int);
			var_89_int = var_7_int;
			if(var_7_int >= 3) {
				func_219("halfboot_repel", 1, 30);
				func_219("boot_repel", 1, 50);
				func_219("drapery", 1, 10);
				func_219("cloak_repel", 1, 20);
				func_219("raincoat_repel", 1, 40);
				func_219("glove_disp", 1, 30);
				func_219("glove", 1, 30);
			}
			if(!(var_7_int >= 9)) goto Label_190;
			func_219("boot_army", 1, 50);
			func_219("glove_army", 1, 50);
			func_219("balahon", 1, 100);
		}
	Label_190:
		func_195();
	
	}
	EMIT "Stack[-4] = 0";

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool;
		func_250(var_5_bool);
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


void func_256(int var_43_int)
{
	float var_45_float;
	@GetGameTime(var_45_float);
	var_43_int = 1 + (var_45_float / 24);
}


void func_195(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_230(string var_25_string, int var_26_int, int var_27_int, int var_28_int)
{
	int var_31_int; bool var_32_bool;
	int var_34_int;
	var_26_int = var_34_int;
	int var_35_int;
	var_27_int = var_35_int;
	bool var_33_bool;
	func_245(var_33_bool, var_34_int, var_35_int);
	if(var_33_bool != 0) {
		@irand(var_31_int, var_28_int);
		@AddItem(var_32_bool, var_25_string, 0, (var_28_int + 1));
	}
}


void func_245(bool var_16_bool, int var_17_int, int var_18_int)
{
	int var_20_int;
	@irand(var_20_int, var_18_int);
	var_16_bool = var_20_int < var_17_int;
}


void func_250(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


void func_219(string var_11_string, int var_12_int, int var_13_int)
{
	bool var_15_bool;
	int var_17_int;
	var_12_int = var_17_int;
	int var_18_int;
	var_13_int = var_18_int;
	bool var_16_bool;
	func_245(var_16_bool, var_17_int, var_18_int);
	if(var_16_bool != 0)
		@AddItem(var_15_bool, var_11_string, 0);
}


