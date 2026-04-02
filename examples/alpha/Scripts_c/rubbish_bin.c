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
		func_100(var_5_bool);
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


void func_26(void)
{
	bool var_6_bool;
	@RemoveAllItems();
	int var_5_int;
	@irand(var_5_int, 20);
	if(var_5_int > 18) {
		@AddItem(var_6_bool, "watch", 0);
	} else if(var_5_int > 10) {
			@AddItem(var_6_bool, "bottle_empty", 0, 2);
	}
Label_57:
	for(;;) {
		@irand(var_5_int, 20);
		if(var_5_int > 16)
			@AddItem(var_6_bool, "razor", 0, 1);
		@irand(var_5_int, 60);
		if(var_5_int == 0)
			@AddItem(var_6_bool, "gold_ring", 0, 1);

	}
	
	if(!(var_5_int > 3)) goto Label_57;
	@AddItem(var_6_bool, "bottle_empty", 0, 1);
}


void func_100(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


