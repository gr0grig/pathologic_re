maintask task_0
{
	void init(void)
	{
		int var_5_int;
		@SetVisibility(true);
		object var_3_object;
		@GetScene(var_3_object);
		bool var_4_bool;
		var_3_object->GetProperty("nailed", var_4_bool);
		if(var_4_bool != 0) {
			func_277("revolver_ammo", 1, 10);
			func_277("rifle_ammo", 1, 15);
			func_288("alpha_pills", 1, 4, 4);
			func_288("beta_pills", 1, 8, 3);
			func_288("gamma_pills", 1, 12, 2);
			func_277("delta_pills", 1, 15);
			func_277("tvirin", 1, 20);
			func_277("lemon", 1, 10);
			func_277("neomicin", 1, 15);
			func_277("monomicin", 1, 25);
			func_277("feromicin", 1, 35);
			func_277("meradorm", 1, 25);
			func_277("novocaine", 1, 35);
			func_277("morfin", 1, 40);
			func_277("etorfin", 1, 40);
			func_277("syringe", 1, 20);
			func_288("kerosene", 1, 2, 10);
			func_277("lockpick", 1, 15);
			func_277("Scalpel", 1, 25);
			int var_88_int;
			func_314(var_88_int);
			var_88_int = var_5_int;
			if(var_5_int >= 3) {
				func_277("glove_disp", 1, 30);
				func_277("glove", 1, 30);
				func_277("mask", 1, 50);
			}
		} else {
			func_277("bandage", 1, 50);
			func_277("tourniquet", 1, 50);
			func_277("packet", 1, 50);
			func_288("needle", 1, 15, 2);
			func_288("hook", 1, 15, 3);
			func_288("flower", 1, 10, 2);
			func_277("syringe", 1, 30);
			func_277("watch", 1, 30);
			func_277("razor", 1, 30);
			func_277("beads", 1, 20);
			func_277("bracelet", 1, 20);
			func_277("ear_ring", 1, 20);
			func_277("gold_ring", 1, 50);
			func_277("silver_ring", 1, 30);
			func_277("glove", 1, 40);
		}
		func_253();
	
	}
	EMIT "Stack[-3] = 0";

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool;
		func_308(var_5_bool);
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


void func_288(string var_23_string, int var_24_int, int var_25_int, int var_26_int)
{
	int var_29_int; bool var_30_bool;
	int var_32_int;
	var_24_int = var_32_int;
	int var_33_int;
	var_25_int = var_33_int;
	bool var_31_bool;
	func_303(var_31_bool, var_32_int, var_33_int);
	if(var_31_bool != 0) {
		@irand(var_29_int, var_26_int);
		@AddItem(var_30_bool, var_23_string, 0, (var_26_int + 1));
	}
}


void func_303(bool var_14_bool, int var_15_int, int var_16_int)
{
	int var_18_int;
	@irand(var_18_int, var_16_int);
	var_14_bool = var_18_int < var_15_int;
}


void func_308(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


void func_277(string var_9_string, int var_10_int, int var_11_int)
{
	bool var_13_bool;
	int var_15_int;
	var_10_int = var_15_int;
	int var_16_int;
	var_11_int = var_16_int;
	bool var_14_bool;
	func_303(var_14_bool, var_15_int, var_16_int);
	if(var_14_bool != 0)
		@AddItem(var_13_bool, var_9_string, 0);
}


void func_314(int var_88_int)
{
	float var_90_float;
	@GetGameTime(var_90_float);
	var_88_int = 1 + (var_90_float / 24);
}


void func_253(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


