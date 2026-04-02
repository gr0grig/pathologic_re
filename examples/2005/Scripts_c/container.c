maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		func_7();
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool = true;
		var_6_bool = !actor; //@nz
		if(var_6_bool != 1) {
			bool var_7_bool;
			func_37(var_7_bool);
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


void func_37(bool var_7_bool)
{
	int var_9_int;
	@GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
}


void func_7(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


