maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor)
	{
		int var_3_int;
		func_36(var_3_int);
		if(var_3_int != 1) {
		}
		disable OnUse;
		bool var_2_bool;
		@IsOverrideActive(var_2_bool);
		if(!var_2_bool) { //@nz
			object var_13_object;
			func_30(var_13_object);
			@ShowWindow("apparatus.xml", false, false, var_13_object);
			enable OnUse;
		}
	}

}


void func_36(int var_3_int)
{
	int var_5_int;
	@GetVariable("branch", var_5_int);
	var_5_int = var_3_int;
}


void func_30(object var_13_object)
{
	object var_15_object;
	@self(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


