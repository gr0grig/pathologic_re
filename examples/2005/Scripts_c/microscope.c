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
			@ShowWindow("microscope.xml", false);
			enable OnUse;
		}
	}

}


