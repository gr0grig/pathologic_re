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
		func_70(var_5_bool);
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
	if(var_5_int > 15) {
		@AddItem(var_6_bool, "bottle_empty", 0, 2);
	} else if(var_5_int > 3) {
		@AddItem(var_6_bool, "bottle_empty", 0, 1);
	}
	
}


void func_70(bool var_5_bool)
{
	int var_7_int;
	@GetVariable("nouse_container", var_7_int);
	var_5_bool = !var_7_int;
}


