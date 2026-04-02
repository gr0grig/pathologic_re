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
		bool var_2_bool;
		disable OnUse;
		@IsOverrideActive(var_2_bool);
		if(!var_2_bool) { //@nz
			object var_7_object;
			func_23(var_7_object);
			@ShowWindow("apparatus.xml", false, false, var_7_object);
			enable OnUse;
		}
	}

}


void func_23(object var_7_object)
{
	object var_9_object;
	@self(var_9_object);
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


