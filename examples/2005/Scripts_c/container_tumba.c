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
			func_337("alpha_pills", 1, 2, 3);
			func_326("tvirin", 1, 20);
			func_326("lemon", 1, 10);
			func_326("meradorm", 1, 25);
			func_326("syringe", 1, 20);
			func_337("kerosene", 1, 3, 10);
			func_337("hook", 1, 15, 3);
			func_337("needle", 1, 5, 2);
			func_337("Money", 1, 2, 5);
			int var_61_int;
			func_363(var_61_int);
			var_61_int = var_6_int;
			if(var_6_int >= 4) {
				func_326("neomicin", 1, 15);
				func_326("glove_disp", 1, 30);
			}
			if(var_6_int >= 5) {
				func_326("novocaine", 1, 20);
				func_337("beta_pills", 1, 4, 2);
				func_326("Scalpel", 1, 45);
			}
			if(var_6_int >= 7) {
				func_326("packet", 1, 25);
				func_326("monomicin", 1, 25);
				func_326("morfin", 1, 25);
				func_337("gamma_pills", 1, 8, 2);
			}
			if(var_6_int >= 10) {
				func_326("feromicin", 1, 35);
				func_326("delta_pills", 1, 16);
				func_326("etorfin", 1, 40);
			}
		} else {
			int var_113_int;
			func_363(var_113_int);
			var_113_int = var_7_int;
			func_326("bandage", 1, 50);
			func_326("tourniquet", 1, 50);
			func_337("alpha_pills", 1, 4, 3);
			if(var_7_int <= 7)
				func_326("packet", 1, 50);
			else
				func_326("packet", 1, 20);
			func_337("needle", 1, 15, 2);
			func_326("hook", 1, 5);
			func_326("flower", 1, 10);
			func_326("syringe", 1, 30);
			func_326("watch", 1, 30);
			func_326("razor", 1, 30);
			func_326("beads", 1, 20);
			func_326("bracelet", 1, 20);
			func_326("ear_ring", 1, 20);
			func_326("gold_ring", 1, 50);
			func_326("silver_ring", 1, 30);
			func_326("glove", 1, 80);
			func_337("Money", 1, 2, 3);
		}
		func_287();
	
	}
	EMIT "Stack[-4] = 0";

	void OnUse(object actor)
	{
		bool var_6_bool; int var_7_int; object var_8_object;
		bool var_9_bool = true;
		var_10_bool = !actor; //@nz
		if(var_10_bool != 1) {
			bool var_11_bool;
			func_357(var_11_bool);
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


void func_352(bool var_19_bool, int var_20_int, int var_21_int)
{
	int var_23_int;
	@irand(var_23_int, var_21_int);
	var_19_bool = var_23_int < var_20_int;
}


void func_357(bool var_11_bool)
{
	int var_13_int;
	@GetVariable("nouse_container", var_13_int);
	var_11_bool = !var_13_int;
}


void func_326(string var_27_string, int var_28_int, int var_29_int)
{
	bool var_31_bool;
	int var_33_int;
	var_28_int = var_33_int;
	int var_34_int;
	var_29_int = var_34_int;
	bool var_32_bool;
	func_352(var_32_bool, var_33_int, var_34_int);
	if(var_32_bool != 0)
		@AddItem(var_31_bool, var_27_string, 0);
}


void func_363(int var_61_int)
{
	float var_63_float;
	@GetGameTime(var_63_float);
	var_61_int = 1 + (var_63_float / 24);
}


void func_337(string var_11_string, int var_12_int, int var_13_int, int var_14_int)
{
	int var_17_int; bool var_18_bool;
	int var_20_int;
	var_12_int = var_20_int;
	int var_21_int;
	var_13_int = var_21_int;
	bool var_19_bool;
	func_352(var_19_bool, var_20_int, var_21_int);
	if(var_19_bool != 0) {
		@irand(var_17_int, var_14_int);
		@AddItem(var_18_bool, var_11_string, 0, (var_17_int + 1));
	}
}


void func_287(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


